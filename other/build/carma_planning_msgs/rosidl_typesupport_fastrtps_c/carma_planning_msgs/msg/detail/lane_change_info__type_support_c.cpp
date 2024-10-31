// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/LaneChangeInfo.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/lane_change_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/lane_change_info__struct.h"
#include "carma_planning_msgs/msg/detail/lane_change_info__functions.h"
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


// forward declare type support functions


using _LaneChangeInfo__ros_msg_type = carma_planning_msgs__msg__LaneChangeInfo;

static bool _LaneChangeInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneChangeInfo__ros_msg_type * ros_message = static_cast<const _LaneChangeInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    cdr << ros_message->direction;
  }

  // Field name: distance_to_lanechange
  {
    cdr << ros_message->distance_to_lanechange;
  }

  return true;
}

static bool _LaneChangeInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneChangeInfo__ros_msg_type * ros_message = static_cast<_LaneChangeInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    cdr >> ros_message->direction;
  }

  // Field name: distance_to_lanechange
  {
    cdr >> ros_message->distance_to_lanechange;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__msg__LaneChangeInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneChangeInfo__ros_msg_type * ros_message = static_cast<const _LaneChangeInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name direction
  {
    size_t item_size = sizeof(ros_message->direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_to_lanechange
  {
    size_t item_size = sizeof(ros_message->distance_to_lanechange);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneChangeInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__LaneChangeInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__LaneChangeInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: distance_to_lanechange
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneChangeInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__LaneChangeInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneChangeInfo = {
  "carma_planning_msgs::msg",
  "LaneChangeInfo",
  _LaneChangeInfo__cdr_serialize,
  _LaneChangeInfo__cdr_deserialize,
  _LaneChangeInfo__get_serialized_size,
  _LaneChangeInfo__max_serialized_size
};

static rosidl_message_type_support_t _LaneChangeInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneChangeInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, LaneChangeInfo)() {
  return &_LaneChangeInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
