// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/GrossSpeed.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_MIN'.
enum
{
  j2735_v2x_msgs__msg__GrossSpeed__SPEED_MIN = 0
};

/// Constant 'SPEED_MAX'.
enum
{
  j2735_v2x_msgs__msg__GrossSpeed__SPEED_MAX = 30
};

/// Constant 'SPEED_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__GrossSpeed__SPEED_UNAVAILABLE = 31
};

// Struct defined in msg/GrossSpeed in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__GrossSpeed
{
  uint8_t speed;
} j2735_v2x_msgs__msg__GrossSpeed;

// Struct for a sequence of j2735_v2x_msgs__msg__GrossSpeed.
typedef struct j2735_v2x_msgs__msg__GrossSpeed__Sequence
{
  j2735_v2x_msgs__msg__GrossSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__GrossSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__STRUCT_H_
