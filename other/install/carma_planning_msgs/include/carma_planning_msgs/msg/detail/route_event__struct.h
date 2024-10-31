// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/RouteEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_EVENT__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROUTE_LOADED'.
enum
{
  carma_planning_msgs__msg__RouteEvent__ROUTE_LOADED = 0
};

/// Constant 'ROUTE_SELECTED'.
enum
{
  carma_planning_msgs__msg__RouteEvent__ROUTE_SELECTED = 1
};

/// Constant 'ROUTE_STARTED'.
enum
{
  carma_planning_msgs__msg__RouteEvent__ROUTE_STARTED = 2
};

/// Constant 'ROUTE_COMPLETED'.
enum
{
  carma_planning_msgs__msg__RouteEvent__ROUTE_COMPLETED = 3
};

/// Constant 'ROUTE_DEPARTED'.
enum
{
  carma_planning_msgs__msg__RouteEvent__ROUTE_DEPARTED = 4
};

/// Constant 'ROUTE_ABORTED'.
enum
{
  carma_planning_msgs__msg__RouteEvent__ROUTE_ABORTED = 5
};

/// Constant 'ROUTE_GEN_FAILED'.
enum
{
  carma_planning_msgs__msg__RouteEvent__ROUTE_GEN_FAILED = 6
};

/// Constant 'ROUTE_INVALIDATION'.
enum
{
  carma_planning_msgs__msg__RouteEvent__ROUTE_INVALIDATION = 7
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/RouteEvent in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__RouteEvent
{
  std_msgs__msg__Header header;
  uint8_t event;
} carma_planning_msgs__msg__RouteEvent;

// Struct for a sequence of carma_planning_msgs__msg__RouteEvent.
typedef struct carma_planning_msgs__msg__RouteEvent__Sequence
{
  carma_planning_msgs__msg__RouteEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__RouteEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_EVENT__STRUCT_H_
