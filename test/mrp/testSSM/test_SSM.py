from MMITSSProducer import *
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
   
    configFilename = "mmitss-phase3-master-config.json"
    producerConfigFilename = "kafkaConfig.json"
    producer = MMITSSProducer("SSM",producerConfigFilename = producerConfigFilename,socketConfigFilename = configFilename)
    
    # Read a config file into a json object:
    configFile = open(producerConfigFilename, 'r')
    config = (json.load(configFile))
    configFile.close()
    topics = config["PRODUCER_TOPICS"]['SSM']
    broker = config["BOOTSTRAP_SERVER"]
    groupId = config["GROUP_ID"]['SSM']
    autoOffsetReset = config["AUTO_OFFSET_RESET"]
    consumerConfig = {
        'bootstrap.servers': broker,
        'group.id': groupId,
        'auto.offset.reset': autoOffsetReset
    }

    consumer = Consumer(consumerConfig)
    consumer.subscribe([topics])



    producer.socketLoop()
    messageCount = 0
    while True:
        msg = consumer.poll(1.0)  # Poll for messages, with a timeout of 1 second
        if msg is None:
            continue
        if msg.error():
            print(f"Error: {msg.error()}")
            continue

        # Invoke the callback for each message
        
        msg = json.loads(msg.value().decode("utf-8"))
        
        messageCount+=1
        if messageCount==1:
            break
    
    assert(messageCount==1)


test_SSM()
    
  

    


