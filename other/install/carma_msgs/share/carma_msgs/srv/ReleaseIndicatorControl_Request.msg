#
# ReleaseIndicatorControl.srv
# 
# @author Misheel Bayartsengel
# @version 0.1
#
# Provided by the LightBarManager node. Plugins and component
# release the control of the indicators they control through
# this service. They can either give info about the Cooperative Driving Automation 
# (CDA) Msg Classes it is broadcasting (so that the manager can find appropriate
# lightbar indicator mapping) or directly specify the indicators.
# The user should use only one of the methods, otherwise, LightBarCDAType msg
# information will be used over the indicator (LightBarIndicator msg type will
# be ignored). Therefore, if the component MUST set both ways, call the service 
# twice.


# Request - List of indicators the component release control of
carma_msgs/LightBarIndicator[] ind_list
carma_msgs/LightBarCDAType[] cda_list
string requester_name
