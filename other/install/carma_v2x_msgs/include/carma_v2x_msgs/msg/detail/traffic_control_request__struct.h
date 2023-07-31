// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TrafficControlRequest.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESERVED'.
enum
{
  carma_v2x_msgs__msg__TrafficControlRequest__RESERVED = 0
};

/// Constant 'TCRV01'.
enum
{
  carma_v2x_msgs__msg__TrafficControlRequest__TCRV01 = 1
};

// Include directives for member types
// Member 'tcr_v01'
#include "carma_v2x_msgs/msg/detail/traffic_control_request_v01__struct.h"

// Struct defined in msg/TrafficControlRequest in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TrafficControlRequest
{
  uint8_t choice;
  carma_v2x_msgs__msg__TrafficControlRequestV01 tcr_v01;
} carma_v2x_msgs__msg__TrafficControlRequest;

// Struct for a sequence of carma_v2x_msgs__msg__TrafficControlRequest.
typedef struct carma_v2x_msgs__msg__TrafficControlRequest__Sequence
{
  carma_v2x_msgs__msg__TrafficControlRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TrafficControlRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__STRUCT_H_
