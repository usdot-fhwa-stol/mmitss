// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/Id128b.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/id128b__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/id128b__struct.h"
#include "j2735_v2x_msgs/msg/detail/id128b__functions.h"
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


using _Id128b__ros_msg_type = j2735_v2x_msgs__msg__Id128b;

static bool _Id128b__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Id128b__ros_msg_type * ros_message = static_cast<const _Id128b__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    size_t size = 16;
    auto array_ptr = ros_message->id;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Id128b__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Id128b__ros_msg_type * ros_message = static_cast<_Id128b__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    size_t size = 16;
    auto array_ptr = ros_message->id;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Id128b(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Id128b__ros_msg_type * ros_message = static_cast<const _Id128b__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Id128b__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__Id128b(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Id128b(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 16;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Id128b__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__Id128b(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Id128b = {
  "j2735_v2x_msgs::msg",
  "Id128b",
  _Id128b__cdr_serialize,
  _Id128b__cdr_deserialize,
  _Id128b__get_serialized_size,
  _Id128b__max_serialized_size
};

static rosidl_message_type_support_t _Id128b__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Id128b,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Id128b)() {
  return &_Id128b__type_support;
}

#if defined(__cplusplus)
}
#endif
