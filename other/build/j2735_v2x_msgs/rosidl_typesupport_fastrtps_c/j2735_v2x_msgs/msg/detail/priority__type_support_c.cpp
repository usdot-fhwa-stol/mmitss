// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/Priority.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/priority__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/priority__struct.h"
#include "j2735_v2x_msgs/msg/detail/priority__functions.h"
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


using _Priority__ros_msg_type = j2735_v2x_msgs__msg__Priority;

static bool _Priority__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Priority__ros_msg_type * ros_message = static_cast<const _Priority__ros_msg_type *>(untyped_ros_message);
  // Field name: priority
  {
    size_t size = 1;
    auto array_ptr = ros_message->priority;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Priority__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Priority__ros_msg_type * ros_message = static_cast<_Priority__ros_msg_type *>(untyped_ros_message);
  // Field name: priority
  {
    size_t size = 1;
    auto array_ptr = ros_message->priority;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Priority(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Priority__ros_msg_type * ros_message = static_cast<const _Priority__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name priority
  {
    size_t array_size = 1;
    auto array_ptr = ros_message->priority;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Priority__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__Priority(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Priority(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Priority__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__Priority(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Priority = {
  "j2735_v2x_msgs::msg",
  "Priority",
  _Priority__cdr_serialize,
  _Priority__cdr_deserialize,
  _Priority__get_serialized_size,
  _Priority__max_serialized_size
};

static rosidl_message_type_support_t _Priority__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Priority,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Priority)() {
  return &_Priority__type_support;
}

#if defined(__cplusplus)
}
#endif
