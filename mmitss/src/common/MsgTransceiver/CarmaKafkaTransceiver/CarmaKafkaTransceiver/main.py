from MMITSSConsumer import *
from MMITSSProducer import *
import threading

def main():
    consumerBSM = MMITSSConsumer("BSM")
    consumerSRM = MMITSSConsumer("SRM")
    producerSPaT = MMITSSProducer("SPaT")
    producerSSM = MMITSSProducer("SSM")
    consumerBSMThread = threading.Thread(target=consumerBSM.broadcastMsg)
    consumerSRMThread = threading.Thread(target=consumerSRM.broadcastMsg)
    producerSPaTThread = threading.Thread(target=producerSPaT.socketLoop)
    producerSSMThread = threading.Thread(target=producerSSM.socketLoop)

    consumerBSMThread.start()
    consumerSRMThread.start()
    producerSPaTThread.start()
    producerSSMThread.start()

    consumerBSMThread.join()
    consumerSRMThread.join()
    producerSPaTThread.join()
    producerSSMThread.join()
    
if __name__ == '__main__':
    main()
