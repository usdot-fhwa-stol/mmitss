// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_set_xy'
#include "j2735_v2x_msgs/msg/detail/node_xy__struct.h"

// Struct defined in msg/NodeSetXY in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NodeSetXY
{
  j2735_v2x_msgs__msg__NodeXY__Sequence node_set_xy;
} j2735_v2x_msgs__msg__NodeSetXY;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeSetXY.
typedef struct j2735_v2x_msgs__msg__NodeSetXY__Sequence
{
  j2735_v2x_msgs__msg__NodeSetXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeSetXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__STRUCT_H_
