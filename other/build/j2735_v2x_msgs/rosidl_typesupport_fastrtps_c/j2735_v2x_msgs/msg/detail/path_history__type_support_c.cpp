// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/path_history__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/path_history__struct.h"
#include "j2735_v2x_msgs/msg/detail/path_history__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/full_position_vector__functions.h"  // initial_position
#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"  // curr_gnss_status
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__functions.h"  // crumb_data

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__FullPositionVector(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__FullPositionVector(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, FullPositionVector)();
size_t get_serialized_size_j2735_v2x_msgs__msg__GNSSStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__GNSSStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, GNSSStatus)();
size_t get_serialized_size_j2735_v2x_msgs__msg__PathHistoryPointList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__PathHistoryPointList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PathHistoryPointList)();


using _PathHistory__ros_msg_type = j2735_v2x_msgs__msg__PathHistory;

static bool _PathHistory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathHistory__ros_msg_type * ros_message = static_cast<const _PathHistory__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: crumb_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PathHistoryPointList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->crumb_data, cdr))
    {
      return false;
    }
  }

  // Field name: initial_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initial_position, cdr))
    {
      return false;
    }
  }

  // Field name: curr_gnss_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, GNSSStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->curr_gnss_status, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PathHistory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathHistory__ros_msg_type * ros_message = static_cast<_PathHistory__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: crumb_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PathHistoryPointList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->crumb_data))
    {
      return false;
    }
  }

  // Field name: initial_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initial_position))
    {
      return false;
    }
  }

  // Field name: curr_gnss_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, GNSSStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->curr_gnss_status))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PathHistory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathHistory__ros_msg_type * ros_message = static_cast<const _PathHistory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crumb_data

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PathHistoryPointList(
    &(ros_message->crumb_data), current_alignment);
  // field.name initial_position

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__FullPositionVector(
    &(ros_message->initial_position), current_alignment);
  // field.name curr_gnss_status

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__GNSSStatus(
    &(ros_message->curr_gnss_status), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PathHistory__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__PathHistory(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PathHistory(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: crumb_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PathHistoryPointList(
        full_bounded, current_alignment);
    }
  }
  // member: initial_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__FullPositionVector(
        full_bounded, current_alignment);
    }
  }
  // member: curr_gnss_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__GNSSStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PathHistory__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__PathHistory(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathHistory = {
  "j2735_v2x_msgs::msg",
  "PathHistory",
  _PathHistory__cdr_serialize,
  _PathHistory__cdr_deserialize,
  _PathHistory__get_serialized_size,
  _PathHistory__max_serialized_size
};

static rosidl_message_type_support_t _PathHistory__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathHistory,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PathHistory)() {
  return &_PathHistory__type_support;
}

#if defined(__cplusplus)
}
#endif
