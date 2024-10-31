// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OffsetB09.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B09__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B09__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_MIN'.
enum
{
  j2735_v2x_msgs__msg__OffsetB09__OFFSET_MIN = -255
};

/// Constant 'OFFSET_MAX'.
enum
{
  j2735_v2x_msgs__msg__OffsetB09__OFFSET_MAX = 255
};

/// Constant 'OFFSET_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__OffsetB09__OFFSET_UNKNOWN = -256
};

// Struct defined in msg/OffsetB09 in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__OffsetB09
{
  int16_t offset;
} j2735_v2x_msgs__msg__OffsetB09;

// Struct for a sequence of j2735_v2x_msgs__msg__OffsetB09.
typedef struct j2735_v2x_msgs__msg__OffsetB09__Sequence
{
  j2735_v2x_msgs__msg__OffsetB09 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OffsetB09__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B09__STRUCT_H_
