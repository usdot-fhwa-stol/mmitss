# GetDriversWithCapabilities.srv
#
# Returns a list of driver apis that provide ALL of the requested capabilities.
# If a driver provides capabilities that are not requested, those extra capabilities will be ignored (no 
# penalty for a driver that is "over-qualified").
#

##### Request #####

# Capabilities is a list of descriptive strings. The complete set of possible capabilities strings can
# be found by referencing the ROS messages.xlsx spreadsheet in the detailed design folder of the Carma platform
# software engineering library. In that file the string to be used here comes from the 
# "Name (in code)" column. Only names that apply to Drivers listed under the Package column are applicable.
# Of those names, the following topics & services should be ignored, as they are not capabilities: bind, bond, 
# get_driver_api, driver_discovery.  With the remaining information in the "Name (in code)" column of the
# spreadsheet, there are two ways to identify a desired capability.
#   1) if the requestor doesn't care about what driver provides the capability, then just list the data name
#      itself (the part after the right-most '/').  For example, "heading".
#   2) if the requestor only wants the capability from a particular type of driver, then that driver type
#      can be included in the capability request, separated from the capability name by a '/'.  For example,
#      "position/heading". Such a request will ensure that other data sources are not considered. In this
#      example, if there was a compass sensor that also provided heading, it would not be returned in the
#      response because it would be identified as "sensor/heading".
# The specific list of supported capabilities is not documented here because it may change from time
# to time.  The ROS messages.xlsx is the official source for that information.

string[] capabilities

