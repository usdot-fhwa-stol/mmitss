// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__LaneTypeAttributes__VEHICLE = 0
};

/// Constant 'CROSSWALK'.
enum
{
  j2735_v2x_msgs__msg__LaneTypeAttributes__CROSSWALK = 1
};

/// Constant 'BIKE_LANE'.
enum
{
  j2735_v2x_msgs__msg__LaneTypeAttributes__BIKE_LANE = 2
};

/// Constant 'SIDEWALK'.
enum
{
  j2735_v2x_msgs__msg__LaneTypeAttributes__SIDEWALK = 3
};

/// Constant 'MEDIAN'.
enum
{
  j2735_v2x_msgs__msg__LaneTypeAttributes__MEDIAN = 4
};

/// Constant 'STRIPING'.
enum
{
  j2735_v2x_msgs__msg__LaneTypeAttributes__STRIPING = 5
};

/// Constant 'TRACKED_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__LaneTypeAttributes__TRACKED_VEHICLE = 6
};

/// Constant 'PARKING'.
enum
{
  j2735_v2x_msgs__msg__LaneTypeAttributes__PARKING = 7
};

// Include directives for member types
// Member 'vehicle'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__struct.h"
// Member 'crosswalk'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__struct.h"
// Member 'bike_lane'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__struct.h"
// Member 'sidewalk'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__struct.h"
// Member 'median'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__struct.h"
// Member 'striping'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__struct.h"
// Member 'tracked_vehicle'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__struct.h"
// Member 'parking'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__struct.h"

// Struct defined in msg/LaneTypeAttributes in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__LaneTypeAttributes
{
  uint8_t choice;
  j2735_v2x_msgs__msg__LaneAttributesVehicle vehicle;
  j2735_v2x_msgs__msg__LaneAttributesCrosswalk crosswalk;
  j2735_v2x_msgs__msg__LaneAttributesBike bike_lane;
  j2735_v2x_msgs__msg__LaneAttributesSidewalk sidewalk;
  j2735_v2x_msgs__msg__LaneAttributesBarrier median;
  j2735_v2x_msgs__msg__LaneAttributesStriping striping;
  j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle tracked_vehicle;
  j2735_v2x_msgs__msg__LaneAttributesParking parking;
} j2735_v2x_msgs__msg__LaneTypeAttributes;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneTypeAttributes.
typedef struct j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence
{
  j2735_v2x_msgs__msg__LaneTypeAttributes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneTypeAttributes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__STRUCT_H_
