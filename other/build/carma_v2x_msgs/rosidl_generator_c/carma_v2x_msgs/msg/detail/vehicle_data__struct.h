// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_HEIGHT'.
enum
{
  carma_v2x_msgs__msg__VehicleData__HAS_HEIGHT = 1
};

/// Constant 'HAS_BUMPERS'.
enum
{
  carma_v2x_msgs__msg__VehicleData__HAS_BUMPERS = 2
};

/// Constant 'HAS_MASS'.
enum
{
  carma_v2x_msgs__msg__VehicleData__HAS_MASS = 4
};

/// Constant 'HAS_TRAILER_WEIGHT'.
enum
{
  carma_v2x_msgs__msg__VehicleData__HAS_TRAILER_WEIGHT = 8
};

// Include directives for member types
// Member 'height'
#include "carma_v2x_msgs/msg/detail/vehicle_height__struct.h"
// Member 'bumpers'
#include "carma_v2x_msgs/msg/detail/bumper_heights__struct.h"
// Member 'mass'
#include "carma_v2x_msgs/msg/detail/vehicle_mass__struct.h"
// Member 'trailer_weight'
#include "carma_v2x_msgs/msg/detail/trailer_weight__struct.h"

// Struct defined in msg/VehicleData in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__VehicleData
{
  uint16_t presence_vector;
  carma_v2x_msgs__msg__VehicleHeight height;
  carma_v2x_msgs__msg__BumperHeights bumpers;
  carma_v2x_msgs__msg__VehicleMass mass;
  carma_v2x_msgs__msg__TrailerWeight trailer_weight;
} carma_v2x_msgs__msg__VehicleData;

// Struct for a sequence of carma_v2x_msgs__msg__VehicleData.
typedef struct carma_v2x_msgs__msg__VehicleData__Sequence
{
  carma_v2x_msgs__msg__VehicleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__VehicleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
