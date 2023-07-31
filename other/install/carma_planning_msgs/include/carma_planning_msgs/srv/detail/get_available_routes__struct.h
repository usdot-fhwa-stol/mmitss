// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/GetAvailableRoutes.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__GET_AVAILABLE_ROUTES__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__GET_AVAILABLE_ROUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetAvailableRoutes in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__GetAvailableRoutes_Request
{
  uint8_t structure_needs_at_least_one_member;
} carma_planning_msgs__srv__GetAvailableRoutes_Request;

// Struct for a sequence of carma_planning_msgs__srv__GetAvailableRoutes_Request.
typedef struct carma_planning_msgs__srv__GetAvailableRoutes_Request__Sequence
{
  carma_planning_msgs__srv__GetAvailableRoutes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__GetAvailableRoutes_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'available_routes'
#include "carma_planning_msgs/msg/detail/route__struct.h"

// Struct defined in srv/GetAvailableRoutes in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__GetAvailableRoutes_Response
{
  carma_planning_msgs__msg__Route__Sequence available_routes;
} carma_planning_msgs__srv__GetAvailableRoutes_Response;

// Struct for a sequence of carma_planning_msgs__srv__GetAvailableRoutes_Response.
typedef struct carma_planning_msgs__srv__GetAvailableRoutes_Response__Sequence
{
  carma_planning_msgs__srv__GetAvailableRoutes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__GetAvailableRoutes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__GET_AVAILABLE_ROUTES__STRUCT_H_
