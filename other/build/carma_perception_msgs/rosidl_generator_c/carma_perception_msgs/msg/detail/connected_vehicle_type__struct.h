// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_perception_msgs:msg/ConnectedVehicleType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__STRUCT_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_CONNECTED'.
enum
{
  carma_perception_msgs__msg__ConnectedVehicleType__NOT_CONNECTED = 0
};

/// Constant 'CONNECTED'.
enum
{
  carma_perception_msgs__msg__ConnectedVehicleType__CONNECTED = 1
};

/// Constant 'CONNECTED_AND_AUTOMATED'.
enum
{
  carma_perception_msgs__msg__ConnectedVehicleType__CONNECTED_AND_AUTOMATED = 2
};

// Struct defined in msg/ConnectedVehicleType in the package carma_perception_msgs.
typedef struct carma_perception_msgs__msg__ConnectedVehicleType
{
  uint8_t type;
} carma_perception_msgs__msg__ConnectedVehicleType;

// Struct for a sequence of carma_perception_msgs__msg__ConnectedVehicleType.
typedef struct carma_perception_msgs__msg__ConnectedVehicleType__Sequence
{
  carma_perception_msgs__msg__ConnectedVehicleType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_perception_msgs__msg__ConnectedVehicleType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__STRUCT_H_
