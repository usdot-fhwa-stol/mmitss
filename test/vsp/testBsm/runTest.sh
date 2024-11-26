#!/bin/bash

source /opt/ros/foxy/setup.bash
#source ../../../other/install/setup.bash
source /home/yilin/SIP_project/carma-msgs/install/setup.bash 
source ../../../mmitss/src/common/MsgTransceiver/CarmaDecoderRos2/install/setup.bash

../../../mmitss/src/common/MsgTransceiver/CarmaDecoderRos2/src/M_CarmaMsgDecoder & sleep 2;python3 -m test_hostBsm.py
