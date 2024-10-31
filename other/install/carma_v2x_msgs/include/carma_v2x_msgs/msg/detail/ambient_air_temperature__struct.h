// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/AmbientAirTemperature.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TERMPERATURE_MIN'.
static const float carma_v2x_msgs__msg__AmbientAirTemperature__TERMPERATURE_MIN = -40.0f;

/// Constant 'TEMPERATURE_MAX'.
static const float carma_v2x_msgs__msg__AmbientAirTemperature__TEMPERATURE_MAX = 150.0f;

// Struct defined in msg/AmbientAirTemperature in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__AmbientAirTemperature
{
  float temperature;
  bool unavailable;
} carma_v2x_msgs__msg__AmbientAirTemperature;

// Struct for a sequence of carma_v2x_msgs__msg__AmbientAirTemperature.
typedef struct carma_v2x_msgs__msg__AmbientAirTemperature__Sequence
{
  carma_v2x_msgs__msg__AmbientAirTemperature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__AmbientAirTemperature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__STRUCT_H_
