#!/usr/bin/env python3
import os
import argparse
import numpy as np
import pybullet as p
import pybullet_data

# ── CONFIG ────────────────────────────────────────────────────────────────
BASE_DIR      = os.path.dirname(__file__)
PROJECT_DIR   = os.path.abspath(os.path.join(BASE_DIR, ".."))
MODEL_DIR     = os.path.join(PROJECT_DIR, "models", "mycobot_280_m5")
URDF_FILE     = "mycobot_280m5_with_gripper_parallel.urdf"
EE_LINK_NAME  = "joint6output_to_joint6"
GRIP_JOINTS   = ["left_gripper_joint", "right_gripper_joint"]
CUBE_URDF     = "cube_small.urdf"
DATA_DIR      = os.path.join(PROJECT_DIR, "data")
NOISE_STD_Q   = 0.001
ENC_RES       = 0.0005
FRIC_VAR      = 0.1

# ── HELPERS ────────────────────────────────────────────────────────────────
def name_to_index(robot_id):
    m = {}
    for i in range(p.getNumJoints(robot_id)):
        m[p.getJointInfo(robot_id, i)[1].decode()] = i
    return m

def randomize_dynamics(robot_id, mapping):
    for name, idx in mapping.items():
        if p.getJointInfo(robot_id, idx)[2] == p.JOINT_REVOLUTE:
            base_f = p.getDynamicsInfo(robot_id, idx, -1)[1] or 1.0
            p.changeDynamics(robot_id, idx,
                             lateralFriction=base_f + np.random.uniform(-FRIC_VAR, +FRIC_VAR))

def record_step(robot_id, ee, mapping, cube, ik_joints, prev_q, buf, sol):
    qs, qds = [], []
    for j in ik_joints:
        q, qd, *_ = p.getJointState(robot_id, j)
        nq = q + np.random.normal(0, NOISE_STD_Q)
        qq = round(nq/ENC_RES)*ENC_RES
        qs.append(qq); qds.append(qd)
    ee_pos, ee_ori     = p.getLinkState(robot_id, ee)[:2]
    cube_pos, cube_ori = p.getBasePositionAndOrientation(cube)
    state  = np.hstack([qs, qds, ee_pos, ee_ori, cube_pos, cube_ori])
    action = np.array(sol)
    buf.append(np.hstack([state, action - prev_q]))
    return np.array(qs)

# ── PICK & STACK ────────────────────────────────────────────────────────────
def pick_and_place(robot_id, ee, mapping, cube, drop_xy):
    ik_joints = [
        idx for name, idx in mapping.items()
        if name not in GRIP_JOINTS and p.getJointInfo(robot_id, idx)[2] == p.JOINT_REVOLUTE
    ]
    randomize_dynamics(robot_id, mapping)
    base, _  = p.getBasePositionAndOrientation(cube)
    ee_ori   = p.getQuaternionFromEuler([0, np.pi, 0])
    traj, prev_q = [], np.zeros(len(ik_joints))

    # 1) Move above
    above = [base[0], base[1], base[2] + 0.15]
    for _ in range(50):
        sol = p.calculateInverseKinematics(robot_id, ee, above, ee_ori)
        for i, j in enumerate(ik_joints):
            p.setJointMotorControl2(robot_id, j, p.POSITION_CONTROL,
                                   targetPosition=sol[i], force=200)
        p.stepSimulation()

    # 2) Lower & grasp (record)
    for _ in range(30):
        tgt = [base[0], base[1], base[2] + 0.02]
        sol = p.calculateInverseKinematics(robot_id, ee, tgt, ee_ori)
        for i, j in enumerate(ik_joints):
            p.setJointMotorControl2(robot_id, j, p.POSITION_CONTROL,
                                   targetPosition=sol[i], force=200)
        p.stepSimulation()
        prev_q = record_step(robot_id, ee, mapping, cube, ik_joints, prev_q, traj, sol)

    # 3) Close gripper
    for g in GRIP_JOINTS:
        p.setJointMotorControl2(robot_id, mapping[g],
                               p.POSITION_CONTROL, targetPosition=0.0, force=50)
    for _ in range(20):
        p.stepSimulation()
        prev_q = record_step(robot_id, ee, mapping, cube, ik_joints, prev_q, traj, prev_q)

    # 4–6) Lift, move, release, record…
    # (unchanged)

    return np.stack(traj)

# ── MAIN ────────────────────────────────────────────────────────────────────
def main(episodes, headless):
    os.makedirs(DATA_DIR, exist_ok=True)
    mode = p.DIRECT if headless else p.GUI
    p.connect(mode)
    p.setGravity(0, 0, -9.81)
    p.resetDebugVisualizerCamera(1.2, 45, -30, [0, 0, 0.2])

    # ensure PyBullet can find plane & cube
    p.setAdditionalSearchPath(pybullet_data.getDataPath())
    # and your custom meshes + URDF
    p.setAdditionalSearchPath(MODEL_DIR)

    # load ground plane
    plane_path = os.path.join(pybullet_data.getDataPath(), "plane.urdf")
    p.loadURDF(plane_path)

    # load the robot+gripper
    robot = p.loadURDF(os.path.join(MODEL_DIR, URDF_FILE),
                       [0, 0, 0], useFixedBase=True)
    mapping = name_to_index(robot)
    ee      = mapping[EE_LINK_NAME]

    for ep in range(episodes):
        y    = np.random.uniform(-0.15, +0.15)
        # now cube_small.urdf is found via the pybullet_data path
        cube = p.loadURDF(CUBE_URDF, [0.5, y, 0.05])
        traj = pick_and_place(robot, ee, mapping, cube, [0.3, -0.3])
        np.save(os.path.join(DATA_DIR, f"ep_{ep:04d}.npy"), traj)
        p.removeBody(cube)

    p.disconnect()
    print(f"Saved {episodes} trajectories under {DATA_DIR}")

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--episodes", type=int, default=100)
    parser.add_argument("--headless", action="store_true")
    args = parser.parse_args()
    main(args.episodes, args.headless)
