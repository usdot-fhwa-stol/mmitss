#! /bin/bash
set -e

# install kafka
apt-get update && \
  apt-get install -y --no-install-recommends gcc git pip libssl-dev g++ make && \
  cd /tmp && git clone https://github.com/edenhill/librdkafka && \
  cd librdkafka && git checkout tags/v2.0.2 && \
  ./configure && make && make install && \
  ldconfig &&\
  cd ../ && rm -rf librdkafka

pip install confluent-kafka==2.0.2

# install carma-street
# cd /root/dev_ws/src
# git clone https://github.com/usdot-fhwa-stol/carma-streets.git

