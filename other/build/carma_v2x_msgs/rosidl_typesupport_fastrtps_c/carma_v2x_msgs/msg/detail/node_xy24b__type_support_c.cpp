// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/NodeXY24b.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/node_xy24b__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/node_xy24b__struct.h"
#include "carma_v2x_msgs/msg/detail/node_xy24b__functions.h"
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

#include "carma_v2x_msgs/msg/detail/offset_b12__functions.h"  // x, y

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__OffsetB12(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__OffsetB12(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetB12)();


using _NodeXY24b__ros_msg_type = carma_v2x_msgs__msg__NodeXY24b;

static bool _NodeXY24b__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeXY24b__ros_msg_type * ros_message = static_cast<const _NodeXY24b__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetB12
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->x, cdr))
    {
      return false;
    }
  }

  // Field name: y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetB12
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->y, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NodeXY24b__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeXY24b__ros_msg_type * ros_message = static_cast<_NodeXY24b__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetB12
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->x))
    {
      return false;
    }
  }

  // Field name: y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetB12
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->y))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__NodeXY24b(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeXY24b__ros_msg_type * ros_message = static_cast<const _NodeXY24b__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__OffsetB12(
    &(ros_message->x), current_alignment);
  // field.name y

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__OffsetB12(
    &(ros_message->y), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NodeXY24b__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__NodeXY24b(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__NodeXY24b(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__OffsetB12(
        full_bounded, current_alignment);
    }
  }
  // member: y
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__OffsetB12(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeXY24b__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__NodeXY24b(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeXY24b = {
  "carma_v2x_msgs::msg",
  "NodeXY24b",
  _NodeXY24b__cdr_serialize,
  _NodeXY24b__cdr_deserialize,
  _NodeXY24b__get_serialized_size,
  _NodeXY24b__max_serialized_size
};

static rosidl_message_type_support_t _NodeXY24b__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeXY24b,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeXY24b)() {
  return &_NodeXY24b__type_support;
}

#if defined(__cplusplus)
}
#endif
