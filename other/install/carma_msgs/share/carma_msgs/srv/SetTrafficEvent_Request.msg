# SetTrafficEvent.srv

# Request - set the traffic event values

# Used by Traffic Incident Node
# This should contain the desired parameters of traffic event, not just the ones
# intended to be changed

# Distance (meters) from the center of the vehicle to the beginning of geofence
float64 up_track

# Distance (meters) between center of the vehicle to the end of the geofence
float64 down_track

# Road vehicles minimum following distance (meters)
float64 minimum_gap

# Recommended speed within geofence (MPH)
float64 advisory_speed

