import os
import trimesh
from glob import glob

# Adjust this if your script lives elsewhere
BASE_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__),
                                        '..', 'models', 'mycobot_280_m5'))

# Grab ALL .dae files directly under models/mycobot_280_m5
dae_files = glob(os.path.join(BASE_DIR, '*.dae'))
print(f"Found {len(dae_files)} DAE files to convert...")

for dae in dae_files:
    mesh = trimesh.load(dae)
    stl_path = dae[:-4] + '.stl'
    mesh.export(stl_path)
    print(f" -> wrote {os.path.basename(stl_path)}")

print("Conversion complete!")
