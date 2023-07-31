// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/MobilityHeader.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_HEADER__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sender_id'
// Member 'recipient_id'
// Member 'sender_bsm_id'
// Member 'plan_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MobilityHeader in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__MobilityHeader
{
  rosidl_runtime_c__String sender_id;
  rosidl_runtime_c__String recipient_id;
  rosidl_runtime_c__String sender_bsm_id;
  rosidl_runtime_c__String plan_id;
  uint64_t timestamp;
} carma_v2x_msgs__msg__MobilityHeader;

// Struct for a sequence of carma_v2x_msgs__msg__MobilityHeader.
typedef struct carma_v2x_msgs__msg__MobilityHeader__Sequence
{
  carma_v2x_msgs__msg__MobilityHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__MobilityHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_HEADER__STRUCT_H_
