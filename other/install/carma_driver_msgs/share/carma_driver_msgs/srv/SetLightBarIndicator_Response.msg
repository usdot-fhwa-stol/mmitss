
# Response - success status
uint8 status_code
uint8 SUCCESS=0       
uint8 PERMISSION_DENIED = 1 # if the requester is no longer controlling the indicator
uint8 ERROR=2             # any other reason the request failed, including hardware issue

