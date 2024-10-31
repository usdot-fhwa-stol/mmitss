// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/privileged_events__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/privileged_events__struct.h"
#include "j2735_v2x_msgs/msg/detail/privileged_events__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__functions.h"  // event

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__PrivilegedEventFlags(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__PrivilegedEventFlags(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PrivilegedEventFlags)();


using _PrivilegedEvents__ros_msg_type = j2735_v2x_msgs__msg__PrivilegedEvents;

static bool _PrivilegedEvents__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PrivilegedEvents__ros_msg_type * ros_message = static_cast<const _PrivilegedEvents__ros_msg_type *>(untyped_ros_message);
  // Field name: ssp_index
  {
    cdr << ros_message->ssp_index;
  }

  // Field name: event
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PrivilegedEventFlags
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->event, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PrivilegedEvents__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PrivilegedEvents__ros_msg_type * ros_message = static_cast<_PrivilegedEvents__ros_msg_type *>(untyped_ros_message);
  // Field name: ssp_index
  {
    cdr >> ros_message->ssp_index;
  }

  // Field name: event
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PrivilegedEventFlags
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->event))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PrivilegedEvents(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PrivilegedEvents__ros_msg_type * ros_message = static_cast<const _PrivilegedEvents__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ssp_index
  {
    size_t item_size = sizeof(ros_message->ssp_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name event

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PrivilegedEventFlags(
    &(ros_message->event), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PrivilegedEvents__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__PrivilegedEvents(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PrivilegedEvents(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ssp_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: event
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PrivilegedEventFlags(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PrivilegedEvents__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__PrivilegedEvents(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PrivilegedEvents = {
  "j2735_v2x_msgs::msg",
  "PrivilegedEvents",
  _PrivilegedEvents__cdr_serialize,
  _PrivilegedEvents__cdr_deserialize,
  _PrivilegedEvents__get_serialized_size,
  _PrivilegedEvents__max_serialized_size
};

static rosidl_message_type_support_t _PrivilegedEvents__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PrivilegedEvents,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PrivilegedEvents)() {
  return &_PrivilegedEvents__type_support;
}

#if defined(__cplusplus)
}
#endif
