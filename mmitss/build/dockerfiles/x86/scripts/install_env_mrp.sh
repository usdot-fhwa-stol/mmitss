#! /bin/bash
set -e
apt-get update
apt-get install -y --no-install-recommends pip
pip install confluent-kafka==2.0.2



