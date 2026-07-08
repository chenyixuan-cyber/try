from setuptools import find_packages
from setuptools import setup

setup(
    name='sentry_msgs',
    version='0.0.2',
    packages=find_packages(
        include=('sentry_msgs', 'sentry_msgs.*')),
)
