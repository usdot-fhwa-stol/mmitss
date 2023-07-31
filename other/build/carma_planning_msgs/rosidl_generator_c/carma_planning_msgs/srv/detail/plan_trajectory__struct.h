// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/PlanTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_TRAJECTORY__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'vehicle_state'
#include "carma_planning_msgs/msg/detail/vehicle_state__struct.h"
// Member 'maneuver_plan'
#include "carma_planning_msgs/msg/detail/maneuver_plan__struct.h"
// Member 'initial_trajectory_plan'
#include "carma_planning_msgs/msg/detail/trajectory_plan__struct.h"

// Struct defined in srv/PlanTrajectory in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__PlanTrajectory_Request
{
  std_msgs__msg__Header header;
  carma_planning_msgs__msg__VehicleState vehicle_state;
  carma_planning_msgs__msg__ManeuverPlan maneuver_plan;
  carma_planning_msgs__msg__TrajectoryPlan initial_trajectory_plan;
  uint16_t maneuver_index_to_plan;
} carma_planning_msgs__srv__PlanTrajectory_Request;

// Struct for a sequence of carma_planning_msgs__srv__PlanTrajectory_Request.
typedef struct carma_planning_msgs__srv__PlanTrajectory_Request__Sequence
{
  carma_planning_msgs__srv__PlanTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__PlanTrajectory_Request__Sequence;


// Constants defined in the message

/// Constant 'MANEUVER_ABORTED'.
enum
{
  carma_planning_msgs__srv__PlanTrajectory_Response__MANEUVER_ABORTED = 0
};

/// Constant 'MANEUVER_IN_PROGRESS'.
enum
{
  carma_planning_msgs__srv__PlanTrajectory_Response__MANEUVER_IN_PROGRESS = 1
};

/// Constant 'MANEUVER_COMPLETE'.
enum
{
  carma_planning_msgs__srv__PlanTrajectory_Response__MANEUVER_COMPLETE = 2
};

// Include directives for member types
// Member 'trajectory_plan'
// already included above
// #include "carma_planning_msgs/msg/detail/trajectory_plan__struct.h"
// Member 'related_maneuvers'
// Member 'maneuver_status'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/PlanTrajectory in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__PlanTrajectory_Response
{
  carma_planning_msgs__msg__TrajectoryPlan trajectory_plan;
  rosidl_runtime_c__uint8__Sequence related_maneuvers;
  rosidl_runtime_c__uint8__Sequence maneuver_status;
} carma_planning_msgs__srv__PlanTrajectory_Response;

// Struct for a sequence of carma_planning_msgs__srv__PlanTrajectory_Response.
typedef struct carma_planning_msgs__srv__PlanTrajectory_Response__Sequence
{
  carma_planning_msgs__srv__PlanTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__PlanTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_TRAJECTORY__STRUCT_H_
