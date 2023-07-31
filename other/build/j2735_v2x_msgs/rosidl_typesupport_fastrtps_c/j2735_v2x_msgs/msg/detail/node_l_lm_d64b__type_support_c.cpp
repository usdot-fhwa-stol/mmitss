// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/NodeLLmD64b.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__struct.h"
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__functions.h"
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


using _NodeLLmD64b__ros_msg_type = j2735_v2x_msgs__msg__NodeLLmD64b;

static bool _NodeLLmD64b__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeLLmD64b__ros_msg_type * ros_message = static_cast<const _NodeLLmD64b__ros_msg_type *>(untyped_ros_message);
  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  return true;
}

static bool _NodeLLmD64b__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeLLmD64b__ros_msg_type * ros_message = static_cast<_NodeLLmD64b__ros_msg_type *>(untyped_ros_message);
  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeLLmD64b__ros_msg_type * ros_message = static_cast<const _NodeLLmD64b__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NodeLLmD64b__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeLLmD64b__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeLLmD64b = {
  "j2735_v2x_msgs::msg",
  "NodeLLmD64b",
  _NodeLLmD64b__cdr_serialize,
  _NodeLLmD64b__cdr_deserialize,
  _NodeLLmD64b__get_serialized_size,
  _NodeLLmD64b__max_serialized_size
};

static rosidl_message_type_support_t _NodeLLmD64b__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeLLmD64b,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeLLmD64b)() {
  return &_NodeLLmD64b__type_support;
}

#if defined(__cplusplus)
}
#endif
