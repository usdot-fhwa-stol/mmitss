// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_

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
#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__struct.h"
// Member 'ref_point'
#include "j2735_v2x_msgs/msg/detail/position3_d__struct.h"
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.h"
// Member 'road_lane_set'
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__struct.h"

// Struct defined in msg/RoadSegment in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__RoadSegment
{
  rosidl_runtime_c__String name;
  bool name_exists;
  j2735_v2x_msgs__msg__RoadSegmentReferenceID id;
  uint8_t revision;
  j2735_v2x_msgs__msg__Position3D ref_point;
  uint16_t lane_width;
  bool lane_width_exists;
  j2735_v2x_msgs__msg__SpeedLimitList speed_limits;
  bool speed_limits_exists;
  j2735_v2x_msgs__msg__RoadLaneSetList road_lane_set;
} j2735_v2x_msgs__msg__RoadSegment;

// Struct for a sequence of j2735_v2x_msgs__msg__RoadSegment.
typedef struct j2735_v2x_msgs__msg__RoadSegment__Sequence
{
  j2735_v2x_msgs__msg__RoadSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RoadSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_
