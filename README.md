Inertiallabs ROS2 Driver
===

# Background
After consulting the saleperson,  I got there is no official ROS2 driver for inertiallabs ins-d.  

This is NON-OFFICIAL Inertiallabs ROS2 Driver, modified from official ROS1 driver.  

# Main modification
1. change catkin to ament_cmake
2. change messages names and keys to obey the rules of ROS2
3. change some dependencies which are not supported by ROS2
4. change some include directories due to the file organization of ROS2
5. re-write publisher node and some pointer

# Quick Start
You can use the bash shells suivant to install in your robot system.
```bash
# cd to your src
cd /path/to/your/workspace/src
# clone the repo 
git@github.com:SWJTUDEAN/inertiallabs_ins-d_ros2.git
# cd to your workspace
cd ..
# build
colcon build
```
