// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACCURACY_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_UNAVAILABLE = 255
};

/// Constant 'ACCURACY_MAX'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_MAX = 254
};

/// Constant 'ACCURACY_MIN'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_MIN = 0
};

/// Constant 'ACCURACY_ORIENTATION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_ORIENTATION_UNAVAILABLE = 65535
};

/// Constant 'ACCURACY_ORIENTATION_MAX'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_ORIENTATION_MAX = 65534
};

/// Constant 'ACCURACY_ORIENTATION_MIN'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_ORIENTATION_MIN = 0
};

// Struct defined in msg/PositionalAccuracy in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PositionalAccuracy
{
  uint8_t semi_major;
  uint8_t semi_minor;
  uint16_t orientation;
} j2735_v2x_msgs__msg__PositionalAccuracy;

// Struct for a sequence of j2735_v2x_msgs__msg__PositionalAccuracy.
typedef struct j2735_v2x_msgs__msg__PositionalAccuracy__Sequence
{
  j2735_v2x_msgs__msg__PositionalAccuracy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PositionalAccuracy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_
