// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/RouteState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LOADING'.
enum
{
  carma_planning_msgs__msg__RouteState__LOADING = 0
};

/// Constant 'SELECTION'.
enum
{
  carma_planning_msgs__msg__RouteState__SELECTION = 1
};

/// Constant 'ROUTING'.
enum
{
  carma_planning_msgs__msg__RouteState__ROUTING = 2
};

/// Constant 'FOLLOWING'.
enum
{
  carma_planning_msgs__msg__RouteState__FOLLOWING = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'route_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RouteState in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__RouteState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String route_id;
  uint8_t state;
  double cross_track;
  double down_track;
  double lanelet_downtrack;
  int64_t lanelet_id;
  double speed_limit;
} carma_planning_msgs__msg__RouteState;

// Struct for a sequence of carma_planning_msgs__msg__RouteState.
typedef struct carma_planning_msgs__msg__RouteState__Sequence
{
  carma_planning_msgs__msg__RouteState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__RouteState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_H_
