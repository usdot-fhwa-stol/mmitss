from MMITSSConsumer import *
from MMITSSProducer import *
import threading

import logging
import time

now = datetime.datetime.now()
timestamp = now.strftime("%Y-%m-%d_%H-%M-%S")
log_filename = f"app_{timestamp}.log"
logging.basicConfig(
    filename=log_filename,
    level=logging.DEBUG,    
    datefmt="%Y-%m-%d %H:%M:%S", 
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
        logging.info("end of one loop")
    
if __name__ == '__main__':
    main()
