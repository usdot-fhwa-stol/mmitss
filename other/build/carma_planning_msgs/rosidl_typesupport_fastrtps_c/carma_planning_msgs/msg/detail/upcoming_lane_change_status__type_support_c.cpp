// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/UpcomingLaneChangeStatus.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__struct.h"
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__functions.h"
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


using _UpcomingLaneChangeStatus__ros_msg_type = carma_planning_msgs__msg__UpcomingLaneChangeStatus;

static bool _UpcomingLaneChangeStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UpcomingLaneChangeStatus__ros_msg_type * ros_message = static_cast<const _UpcomingLaneChangeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: downtrack_until_lanechange
  {
    cdr << ros_message->downtrack_until_lanechange;
  }

  // Field name: lane_change
  {
    cdr << ros_message->lane_change;
  }

  return true;
}

static bool _UpcomingLaneChangeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UpcomingLaneChangeStatus__ros_msg_type * ros_message = static_cast<_UpcomingLaneChangeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: downtrack_until_lanechange
  {
    cdr >> ros_message->downtrack_until_lanechange;
  }

  // Field name: lane_change
  {
    cdr >> ros_message->lane_change;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__msg__UpcomingLaneChangeStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UpcomingLaneChangeStatus__ros_msg_type * ros_message = static_cast<const _UpcomingLaneChangeStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name downtrack_until_lanechange
  {
    size_t item_size = sizeof(ros_message->downtrack_until_lanechange);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_change
  {
    size_t item_size = sizeof(ros_message->lane_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UpcomingLaneChangeStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__UpcomingLaneChangeStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__UpcomingLaneChangeStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: downtrack_until_lanechange
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lane_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _UpcomingLaneChangeStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__UpcomingLaneChangeStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UpcomingLaneChangeStatus = {
  "carma_planning_msgs::msg",
  "UpcomingLaneChangeStatus",
  _UpcomingLaneChangeStatus__cdr_serialize,
  _UpcomingLaneChangeStatus__cdr_deserialize,
  _UpcomingLaneChangeStatus__get_serialized_size,
  _UpcomingLaneChangeStatus__max_serialized_size
};

static rosidl_message_type_support_t _UpcomingLaneChangeStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UpcomingLaneChangeStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, UpcomingLaneChangeStatus)() {
  return &_UpcomingLaneChangeStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
