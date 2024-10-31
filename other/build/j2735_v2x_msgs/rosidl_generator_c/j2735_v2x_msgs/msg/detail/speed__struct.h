// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED__STRUCT_H_

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
  j2735_v2x_msgs__msg__Speed__MIN = 0
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__Speed__MAX = 8190
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Speed__UNAVAILABLE = 8191
};

// Struct defined in msg/Speed in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__Speed
{
  uint16_t speed;
} j2735_v2x_msgs__msg__Speed;

// Struct for a sequence of j2735_v2x_msgs__msg__Speed.
typedef struct j2735_v2x_msgs__msg__Speed__Sequence
{
  j2735_v2x_msgs__msg__Speed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Speed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED__STRUCT_H_
