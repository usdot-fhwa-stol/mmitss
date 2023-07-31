// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__STRUCT_H_

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
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__struct.h"
// Member 'detail'
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__struct.h"

// Struct defined in msg/TrafficControlParams in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TrafficControlParams
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence vclasses;
  j2735_v2x_msgs__msg__TrafficControlSchedule schedule;
  bool regulatory;
  j2735_v2x_msgs__msg__TrafficControlDetail detail;
} j2735_v2x_msgs__msg__TrafficControlParams;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlParams.
typedef struct j2735_v2x_msgs__msg__TrafficControlParams__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PARAMS__STRUCT_H_
