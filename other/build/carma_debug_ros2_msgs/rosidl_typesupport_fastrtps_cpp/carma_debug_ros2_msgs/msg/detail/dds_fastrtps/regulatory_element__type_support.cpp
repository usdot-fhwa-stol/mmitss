// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.hpp"

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

namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
cdr_serialize(
  const carma_debug_ros2_msgs::msg::RegulatoryElement & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rule_name
  cdr << ros_message.rule_name;
  // Member: participants
  {
    cdr << ros_message.participants;
  }
  // Member: unsupported_type
  cdr << (ros_message.unsupported_type ? true : false);
  // Member: min_gap
  cdr << ros_message.min_gap;
  // Member: speed_limit
  cdr << ros_message.speed_limit;
  // Member: direction
  cdr << ros_message.direction;
  // Member: left_participants
  {
    cdr << ros_message.left_participants;
  }
  // Member: right_participants
  {
    cdr << ros_message.right_participants;
  }
  // Member: reason
  cdr << ros_message.reason;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_debug_ros2_msgs::msg::RegulatoryElement & ros_message)
{
  // Member: rule_name
  cdr >> ros_message.rule_name;

  // Member: participants
  {
    cdr >> ros_message.participants;
  }

  // Member: unsupported_type
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.unsupported_type = tmp ? true : false;
  }

  // Member: min_gap
  cdr >> ros_message.min_gap;

  // Member: speed_limit
  cdr >> ros_message.speed_limit;

  // Member: direction
  cdr >> ros_message.direction;

  // Member: left_participants
  {
    cdr >> ros_message.left_participants;
  }

  // Member: right_participants
  {
    cdr >> ros_message.right_participants;
  }

  // Member: reason
  cdr >> ros_message.reason;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
get_serialized_size(
  const carma_debug_ros2_msgs::msg::RegulatoryElement & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rule_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.rule_name.size() + 1);
  // Member: participants
  {
    size_t array_size = ros_message.participants.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.participants[index].size() + 1);
    }
  }
  // Member: unsupported_type
  {
    size_t item_size = sizeof(ros_message.unsupported_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_gap
  {
    size_t item_size = sizeof(ros_message.min_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limit
  {
    size_t item_size = sizeof(ros_message.speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.direction.size() + 1);
  // Member: left_participants
  {
    size_t array_size = ros_message.left_participants.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.left_participants[index].size() + 1);
    }
  }
  // Member: right_participants
  {
    size_t array_size = ros_message.right_participants.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.right_participants[index].size() + 1);
    }
  }
  // Member: reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.reason.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
max_serialized_size_RegulatoryElement(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: rule_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: participants
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: unsupported_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: min_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: direction
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: left_participants
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: right_participants
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: reason
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RegulatoryElement__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_debug_ros2_msgs::msg::RegulatoryElement *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegulatoryElement__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_debug_ros2_msgs::msg::RegulatoryElement *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegulatoryElement__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_debug_ros2_msgs::msg::RegulatoryElement *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegulatoryElement__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegulatoryElement(full_bounded, 0);
}

static message_type_support_callbacks_t _RegulatoryElement__callbacks = {
  "carma_debug_ros2_msgs::msg",
  "RegulatoryElement",
  _RegulatoryElement__cdr_serialize,
  _RegulatoryElement__cdr_deserialize,
  _RegulatoryElement__get_serialized_size,
  _RegulatoryElement__max_serialized_size
};

static rosidl_message_type_support_t _RegulatoryElement__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegulatoryElement__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_debug_ros2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_debug_ros2_msgs::msg::RegulatoryElement>()
{
  return &carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::_RegulatoryElement__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_debug_ros2_msgs, msg, RegulatoryElement)() {
  return &carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::_RegulatoryElement__handle;
}

#ifdef __cplusplus
}
#endif
