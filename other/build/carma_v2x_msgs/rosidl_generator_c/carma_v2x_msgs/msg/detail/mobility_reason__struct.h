// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/MobilityReason.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REASON__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REASON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  carma_v2x_msgs__msg__MobilityReason__UNKNOWN = 0
};

/// Constant 'ACCEPTED'.
enum
{
  carma_v2x_msgs__msg__MobilityReason__ACCEPTED = 1
};

/// Constant 'SAFETY_VIOLATION'.
enum
{
  carma_v2x_msgs__msg__MobilityReason__SAFETY_VIOLATION = 2
};

/// Constant 'INSUFFICIENT_TIME'.
enum
{
  carma_v2x_msgs__msg__MobilityReason__INSUFFICIENT_TIME = 3
};

/// Constant 'PLAN_CONFLICT'.
enum
{
  carma_v2x_msgs__msg__MobilityReason__PLAN_CONFLICT = 4
};

/// Constant 'OTHERWISE_ENGAGED'.
enum
{
  carma_v2x_msgs__msg__MobilityReason__OTHERWISE_ENGAGED = 5
};

/// Constant 'INSUFFICIENT_URGENCY'.
enum
{
  carma_v2x_msgs__msg__MobilityReason__INSUFFICIENT_URGENCY = 6
};

/// Constant 'PLAN_UNCLEAR'.
enum
{
  carma_v2x_msgs__msg__MobilityReason__PLAN_UNCLEAR = 7
};

/// Constant 'OTHER'.
enum
{
  carma_v2x_msgs__msg__MobilityReason__OTHER = 8
};

// Struct defined in msg/MobilityReason in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__MobilityReason
{
  uint8_t reason;
} carma_v2x_msgs__msg__MobilityReason;

// Struct for a sequence of carma_v2x_msgs__msg__MobilityReason.
typedef struct carma_v2x_msgs__msg__MobilityReason__Sequence
{
  carma_v2x_msgs__msg__MobilityReason * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__MobilityReason__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REASON__STRUCT_H_
