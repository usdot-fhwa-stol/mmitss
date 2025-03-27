#!/bin/bash
set -e

source /opt/ros/foxy/setup.bash
cd /mmitss/tmp/src/common/MsgTransceiver/CarmaDecoderRos2
[ -d "build" ] && rm -rf "build"
[ -d "install" ] && rm -rf "install"
[ -d "log" ] && rm -rf "log"
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build
mv /mmitss/tmp/src/common/MsgTransceiver/CarmaDecoderRos2/build/carma-ros2-decoder/M_CarmaMsgDecoder /mmitss/
# [ -d "build" ] && rm -rf "build"
# [ -d "install" ] && rm -rf "install"
# [ -d "log" ] && rm -rf "log"
cd /mmitss/tmp/src/common/MsgTransceiver/CarmaEncoderRos2
[ -d "build" ] && rm -rf "build"
[ -d "install" ] && rm -rf "install"
[ -d "log" ] && rm -rf "log"
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build
mv /mmitss/tmp/src/common/MsgTransceiver/CarmaEncoderRos2/build/carma-ros2-encoder/M_CarmaMsgEncoder /mmitss/
# [ -d "build" ] && rm -rf "build"
# [ -d "install" ] && rm -rf "install"
# [ -d "log" ] && rm -rf "log"

