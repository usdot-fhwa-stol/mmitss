// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeListXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NODE_SET_XY'.
enum
{
  j2735_v2x_msgs__msg__NodeListXY__NODE_SET_XY = 0
};

/// Constant 'COMPUTED_LANE'.
enum
{
  j2735_v2x_msgs__msg__NodeListXY__COMPUTED_LANE = 1
};

// Include directives for member types
// Member 'nodes'
#include "j2735_v2x_msgs/msg/detail/node_set_xy__struct.h"
// Member 'computed'
#include "j2735_v2x_msgs/msg/detail/computed_lane__struct.h"

// Struct defined in msg/NodeListXY in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NodeListXY
{
  uint8_t choice;
  j2735_v2x_msgs__msg__NodeSetXY nodes;
  j2735_v2x_msgs__msg__ComputedLane computed;
} j2735_v2x_msgs__msg__NodeListXY;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeListXY.
typedef struct j2735_v2x_msgs__msg__NodeListXY__Sequence
{
  j2735_v2x_msgs__msg__NodeListXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeListXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__STRUCT_H_
