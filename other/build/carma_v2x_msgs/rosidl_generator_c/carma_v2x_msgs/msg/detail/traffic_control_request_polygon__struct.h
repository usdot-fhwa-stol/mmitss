// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TrafficControlRequestPolygon.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_POLYGON__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_POLYGON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polygon_list'
#include "carma_v2x_msgs/msg/detail/position3_d__struct.h"

// Struct defined in msg/TrafficControlRequestPolygon in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TrafficControlRequestPolygon
{
  carma_v2x_msgs__msg__Position3D__Sequence polygon_list;
} carma_v2x_msgs__msg__TrafficControlRequestPolygon;

// Struct for a sequence of carma_v2x_msgs__msg__TrafficControlRequestPolygon.
typedef struct carma_v2x_msgs__msg__TrafficControlRequestPolygon__Sequence
{
  carma_v2x_msgs__msg__TrafficControlRequestPolygon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TrafficControlRequestPolygon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_POLYGON__STRUCT_H_
