from setuptools import find_packages
from setuptools import setup

setup(
    name='inertiallabs_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('inertiallabs_msgs', 'inertiallabs_msgs.*')),
)
