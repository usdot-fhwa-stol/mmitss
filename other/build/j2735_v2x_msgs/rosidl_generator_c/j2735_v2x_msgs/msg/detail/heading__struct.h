// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Heading.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HEADING_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Heading__HEADING_UNAVAILABLE = 28800
};

/// Constant 'HEADING_MAX'.
enum
{
  j2735_v2x_msgs__msg__Heading__HEADING_MAX = 28798
};

/// Constant 'HEADING_MIN'.
enum
{
  j2735_v2x_msgs__msg__Heading__HEADING_MIN = 0
};

// Struct defined in msg/Heading in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__Heading
{
  uint16_t heading;
} j2735_v2x_msgs__msg__Heading;

// Struct for a sequence of j2735_v2x_msgs__msg__Heading.
typedef struct j2735_v2x_msgs__msg__Heading__Sequence
{
  j2735_v2x_msgs__msg__Heading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Heading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING__STRUCT_H_
