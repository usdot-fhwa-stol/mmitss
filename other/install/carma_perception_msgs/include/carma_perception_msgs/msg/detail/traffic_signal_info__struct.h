// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_perception_msgs:msg/TrafficSignalInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__STRUCT_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNLIT'.
enum
{
  carma_perception_msgs__msg__TrafficSignalInfo__UNLIT = 0
};

/// Constant 'GREEN'.
enum
{
  carma_perception_msgs__msg__TrafficSignalInfo__GREEN = 1
};

/// Constant 'YELLOW'.
enum
{
  carma_perception_msgs__msg__TrafficSignalInfo__YELLOW = 2
};

/// Constant 'RED'.
enum
{
  carma_perception_msgs__msg__TrafficSignalInfo__RED = 3
};

/// Constant 'FLASHING_GREEN'.
enum
{
  carma_perception_msgs__msg__TrafficSignalInfo__FLASHING_GREEN = 4
};

/// Constant 'FLASHING_YELLOW'.
enum
{
  carma_perception_msgs__msg__TrafficSignalInfo__FLASHING_YELLOW = 5
};

/// Constant 'FLASHING_RED'.
enum
{
  carma_perception_msgs__msg__TrafficSignalInfo__FLASHING_RED = 6
};

// Struct defined in msg/TrafficSignalInfo in the package carma_perception_msgs.
typedef struct carma_perception_msgs__msg__TrafficSignalInfo
{
  uint16_t intersection_id;
  uint8_t state;
  uint16_t remaining_time;
  uint16_t lane_id;
  float remaining_distance;
} carma_perception_msgs__msg__TrafficSignalInfo;

// Struct for a sequence of carma_perception_msgs__msg__TrafficSignalInfo.
typedef struct carma_perception_msgs__msg__TrafficSignalInfo__Sequence
{
  carma_perception_msgs__msg__TrafficSignalInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_perception_msgs__msg__TrafficSignalInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__STRUCT_H_
