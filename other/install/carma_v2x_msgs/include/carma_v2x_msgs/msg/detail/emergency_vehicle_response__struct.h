// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/EmergencyVehicleResponse.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'm_header'
#include "carma_v2x_msgs/msg/detail/mobility_header__struct.h"
// Member 'reason'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EmergencyVehicleResponse in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__EmergencyVehicleResponse
{
  carma_v2x_msgs__msg__MobilityHeader m_header;
  bool can_change_lanes;
  rosidl_runtime_c__String reason;
  bool reason_exists;
} carma_v2x_msgs__msg__EmergencyVehicleResponse;

// Struct for a sequence of carma_v2x_msgs__msg__EmergencyVehicleResponse.
typedef struct carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence
{
  carma_v2x_msgs__msg__EmergencyVehicleResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__STRUCT_H_
