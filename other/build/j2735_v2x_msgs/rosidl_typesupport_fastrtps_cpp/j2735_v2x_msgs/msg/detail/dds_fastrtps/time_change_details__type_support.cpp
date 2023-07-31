// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/time_change_details__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/time_change_details__struct.hpp"

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
  const j2735_v2x_msgs::msg::TimeChangeDetails & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: start_time
  cdr << ros_message.start_time;
  // Member: start_time_exists
  cdr << (ros_message.start_time_exists ? true : false);
  // Member: min_end_time
  cdr << ros_message.min_end_time;
  // Member: max_end_time
  cdr << ros_message.max_end_time;
  // Member: max_end_time_exists
  cdr << (ros_message.max_end_time_exists ? true : false);
  // Member: likely_time
  cdr << ros_message.likely_time;
  // Member: likely_time_exists
  cdr << (ros_message.likely_time_exists ? true : false);
  // Member: confidence
  cdr << ros_message.confidence;
  // Member: confidence_exists
  cdr << (ros_message.confidence_exists ? true : false);
  // Member: next_time
  cdr << ros_message.next_time;
  // Member: next_time_exists
  cdr << (ros_message.next_time_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::TimeChangeDetails & ros_message)
{
  // Member: start_time
  cdr >> ros_message.start_time;

  // Member: start_time_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.start_time_exists = tmp ? true : false;
  }

  // Member: min_end_time
  cdr >> ros_message.min_end_time;

  // Member: max_end_time
  cdr >> ros_message.max_end_time;

  // Member: max_end_time_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.max_end_time_exists = tmp ? true : false;
  }

  // Member: likely_time
  cdr >> ros_message.likely_time;

  // Member: likely_time_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.likely_time_exists = tmp ? true : false;
  }

  // Member: confidence
  cdr >> ros_message.confidence;

  // Member: confidence_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.confidence_exists = tmp ? true : false;
  }

  // Member: next_time
  cdr >> ros_message.next_time;

  // Member: next_time_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.next_time_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::TimeChangeDetails & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: start_time
  {
    size_t item_size = sizeof(ros_message.start_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_time_exists
  {
    size_t item_size = sizeof(ros_message.start_time_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_end_time
  {
    size_t item_size = sizeof(ros_message.min_end_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_end_time
  {
    size_t item_size = sizeof(ros_message.max_end_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_end_time_exists
  {
    size_t item_size = sizeof(ros_message.max_end_time_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: likely_time
  {
    size_t item_size = sizeof(ros_message.likely_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: likely_time_exists
  {
    size_t item_size = sizeof(ros_message.likely_time_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: confidence
  {
    size_t item_size = sizeof(ros_message.confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: confidence_exists
  {
    size_t item_size = sizeof(ros_message.confidence_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: next_time
  {
    size_t item_size = sizeof(ros_message.next_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: next_time_exists
  {
    size_t item_size = sizeof(ros_message.next_time_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_TimeChangeDetails(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: start_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: start_time_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: min_end_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: max_end_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: max_end_time_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: likely_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: likely_time_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: confidence_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: next_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: next_time_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TimeChangeDetails__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::TimeChangeDetails *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TimeChangeDetails__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::TimeChangeDetails *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TimeChangeDetails__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::TimeChangeDetails *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TimeChangeDetails__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TimeChangeDetails(full_bounded, 0);
}

static message_type_support_callbacks_t _TimeChangeDetails__callbacks = {
  "j2735_v2x_msgs::msg",
  "TimeChangeDetails",
  _TimeChangeDetails__cdr_serialize,
  _TimeChangeDetails__cdr_deserialize,
  _TimeChangeDetails__get_serialized_size,
  _TimeChangeDetails__max_serialized_size
};

static rosidl_message_type_support_t _TimeChangeDetails__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TimeChangeDetails__callbacks,
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
get_message_type_support_handle<j2735_v2x_msgs::msg::TimeChangeDetails>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_TimeChangeDetails__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, TimeChangeDetails)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_TimeChangeDetails__handle;
}

#ifdef __cplusplus
}
#endif
