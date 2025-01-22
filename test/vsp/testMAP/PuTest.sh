#!/bin/bash

source /opt/ros/foxy/setup.bash
source ../../../other/install/setup.bash

cd ../../../../carma-msgs
source /home/yilin/SIP_project/Leidos/carma-msgs/install/setup.bash

cd ../mmitss/test/vsp/testMAP

python3 -m unittest test_MAP.py
