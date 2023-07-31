// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PublicSafetyAndRoadWorkerActivity.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__UNAVAILABLE = 0
};

/// Constant 'WORKING_ON_ROAD'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__WORKING_ON_ROAD = 1
};

/// Constant 'SETTING_UP_CLOSURES'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__SETTING_UP_CLOSURES = 2
};

/// Constant 'RESPONDING_TO_EVENTS'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__RESPONDING_TO_EVENTS = 4
};

/// Constant 'DIRECTING_TRAFFIC'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__DIRECTING_TRAFFIC = 8
};

/// Constant 'OTHER_ACTIVITIES'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__OTHER_ACTIVITIES = 16
};

// Struct defined in msg/PublicSafetyAndRoadWorkerActivity in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity
{
  uint8_t activities;
} j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity;

// Struct for a sequence of j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity.
typedef struct j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__Sequence
{
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_AND_ROAD_WORKER_ACTIVITY__STRUCT_H_
