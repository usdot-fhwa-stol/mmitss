// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessage.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/traffic_control_message__struct.hpp"

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
namespace j2735_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j2735_v2x_msgs::msg::TrafficControlMessageV01 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::TrafficControlMessageV01 &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::TrafficControlMessageV01 &,
  size_t current_alignment);
size_t
max_serialized_size_TrafficControlMessageV01(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs


namespace j2735_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_serialize(
  const j2735_v2x_msgs::msg::TrafficControlMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: choice
  cdr << ros_message.choice;
  // Member: tcm_v01
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tcm_v01,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::TrafficControlMessage & ros_message)
{
  // Member: choice
  cdr >> ros_message.choice;

  // Member: tcm_v01
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tcm_v01);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::TrafficControlMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: choice
  {
    size_t item_size = sizeof(ros_message.choice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tcm_v01

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tcm_v01, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_TrafficControlMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: choice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tcm_v01
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrafficControlMessageV01(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TrafficControlMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::TrafficControlMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrafficControlMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::TrafficControlMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrafficControlMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::TrafficControlMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrafficControlMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrafficControlMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _TrafficControlMessage__callbacks = {
  "j2735_v2x_msgs::msg",
  "TrafficControlMessage",
  _TrafficControlMessage__cdr_serialize,
  _TrafficControlMessage__cdr_deserialize,
  _TrafficControlMessage__get_serialized_size,
  _TrafficControlMessage__max_serialized_size
};

static rosidl_message_type_support_t _TrafficControlMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrafficControlMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::TrafficControlMessage>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_TrafficControlMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, TrafficControlMessage)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_TrafficControlMessage__handle;
}

#ifdef __cplusplus
}
#endif
