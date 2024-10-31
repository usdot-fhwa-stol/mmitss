// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/weather_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/weather_report__struct.h"
#include "j2735_v2x_msgs/msg/detail/weather_report__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__functions.h"  // road_friction
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__functions.h"  // friction
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__functions.h"  // rain_rate
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__functions.h"  // precip_situation
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__functions.h"  // is_raining
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__functions.h"  // solar_radiation

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__CoefficientOfFriction(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__CoefficientOfFriction(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, CoefficientOfFriction)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssMobileFriction(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssMobileFriction(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssMobileFriction)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipRate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipRate(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssPrecipRate)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipSituation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipSituation(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssPrecipSituation)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssPrecipYesNo)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssSolarRadiation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssSolarRadiation(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssSolarRadiation)();


using _WeatherReport__ros_msg_type = j2735_v2x_msgs__msg__WeatherReport;

static bool _WeatherReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WeatherReport__ros_msg_type * ros_message = static_cast<const _WeatherReport__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: is_raining
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssPrecipYesNo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->is_raining, cdr))
    {
      return false;
    }
  }

  // Field name: rain_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssPrecipRate
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rain_rate, cdr))
    {
      return false;
    }
  }

  // Field name: precip_situation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssPrecipSituation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->precip_situation, cdr))
    {
      return false;
    }
  }

  // Field name: solar_radiation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssSolarRadiation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->solar_radiation, cdr))
    {
      return false;
    }
  }

  // Field name: friction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssMobileFriction
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->friction, cdr))
    {
      return false;
    }
  }

  // Field name: road_friction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, CoefficientOfFriction
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->road_friction, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _WeatherReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WeatherReport__ros_msg_type * ros_message = static_cast<_WeatherReport__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: is_raining
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssPrecipYesNo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->is_raining))
    {
      return false;
    }
  }

  // Field name: rain_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssPrecipRate
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rain_rate))
    {
      return false;
    }
  }

  // Field name: precip_situation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssPrecipSituation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->precip_situation))
    {
      return false;
    }
  }

  // Field name: solar_radiation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssSolarRadiation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->solar_radiation))
    {
      return false;
    }
  }

  // Field name: friction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NTCIPEssMobileFriction
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->friction))
    {
      return false;
    }
  }

  // Field name: road_friction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, CoefficientOfFriction
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->road_friction))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__WeatherReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WeatherReport__ros_msg_type * ros_message = static_cast<const _WeatherReport__ros_msg_type *>(untyped_ros_message);
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
  // field.name is_raining

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo(
    &(ros_message->is_raining), current_alignment);
  // field.name rain_rate

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipRate(
    &(ros_message->rain_rate), current_alignment);
  // field.name precip_situation

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipSituation(
    &(ros_message->precip_situation), current_alignment);
  // field.name solar_radiation

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssSolarRadiation(
    &(ros_message->solar_radiation), current_alignment);
  // field.name friction

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NTCIPEssMobileFriction(
    &(ros_message->friction), current_alignment);
  // field.name road_friction

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__CoefficientOfFriction(
    &(ros_message->road_friction), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _WeatherReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__WeatherReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__WeatherReport(
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

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: is_raining
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo(
        full_bounded, current_alignment);
    }
  }
  // member: rain_rate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipRate(
        full_bounded, current_alignment);
    }
  }
  // member: precip_situation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssPrecipSituation(
        full_bounded, current_alignment);
    }
  }
  // member: solar_radiation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssSolarRadiation(
        full_bounded, current_alignment);
    }
  }
  // member: friction
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NTCIPEssMobileFriction(
        full_bounded, current_alignment);
    }
  }
  // member: road_friction
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__CoefficientOfFriction(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WeatherReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__WeatherReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WeatherReport = {
  "j2735_v2x_msgs::msg",
  "WeatherReport",
  _WeatherReport__cdr_serialize,
  _WeatherReport__cdr_deserialize,
  _WeatherReport__get_serialized_size,
  _WeatherReport__max_serialized_size
};

static rosidl_message_type_support_t _WeatherReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WeatherReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WeatherReport)() {
  return &_WeatherReport__type_support;
}

#if defined(__cplusplus)
}
#endif
