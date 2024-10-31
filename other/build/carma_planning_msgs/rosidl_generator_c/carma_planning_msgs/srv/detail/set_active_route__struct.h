// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:srv/SetActiveRoute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__STRUCT_H_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROUTE_ID'.
enum
{
  carma_planning_msgs__srv__SetActiveRoute_Request__ROUTE_ID = 0
};

/// Constant 'DESTINATION_POINTS_ARRAY'.
enum
{
  carma_planning_msgs__srv__SetActiveRoute_Request__DESTINATION_POINTS_ARRAY = 1
};

// Include directives for member types
// Member 'route_id'
#include "rosidl_runtime_c/string.h"
// Member 'destination_points'
#include "carma_v2x_msgs/msg/detail/position3_d__struct.h"

// Struct defined in srv/SetActiveRoute in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__SetActiveRoute_Request
{
  uint8_t choice;
  rosidl_runtime_c__String route_id;
  carma_v2x_msgs__msg__Position3D__Sequence destination_points;
} carma_planning_msgs__srv__SetActiveRoute_Request;

// Struct for a sequence of carma_planning_msgs__srv__SetActiveRoute_Request.
typedef struct carma_planning_msgs__srv__SetActiveRoute_Request__Sequence
{
  carma_planning_msgs__srv__SetActiveRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__SetActiveRoute_Request__Sequence;


// Constants defined in the message

/// Constant 'NO_ERROR'.
enum
{
  carma_planning_msgs__srv__SetActiveRoute_Response__NO_ERROR = 0
};

/// Constant 'NO_ROUTE'.
enum
{
  carma_planning_msgs__srv__SetActiveRoute_Response__NO_ROUTE = 1
};

/// Constant 'ALREADY_FOLLOWING_ROUTE'.
enum
{
  carma_planning_msgs__srv__SetActiveRoute_Response__ALREADY_FOLLOWING_ROUTE = 2
};

/// Constant 'ROUTE_FILE_ERROR'.
enum
{
  carma_planning_msgs__srv__SetActiveRoute_Response__ROUTE_FILE_ERROR = 3
};

/// Constant 'ROUTING_FAILURE'.
enum
{
  carma_planning_msgs__srv__SetActiveRoute_Response__ROUTING_FAILURE = 4
};

/// Constant 'TRANSFORM_ERROR'.
enum
{
  carma_planning_msgs__srv__SetActiveRoute_Response__TRANSFORM_ERROR = 5
};

// Struct defined in srv/SetActiveRoute in the package carma_planning_msgs.
typedef struct carma_planning_msgs__srv__SetActiveRoute_Response
{
  uint8_t error_status;
} carma_planning_msgs__srv__SetActiveRoute_Response;

// Struct for a sequence of carma_planning_msgs__srv__SetActiveRoute_Response.
typedef struct carma_planning_msgs__srv__SetActiveRoute_Response__Sequence
{
  carma_planning_msgs__srv__SetActiveRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__srv__SetActiveRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__STRUCT_H_
