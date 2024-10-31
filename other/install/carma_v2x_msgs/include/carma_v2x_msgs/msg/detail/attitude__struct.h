// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pitch'
#include "carma_v2x_msgs/msg/detail/pitch_detected__struct.h"
// Member 'roll'
#include "carma_v2x_msgs/msg/detail/roll_detected__struct.h"
// Member 'yaw'
#include "carma_v2x_msgs/msg/detail/yaw_detected__struct.h"

// Struct defined in msg/Attitude in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__Attitude
{
  carma_v2x_msgs__msg__PitchDetected pitch;
  carma_v2x_msgs__msg__RollDetected roll;
  carma_v2x_msgs__msg__YawDetected yaw;
} carma_v2x_msgs__msg__Attitude;

// Struct for a sequence of carma_v2x_msgs__msg__Attitude.
typedef struct carma_v2x_msgs__msg__Attitude__Sequence
{
  carma_v2x_msgs__msg__Attitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__Attitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_H_
