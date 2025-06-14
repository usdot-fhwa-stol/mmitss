// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_msgs:msg/CarlaEnabled.idl
// generated code does not contain a copyright notice
#include "carma_msgs/msg/detail/carla_enabled__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_msgs/msg/detail/carla_enabled__struct.hpp"

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

namespace carma_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
cdr_serialize(
  const carma_msgs::msg::CarlaEnabled & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: carla_enabled
  cdr << (ros_message.carla_enabled ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_msgs::msg::CarlaEnabled & ros_message)
{
  // Member: carla_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.carla_enabled = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
get_serialized_size(
  const carma_msgs::msg::CarlaEnabled & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: carla_enabled
  {
    size_t item_size = sizeof(ros_message.carla_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
max_serialized_size_CarlaEnabled(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: carla_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CarlaEnabled__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_msgs::msg::CarlaEnabled *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarlaEnabled__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_msgs::msg::CarlaEnabled *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarlaEnabled__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_msgs::msg::CarlaEnabled *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarlaEnabled__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CarlaEnabled(full_bounded, 0);
}

static message_type_support_callbacks_t _CarlaEnabled__callbacks = {
  "carma_msgs::msg",
  "CarlaEnabled",
  _CarlaEnabled__cdr_serialize,
  _CarlaEnabled__cdr_deserialize,
  _CarlaEnabled__get_serialized_size,
  _CarlaEnabled__max_serialized_size
};

static rosidl_message_type_support_t _CarlaEnabled__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarlaEnabled__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::msg::CarlaEnabled>()
{
  return &carma_msgs::msg::typesupport_fastrtps_cpp::_CarlaEnabled__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, msg, CarlaEnabled)() {
  return &carma_msgs::msg::typesupport_fastrtps_cpp::_CarlaEnabled__handle;
}

#ifdef __cplusplus
}
#endif
