#!/bin/bash
set -e

# Set ROS distribution
export ROS_DISTRO=foxy

# Set up locale
apt update && apt install -y locales
locale-gen en_US en_US.UTF-8
update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

# Install prerequisites
apt update && apt install -y curl python3-pip software-properties-common

# Add universe repository
add-apt-repository universe

# Install ROS 2 APT source package
apt update
export ROS_APT_SOURCE_VERSION=$(curl -s https://api.github.com/repos/ros-infrastructure/ros-apt-source/releases/latest | grep -F "tag_name" | awk -F'"' '{print $4}')
curl -L -o /tmp/ros2-apt-source.deb "https://github.com/ros-infrastructure/ros-apt-source/releases/download/${ROS_APT_SOURCE_VERSION}/ros2-apt-source_${ROS_APT_SOURCE_VERSION}.$(. /etc/os-release && echo $VERSION_CODENAME)_all.deb"
apt install -y /tmp/ros2-apt-source.deb
# Clean the installation deb file
rm /tmp/ros2-apt-source.deb

# Install ROS 2 packages
apt update
DEBIAN_FRONTEND=noninteractive apt install -y ros-${ROS_DISTRO}-desktop git python3-rosdep python3-colcon-common-extensions ros-${ROS_DISTRO}-rmw-cyclonedds-cpp

# Clone and build ros_tutorials
cd /root/dev_ws/src
git clone https://github.com/ros/ros_tutorials.git -b ${ROS_DISTRO}-devel
cd /root/dev_ws

# Initialize rosdep
rosdep init
rosdep update
rosdep install --from-paths src --ignore-src -r -y --rosdistro ${ROS_DISTRO}

# Install carma-msgs
cd /root/dev_ws/src
git clone https://github.com/usdot-fhwa-stol/carma-msgs.git
cd carma-msgs
source /opt/ros/${ROS_DISTRO}/setup.bash && colcon build --packages-up-to carma_driver_msgs
