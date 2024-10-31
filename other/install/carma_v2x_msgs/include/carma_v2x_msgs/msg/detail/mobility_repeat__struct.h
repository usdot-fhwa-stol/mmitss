// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/MobilityRepeat.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REPEAT__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REPEAT__STRUCT_H_

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
  carma_v2x_msgs__msg__MobilityRepeat__UNKNOWN = 0
};

/// Constant 'REQUEST_AGAIN'.
enum
{
  carma_v2x_msgs__msg__MobilityRepeat__REQUEST_AGAIN = 1
};

/// Constant 'NEVER_REQUEST_AGAIN'.
enum
{
  carma_v2x_msgs__msg__MobilityRepeat__NEVER_REQUEST_AGAIN = 2
};

// Struct defined in msg/MobilityRepeat in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__MobilityRepeat
{
  uint8_t repeat;
} carma_v2x_msgs__msg__MobilityRepeat;

// Struct for a sequence of carma_v2x_msgs__msg__MobilityRepeat.
typedef struct carma_v2x_msgs__msg__MobilityRepeat__Sequence
{
  carma_v2x_msgs__msg__MobilityRepeat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__MobilityRepeat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REPEAT__STRUCT_H_
