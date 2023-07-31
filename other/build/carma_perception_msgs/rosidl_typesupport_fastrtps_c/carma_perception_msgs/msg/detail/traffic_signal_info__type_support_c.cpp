// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_perception_msgs:msg/TrafficSignalInfo.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/traffic_signal_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_perception_msgs/msg/detail/traffic_signal_info__struct.h"
#include "carma_perception_msgs/msg/detail/traffic_signal_info__functions.h"
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


using _TrafficSignalInfo__ros_msg_type = carma_perception_msgs__msg__TrafficSignalInfo;

static bool _TrafficSignalInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficSignalInfo__ros_msg_type * ros_message = static_cast<const _TrafficSignalInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: intersection_id
  {
    cdr << ros_message->intersection_id;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: remaining_time
  {
    cdr << ros_message->remaining_time;
  }

  // Field name: lane_id
  {
    cdr << ros_message->lane_id;
  }

  // Field name: remaining_distance
  {
    cdr << ros_message->remaining_distance;
  }

  return true;
}

static bool _TrafficSignalInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficSignalInfo__ros_msg_type * ros_message = static_cast<_TrafficSignalInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: intersection_id
  {
    cdr >> ros_message->intersection_id;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: remaining_time
  {
    cdr >> ros_message->remaining_time;
  }

  // Field name: lane_id
  {
    cdr >> ros_message->lane_id;
  }

  // Field name: remaining_distance
  {
    cdr >> ros_message->remaining_distance;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_perception_msgs
size_t get_serialized_size_carma_perception_msgs__msg__TrafficSignalInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficSignalInfo__ros_msg_type * ros_message = static_cast<const _TrafficSignalInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name intersection_id
  {
    size_t item_size = sizeof(ros_message->intersection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remaining_time
  {
    size_t item_size = sizeof(ros_message->remaining_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_id
  {
    size_t item_size = sizeof(ros_message->lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remaining_distance
  {
    size_t item_size = sizeof(ros_message->remaining_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficSignalInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_perception_msgs__msg__TrafficSignalInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_perception_msgs
size_t max_serialized_size_carma_perception_msgs__msg__TrafficSignalInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: intersection_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: remaining_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: remaining_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficSignalInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_perception_msgs__msg__TrafficSignalInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrafficSignalInfo = {
  "carma_perception_msgs::msg",
  "TrafficSignalInfo",
  _TrafficSignalInfo__cdr_serialize,
  _TrafficSignalInfo__cdr_deserialize,
  _TrafficSignalInfo__get_serialized_size,
  _TrafficSignalInfo__max_serialized_size
};

static rosidl_message_type_support_t _TrafficSignalInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficSignalInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, TrafficSignalInfo)() {
  return &_TrafficSignalInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
