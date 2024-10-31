// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/AttitudeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pitch_confidence'
// Member 'roll_confidence'
// Member 'yaw_confidence'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__struct.h"

// Struct defined in msg/AttitudeConfidence in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__AttitudeConfidence
{
  j2735_v2x_msgs__msg__HeadingConfidence pitch_confidence;
  j2735_v2x_msgs__msg__HeadingConfidence roll_confidence;
  j2735_v2x_msgs__msg__HeadingConfidence yaw_confidence;
} j3224_v2x_msgs__msg__AttitudeConfidence;

// Struct for a sequence of j3224_v2x_msgs__msg__AttitudeConfidence.
typedef struct j3224_v2x_msgs__msg__AttitudeConfidence__Sequence
{
  j3224_v2x_msgs__msg__AttitudeConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__AttitudeConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__STRUCT_H_
