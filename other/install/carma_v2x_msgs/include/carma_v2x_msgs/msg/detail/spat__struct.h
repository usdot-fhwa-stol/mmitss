// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'intersection_state_list'
#include "carma_v2x_msgs/msg/detail/intersection_state__struct.h"

// Struct defined in msg/SPAT in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__SPAT
{
  uint32_t time_stamp;
  bool time_stamp_exists;
  rosidl_runtime_c__String name;
  bool name_exists;
  carma_v2x_msgs__msg__IntersectionState__Sequence intersection_state_list;
} carma_v2x_msgs__msg__SPAT;

// Struct for a sequence of carma_v2x_msgs__msg__SPAT.
typedef struct carma_v2x_msgs__msg__SPAT__Sequence
{
  carma_v2x_msgs__msg__SPAT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__SPAT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_
