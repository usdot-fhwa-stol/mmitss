// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/DetectedObjectOptionalData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DET_VEH'.
enum
{
  j3224_v2x_msgs__msg__DetectedObjectOptionalData__DET_VEH = 0
};

/// Constant 'DET_VRU'.
enum
{
  j3224_v2x_msgs__msg__DetectedObjectOptionalData__DET_VRU = 1
};

/// Constant 'DET_OBST'.
enum
{
  j3224_v2x_msgs__msg__DetectedObjectOptionalData__DET_OBST = 2
};

// Include directives for member types
// Member 'det_veh'
#include "j3224_v2x_msgs/msg/detail/detected_vehicle_data__struct.h"
// Member 'det_vru'
#include "j3224_v2x_msgs/msg/detail/detected_vru_data__struct.h"
// Member 'det_obst'
#include "j3224_v2x_msgs/msg/detail/detected_obstacle_data__struct.h"

// Struct defined in msg/DetectedObjectOptionalData in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__DetectedObjectOptionalData
{
  uint8_t choice;
  j3224_v2x_msgs__msg__DetectedVehicleData det_veh;
  j3224_v2x_msgs__msg__DetectedVRUData det_vru;
  j3224_v2x_msgs__msg__DetectedObstacleData det_obst;
} j3224_v2x_msgs__msg__DetectedObjectOptionalData;

// Struct for a sequence of j3224_v2x_msgs__msg__DetectedObjectOptionalData.
typedef struct j3224_v2x_msgs__msg__DetectedObjectOptionalData__Sequence
{
  j3224_v2x_msgs__msg__DetectedObjectOptionalData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__DetectedObjectOptionalData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__STRUCT_H_
