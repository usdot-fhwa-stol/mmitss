// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/AmbientAirTemperature.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/ambient_air_temperature__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/ambient_air_temperature__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carma_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_serialize(
  const carma_v2x_msgs::msg::AmbientAirTemperature & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: unavailable
  cdr << (ros_message.unavailable ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::AmbientAirTemperature & ros_message)
{
  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: unavailable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.unavailable = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::AmbientAirTemperature & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: unavailable
  {
    size_t item_size = sizeof(ros_message.unavailable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_AmbientAirTemperature(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: unavailable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AmbientAirTemperature__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::AmbientAirTemperature *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AmbientAirTemperature__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::AmbientAirTemperature *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AmbientAirTemperature__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::AmbientAirTemperature *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AmbientAirTemperature__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AmbientAirTemperature(full_bounded, 0);
}

static message_type_support_callbacks_t _AmbientAirTemperature__callbacks = {
  "carma_v2x_msgs::msg",
  "AmbientAirTemperature",
  _AmbientAirTemperature__cdr_serialize,
  _AmbientAirTemperature__cdr_deserialize,
  _AmbientAirTemperature__get_serialized_size,
  _AmbientAirTemperature__max_serialized_size
};

static rosidl_message_type_support_t _AmbientAirTemperature__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AmbientAirTemperature__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_v2x_msgs::msg::AmbientAirTemperature>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_AmbientAirTemperature__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, AmbientAirTemperature)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_AmbientAirTemperature__handle;
}

#ifdef __cplusplus
}
#endif
