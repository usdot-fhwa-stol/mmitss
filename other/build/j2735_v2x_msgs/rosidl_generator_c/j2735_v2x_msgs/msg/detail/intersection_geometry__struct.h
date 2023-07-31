// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_

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
#include "j2735_v2x_msgs/msg/detail/position3_d__struct.h"
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.h"
// Member 'lane_set'
#include "j2735_v2x_msgs/msg/detail/lane_list__struct.h"
// Member 'preempt_priority_data'
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__struct.h"

// Struct defined in msg/IntersectionGeometry in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__IntersectionGeometry
{
  rosidl_runtime_c__String name;
  bool name_exists;
  j2735_v2x_msgs__msg__IntersectionReferenceID id;
  uint8_t revision;
  j2735_v2x_msgs__msg__Position3D ref_point;
  uint16_t lane_width;
  bool lane_width_exists;
  j2735_v2x_msgs__msg__SpeedLimitList speed_limits;
  bool speed_limits_exists;
  j2735_v2x_msgs__msg__LaneList lane_set;
  j2735_v2x_msgs__msg__PreemptPriorityList preempt_priority_data;
  bool preempt_priority_data_exists;
} j2735_v2x_msgs__msg__IntersectionGeometry;

// Struct for a sequence of j2735_v2x_msgs__msg__IntersectionGeometry.
typedef struct j2735_v2x_msgs__msg__IntersectionGeometry__Sequence
{
  j2735_v2x_msgs__msg__IntersectionGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__IntersectionGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
