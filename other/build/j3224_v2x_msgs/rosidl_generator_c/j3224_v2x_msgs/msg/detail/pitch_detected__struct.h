// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/PitchDetected.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__PITCH_DETECTED__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__PITCH_DETECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_PITCH_DETECTED'.
enum
{
  j3224_v2x_msgs__msg__PitchDetected__MIN_PITCH_DETECTED = -7200
};

/// Constant 'MAX_PITCH_DETECTED'.
enum
{
  j3224_v2x_msgs__msg__PitchDetected__MAX_PITCH_DETECTED = 7200
};

// Struct defined in msg/PitchDetected in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__PitchDetected
{
  int16_t pitch_detected;
} j3224_v2x_msgs__msg__PitchDetected;

// Struct for a sequence of j3224_v2x_msgs__msg__PitchDetected.
typedef struct j3224_v2x_msgs__msg__PitchDetected__Sequence
{
  j3224_v2x_msgs__msg__PitchDetected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__PitchDetected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__PITCH_DETECTED__STRUCT_H_
