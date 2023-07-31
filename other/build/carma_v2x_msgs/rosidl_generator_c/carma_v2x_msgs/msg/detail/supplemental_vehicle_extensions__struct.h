// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_CLASSIFICATION'.
enum
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_CLASSIFICATION = 1
};

/// Constant 'HAS_CLASS_DETAILS'.
enum
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_CLASS_DETAILS = 2
};

/// Constant 'HAS_VEHICLE_DATA'.
enum
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_VEHICLE_DATA = 4
};

/// Constant 'HAS_WEATHER_REPORT'.
enum
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_WEATHER_REPORT = 8
};

/// Constant 'HAS_WEATHER_PROBE'.
enum
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_WEATHER_PROBE = 16
};

/// Constant 'HAS_OBSTACLE'.
enum
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_OBSTACLE = 32
};

/// Constant 'HAS_STATUS'.
enum
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_STATUS = 64
};

/// Constant 'HAS_SPEED_PROFILE'.
enum
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_SPEED_PROFILE = 128
};

/// Constant 'HAS_THE_RTCM'.
enum
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_THE_RTCM = 256
};

// Include directives for member types
// Member 'classification'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__struct.h"
// Member 'class_details'
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__struct.h"
// Member 'vehicle_data'
#include "carma_v2x_msgs/msg/detail/vehicle_data__struct.h"
// Member 'weather_report'
#include "carma_v2x_msgs/msg/detail/weather_report__struct.h"
// Member 'weather_probe'
#include "carma_v2x_msgs/msg/detail/weather_probe__struct.h"
// Member 'obstacle'
#include "carma_v2x_msgs/msg/detail/obstacle_detection__struct.h"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__struct.h"
// Member 'speed_profile'
#include "carma_v2x_msgs/msg/detail/gross_speed__struct.h"
// Member 'the_rtcm'
#include "carma_v2x_msgs/msg/detail/rtcm_package__struct.h"

// Struct defined in msg/SupplementalVehicleExtensions in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__SupplementalVehicleExtensions
{
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__BasicVehicleClass classification;
  j2735_v2x_msgs__msg__VehicleClassification class_details;
  carma_v2x_msgs__msg__VehicleData vehicle_data;
  carma_v2x_msgs__msg__WeatherReport weather_report;
  carma_v2x_msgs__msg__WeatherProbe weather_probe;
  carma_v2x_msgs__msg__ObstacleDetection obstacle;
  j2735_v2x_msgs__msg__DisabledVehicle status;
  carma_v2x_msgs__msg__GrossSpeed__Sequence speed_profile;
  carma_v2x_msgs__msg__RTCMPackage the_rtcm;
} carma_v2x_msgs__msg__SupplementalVehicleExtensions;

// Struct for a sequence of carma_v2x_msgs__msg__SupplementalVehicleExtensions.
typedef struct carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence
{
  carma_v2x_msgs__msg__SupplementalVehicleExtensions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__STRUCT_H_
