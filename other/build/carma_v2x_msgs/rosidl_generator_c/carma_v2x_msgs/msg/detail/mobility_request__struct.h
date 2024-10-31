// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/MobilityRequest.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REQUEST__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REQUEST__STRUCT_H_

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
// Member 'strategy'
// Member 'strategy_params'
#include "rosidl_runtime_c/string.h"
// Member 'plan_type'
#include "carma_v2x_msgs/msg/detail/plan_type__struct.h"
// Member 'location'
#include "carma_v2x_msgs/msg/detail/location_ecef__struct.h"
// Member 'trajectory'
#include "carma_v2x_msgs/msg/detail/trajectory__struct.h"

// Struct defined in msg/MobilityRequest in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__MobilityRequest
{
  carma_v2x_msgs__msg__MobilityHeader m_header;
  rosidl_runtime_c__String strategy;
  carma_v2x_msgs__msg__PlanType plan_type;
  uint16_t urgency;
  carma_v2x_msgs__msg__LocationECEF location;
  rosidl_runtime_c__String strategy_params;
  carma_v2x_msgs__msg__Trajectory trajectory;
  uint64_t expiration;
} carma_v2x_msgs__msg__MobilityRequest;

// Struct for a sequence of carma_v2x_msgs__msg__MobilityRequest.
typedef struct carma_v2x_msgs__msg__MobilityRequest__Sequence
{
  carma_v2x_msgs__msg__MobilityRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__MobilityRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REQUEST__STRUCT_H_
