// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'delta'
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__struct.h"
// Member 'attributes'
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__struct.h"

// Struct defined in msg/NodeXY in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NodeXY
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY delta;
  j2735_v2x_msgs__msg__NodeAttributeSetXY attributes;
  bool attributes_exists;
} j2735_v2x_msgs__msg__NodeXY;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeXY.
typedef struct j2735_v2x_msgs__msg__NodeXY__Sequence
{
  j2735_v2x_msgs__msg__NodeXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__STRUCT_H_
