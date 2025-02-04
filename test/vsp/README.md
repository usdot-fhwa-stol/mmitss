# CARMA-MMITSS TRANSCEIVER VEHICLE SIDE PROCESSOR TESTING

Welcome to the vehicle side processor(VSP) CARMA-MMITSS testing. The unit testing of the different sub-components of the CARMA-MMITSS VSP system will be performed in an semi-automated fashion by means of testing scripts. 

### Requirements and Pre Steps for environment setup
* usdot-fhwa-stol/mmitss repo cloned
* docker installed
* docker image build (referenced dockerfile: ../../mmitss/build/dockerfiles/x86/Dockerfile.carma_vsp_ros2), i.e. built image name: mmitssuarizona/mmitss-carma-vsp-ros2-x86:CDA1.0

### Build Testing container ()
This will build a testing docker container for testing.The configuration is placed under the directory mmitss_cfg4test/nojournal/bin/mmitss-phase3-master-config.json.
    ```bash
   cd vsp
   ./launch-container-4test.sh
   ```


## Testing hostBSM receiving from ROS2:
In order to test the receiving of the hostBSM a bash script in the testBsm folder is stored. To test the hostBSM receiving, execute the runTest.sh script in the testBSM folder.
> [!NOTE]
> The testing need to be executed in testing container, the script to open testing container is showed below:
    ```bash
    docker container exec -it cda-test-vsp /bin/bash
    ```
> [!IMPORTANT]
> Make sure to bring up two terminals to enter the testing container.

In first container termial, compile and build CarmaDecoderRos2 executable, the source code is under the directory: /mmitss/tmp/src/common/MsgTransceiver/CarmaDecoderRos2. Run the following command:
   ```bash
   source /root/dev_ws/src/carma-msgs/install/setup.bash
   cd src
   ./M_CarmaDecoderRos2
   ```

In the second container terminal, find the testing folder placed under the directory: /mmitss/test/vsp. Then run the following command to finish the testing.

    ```bash
    cd testBSM
    ./runTest.sh
    ```
Expected output should be:
============================= test session starts ==============================
platform linux -- Python 3.8.10, pytest-4.6.9, py-1.8.1, pluggy-0.13.0
rootdir: /mmitss/test/vsp/testBsm
plugins: ament-lint-0.9.8, ament-xmllint-0.9.8, launch-testing-ros-0.11.7, launch-testing-0.10.10, ament-flake8-0.9.8, ament-copyright-0.9.8, ament-pep257-0.9.8, colcon-core-0.18.4, cov-2.8.1
collected 2 items                                                              

test_hostBsm.py ..                                                       [100%]

=========================== 2 passed in 0.89 seconds ===========================


## Testing MAP receiving from ROS2:
In order to test the receiving of the MAP a bash script in the testMAP folder is stored. To test the MAP receiving, execute the runTest.sh script in the testMAP folder. The testing process is similar as host BSM testing

    ```bash
    cd testBSM
    ./runTest.sh
    ```

## Testing SRM broadcasting to ROS2:
In order to test the generation and broadcasting of the SRM message, two bash script in the testSRM folder are going to be stored. However, this testing requires the execution of the priority request generator (PRG) in the background. So before runing the test scripts, run the PRG executable in one terminal:

    ```bash
    cd testSRM
    ../../../mmitss/src/vsp/priority-request-generator/M_PriorityRequestGenerator
    ```

In another terminal, run the test scripts
    
    ```bash
    cd testSRM
    ./runTestSRM.sh
    ./runTestSRMROS.sh
    ```
    
