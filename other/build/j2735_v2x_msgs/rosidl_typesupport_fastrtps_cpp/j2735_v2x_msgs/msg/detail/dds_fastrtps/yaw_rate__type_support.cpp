// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/YawRate.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/yaw_rate__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/yaw_rate__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_serialize(
  const j2735_v2x_msgs::msg::YawRate & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: yaw_rate
  cdr << ros_message.yaw_rate;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::YawRate & ros_message)
{
  // Member: yaw_rate
  cdr >> ros_message.yaw_rate;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::YawRate & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: yaw_rate
  {
    size_t item_size = sizeof(ros_message.yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_YawRate(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _YawRate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::YawRate *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _YawRate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::YawRate *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _YawRate__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::YawRate *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _YawRate__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_YawRate(full_bounded, 0);
}

static message_type_support_callbacks_t _YawRate__callbacks = {
  "j2735_v2x_msgs::msg",
  "YawRate",
  _YawRate__cdr_serialize,
  _YawRate__cdr_deserialize,
  _YawRate__get_serialized_size,
  _YawRate__max_serialized_size
};

static rosidl_message_type_support_t _YawRate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_YawRate__callbacks,
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
get_message_type_support_handle<j2735_v2x_msgs::msg::YawRate>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_YawRate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, YawRate)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_YawRate__handle;
}

#ifdef __cplusplus
}
#endif
