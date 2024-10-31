

#response

# The returned trajectory
carma_planning_msgs/TrajectoryPlan trajectory_plan

# A set of array indexes which map to the maneuvers in the provided maneuver_plan
# These indicate which maneuvers the returned trajectory is addressing
uint8[] related_maneuvers

# A list of maneuver completion status which map 1-1 with the related_maneuvers array
# Later maneuvers in this list should never be marked in complete unless the preceding maneuver is marked complete
uint8[] maneuver_status

# Enum of maneuver statuses
uint8 MANEUVER_ABORTED=0
uint8 MANEUVER_IN_PROGRESS=1
uint8 MANEUVER_COMPLETE=2
