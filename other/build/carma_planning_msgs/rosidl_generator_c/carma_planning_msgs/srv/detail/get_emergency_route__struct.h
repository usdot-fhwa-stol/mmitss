// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/GetEmergencyRoute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__GET_EMERGENCY_ROUTE__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__GET_EMERGENCY_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetEmergencyRoute in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__GetEmergencyRoute_Request
{
  uint8_t structure_needs_at_least_one_member;
} carma_planning_msgs__srv__GetEmergencyRoute_Request;

// Struct for a sequence of carma_planning_msgs__srv__GetEmergencyRoute_Request.
typedef struct carma_planning_msgs__srv__GetEmergencyRoute_Request__Sequence
{
  carma_planning_msgs__srv__GetEmergencyRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__GetEmergencyRoute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'route_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetEmergencyRoute in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__GetEmergencyRoute_Response
{
  bool is_successful;
  rosidl_runtime_c__String route_name;
} carma_planning_msgs__srv__GetEmergencyRoute_Response;

// Struct for a sequence of carma_planning_msgs__srv__GetEmergencyRoute_Response.
typedef struct carma_planning_msgs__srv__GetEmergencyRoute_Response__Sequence
{
  carma_planning_msgs__srv__GetEmergencyRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__GetEmergencyRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__GET_EMERGENCY_ROUTE__STRUCT_H_
