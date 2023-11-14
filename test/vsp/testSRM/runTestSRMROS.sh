#!/bin/bash

source /opt/ros/foxy/setup.bash
source ~/Documents/cda-mmitss/other/install/setup.bash

../../../mmitss/src/common/MsgTransceiver/CarmaDecoderRos2/src/M_CarmaMsgDecoder & sleep 2; pytest test_SRMROS.py 
