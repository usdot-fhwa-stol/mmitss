// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_AIR_TEMP'.
enum
{
  j2735_v2x_msgs__msg__WeatherProbe__HAS_AIR_TEMP = 1ul
};

/// Constant 'HAS_AIR_PRESSURE'.
enum
{
  j2735_v2x_msgs__msg__WeatherProbe__HAS_AIR_PRESSURE = 2
};

/// Constant 'HAS_RAIN_RATES'.
enum
{
  j2735_v2x_msgs__msg__WeatherProbe__HAS_RAIN_RATES = 4
};

// Include directives for member types
// Member 'air_temp'
#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__struct.h"
// Member 'air_pressure'
#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__struct.h"
// Member 'rain_rates'
#include "j2735_v2x_msgs/msg/detail/wiper_set__struct.h"

// Struct defined in msg/WeatherProbe in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__WeatherProbe
{
  uint32_t presence_vector;
  j2735_v2x_msgs__msg__AmbientAirTemperature air_temp;
  j2735_v2x_msgs__msg__AmbientAirPressure air_pressure;
  j2735_v2x_msgs__msg__WiperSet rain_rates;
} j2735_v2x_msgs__msg__WeatherProbe;

// Struct for a sequence of j2735_v2x_msgs__msg__WeatherProbe.
typedef struct j2735_v2x_msgs__msg__WeatherProbe__Sequence
{
  j2735_v2x_msgs__msg__WeatherProbe * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__WeatherProbe__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__STRUCT_H_
