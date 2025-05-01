import os
import time
import tempfile
import pybullet as p
import pybullet_data

# === 1) Connect & Scene Setup ===
p.connect(p.GUI)
p.setGravity(0, 0, -9.81)
p.setAdditionalSearchPath(pybullet_data.getDataPath())  # plane, cube, etc.
p.loadURDF("plane.urdf")

# === 2) Paths ===
PROJECT_ROOT = os.path.dirname(os.path.dirname(__file__))
MODELS_DIR   = os.path.join(PROJECT_ROOT, "models")
MYCOBOT_DIR  = os.path.join(MODELS_DIR, "mycobot_280_m5")
orig_urdf    = os.path.join(MYCOBOT_DIR, "mycobot_280_m5_final.urdf")

# === Add mesh search path ===
# This makes meshes/G_base.stl resolve under MYCOBOT_DIR
p.setAdditionalSearchPath(MYCOBOT_DIR)

# === 3) Read & patch the URDF ===
with open(orig_urdf, 'r') as f:
    content = f.read()
patched = content.replace('meshes/', '')  # strip that prefix

# write it to a temp file
import tempfile
tmp_fd, tmp_path = tempfile.mkstemp(suffix=".urdf", text=True)
with os.fdopen(tmp_fd, 'w') as f:
    f.write(patched)

print(f"Loading patched URDF from: {tmp_path}")

# === 4) Load the patched URDF ===
robot_id = p.loadURDF(tmp_path, basePosition=[0,0,0], useFixedBase=True)


# === 5) Set your end-effector link index ===
END_LINK = 6  # joint6_flange

# === 6) Spawn a small cube to pick up ===
cube_start = [0.3, 0.0, 0.02]
p.loadURDF("cube_small.urdf", cube_start, globalScaling=1.0)

# === 7) IK helper ===
def move_ee(target_pos, target_ori=[0,0,0,1], steps=100):
    joint_angles = p.calculateInverseKinematics(robot_id, END_LINK,
                                                target_pos, target_ori)
    for j, ang in enumerate(joint_angles):
        p.setJointMotorControl2(robot_id, j,
                                p.POSITION_CONTROL, ang, force=200)
    for _ in range(steps):
        p.stepSimulation()
        time.sleep(1./240.)

# === 8) Pick-and-place ===
approach = cube_start.copy(); approach[2] += 0.2
move_ee(approach)
pick = cube_start.copy(); pick[2] += 0.02
move_ee(pick)
move_ee(approach)
place = [0.0, -0.3, 0.2]
move_ee(place)
place_down = place.copy(); place_down[2] = 0.02
move_ee(place_down)
move_ee(place)  # back off

print("Pick-and-place complete!")

# Keep GUI alive
while True:
    p.stepSimulation()
    time.sleep(1./240.)
