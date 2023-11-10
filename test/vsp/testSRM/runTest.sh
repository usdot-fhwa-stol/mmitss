#!/bin/bash

source /opt/ros/foxy/setup.bash
source ~/Documents/cda-mmitss/other/install/setup.bash

../../../mmitss/src/vsp/priority-request-generator/M_PriorityRequestGenerator &  pytest -k test_countSRM test_SRM.py

killall -9

../../../mmitss/src/vsp/priority-request-generator/M_PriorityRequestGenerator &  pytest -k test_countNoSRM test_SRM.py

killall -9


../../../mmitss/src/vsp/priority-request-generator/M_PriorityRequestGenerator & ../../../mmitss/src/common/MsgTransceiver/CarmaEncoderRos2/src/M_CarmaMsgEncoder & pytest -k test_countSRMROS2 test_SRM.py