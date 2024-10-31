// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/NodeXY24b.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
#include "carma_v2x_msgs/msg/detail/offset_b12__struct.h"

// Struct defined in msg/NodeXY24b in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__NodeXY24b
{
  carma_v2x_msgs__msg__OffsetB12 x;
  carma_v2x_msgs__msg__OffsetB12 y;
} carma_v2x_msgs__msg__NodeXY24b;

// Struct for a sequence of carma_v2x_msgs__msg__NodeXY24b.
typedef struct carma_v2x_msgs__msg__NodeXY24b__Sequence
{
  carma_v2x_msgs__msg__NodeXY24b * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__NodeXY24b__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__STRUCT_H_
