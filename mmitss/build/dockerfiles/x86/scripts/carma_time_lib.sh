#!/bin/bash
set -ex

echo "deb [trusted=yes] http://s3.amazonaws.com/stol-apt-repository develop focal" > /etc/apt/sources.list.d/stol-apt-repository.list

apt-get update && apt-get install -y \
    curl \
    lsb-release \
    cmake \
    git \
    python3-dev \
    build-essential \
    carma-clock-1 \
    udp-socket-1 

# temporarily required until PR is closed   
apt-get install -y /tmp/udp-time-sync-1_0.0.1-dev_focal_amd64.deb


echo " ------> Install rapidjson..."
cd /tmp
git clone https://github.com/Tencent/rapidjson
cd rapidjson/
git checkout a95e013b97ca6523f32da23f5095fcc9dd6067e5
cmake -Bbuild -DCMAKE_POSITION_INDEPENDENT_CODE=ON -DRAPIDJSON_BUILD_DOC=OFF -DRAPIDJSON_BUILD_EXAMPLES=OFF -DRAPIDJSON_BUILD_TESTS=OFF
cmake --build build
cmake --install build
cd .. 
rm -r rapidjson

#Install spdlog
echo " ------> Install spdlog... "
cd /tmp
git clone https://github.com/gabime/spdlog.git -b v1.12.0
cd spdlog 
cmake -Bbuild -DCMAKE_POSITION_INDEPENDENT_CODE=ON 
cmake --build build
cmake --install build
cd .. 
rm -r spdlog

