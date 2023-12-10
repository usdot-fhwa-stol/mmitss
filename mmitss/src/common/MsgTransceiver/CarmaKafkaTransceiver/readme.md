# CarmaKafkaTransceiver for MMITSS
The CarmaKafkaTransceiver module is in charge of two tasks receiving BSM and SRM messages from Kafka, encoding them and broadcasting them to MMITSS and receiving SPaT and SSM messages from MMITSS, encoding them and broadcasting them back to kafka. The module requires two configuration files. The MMITSS ports and IP address configuration file and the kafka configuration files. By default the module will read them under the following addresses.

> /nojournal/bin/mmitss-phase3-master-config.json
> /nojournal/bin/kafkaConfig.json

This files can be found on the configuration folder of the cdammitss repository. These configuration files can be found in: 

> ../cda-mmitss/mmitss/config/carma-vehicle-sample/nojournal/bin/mmitss-phase3-master-config.json
> 
> ../cda-mmitss/mmitss/config/carma-vehicle-sample/nojournal/bin/kafkaConfig.json

## Install
 To import directly into python you do a local installation. 
> python setup.py sdist
> 
> pip install .

## Run
Inside a python script:
>import CarmaKafkaTransceiver
>CarmaKafkaTransceiver.main()
