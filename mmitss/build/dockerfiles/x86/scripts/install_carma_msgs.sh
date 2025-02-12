#! /bin/bash
set -e
# install ros

apt update && apt install locales
locale-gen en_US en_US.UTF-8
update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

apt update && apt install -y curl gnupg2 lsb-release python3-pip
curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key  -o /usr/share/keyrings/ros-archive-keyring.gpg

echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null

apt update
DEBIAN_FRONTEND=noninteractive apt install -y ros-foxy-desktop git python3-rosdep python3-colcon-common-extensions ros-foxy-rmw-cyclonedds-cpp

cd /root/dev_ws/src
git clone https://github.com/ros/ros_tutorials.git -b foxy-devel
cd /root/dev_ws

rosdep init
rosdep update
rosdep install --from-paths src --ignore-src -r -y --rosdistro foxy

# install carma-msg
cd /root/dev_ws/src
git clone https://github.com/usdot-fhwa-stol/carma-msgs.git
cd carma-msgs
source /opt/ros/foxy/setup.bash && colcon build --packages-up-to carma_driver_msgs

