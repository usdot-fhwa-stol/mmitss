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


# Install udp-time-sync TODO: remove this when the package is available in the apt repository after https://github.com/usdot-fhwa-stol/udp-time-sync/pull/4 closes
cd /tmp
apt install ./udp-time-sync-1_0.0.1-dev_focal_amd64.deb
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



