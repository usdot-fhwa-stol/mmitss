// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/RollRate.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_ROLL_RATE'.
enum
{
  j3224_v2x_msgs__msg__RollRate__MIN_ROLL_RATE = -32767
};

/// Constant 'MAX_ROLL_RATE'.
enum
{
  j3224_v2x_msgs__msg__RollRate__MAX_ROLL_RATE = 32766
};

/// Constant 'UNAVAILABLE'.
enum
{
  j3224_v2x_msgs__msg__RollRate__UNAVAILABLE = 32767
};

// Struct defined in msg/RollRate in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__RollRate
{
  int16_t roll_rate;
} j3224_v2x_msgs__msg__RollRate;

// Struct for a sequence of j3224_v2x_msgs__msg__RollRate.
typedef struct j3224_v2x_msgs__msg__RollRate__Sequence
{
  j3224_v2x_msgs__msg__RollRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__RollRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE__STRUCT_H_
