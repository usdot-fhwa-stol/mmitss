#
# SetActiveRoute.srv
# 
# Service provided by RouteManager node. Sets a route with the 
# specified id as the active route.
#
# @author Michael McConnell
# @version 0.1
#

# Request
# Enumeration values for the method being used to provide the route destination points
uint8 choice

uint8 ROUTE_ID=0
uint8 DESTINATION_POINTS_ARRAY=1

# The id of the route to select
string route_id

# The array of destination points to be used for route generation 
carma_v2x_msgs/Position3D[] destination_points

