from setuptools import find_packages
from setuptools import setup

setup(
    name='navigator_planner',
    version='0.0.0',
    packages=find_packages(
        include=('navigator_planner', 'navigator_planner.*')),
)
