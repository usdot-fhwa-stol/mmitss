# PlanManeuvers.srv
#
# Service used to request a maneuver plan from a plugin
#
#

#request

# Header
# Stamp for the header should match time that vehicle state was computed. 
std_msgs/Header header 

# Maneuvers planned prior to the current planning request.
# These maneuvers must not be modified by this process
carma_planning_msgs/ManeuverPlan prior_plan

### Vehicle Initial State
# The following vehicle state values represent the state of the vehicle at the time specified by header 
# These values should match the start conditions for the first maneuver in prior_plan
# Therefore for planners called after prior_plan is populated these fields should be ignored
# Instead the end conditions of the last maneuver in prior_plan should fill this role
###

# Vehicle initial 2d position in the frame specified by header at the time specified by header
# Position reports the front bumper position of the vehicle
# Units: m
float64 veh_x
float64 veh_y

# Vehicle initial position in the route frame. This must match the veh_x, veh_y values.
# Downtrack is calculated using the front bumper position of the vehicle
# Units: m
float64 veh_downtrack

# Vehicle initial logitudinal velocity 
# Units: m/s
float64 veh_logitudinal_velocity

# Vehicle initial lane id
string veh_lane_id


