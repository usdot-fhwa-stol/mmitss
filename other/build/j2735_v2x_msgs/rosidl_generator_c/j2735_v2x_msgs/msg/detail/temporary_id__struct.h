// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TemporaryID.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ID_TIME_MAX'.
enum
{
  j2735_v2x_msgs__msg__TemporaryID__ID_TIME_MAX = 3000
};

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/TemporaryID in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TemporaryID
{
  rosidl_runtime_c__uint8__Sequence id;
} j2735_v2x_msgs__msg__TemporaryID;

// Struct for a sequence of j2735_v2x_msgs__msg__TemporaryID.
typedef struct j2735_v2x_msgs__msg__TemporaryID__Sequence
{
  j2735_v2x_msgs__msg__TemporaryID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TemporaryID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__STRUCT_H_
