// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/MobilityOperation.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_OPERATION__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_OPERATION__STRUCT_H_

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

// Struct defined in msg/MobilityOperation in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__MobilityOperation
{
  carma_v2x_msgs__msg__MobilityHeader m_header;
  rosidl_runtime_c__String strategy;
  rosidl_runtime_c__String strategy_params;
} carma_v2x_msgs__msg__MobilityOperation;

// Struct for a sequence of carma_v2x_msgs__msg__MobilityOperation.
typedef struct carma_v2x_msgs__msg__MobilityOperation__Sequence
{
  carma_v2x_msgs__msg__MobilityOperation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__MobilityOperation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_OPERATION__STRUCT_H_
