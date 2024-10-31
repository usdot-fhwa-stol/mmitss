// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/AmbientAirPressure.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PRESSURE_MIN'.
static const float carma_v2x_msgs__msg__AmbientAirPressure__PRESSURE_MIN = 58000.0f;

/// Constant 'PRESSURE_MAX'.
static const float carma_v2x_msgs__msg__AmbientAirPressure__PRESSURE_MAX = 108800.0f;

// Struct defined in msg/AmbientAirPressure in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__AmbientAirPressure
{
  float pressure;
  bool unavailable;
} carma_v2x_msgs__msg__AmbientAirPressure;

// Struct for a sequence of carma_v2x_msgs__msg__AmbientAirPressure.
typedef struct carma_v2x_msgs__msg__AmbientAirPressure__Sequence
{
  carma_v2x_msgs__msg__AmbientAirPressure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__AmbientAirPressure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__STRUCT_H_
