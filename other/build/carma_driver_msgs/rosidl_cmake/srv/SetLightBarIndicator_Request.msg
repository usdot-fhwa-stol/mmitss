#
# SetLightBarIndicator.srv
# 
# Provided by the LightBarManager node. Plugins and component
# uses this service to set the lightbar indicator ON or OFF
# 
# @author Misheel Bayartsengel
# @version 0.1
#
# Request - Indicator, its state, and the requester name

uint8 OFF=0
uint8 ON=1

uint8 state
string requester_name
carma_msgs/LightBarIndicator indicator
carma_msgs/LightBarCDAType cda_type

