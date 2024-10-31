// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_EVENTS'.
enum
{
  carma_v2x_msgs__msg__VehicleSafetyExtensions__HAS_EVENTS = 1
};

/// Constant 'HAS_PATH_HISTORY'.
enum
{
  carma_v2x_msgs__msg__VehicleSafetyExtensions__HAS_PATH_HISTORY = 2
};

/// Constant 'HAS_PATH_PREDICTION'.
enum
{
  carma_v2x_msgs__msg__VehicleSafetyExtensions__HAS_PATH_PREDICTION = 4
};

/// Constant 'HAS_LIGHTS'.
enum
{
  carma_v2x_msgs__msg__VehicleSafetyExtensions__HAS_LIGHTS = 8
};

// Include directives for member types
// Member 'events'
#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__struct.h"
// Member 'path_history'
#include "carma_v2x_msgs/msg/detail/path_history__struct.h"
// Member 'path_prediction'
#include "carma_v2x_msgs/msg/detail/path_prediction__struct.h"
// Member 'lights'
#include "j2735_v2x_msgs/msg/detail/exterior_lights__struct.h"

// Struct defined in msg/VehicleSafetyExtensions in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__VehicleSafetyExtensions
{
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__VehicleEventFlags events;
  carma_v2x_msgs__msg__PathHistory path_history;
  carma_v2x_msgs__msg__PathPrediction path_prediction;
  j2735_v2x_msgs__msg__ExteriorLights lights;
} carma_v2x_msgs__msg__VehicleSafetyExtensions;

// Struct for a sequence of carma_v2x_msgs__msg__VehicleSafetyExtensions.
typedef struct carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence
{
  carma_v2x_msgs__msg__VehicleSafetyExtensions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_H_
