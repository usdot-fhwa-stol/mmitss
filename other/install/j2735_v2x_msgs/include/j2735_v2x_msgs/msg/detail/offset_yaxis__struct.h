// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OffsetYaxis.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SMALL'.
enum
{
  j2735_v2x_msgs__msg__OffsetYaxis__SMALL = 0
};

/// Constant 'LARGE'.
enum
{
  j2735_v2x_msgs__msg__OffsetYaxis__LARGE = 1
};

// Struct defined in msg/OffsetYaxis in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__OffsetYaxis
{
  uint8_t choice;
  int16_t small;
  int16_t large;
} j2735_v2x_msgs__msg__OffsetYaxis;

// Struct for a sequence of j2735_v2x_msgs__msg__OffsetYaxis.
typedef struct j2735_v2x_msgs__msg__OffsetYaxis__Sequence
{
  j2735_v2x_msgs__msg__OffsetYaxis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OffsetYaxis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__STRUCT_H_
