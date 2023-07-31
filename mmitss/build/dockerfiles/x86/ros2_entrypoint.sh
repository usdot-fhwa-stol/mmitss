#!/bin/bash
set -e
source "/opt/ros/foxy/setup.bash"
source "/root/dev_ws/install/setup.bash"
exec "$@"
/mmitss/M_CarmaMsgDecoder &
/mmitss/M_CarmaMsgEncoder &