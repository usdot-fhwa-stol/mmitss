from MMITSSConsumer import *
from MMITSSProducer import *
# import multiprocessing
import threading

import logging
import time

logging.basicConfig(level=logging.INFO, format="%(threadName)s: %(message)s")
#logging.basicConfig(
#    level=logging.INFO, 
#    format="%(asctime)s - %(threadName)s - %(levelname)s - %(message)s",
#    handlers=[
#        logging.FileHandler("thread_logs.log"),  # Save to a file
#        logging.StreamHandler()  # Also print to console
#    ]
#)


def main():
    try:

        consumerBSM = MMITSSConsumer("BSM")
        consumerSRM = MMITSSConsumer("SRM")
        producerSPaT = MMITSSProducer("SPaT")
        producerSSM = MMITSSProducer("SSM")
        consumerBSMProcessing = threading.Thread(target=consumerBSM.broadcastMsg, name="BSM")
        consumerSRMProcessing = threading.Thread(target=consumerSRM.broadcastMsg, name="SRM")
        producerSPaTProcessing = threading.Thread(target=producerSPaT.socketLoop, name="SPaT")
        producerSSMProcessing = threading.Thread(target=producerSSM.socketLoop, name="SSM")
   
        consumerBSMProcessing.start()
        consumerSRMProcessing.start()
        producerSPaTProcessing.start()
        producerSSMProcessing.start()
        
        consumerBSMProcessing.join()
        consumerSRMProcessing.join()
        producerSPaTProcessing.join()
        producerSSMProcessing.join()
    
    except KeyboardInterrupt:
        # consumerBSMProcessing.terminate()
        # consumerSRMProcessing.terminate()
        # producerSPaTProcessing.terminate()
        # producerSSMProcessing.terminate()
        
        consumerBSMProcessing.join()
        consumerSRMProcessing.join()
        producerSPaTProcessing.join()
        producerSSMProcessing.join()
        logging.info("end of one loop")
    
if __name__ == '__main__':
    main()
