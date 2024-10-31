// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/ComputePlanCost.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__COMPUTE_PLAN_COST__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__COMPUTE_PLAN_COST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'maneuver_plan'
#include "carma_planning_msgs/msg/detail/maneuver_plan__struct.h"

// Struct defined in srv/ComputePlanCost in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__ComputePlanCost_Request
{
  carma_planning_msgs__msg__ManeuverPlan maneuver_plan;
} carma_planning_msgs__srv__ComputePlanCost_Request;

// Struct for a sequence of carma_planning_msgs__srv__ComputePlanCost_Request.
typedef struct carma_planning_msgs__srv__ComputePlanCost_Request__Sequence
{
  carma_planning_msgs__srv__ComputePlanCost_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__ComputePlanCost_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ComputePlanCost in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__ComputePlanCost_Response
{
  double plan_cost;
} carma_planning_msgs__srv__ComputePlanCost_Response;

// Struct for a sequence of carma_planning_msgs__srv__ComputePlanCost_Response.
typedef struct carma_planning_msgs__srv__ComputePlanCost_Response__Sequence
{
  carma_planning_msgs__srv__ComputePlanCost_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__ComputePlanCost_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__COMPUTE_PLAN_COST__STRUCT_H_
