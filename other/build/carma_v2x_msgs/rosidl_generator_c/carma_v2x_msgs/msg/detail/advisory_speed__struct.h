// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_UNAVAILABLE'.
static const float carma_v2x_msgs__msg__AdvisorySpeed__SPEED_UNAVAILABLE = 50.0f;

/// Constant 'DISTANCE_UNKNOWN'.
enum
{
  carma_v2x_msgs__msg__AdvisorySpeed__DISTANCE_UNKNOWN = 0
};

// Include directives for member types
// Member 'type'
#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__struct.h"
// Member 'confidence'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__struct.h"

// Struct defined in msg/AdvisorySpeed in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__AdvisorySpeed
{
  j2735_v2x_msgs__msg__AdvisorySpeedType type;
  float speed;
  bool speed_exists;
  j2735_v2x_msgs__msg__SpeedConfidence confidence;
  uint16_t distance;
  bool distance_exists;
  uint8_t restriction_class_id;
  bool restriction_class_id_exists;
} carma_v2x_msgs__msg__AdvisorySpeed;

// Struct for a sequence of carma_v2x_msgs__msg__AdvisorySpeed.
typedef struct carma_v2x_msgs__msg__AdvisorySpeed__Sequence
{
  carma_v2x_msgs__msg__AdvisorySpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__AdvisorySpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_
