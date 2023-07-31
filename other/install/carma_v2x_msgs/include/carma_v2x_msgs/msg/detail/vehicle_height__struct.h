// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/VehicleHeight.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_HEIGHT_MAX'.
static const float carma_v2x_msgs__msg__VehicleHeight__VEHICLE_HEIGHT_MAX = 6.35f;

// Struct defined in msg/VehicleHeight in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__VehicleHeight
{
  float vehicle_height;
  bool unavailable;
} carma_v2x_msgs__msg__VehicleHeight;

// Struct for a sequence of carma_v2x_msgs__msg__VehicleHeight.
typedef struct carma_v2x_msgs__msg__VehicleHeight__Sequence
{
  carma_v2x_msgs__msg__VehicleHeight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__VehicleHeight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__STRUCT_H_
