// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_planning_msgs:msg/UpcomingLaneChangeStatus.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__struct.hpp"

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

namespace carma_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::msg::UpcomingLaneChangeStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: downtrack_until_lanechange
  cdr << ros_message.downtrack_until_lanechange;
  // Member: lane_change
  cdr << ros_message.lane_change;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::msg::UpcomingLaneChangeStatus & ros_message)
{
  // Member: downtrack_until_lanechange
  cdr >> ros_message.downtrack_until_lanechange;

  // Member: lane_change
  cdr >> ros_message.lane_change;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::msg::UpcomingLaneChangeStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: downtrack_until_lanechange
  {
    size_t item_size = sizeof(ros_message.downtrack_until_lanechange);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_change
  {
    size_t item_size = sizeof(ros_message.lane_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_UpcomingLaneChangeStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: downtrack_until_lanechange
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lane_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _UpcomingLaneChangeStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::UpcomingLaneChangeStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UpcomingLaneChangeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::msg::UpcomingLaneChangeStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UpcomingLaneChangeStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::UpcomingLaneChangeStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UpcomingLaneChangeStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_UpcomingLaneChangeStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _UpcomingLaneChangeStatus__callbacks = {
  "carma_planning_msgs::msg",
  "UpcomingLaneChangeStatus",
  _UpcomingLaneChangeStatus__cdr_serialize,
  _UpcomingLaneChangeStatus__cdr_deserialize,
  _UpcomingLaneChangeStatus__get_serialized_size,
  _UpcomingLaneChangeStatus__max_serialized_size
};

static rosidl_message_type_support_t _UpcomingLaneChangeStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UpcomingLaneChangeStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::msg::UpcomingLaneChangeStatus>()
{
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_UpcomingLaneChangeStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, msg, UpcomingLaneChangeStatus)() {
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_UpcomingLaneChangeStatus__handle;
}

#ifdef __cplusplus
}
#endif
