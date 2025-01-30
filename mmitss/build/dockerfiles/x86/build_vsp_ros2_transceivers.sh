#!/bin/bash
set -e
cd /mmitss/tmp/mmitss/src/common
build clean && build linux

source /opt/ros/foxy/setup.bash
cd /mmitss/tmp/mmitss/src/common/MsgTransceiver/CarmaDecoderRos2
[ -d "build" ] && rm -rf "build"
[ -d "install" ] && rm -rf "install"
[ -d "log" ] && rm -rf "log"
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build
[ -d "build" ] && rm -rf "build"
[ -d "install" ] && rm -rf "install"
[ -d "log" ] && rm -rf "log"
cd /mmitss/tmp/mmitss/src/common/MsgTransceiver/CarmaEncoderRos2
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build
