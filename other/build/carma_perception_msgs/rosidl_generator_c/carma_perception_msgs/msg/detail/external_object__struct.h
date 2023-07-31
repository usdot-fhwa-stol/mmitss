// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_perception_msgs:msg/ExternalObject.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT__STRUCT_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ID_PRESENCE_VECTOR'.
enum
{
  carma_perception_msgs__msg__ExternalObject__ID_PRESENCE_VECTOR = 1
};

/// Constant 'POSE_PRESENCE_VECTOR'.
enum
{
  carma_perception_msgs__msg__ExternalObject__POSE_PRESENCE_VECTOR = 2
};

/// Constant 'VELOCITY_PRESENCE_VECTOR'.
enum
{
  carma_perception_msgs__msg__ExternalObject__VELOCITY_PRESENCE_VECTOR = 4
};

/// Constant 'VELOCITY_INST_PRESENCE_VECTOR'.
enum
{
  carma_perception_msgs__msg__ExternalObject__VELOCITY_INST_PRESENCE_VECTOR = 8
};

/// Constant 'SIZE_PRESENCE_VECTOR'.
enum
{
  carma_perception_msgs__msg__ExternalObject__SIZE_PRESENCE_VECTOR = 16
};

/// Constant 'CONFIDENCE_PRESENCE_VECTOR'.
enum
{
  carma_perception_msgs__msg__ExternalObject__CONFIDENCE_PRESENCE_VECTOR = 32
};

/// Constant 'OBJECT_TYPE_PRESENCE_VECTOR'.
enum
{
  carma_perception_msgs__msg__ExternalObject__OBJECT_TYPE_PRESENCE_VECTOR = 64
};

/// Constant 'BSM_ID_PRESENCE_VECTOR'.
enum
{
  carma_perception_msgs__msg__ExternalObject__BSM_ID_PRESENCE_VECTOR = 128
};

/// Constant 'DYNAMIC_OBJ_PRESENCE'.
enum
{
  carma_perception_msgs__msg__ExternalObject__DYNAMIC_OBJ_PRESENCE = 256
};

/// Constant 'PREDICTION_PRESENCE_VECTOR'.
enum
{
  carma_perception_msgs__msg__ExternalObject__PREDICTION_PRESENCE_VECTOR = 512
};

/// Constant 'UNKNOWN'.
enum
{
  carma_perception_msgs__msg__ExternalObject__UNKNOWN = 0
};

/// Constant 'SMALL_VEHICLE'.
enum
{
  carma_perception_msgs__msg__ExternalObject__SMALL_VEHICLE = 1
};

/// Constant 'LARGE_VEHICLE'.
enum
{
  carma_perception_msgs__msg__ExternalObject__LARGE_VEHICLE = 2
};

/// Constant 'MOTORCYCLE'.
enum
{
  carma_perception_msgs__msg__ExternalObject__MOTORCYCLE = 3
};

/// Constant 'PEDESTRIAN'.
enum
{
  carma_perception_msgs__msg__ExternalObject__PEDESTRIAN = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'bsm_id'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'velocity'
// Member 'velocity_inst'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'predictions'
#include "carma_perception_msgs/msg/detail/predicted_state__struct.h"

// Struct defined in msg/ExternalObject in the package carma_perception_msgs.
typedef struct carma_perception_msgs__msg__ExternalObject
{
  std_msgs__msg__Header header;
  uint16_t presence_vector;
  uint32_t id;
  rosidl_runtime_c__uint8__Sequence bsm_id;
  geometry_msgs__msg__PoseWithCovariance pose;
  geometry_msgs__msg__TwistWithCovariance velocity;
  geometry_msgs__msg__TwistWithCovariance velocity_inst;
  geometry_msgs__msg__Vector3 size;
  double confidence;
  uint8_t object_type;
  bool dynamic_obj;
  carma_perception_msgs__msg__PredictedState__Sequence predictions;
} carma_perception_msgs__msg__ExternalObject;

// Struct for a sequence of carma_perception_msgs__msg__ExternalObject.
typedef struct carma_perception_msgs__msg__ExternalObject__Sequence
{
  carma_perception_msgs__msg__ExternalObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_perception_msgs__msg__ExternalObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT__STRUCT_H_
