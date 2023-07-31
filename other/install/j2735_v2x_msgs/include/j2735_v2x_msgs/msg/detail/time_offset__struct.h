// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TimeOffset.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_H_

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
  j2735_v2x_msgs__msg__TimeOffset__MIN = 1
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__TimeOffset__MAX = 65534
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__TimeOffset__UNAVAILABLE = 65535
};

// Struct defined in msg/TimeOffset in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TimeOffset
{
  uint16_t offset;
} j2735_v2x_msgs__msg__TimeOffset;

// Struct for a sequence of j2735_v2x_msgs__msg__TimeOffset.
typedef struct j2735_v2x_msgs__msg__TimeOffset__Sequence
{
  j2735_v2x_msgs__msg__TimeOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TimeOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_H_
