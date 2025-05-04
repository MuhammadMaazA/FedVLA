from setuptools import find_packages
from setuptools import setup

setup(
    name='warehouse_ros_mongo',
    version='2.0.3',
    packages=find_packages(
        include=('warehouse_ros_mongo', 'warehouse_ros_mongo.*')),
)
