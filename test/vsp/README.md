# CARMA-MMITSS TRANSCEIVER VEHICLE SIDE PROCESSOR TESTING

Welcome to the vehicle side processor(VSP) CARMA-MMITSS testing. The unit testing of the different sub-components of the CARMA-MMITSS VSP system will be performed in an semi-automated fashion by means of testing scripts. 

### Requirements and Pre Steps for environment setup
* cda-mmitss repository cloned
* ros2 foxy installed 
* python version=3.8
* external packages: pytest, lark,  catkin, em
* carma-driver-msgs built
* mmitss docker container established 
* required external packages: 
* priority request generator executable (M_PriorityRequestGenerator) built and inside its respective folder (../../../mmitss/src/vsp/priority-request-generator)
* CARMA-MMITSS Encoder executable (M_CarmaMsgEncoder) built and inside its respective folder (../../../mmitss/src/common/MsgTransceiver/CarmaEncoderRos2/src)
* CARMA-MMITSS Decoder executable (M_CarmaMsgDecoder) built and inside its respective folder (../../../mmitss/src/common/MsgTransceiver/CarmaDecoderRos2/src)

### MMITSS Docker container setup
For this testing, MMITSS container is used to provide environment and unified configuration file for MMITSS application component. The configuration is placed under the directory mmitss_cfg4test/nojournal/bin/mmitss-phase3-master-config.json. The launch script can be run by the following command:

    ```bash
    launch_mmitss_container_dev.sh
    ```
The MMITSS container will be up when the script is excecuted, and it will provide the environment for mmitss component. 

## Testing hostBSM receiving from ROS2:
In order to test the receiving of the hostBSM a bash script in the testBsm folder is stored. To test the hostBSM receiving, execute the runTest.sh script in the testBSM folder.

    ```bash
    cd testBSM
    ./runTest.sh
    ```

## Testing MAP receiving from ROS2:
In order to test the receiving of the MAP a bash script in the testMAP folder is stored. To test the MAP receiving, execute the runTest.sh script in the testMAP folder.

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
    
