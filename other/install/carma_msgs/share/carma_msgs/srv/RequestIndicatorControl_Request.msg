#
# RequestIndicatorControl.srv
# 
# Provided by the LightBarManager node. Plugins and component
# requests control of a lightbar indicator through this service.
# They can either give info about the Cooperative Driving Automation (CDA) 
# Msg Classes it is broadcasting (so that the manager can find appropriate
# lightbar indicator mapping) or directly specify the indicators they want.
# The user should use only one of the methods, otherwise, LightBarCDAType msg
# information will be used over the indicator (LightBarIndicator msg type will
# be ignored). Therefore, if the component MUST set both ways, call the service 
# twice.
# 
# @author Misheel Bayartsengel
# @version 0.1
#

# Request - List of indicators the component requests control of
carma_msgs/LightBarIndicator[] ind_list
carma_msgs/LightBarCDAType[] cda_list
string requester_name
