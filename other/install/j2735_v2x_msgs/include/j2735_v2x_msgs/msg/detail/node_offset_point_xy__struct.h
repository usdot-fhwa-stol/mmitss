// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NODE_XY1'.
enum
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY1 = 0
};

/// Constant 'NODE_XY2'.
enum
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY2 = 1
};

/// Constant 'NODE_XY3'.
enum
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY3 = 2
};

/// Constant 'NODE_XY4'.
enum
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY4 = 3
};

/// Constant 'NODE_XY5'.
enum
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY5 = 4
};

/// Constant 'NODE_XY6'.
enum
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY6 = 5
};

/// Constant 'NODE_LATLON'.
enum
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY__NODE_LATLON = 6
};

// Include directives for member types
// Member 'node_xy1'
#include "j2735_v2x_msgs/msg/detail/node_xy20b__struct.h"
// Member 'node_xy2'
#include "j2735_v2x_msgs/msg/detail/node_xy22b__struct.h"
// Member 'node_xy3'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__struct.h"
// Member 'node_xy4'
#include "j2735_v2x_msgs/msg/detail/node_xy26b__struct.h"
// Member 'node_xy5'
#include "j2735_v2x_msgs/msg/detail/node_xy28b__struct.h"
// Member 'node_xy6'
#include "j2735_v2x_msgs/msg/detail/node_xy32b__struct.h"
// Member 'node_latlon'
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__struct.h"

// Struct defined in msg/NodeOffsetPointXY in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NodeOffsetPointXY
{
  uint8_t choice;
  j2735_v2x_msgs__msg__NodeXY20b node_xy1;
  j2735_v2x_msgs__msg__NodeXY22b node_xy2;
  j2735_v2x_msgs__msg__NodeXY24b node_xy3;
  j2735_v2x_msgs__msg__NodeXY26b node_xy4;
  j2735_v2x_msgs__msg__NodeXY28b node_xy5;
  j2735_v2x_msgs__msg__NodeXY32b node_xy6;
  j2735_v2x_msgs__msg__NodeLLmD64b node_latlon;
} j2735_v2x_msgs__msg__NodeOffsetPointXY;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeOffsetPointXY.
typedef struct j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence
{
  j2735_v2x_msgs__msg__NodeOffsetPointXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_
