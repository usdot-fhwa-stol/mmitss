// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__struct.h"
// Member 'speed'
#include "carma_v2x_msgs/msg/detail/velocity__struct.h"

// Struct defined in msg/TransmissionAndSpeed in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TransmissionAndSpeed
{
  j2735_v2x_msgs__msg__TransmissionState transmission;
  carma_v2x_msgs__msg__Velocity speed;
} carma_v2x_msgs__msg__TransmissionAndSpeed;

// Struct for a sequence of carma_v2x_msgs__msg__TransmissionAndSpeed.
typedef struct carma_v2x_msgs__msg__TransmissionAndSpeed__Sequence
{
  carma_v2x_msgs__msg__TransmissionAndSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TransmissionAndSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_H_
