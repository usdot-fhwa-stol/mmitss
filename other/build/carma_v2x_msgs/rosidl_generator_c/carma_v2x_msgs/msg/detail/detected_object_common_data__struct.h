// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/DetectedObjectCommonData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_SPEED_Z'.
enum
{
  carma_v2x_msgs__msg__DetectedObjectCommonData__HAS_SPEED_Z = 1
};

/// Constant 'HAS_SPEED_CONFIDENCE_Z'.
enum
{
  carma_v2x_msgs__msg__DetectedObjectCommonData__HAS_SPEED_CONFIDENCE_Z = 2
};

/// Constant 'HAS_ACCEL_4_WAY'.
enum
{
  carma_v2x_msgs__msg__DetectedObjectCommonData__HAS_ACCEL_4_WAY = 4
};

/// Constant 'HAS_ACC_CFD_X'.
enum
{
  carma_v2x_msgs__msg__DetectedObjectCommonData__HAS_ACC_CFD_X = 8
};

/// Constant 'HAS_ACC_CFD_Y'.
enum
{
  carma_v2x_msgs__msg__DetectedObjectCommonData__HAS_ACC_CFD_Y = 16
};

/// Constant 'HAS_ACC_CFD_Z'.
enum
{
  carma_v2x_msgs__msg__DetectedObjectCommonData__HAS_ACC_CFD_Z = 32
};

/// Constant 'HAS_ACC_CFD_YAW'.
enum
{
  carma_v2x_msgs__msg__DetectedObjectCommonData__HAS_ACC_CFD_YAW = 64
};

// Include directives for member types
// Member 'obj_type'
#include "j3224_v2x_msgs/msg/detail/object_type__struct.h"
// Member 'obj_type_cfd'
#include "j3224_v2x_msgs/msg/detail/classification_confidence__struct.h"
// Member 'detected_id'
#include "j3224_v2x_msgs/msg/detail/object_id__struct.h"
// Member 'measurement_time'
#include "carma_v2x_msgs/msg/detail/measurement_time_offset__struct.h"
// Member 'time_confidence'
#include "j2735_v2x_msgs/msg/detail/time_confidence__struct.h"
// Member 'pos'
#include "carma_v2x_msgs/msg/detail/position_offset_xyz__struct.h"
// Member 'pos_confidence'
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__struct.h"
// Member 'speed'
// Member 'speed_z'
#include "carma_v2x_msgs/msg/detail/speed__struct.h"
// Member 'speed_confidence'
// Member 'speed_confidence_z'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__struct.h"
// Member 'heading'
#include "carma_v2x_msgs/msg/detail/heading__struct.h"
// Member 'heading_conf'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__struct.h"
// Member 'accel_4_way'
#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__struct.h"
// Member 'acc_cfd_x'
// Member 'acc_cfd_y'
// Member 'acc_cfd_z'
#include "j2735_v2x_msgs/msg/detail/acceleration_confidence__struct.h"
// Member 'acc_cfd_yaw'
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__struct.h"

// Struct defined in msg/DetectedObjectCommonData in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__DetectedObjectCommonData
{
  j3224_v2x_msgs__msg__ObjectType obj_type;
  j3224_v2x_msgs__msg__ClassificationConfidence obj_type_cfd;
  j3224_v2x_msgs__msg__ObjectID detected_id;
  carma_v2x_msgs__msg__MeasurementTimeOffset measurement_time;
  j2735_v2x_msgs__msg__TimeConfidence time_confidence;
  carma_v2x_msgs__msg__PositionOffsetXYZ pos;
  j2735_v2x_msgs__msg__PositionConfidenceSet pos_confidence;
  carma_v2x_msgs__msg__Speed speed;
  j2735_v2x_msgs__msg__SpeedConfidence speed_confidence;
  carma_v2x_msgs__msg__Heading heading;
  j2735_v2x_msgs__msg__HeadingConfidence heading_conf;
  uint8_t presence_vector;
  carma_v2x_msgs__msg__Speed speed_z;
  j2735_v2x_msgs__msg__SpeedConfidence speed_confidence_z;
  carma_v2x_msgs__msg__AccelerationSet4Way accel_4_way;
  j2735_v2x_msgs__msg__AccelerationConfidence acc_cfd_x;
  j2735_v2x_msgs__msg__AccelerationConfidence acc_cfd_y;
  j2735_v2x_msgs__msg__AccelerationConfidence acc_cfd_z;
  j2735_v2x_msgs__msg__YawRateConfidence acc_cfd_yaw;
} carma_v2x_msgs__msg__DetectedObjectCommonData;

// Struct for a sequence of carma_v2x_msgs__msg__DetectedObjectCommonData.
typedef struct carma_v2x_msgs__msg__DetectedObjectCommonData__Sequence
{
  carma_v2x_msgs__msg__DetectedObjectCommonData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__DetectedObjectCommonData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__STRUCT_H_
