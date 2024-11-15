# Kafka-MMITSS Infrastructure Testing Deployment Note

This page indicate a step-by-step instruction to deploy the testing on MMITSS Kafka Transceiver for MMITSS MRP (Road-side processor) components. 

### Requirements
* cda-mmitss repository cloned
* confluent_kafka
* python 3
* pytest
* [carma-streets](https://github.com/usdot-fhwa-stol/carma-streets/tree/develop) repository cloned


## Bring up Kafka container
- Find the directory of carma-streets repo, enter the following command to excute the docker-compose file[origi_url](https://github.com/usdot-fhwa-stol/carma-streets/blob/develop/docker-compose.yaml):
```bash
cd carma-streets
docker-compose up kafka
docker exec -it kafka bash
```
- In kafka container, check the kafka topic by command:
```bash
kafka-topics.sh --bootstrap-server=localhost:9092 --list
```
- In order to check the specific kafka topics, use the following command:
```bash
$KAFKA_HOME/bin/kafka-console-consumer.sh --bootstrap-server localhost:9092 --topic <kafka_topic_name>
```

## Testing BSM receiving from Carma-Kafka broker
For MMITSS MRP side, the BSM is sent from CARMA-Street via kafka broker. A bash script is strored in testBsm folder. Steps are as following:
- For the terminal in kafka container, enter the command:
```bash
kafka-console-consumer.sh --bootstrap-server localhost:9092 --topic v2xhub_bsm_in
```
- For servers that runs the testing script, starts from current directory
```bash
./testBsm/runTest.sh
```

## Testing SRM receiving from Carma-Kafka broker
For MMITSS MRP side, the SRM is sent from CARMA-Street via kafka broker. A bash script is strored in testSRM folder. Steps are as following:
- For the terminal in kafka container, enter the command:
```bash
kafka-console-consumer.sh --bootstrap-server localhost:9092 --topic v2xhub_srm_in
```
- For servers that runs the testing script, starts from current directory
```bash
./testSRM/runTest.sh
```

## Testing SPAT receiving from Carma-Kafka broker
For MMITSS MRP side, the SPaT is generated from MMITSS MRP component, and then sent to CARMA-Street via kafka broker. A bash script is strored in testSPaT folder. The testing will verify the message from a custermized kafka consumer. Steps are as following:
- For the terminal in kafka container, enter the command:
```
kafka-console-consumer.sh --bootstrap-server localhost:9092 --topic modified_spat
```
- For servers that runs the testing script, starts from current directory
```
./testSPat/runTest.sh
```
- Open another terminal, enter current directory, and execute the following command to generate pseduo SPaT message to MMITSS kafka transceiver:
```
python testSpat/spatSender.py
```

## Testing SSM receiving from Carma-Kafka broker
For MMITSS MRP side, the SSM is generated from MMITSS MRP component, and then sent to CARMA-Street via kafka broker. A bash script is strored in testSPaT folder. The testing will verify the message from a custermized kafka consumer. Steps are as following:
- For the terminal in kafka container, enter the command:
```
kafka-console-consumer.sh --bootstrap-server localhost:9092 --topic v2xhub_ssm_out
```
- For servers that runs the testing script, starts from current directory
```
./testSSM/runTest.sh
```
- Open another terminal, enter current directory, and execute the following command to generate pseduo SPaT message to MMITSS kafka transceiver:
```
python testSpat/ssmSender.py
```
