// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_RAIN_RATE'.
enum
{
  carma_v2x_msgs__msg__WeatherReport__HAS_RAIN_RATE = 1
};

/// Constant 'HAS_PRECIP_SITUATION'.
enum
{
  carma_v2x_msgs__msg__WeatherReport__HAS_PRECIP_SITUATION = 2
};

/// Constant 'HAS_SOLAR_RADIATION'.
enum
{
  carma_v2x_msgs__msg__WeatherReport__HAS_SOLAR_RADIATION = 4
};

/// Constant 'HAS_FRICTION'.
enum
{
  carma_v2x_msgs__msg__WeatherReport__HAS_FRICTION = 8
};

/// Constant 'HAS_ROAD_FRICTION'.
enum
{
  carma_v2x_msgs__msg__WeatherReport__HAS_ROAD_FRICTION = 16
};

// Include directives for member types
// Member 'is_raining'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__struct.h"
// Member 'rain_rate'
#include "carma_v2x_msgs/msg/detail/ntcip_ess_precip_rate__struct.h"
// Member 'precip_situation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__struct.h"
// Member 'solar_radiation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__struct.h"
// Member 'friction'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__struct.h"
// Member 'road_friction'
#include "carma_v2x_msgs/msg/detail/coefficient_of_friction__struct.h"

// Struct defined in msg/WeatherReport in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__WeatherReport
{
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo is_raining;
  carma_v2x_msgs__msg__NTCIPEssPrecipRate rain_rate;
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation precip_situation;
  j2735_v2x_msgs__msg__NTCIPEssSolarRadiation solar_radiation;
  j2735_v2x_msgs__msg__NTCIPEssMobileFriction friction;
  carma_v2x_msgs__msg__CoefficientOfFriction road_friction;
} carma_v2x_msgs__msg__WeatherReport;

// Struct for a sequence of carma_v2x_msgs__msg__WeatherReport.
typedef struct carma_v2x_msgs__msg__WeatherReport__Sequence
{
  carma_v2x_msgs__msg__WeatherReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__WeatherReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__STRUCT_H_
