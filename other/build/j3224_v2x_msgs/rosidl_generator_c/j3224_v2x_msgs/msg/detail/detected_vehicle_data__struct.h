// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/DetectedVehicleData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_LIGHTS'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_LIGHTS = 1
};

/// Constant 'HAS_VEH_ATTITUDE'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_VEH_ATTITUDE = 2
};

/// Constant 'HAS_VEH_ATTITUDE_CONFIDENCE'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_VEH_ATTITUDE_CONFIDENCE = 4
};

/// Constant 'HAS_ANG_VEL'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_ANG_VEL = 8
};

/// Constant 'HAS_ANG_VEL_CONFIDENCE'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_ANG_VEL_CONFIDENCE = 16
};

/// Constant 'HAS_SIZE'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_SIZE = 32
};

/// Constant 'HAS_HEIGHT'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_HEIGHT = 64
};

/// Constant 'HAS_VEHICLE_SIZE_CONFIDENCE'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_VEHICLE_SIZE_CONFIDENCE = 128
};

/// Constant 'HAS_VEHICLE_CLASS'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_VEHICLE_CLASS = 256
};

/// Constant 'HAS_CLASS_CONF'.
enum
{
  j3224_v2x_msgs__msg__DetectedVehicleData__HAS_CLASS_CONF = 512
};

// Include directives for member types
// Member 'lights'
#include "j2735_v2x_msgs/msg/detail/exterior_lights__struct.h"
// Member 'veh_attitude'
#include "j3224_v2x_msgs/msg/detail/attitude__struct.h"
// Member 'veh_attitude_confidence'
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__struct.h"
// Member 'veh_ang_vel'
#include "j3224_v2x_msgs/msg/detail/angular_velocity__struct.h"
// Member 'veh_ang_vel_confidence'
#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__struct.h"
// Member 'size'
#include "j2735_v2x_msgs/msg/detail/vehicle_size__struct.h"
// Member 'height'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__struct.h"
// Member 'vehicle_size_confidence'
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__struct.h"
// Member 'vehicle_class'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__struct.h"
// Member 'class_conf'
#include "j3224_v2x_msgs/msg/detail/classification_confidence__struct.h"

// Struct defined in msg/DetectedVehicleData in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__DetectedVehicleData
{
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__ExteriorLights lights;
  j3224_v2x_msgs__msg__Attitude veh_attitude;
  j3224_v2x_msgs__msg__AttitudeConfidence veh_attitude_confidence;
  j3224_v2x_msgs__msg__AngularVelocity veh_ang_vel;
  j3224_v2x_msgs__msg__AngularVelocityConfidence veh_ang_vel_confidence;
  j2735_v2x_msgs__msg__VehicleSize size;
  j2735_v2x_msgs__msg__VehicleHeight height;
  j3224_v2x_msgs__msg__VehicleSizeConfidence vehicle_size_confidence;
  j2735_v2x_msgs__msg__BasicVehicleClass vehicle_class;
  j3224_v2x_msgs__msg__ClassificationConfidence class_conf;
} j3224_v2x_msgs__msg__DetectedVehicleData;

// Struct for a sequence of j3224_v2x_msgs__msg__DetectedVehicleData.
typedef struct j3224_v2x_msgs__msg__DetectedVehicleData__Sequence
{
  j3224_v2x_msgs__msg__DetectedVehicleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__DetectedVehicleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__STRUCT_H_
