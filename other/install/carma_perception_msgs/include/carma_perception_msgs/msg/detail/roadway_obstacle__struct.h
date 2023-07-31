// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_perception_msgs:msg/RoadwayObstacle.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__STRUCT_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object'
#include "carma_perception_msgs/msg/detail/external_object__struct.h"
// Member 'connected_vehicle_type'
#include "carma_perception_msgs/msg/detail/connected_vehicle_type__struct.h"
// Member 'predicted_lanelet_ids'
// Member 'predicted_lanelet_id_confidences'
// Member 'predicted_cross_tracks'
// Member 'predicted_cross_track_confidences'
// Member 'predicted_down_tracks'
// Member 'predicted_down_track_confidences'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/RoadwayObstacle in the package carma_perception_msgs.
typedef struct carma_perception_msgs__msg__RoadwayObstacle
{
  carma_perception_msgs__msg__ExternalObject object;
  carma_perception_msgs__msg__ConnectedVehicleType connected_vehicle_type;
  int64_t lanelet_id;
  double cross_track;
  double down_track;
  rosidl_runtime_c__int64__Sequence predicted_lanelet_ids;
  rosidl_runtime_c__double__Sequence predicted_lanelet_id_confidences;
  rosidl_runtime_c__double__Sequence predicted_cross_tracks;
  rosidl_runtime_c__double__Sequence predicted_cross_track_confidences;
  rosidl_runtime_c__double__Sequence predicted_down_tracks;
  rosidl_runtime_c__double__Sequence predicted_down_track_confidences;
} carma_perception_msgs__msg__RoadwayObstacle;

// Struct for a sequence of carma_perception_msgs__msg__RoadwayObstacle.
typedef struct carma_perception_msgs__msg__RoadwayObstacle__Sequence
{
  carma_perception_msgs__msg__RoadwayObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_perception_msgs__msg__RoadwayObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__STRUCT_H_
