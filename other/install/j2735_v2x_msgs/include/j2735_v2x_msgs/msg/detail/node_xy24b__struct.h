// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeXY24b.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY24B__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY24B__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__NodeXY24b__UNKNOWN = -2048
};

/// Constant 'MIN'.
enum
{
  j2735_v2x_msgs__msg__NodeXY24b__MIN = -2047
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__NodeXY24b__MAX = 2047
};

// Struct defined in msg/NodeXY24b in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NodeXY24b
{
  int16_t x;
  int16_t y;
} j2735_v2x_msgs__msg__NodeXY24b;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeXY24b.
typedef struct j2735_v2x_msgs__msg__NodeXY24b__Sequence
{
  j2735_v2x_msgs__msg__NodeXY24b * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeXY24b__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY24B__STRUCT_H_
