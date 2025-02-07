#!/bin/bash

source /opt/ros/foxy/setup.bash
source /root/dev_ws/src/carma_msgs/install/setup.bash

chmod 777 test_hostBsm.py && pytest-3 test_MAP.py
