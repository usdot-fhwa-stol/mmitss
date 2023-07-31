// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/PitchRate.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__PITCH_RATE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__PITCH_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_PITCH_RATE'.
enum
{
  j3224_v2x_msgs__msg__PitchRate__MIN_PITCH_RATE = -32767
};

/// Constant 'MAX_PITCH_RATE'.
enum
{
  j3224_v2x_msgs__msg__PitchRate__MAX_PITCH_RATE = 32766
};

/// Constant 'UNAVAILABLE'.
enum
{
  j3224_v2x_msgs__msg__PitchRate__UNAVAILABLE = 32767
};

// Struct defined in msg/PitchRate in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__PitchRate
{
  int16_t pitch_rate;
} j3224_v2x_msgs__msg__PitchRate;

// Struct for a sequence of j3224_v2x_msgs__msg__PitchRate.
typedef struct j3224_v2x_msgs__msg__PitchRate__Sequence
{
  j3224_v2x_msgs__msg__PitchRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__PitchRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__PITCH_RATE__STRUCT_H_
