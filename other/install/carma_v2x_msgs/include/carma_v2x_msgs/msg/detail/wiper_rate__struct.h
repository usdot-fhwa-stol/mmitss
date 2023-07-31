// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/WiperRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WIPER_RATE_MIN'.
static const float carma_v2x_msgs__msg__WiperRate__WIPER_RATE_MIN = 0.0f;

/// Constant 'WIPER_RATE_MAX'.
static const float carma_v2x_msgs__msg__WiperRate__WIPER_RATE_MAX = 2.12f;

// Struct defined in msg/WiperRate in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__WiperRate
{
  float wiper_rate;
} carma_v2x_msgs__msg__WiperRate;

// Struct for a sequence of carma_v2x_msgs__msg__WiperRate.
typedef struct carma_v2x_msgs__msg__WiperRate__Sequence
{
  carma_v2x_msgs__msg__WiperRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__WiperRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_H_
