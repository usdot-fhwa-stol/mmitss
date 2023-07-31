// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_perception_msgs:msg/TrafficSignalInfo.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/traffic_signal_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_perception_msgs/msg/detail/traffic_signal_info__struct.hpp"

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

namespace carma_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
cdr_serialize(
  const carma_perception_msgs::msg::TrafficSignalInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: intersection_id
  cdr << ros_message.intersection_id;
  // Member: state
  cdr << ros_message.state;
  // Member: remaining_time
  cdr << ros_message.remaining_time;
  // Member: lane_id
  cdr << ros_message.lane_id;
  // Member: remaining_distance
  cdr << ros_message.remaining_distance;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_perception_msgs::msg::TrafficSignalInfo & ros_message)
{
  // Member: intersection_id
  cdr >> ros_message.intersection_id;

  // Member: state
  cdr >> ros_message.state;

  // Member: remaining_time
  cdr >> ros_message.remaining_time;

  // Member: lane_id
  cdr >> ros_message.lane_id;

  // Member: remaining_distance
  cdr >> ros_message.remaining_distance;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
get_serialized_size(
  const carma_perception_msgs::msg::TrafficSignalInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: intersection_id
  {
    size_t item_size = sizeof(ros_message.intersection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remaining_time
  {
    size_t item_size = sizeof(ros_message.remaining_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_id
  {
    size_t item_size = sizeof(ros_message.lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remaining_distance
  {
    size_t item_size = sizeof(ros_message.remaining_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
max_serialized_size_TrafficSignalInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: intersection_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: remaining_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: remaining_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TrafficSignalInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_perception_msgs::msg::TrafficSignalInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrafficSignalInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_perception_msgs::msg::TrafficSignalInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrafficSignalInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_perception_msgs::msg::TrafficSignalInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrafficSignalInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrafficSignalInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _TrafficSignalInfo__callbacks = {
  "carma_perception_msgs::msg",
  "TrafficSignalInfo",
  _TrafficSignalInfo__cdr_serialize,
  _TrafficSignalInfo__cdr_deserialize,
  _TrafficSignalInfo__get_serialized_size,
  _TrafficSignalInfo__max_serialized_size
};

static rosidl_message_type_support_t _TrafficSignalInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrafficSignalInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_perception_msgs::msg::TrafficSignalInfo>()
{
  return &carma_perception_msgs::msg::typesupport_fastrtps_cpp::_TrafficSignalInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_perception_msgs, msg, TrafficSignalInfo)() {
  return &carma_perception_msgs::msg::typesupport_fastrtps_cpp::_TrafficSignalInfo__handle;
}

#ifdef __cplusplus
}
#endif
