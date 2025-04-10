#!/bin/bash
set -e
cd /mmitss/tmp/src/common/MsgTransceiver/CarmaDecoderRos2
# Remove old build, install, and log directories
[ -d "build" ] && rm -rf "build"
[ -d "install" ] && rm -rf "install"
[ -d "log" ] && rm -rf "log"
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build --cmake-args -DCMAKE_BUILD_TYPE=Debug
cp /mmitss/tmp/src/common/MsgTransceiver/CarmaDecoderRos2/build/carma-ros2-decoder/M_CarmaMsgDecoder /mmitss/
cd /mmitss/tmp/src/common/MsgTransceiver/CarmaEncoderRos2
# Remove old build, install, and log directories
[ -d "build" ] && rm -rf "build"
[ -d "install" ] && rm -rf "install"
[ -d "log" ] && rm -rf "log"
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build --cmake-args -DCMAKE_BUILD_TYPE=Debug
cp /mmitss/tmp/src/common/MsgTransceiver/CarmaEncoderRos2/build/carma-ros2-encoder/M_CarmaMsgEncoder /mmitss/

