// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/AngularVelocityConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_PITCH_RATE_CONFIDENCE'.
enum
{
  j3224_v2x_msgs__msg__AngularVelocityConfidence__HAS_PITCH_RATE_CONFIDENCE = 1
};

/// Constant 'HAS_ROLL_RATE_CONFIDENCE'.
enum
{
  j3224_v2x_msgs__msg__AngularVelocityConfidence__HAS_ROLL_RATE_CONFIDENCE = 2
};

// Include directives for member types
// Member 'pitch_rate_confidence'
#include "j3224_v2x_msgs/msg/detail/pitch_rate_confidence__struct.h"
// Member 'roll_rate_confidence'
#include "j3224_v2x_msgs/msg/detail/roll_rate_confidence__struct.h"

// Struct defined in msg/AngularVelocityConfidence in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__AngularVelocityConfidence
{
  uint8_t presence_vector;
  j3224_v2x_msgs__msg__PitchRateConfidence pitch_rate_confidence;
  j3224_v2x_msgs__msg__RollRateConfidence roll_rate_confidence;
} j3224_v2x_msgs__msg__AngularVelocityConfidence;

// Struct for a sequence of j3224_v2x_msgs__msg__AngularVelocityConfidence.
typedef struct j3224_v2x_msgs__msg__AngularVelocityConfidence__Sequence
{
  j3224_v2x_msgs__msg__AngularVelocityConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__AngularVelocityConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__STRUCT_H_
