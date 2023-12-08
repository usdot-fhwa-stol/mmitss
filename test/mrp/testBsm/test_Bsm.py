from MMITSSConsumer import *
# \MITSSConsumer
from confluent_kafka import Producer
import json
import os
from unittest.mock import MagicMock

def testBSM():
    
    #read KafkaConfig file
    fileName = "kafkaConfig.json"
    f = open(fileName,"r")
    kafkaConfig  = json.loads(f.read())
    f.close()
    
    # Mock the Kafka consumer to avoid actually sending messages
    
    consumer = MMITSSConsumer("BSM",consumerConfigFilename = "kafkaConfig.json",socketConfigFilename = "mmitss-phase3-master-config.json")
    
    
    #create Kafka Producer message 
    producerConfig = {"bootstrap.servers":kafkaConfig["BOOTSTRAP_SERVER"]}
    producer = Producer(producerConfig)
    
    #read bsm json file
    fileName = 'bsm.json'
    f = open(fileName,"r")
    dataBSM  = json.dumps(json.loads(f.read()))
    f.close()
    

    #send message

    producer.produce(kafkaConfig["CONSUMER_TOPICS"]["BSM"],dataBSM)
    
    producer.flush()

    #receive message and broadcast back to MMITSS and assert
    assert(consumer.broadcastMsg(debug=True)==1)
testBSM()