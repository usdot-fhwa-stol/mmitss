// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/weather_probe__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/weather_probe__struct.h"
#include "j2735_v2x_msgs/msg/detail/weather_probe__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__functions.h"  // air_pressure
#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__functions.h"  // air_temp
#include "j2735_v2x_msgs/msg/detail/wiper_set__functions.h"  // rain_rates

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__AmbientAirPressure(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__AmbientAirPressure(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AmbientAirPressure)();
size_t get_serialized_size_j2735_v2x_msgs__msg__AmbientAirTemperature(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__AmbientAirTemperature(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AmbientAirTemperature)();
size_t get_serialized_size_j2735_v2x_msgs__msg__WiperSet(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__WiperSet(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperSet)();


using _WeatherProbe__ros_msg_type = j2735_v2x_msgs__msg__WeatherProbe;

static bool _WeatherProbe__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WeatherProbe__ros_msg_type * ros_message = static_cast<const _WeatherProbe__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: air_temp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AmbientAirTemperature
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->air_temp, cdr))
    {
      return false;
    }
  }

  // Field name: air_pressure
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AmbientAirPressure
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->air_pressure, cdr))
    {
      return false;
    }
  }

  // Field name: rain_rates
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperSet
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rain_rates, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _WeatherProbe__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WeatherProbe__ros_msg_type * ros_message = static_cast<_WeatherProbe__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: air_temp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AmbientAirTemperature
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->air_temp))
    {
      return false;
    }
  }

  // Field name: air_pressure
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AmbientAirPressure
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->air_pressure))
    {
      return false;
    }
  }

  // Field name: rain_rates
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperSet
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rain_rates))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__WeatherProbe(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WeatherProbe__ros_msg_type * ros_message = static_cast<const _WeatherProbe__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name air_temp

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AmbientAirTemperature(
    &(ros_message->air_temp), current_alignment);
  // field.name air_pressure

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AmbientAirPressure(
    &(ros_message->air_pressure), current_alignment);
  // field.name rain_rates

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__WiperSet(
    &(ros_message->rain_rates), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _WeatherProbe__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__WeatherProbe(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__WeatherProbe(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: air_temp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AmbientAirTemperature(
        full_bounded, current_alignment);
    }
  }
  // member: air_pressure
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AmbientAirPressure(
        full_bounded, current_alignment);
    }
  }
  // member: rain_rates
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__WiperSet(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WeatherProbe__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__WeatherProbe(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WeatherProbe = {
  "j2735_v2x_msgs::msg",
  "WeatherProbe",
  _WeatherProbe__cdr_serialize,
  _WeatherProbe__cdr_deserialize,
  _WeatherProbe__get_serialized_size,
  _WeatherProbe__max_serialized_size
};

static rosidl_message_type_support_t _WeatherProbe__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WeatherProbe,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WeatherProbe)() {
  return &_WeatherProbe__type_support;
}

#if defined(__cplusplus)
}
#endif
