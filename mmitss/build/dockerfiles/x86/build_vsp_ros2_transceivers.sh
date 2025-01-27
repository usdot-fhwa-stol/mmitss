#!/bin/bash
source /opt/ros/foxy/setup.bash
cd /mmitss/src/common/MsgTransceiver/CarmaDecoderRos2
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build
cd /mmitss/src/common/MsgTransceiver/CarmaEncoderRos2
source /root/dev_ws/src/carma-msgs/install/setup.bash && colcon build
