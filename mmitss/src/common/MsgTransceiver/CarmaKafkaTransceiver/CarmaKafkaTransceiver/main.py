from MMITSSConsumer import *
from MMITSSProducer import *
import threading

import logging
import os
import datetime

log_level_str = os.environ.get('LOG_LEVEL', 'INFO').upper()

try:
    log_level = getattr(logging, log_level_str)
    if not isinstance(log_level, int):
        raise ValueError
except ValueError:
    log_level = logging.INFO
    print(f"Invalid log level '{log_level_str}'. Defaulting to INFO.")
except AttributeError:
     log_level = logging.INFO
     print(f"Invalid log level '{log_level_str}'. Defaulting to INFO.")
now = datetime.datetime.now()
timestamp = now.strftime("%Y-%m-%d_%H-%M-%S")
log_filename = f"CarmaKafkaTransceiver_{timestamp}.log"
logging.basicConfig(
    filename="/nojournal/bin/log/" + log_filename,
    level=log_level,    
    format="%(threadName)s: %(message)s")



def main():
    try:

        consumerBSM = MMITSSConsumer("BSM")
        consumerSRM = MMITSSConsumer("SRM")
        consumerTimeSync = MMITSSConsumer("TimeSync")
        producerSPaT = MMITSSProducer("SPaT")
        producerSSM = MMITSSProducer("SSM")
        consumerBSMProcessing = threading.Thread(target=consumerBSM.broadcastMsg, name="BSM")
        consumerSRMProcessing = threading.Thread(target=consumerSRM.broadcastMsg, name="SRM")
        consumerTimeSyncProcessing = threading.Thread(target=consumerTimeSync.broadcastMsg, name="TimeSync")
        producerSPaTProcessing = threading.Thread(target=producerSPaT.socketLoop, name="SPaT")
        producerSSMProcessing = threading.Thread(target=producerSSM.socketLoop, name="SSM")
   
        consumerBSMProcessing.start()
        consumerSRMProcessing.start()
        consumerTimeSyncProcessing.start()
        producerSPaTProcessing.start()
        producerSSMProcessing.start()
        
        consumerBSMProcessing.join()
        consumerSRMProcessing.join()
        consumerTimeSyncProcessing.join()
        producerSPaTProcessing.join()
        producerSSMProcessing.join()
    
    except KeyboardInterrupt:

        consumerBSMProcessing.join()
        consumerSRMProcessing.join()
        consumerTimeSyncProcessing.join()
        producerSPaTProcessing.join()
        producerSSMProcessing.join()
    
if __name__ == '__main__':
    main()
