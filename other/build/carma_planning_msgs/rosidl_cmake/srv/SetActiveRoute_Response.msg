
# Response
# An enumeration representing a service execution error as defined in the route design document.
uint8 error_status

# enumeration values for errorStatus:
uint8 NO_ERROR=0
uint8 NO_ROUTE=1
uint8 ALREADY_FOLLOWING_ROUTE=2
uint8 ROUTE_FILE_ERROR=3
uint8 ROUTING_FAILURE=4
uint8 TRANSFORM_ERROR=5
#					<other values reserved for future expansion>
