// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Elevation.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ELEVATION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Elevation__ELEVATION_UNAVAILABLE = -4096l
};

/// Constant 'ELEVATION_MAX'.
enum
{
  j2735_v2x_msgs__msg__Elevation__ELEVATION_MAX = 61439l
};

/// Constant 'ELEVATION_MIN'.
enum
{
  j2735_v2x_msgs__msg__Elevation__ELEVATION_MIN = -4095l
};

// Struct defined in msg/Elevation in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__Elevation
{
  int32_t elevation;
} j2735_v2x_msgs__msg__Elevation;

// Struct for a sequence of j2735_v2x_msgs__msg__Elevation.
typedef struct j2735_v2x_msgs__msg__Elevation__Sequence
{
  j2735_v2x_msgs__msg__Elevation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Elevation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_H_
