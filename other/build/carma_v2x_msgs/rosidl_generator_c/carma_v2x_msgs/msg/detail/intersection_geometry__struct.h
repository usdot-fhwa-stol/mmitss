// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.h"
// Member 'ref_point'
#include "carma_v2x_msgs/msg/detail/position3_d__struct.h"
// Member 'speed_limits'
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__struct.h"
// Member 'lane_list'
#include "carma_v2x_msgs/msg/detail/generic_lane__struct.h"
// Member 'preempt_priority_list'
#include "j2735_v2x_msgs/msg/detail/signal_control_zone__struct.h"

// Struct defined in msg/IntersectionGeometry in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__IntersectionGeometry
{
  rosidl_runtime_c__String name;
  bool name_exists;
  j2735_v2x_msgs__msg__IntersectionReferenceID id;
  uint8_t revision;
  carma_v2x_msgs__msg__Position3D ref_point;
  float lane_width;
  bool lane_width_exists;
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence speed_limits;
  bool speed_limits_exists;
  carma_v2x_msgs__msg__GenericLane__Sequence lane_list;
  j2735_v2x_msgs__msg__SignalControlZone__Sequence preempt_priority_list;
  bool preempt_priority_data_exists;
} carma_v2x_msgs__msg__IntersectionGeometry;

// Struct for a sequence of carma_v2x_msgs__msg__IntersectionGeometry.
typedef struct carma_v2x_msgs__msg__IntersectionGeometry__Sequence
{
  carma_v2x_msgs__msg__IntersectionGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__IntersectionGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
