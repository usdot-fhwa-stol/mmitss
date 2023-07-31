// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/MobilityResponse.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__STRUCT_H_

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
// Member 'plan_type'
#include "carma_v2x_msgs/msg/detail/plan_type__struct.h"
// Member 'reason'
#include "carma_v2x_msgs/msg/detail/mobility_reason__struct.h"
// Member 'repeat'
#include "carma_v2x_msgs/msg/detail/mobility_repeat__struct.h"

// Struct defined in msg/MobilityResponse in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__MobilityResponse
{
  carma_v2x_msgs__msg__MobilityHeader m_header;
  uint16_t urgency;
  bool is_accepted;
  carma_v2x_msgs__msg__PlanType plan_type;
  carma_v2x_msgs__msg__MobilityReason reason;
  carma_v2x_msgs__msg__MobilityRepeat repeat;
} carma_v2x_msgs__msg__MobilityResponse;

// Struct for a sequence of carma_v2x_msgs__msg__MobilityResponse.
typedef struct carma_v2x_msgs__msg__MobilityResponse__Sequence
{
  carma_v2x_msgs__msg__MobilityResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__MobilityResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__STRUCT_H_
