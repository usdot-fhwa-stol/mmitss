// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/VehicleSize.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_WIDTH_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__VehicleSize__VEHICLE_WIDTH_AVAILABLE = 1
};

/// Constant 'VEHICLE_LENGTH_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__VehicleSize__VEHICLE_LENGTH_AVAILABLE = 2
};

/// Constant 'VEHICLE_WIDTH_MAX'.
static const float carma_v2x_msgs__msg__VehicleSize__VEHICLE_WIDTH_MAX = 10.23f;

/// Constant 'VEHICLE_WIDTH_MIN'.
static const float carma_v2x_msgs__msg__VehicleSize__VEHICLE_WIDTH_MIN = 0.01f;

/// Constant 'VEHICLE_LENGTH_MAX'.
static const float carma_v2x_msgs__msg__VehicleSize__VEHICLE_LENGTH_MAX = 40.95f;

/// Constant 'VEHICLE_LENGTH_MIN'.
static const float carma_v2x_msgs__msg__VehicleSize__VEHICLE_LENGTH_MIN = 0.01f;

// Struct defined in msg/VehicleSize in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__VehicleSize
{
  uint16_t presence_vector;
  float vehicle_width;
  float vehicle_length;
} carma_v2x_msgs__msg__VehicleSize;

// Struct for a sequence of carma_v2x_msgs__msg__VehicleSize.
typedef struct carma_v2x_msgs__msg__VehicleSize__Sequence
{
  carma_v2x_msgs__msg__VehicleSize * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__VehicleSize__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__STRUCT_H_
