// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/PlanManeuvers.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__STRUCT_H_

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
// Member 'prior_plan'
#include "carma_planning_msgs/msg/detail/maneuver_plan__struct.h"
// Member 'veh_lane_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/PlanManeuvers in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__PlanManeuvers_Request
{
  std_msgs__msg__Header header;
  carma_planning_msgs__msg__ManeuverPlan prior_plan;
  double veh_x;
  double veh_y;
  double veh_downtrack;
  double veh_logitudinal_velocity;
  rosidl_runtime_c__String veh_lane_id;
} carma_planning_msgs__srv__PlanManeuvers_Request;

// Struct for a sequence of carma_planning_msgs__srv__PlanManeuvers_Request.
typedef struct carma_planning_msgs__srv__PlanManeuvers_Request__Sequence
{
  carma_planning_msgs__srv__PlanManeuvers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__PlanManeuvers_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'new_plan'
// already included above
// #include "carma_planning_msgs/msg/detail/maneuver_plan__struct.h"

// Struct defined in srv/PlanManeuvers in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__PlanManeuvers_Response
{
  carma_planning_msgs__msg__ManeuverPlan new_plan;
} carma_planning_msgs__srv__PlanManeuvers_Response;

// Struct for a sequence of carma_planning_msgs__srv__PlanManeuvers_Response.
typedef struct carma_planning_msgs__srv__PlanManeuvers_Response__Sequence
{
  carma_planning_msgs__srv__PlanManeuvers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__PlanManeuvers_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__STRUCT_H_
