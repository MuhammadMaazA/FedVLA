#!/usr/bin/env python3
import os
import pybullet as p
import pybullet_data

# ── PATHS ─────────────────────────────────────────────────────────────────
SCRIPTS_DIR = os.path.dirname(os.path.abspath(__file__))
PROJ_DIR    = os.path.abspath(os.path.join(SCRIPTS_DIR, ".."))
MODEL_DIR   = os.path.join(PROJ_DIR, "models", "mycobot_280_m5")
URDF_FILE   = "mycobot_280m5_with_gripper_parallel.urdf"

# ── UTILS ─────────────────────────────────────────────────────────────────
def name_to_index(robot_id):
    mapping = {}
    for i in range(p.getNumJoints(robot_id)):
        name = p.getJointInfo(robot_id, i)[1].decode()
        mapping[name] = i
    return mapping

# ── MAIN ──────────────────────────────────────────────────────────────────
if __name__ == "__main__":
    # 1) start GUI
    p.connect(p.GUI)
    p.setGravity(0, 0, -9.81)

    # 2) search paths for plane & your meshes
    p.setAdditionalSearchPath(pybullet_data.getDataPath())
    p.setAdditionalSearchPath(MODEL_DIR)

    # 3) load plane and robot
    plane = os.path.join(pybullet_data.getDataPath(), "plane.urdf")
    p.loadURDF(plane)
    robot = p.loadURDF(os.path.join(MODEL_DIR, URDF_FILE),
                       [0,0,0], useFixedBase=True)

    # 4) create sliders for every revolute joint
    mapping = name_to_index(robot)
    sliders = {}
    for name, idx in mapping.items():
        info = p.getJointInfo(robot, idx)
        jointType = info[2]
        if jointType == p.JOINT_REVOLUTE:
            ll, ul = info[8], info[9]
            sliders[idx] = p.addUserDebugParameter(name, ll, ul, 0.0)

    print("Use the sliders on the left to drive each joint. Ctrl+C to exit.")

    # 5) loop and apply slider values
    try:
        while True:
            for j, slider in sliders.items():
                val = p.readUserDebugParameter(slider)
                p.setJointMotorControl2(robot, j,
                                        p.POSITION_CONTROL,
                                        targetPosition=val,
                                        force=200)
            p.stepSimulation()
    except KeyboardInterrupt:
        pass

    p.disconnect()
