// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingInProgress.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__struct.hpp"

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
  const j2735_v2x_msgs::msg::PersonalCrossingInProgress & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cross_state
  cdr << (ros_message.cross_state ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::PersonalCrossingInProgress & ros_message)
{
  // Member: cross_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cross_state = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::PersonalCrossingInProgress & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cross_state
  {
    size_t item_size = sizeof(ros_message.cross_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_PersonalCrossingInProgress(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cross_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _PersonalCrossingInProgress__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::PersonalCrossingInProgress *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PersonalCrossingInProgress__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::PersonalCrossingInProgress *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PersonalCrossingInProgress__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::PersonalCrossingInProgress *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PersonalCrossingInProgress__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PersonalCrossingInProgress(full_bounded, 0);
}

static message_type_support_callbacks_t _PersonalCrossingInProgress__callbacks = {
  "j2735_v2x_msgs::msg",
  "PersonalCrossingInProgress",
  _PersonalCrossingInProgress__cdr_serialize,
  _PersonalCrossingInProgress__cdr_deserialize,
  _PersonalCrossingInProgress__get_serialized_size,
  _PersonalCrossingInProgress__max_serialized_size
};

static rosidl_message_type_support_t _PersonalCrossingInProgress__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PersonalCrossingInProgress__callbacks,
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
get_message_type_support_handle<j2735_v2x_msgs::msg::PersonalCrossingInProgress>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_PersonalCrossingInProgress__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, PersonalCrossingInProgress)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_PersonalCrossingInProgress__handle;
}

#ifdef __cplusplus
}
#endif
