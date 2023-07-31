// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vclasses'
#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__struct.h"
// Member 'schedule'
#include "carma_v2x_msgs/msg/detail/traffic_control_schedule__struct.h"
// Member 'detail'
#include "carma_v2x_msgs/msg/detail/traffic_control_detail__struct.h"

// Struct defined in msg/TrafficControlParams in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TrafficControlParams
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence vclasses;
  carma_v2x_msgs__msg__TrafficControlSchedule schedule;
  bool regulatory;
  carma_v2x_msgs__msg__TrafficControlDetail detail;
} carma_v2x_msgs__msg__TrafficControlParams;

// Struct for a sequence of carma_v2x_msgs__msg__TrafficControlParams.
typedef struct carma_v2x_msgs__msg__TrafficControlParams__Sequence
{
  carma_v2x_msgs__msg__TrafficControlParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TrafficControlParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__STRUCT_H_
