// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'oldest'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'offsets'
#include "carma_v2x_msgs/msg/detail/offset_point__struct.h"

// Struct defined in msg/TrafficControlBounds in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TrafficControlBounds
{
  builtin_interfaces__msg__Time oldest;
  double reflon;
  double reflat;
  carma_v2x_msgs__msg__OffsetPoint offsets[3];
} carma_v2x_msgs__msg__TrafficControlBounds;

// Struct for a sequence of carma_v2x_msgs__msg__TrafficControlBounds.
typedef struct carma_v2x_msgs__msg__TrafficControlBounds__Sequence
{
  carma_v2x_msgs__msg__TrafficControlBounds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TrafficControlBounds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_H_
