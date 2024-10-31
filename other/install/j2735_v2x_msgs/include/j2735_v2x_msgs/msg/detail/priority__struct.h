// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Priority.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIORITY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIORITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Priority in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__Priority
{
  uint8_t priority[1];
} j2735_v2x_msgs__msg__Priority;

// Struct for a sequence of j2735_v2x_msgs__msg__Priority.
typedef struct j2735_v2x_msgs__msg__Priority__Sequence
{
  j2735_v2x_msgs__msg__Priority * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Priority__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIORITY__STRUCT_H_
