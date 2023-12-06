from CarmaKafkaTransceiver.MMITSSProducer import MMITSSProducer
from confluent_kafka import Consumer
from unittest.mock import MagicMock
import json
import socket
import datetime
import time
import threading


#write documentation of this test:
#test the SSM message

def test_SSM():

    #Emulate Priority Request Server sender socket

   # Read a config file into a json object:
    configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
    config = (json.load(configFile))
    configFile.close()

    hostIp = config["HostIp"]
    port = config["PortNumber"]["MapSpatBroadcaster"]
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.bind((hostIp,port))

    # Read external clients config in json object:
    communicationInfo = (hostIp, config["PortNumber"]["MessageTransceiver"]["MessageEncoder"])

    fileName = "ssm.json"
    f = open(fileName, 'r')
    ssmData = f.read() 
    f.close()   

    producerConfigFilename = "../kafkaConfig.json"
    producer = MMITSSProducer("SSM",producerConfigFilename = "../../../mmitss/config/carma-vehicle-sample/nojournal/bin/kafkaConfig.json",socketConfigFilename = "../../../mmitss/config/carma-vehicle-sample/nojournal/bin/mmitss-phase3-master-config.json")
    producerConfigFilename = "../../../mmitss/config/carma-vehicle-sample/nojournal/bin/kafkaConfig.json"
    # Read a config file into a json object:
    configFile = open(producerConfigFilename, 'r')
    config = (json.load(configFile))
    configFile.close()
    topics = config["PRODUCER_TOPICS"]['SSM']
    broker = config["BOOTSTRAP_SERVER"]
    groupId = config["GROUP_ID"]
    consumerConfig = {
        'bootstrap.servers': broker,
        'group.id': groupId,
        'auto.offset.reset': 'earliest',
    }

    consumer = Consumer(consumerConfig)
    consumer.subscribe(topics)
    
    s.sendto(ssmData.encode(),communicationInfo)
    s.close()
    p1 = threading.Thread(producer.socketLoop())
    p2 = threading.Thread(consumer.poll(1.0))
    p1.start()
    p2.start()
    p2.join()
    
    
  
    
    















    #read KafkaConfig file
    fileName = '../kafkaConfig.json'
    f = open(fileName,"r")
    kafkaConfig  = json.loads(f.read())
    f.close()
    
    #generate SPaT empty objects and convert to Json
    spatObject = Spat.Spat()
    dataSPaT = spatObject.Spat2Json()


    # Mock the Kafka producer to avoid actually sending messages
    producerMock = mocker.patch('CarmaKafkaTransceiver.MMITSSProducer.MMITSSProducer')
    producerConfig = {'bootstrap.servers':kafkaConfig["BOOTSTRAP_SERVER"]}
    producerTopic = kafkaConfig["PRODUCER_TOPIC"]
    producer = MMITSSProducer(producerConfig)
    
    #send message 
    producer.produce(producerTopic,dataSPaT)
    producer.flush()

    # Assert that the Producer instance was created with the correct arguments
    producerMock.assert_called_once_with(producerConfig)

    # Assert that the produce method was called with the expected arguments
    producerInstance = producerMock.return_value
    producerInstance.produce.assert_called_once_with(producerTopic,dataSPaT)

