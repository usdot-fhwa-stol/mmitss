# PlanTrajectory.srv
#
# Service used to request a trajectory plan from a plugin
#
#

#request

# Header
# Stamp for the header should match time that vehicle state was computed. 
# This may be later than the maneuver_plan header and possibly in the future if multiple plan trajectory requests were sent for one maneuver plan
std_msgs/Header header 

# The starting state of the vehicle
carma_planning_msgs/VehicleState vehicle_state

# The set of maneuvers to be executed
carma_planning_msgs/ManeuverPlan maneuver_plan

# The initial trajectory plan to be modified
carma_planning_msgs/TrajectoryPlan initial_trajectory_plan

# The index specifying the maneuver within the maneuver plan that a trajectory must be planned for
uint16 maneuver_index_to_plan

