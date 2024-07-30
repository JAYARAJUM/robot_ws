from setuptools import find_packages
from setuptools import setup

setup(
    name='waiter_tree',
    version='0.0.0',
    packages=find_packages(
        include=('waiter_tree', 'waiter_tree.*')),
)
