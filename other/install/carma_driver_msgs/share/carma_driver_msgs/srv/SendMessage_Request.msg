#
# SendMessage.srv
# 
# Service provided by the DSRC driver node. Sends a message to the DSRC OBU.
# Response contains error code denoting success or failure.
# @author Joe Adkisson
# @version 0.1
#

# Request
# The message to be sent
carma_driver_msgs/ByteArray message_to_send

