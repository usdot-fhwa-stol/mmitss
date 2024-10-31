// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_WIDTH_MAX'.
static const float carma_v2x_msgs__msg__VehicleLength__VEHICLE_WIDTH_MAX = 40.95f;

// Struct defined in msg/VehicleLength in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__VehicleLength
{
  uint16_t vehicle_length;
  bool unavailable;
} carma_v2x_msgs__msg__VehicleLength;

// Struct for a sequence of carma_v2x_msgs__msg__VehicleLength.
typedef struct carma_v2x_msgs__msg__VehicleLength__Sequence
{
  carma_v2x_msgs__msg__VehicleLength * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__VehicleLength__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_
