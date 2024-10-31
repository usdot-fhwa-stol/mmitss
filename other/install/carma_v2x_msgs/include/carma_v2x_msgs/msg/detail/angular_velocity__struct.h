// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/AngularVelocity.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pitch_rate'
#include "carma_v2x_msgs/msg/detail/pitch_rate__struct.h"
// Member 'roll_rate'
#include "carma_v2x_msgs/msg/detail/roll_rate__struct.h"

// Struct defined in msg/AngularVelocity in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__AngularVelocity
{
  carma_v2x_msgs__msg__PitchRate pitch_rate;
  carma_v2x_msgs__msg__RollRate roll_rate;
} carma_v2x_msgs__msg__AngularVelocity;

// Struct for a sequence of carma_v2x_msgs__msg__AngularVelocity.
typedef struct carma_v2x_msgs__msg__AngularVelocity__Sequence
{
  carma_v2x_msgs__msg__AngularVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__AngularVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__STRUCT_H_
