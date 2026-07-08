from setuptools import find_packages
from setuptools import setup

setup(
    name='rm_referee_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rm_referee_msgs', 'rm_referee_msgs.*')),
)
