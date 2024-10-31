// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/VehicleMass.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MASS_MIN'.
enum
{
  carma_v2x_msgs__msg__VehicleMass__MASS_MIN = 0ul
};

/// Constant 'MASS_MAX'.
enum
{
  carma_v2x_msgs__msg__VehicleMass__MASS_MAX = 170000ul
};

// Struct defined in msg/VehicleMass in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__VehicleMass
{
  uint32_t vehicle_mass;
  bool unavailable;
} carma_v2x_msgs__msg__VehicleMass;

// Struct for a sequence of carma_v2x_msgs__msg__VehicleMass.
typedef struct carma_v2x_msgs__msg__VehicleMass__Sequence
{
  carma_v2x_msgs__msg__VehicleMass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__VehicleMass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_H_
