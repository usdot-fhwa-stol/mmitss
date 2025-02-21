#!/bin/bash
set -e
cd /mmitss/tmp/src/common
make clean && make linux

source /opt/ros/foxy/setup.bash
cd /mmitss/tmp/src/common/MsgTransceiver/CarmaDecoderRos2
[ -d "build" ] && rm -rf "build"
[ -d "install" ] && rm -rf "install"
[ -d "log" ] && rm -rf "log"
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build
[ -d "build" ] && rm -rf "build"
[ -d "install" ] && rm -rf "install"
[ -d "log" ] && rm -rf "log"
cd /mmitss/tmp/src/common/MsgTransceiver/CarmaEncoderRos2
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build
