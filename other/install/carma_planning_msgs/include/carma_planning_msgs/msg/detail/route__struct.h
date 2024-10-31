// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_

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
// Member 'route_id'
// Member 'route_name'
#include "rosidl_runtime_c/string.h"
// Member 'shortest_path_lanelet_ids'
// Member 'route_path_lanelet_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'end_point'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/Route in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__Route
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String route_id;
  uint32_t route_version;
  uint32_t map_version;
  rosidl_runtime_c__String route_name;
  bool is_rerouted;
  rosidl_runtime_c__int64__Sequence shortest_path_lanelet_ids;
  rosidl_runtime_c__int64__Sequence route_path_lanelet_ids;
  geometry_msgs__msg__Point end_point;
} carma_planning_msgs__msg__Route;

// Struct for a sequence of carma_planning_msgs__msg__Route.
typedef struct carma_planning_msgs__msg__Route__Sequence
{
  carma_planning_msgs__msg__Route * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__Route__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
