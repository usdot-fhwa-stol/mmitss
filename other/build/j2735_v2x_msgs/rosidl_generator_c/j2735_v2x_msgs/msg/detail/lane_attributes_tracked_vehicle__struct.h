// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributesTrackedVehicle.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_TRACKED_VEHICLE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_TRACKED_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LaneAttributesTrackedVehicle in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle
{
  uint16_t lane_attributes_trackedvehicle;
} j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle.
typedef struct j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__Sequence
{
  j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_TRACKED_VEHICLE__STRUCT_H_
