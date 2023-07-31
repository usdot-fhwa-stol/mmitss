// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/VehicleWidth.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_WIDTH_MAX'.
static const float carma_v2x_msgs__msg__VehicleWidth__VEHICLE_WIDTH_MAX = 10.23f;

// Struct defined in msg/VehicleWidth in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__VehicleWidth
{
  float vehicle_width;
  bool unavailable;
} carma_v2x_msgs__msg__VehicleWidth;

// Struct for a sequence of carma_v2x_msgs__msg__VehicleWidth.
typedef struct carma_v2x_msgs__msg__VehicleWidth__Sequence
{
  carma_v2x_msgs__msg__VehicleWidth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__VehicleWidth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_
