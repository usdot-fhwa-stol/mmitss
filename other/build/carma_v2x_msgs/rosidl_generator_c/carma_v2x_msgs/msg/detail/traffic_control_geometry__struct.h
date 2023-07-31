// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'proj'
// Member 'datum'
#include "rosidl_runtime_c/string.h"
// Member 'reftime'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'nodes'
#include "carma_v2x_msgs/msg/detail/path_node__struct.h"

// Struct defined in msg/TrafficControlGeometry in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TrafficControlGeometry
{
  rosidl_runtime_c__String proj;
  rosidl_runtime_c__String datum;
  builtin_interfaces__msg__Time reftime;
  double reflon;
  double reflat;
  float refelv;
  float heading;
  carma_v2x_msgs__msg__PathNode__Sequence nodes;
} carma_v2x_msgs__msg__TrafficControlGeometry;

// Struct for a sequence of carma_v2x_msgs__msg__TrafficControlGeometry.
typedef struct carma_v2x_msgs__msg__TrafficControlGeometry__Sequence
{
  carma_v2x_msgs__msg__TrafficControlGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TrafficControlGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_H_
