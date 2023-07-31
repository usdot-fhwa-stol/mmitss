// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN'.
enum
{
  j2735_v2x_msgs__msg__Velocity__MIN = 0
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__Velocity__MAX = 8190
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Velocity__UNAVAILABLE = 8191
};

// Struct defined in msg/Velocity in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__Velocity
{
  uint16_t velocity;
} j2735_v2x_msgs__msg__Velocity;

// Struct for a sequence of j2735_v2x_msgs__msg__Velocity.
typedef struct j2735_v2x_msgs__msg__Velocity__Sequence
{
  j2735_v2x_msgs__msg__Velocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Velocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_
