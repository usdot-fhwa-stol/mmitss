# a temporal script to quickly build docker image after all component has been built.

cd ../..
docker build -t mmitssuarizona/mmitss-carma-vsp-ros2-x86:CDA1.0 -f build/dockerfiles/x86/Dockerfile.carma_vsp_ros2 .
