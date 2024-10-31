// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/NodeListXY.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/node_list_xy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/node_list_xy__struct.h"
#include "carma_v2x_msgs/msg/detail/node_list_xy__functions.h"
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

#include "carma_v2x_msgs/msg/detail/computed_lane__functions.h"  // computed
#include "carma_v2x_msgs/msg/detail/node_set_xy__functions.h"  // nodes

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__ComputedLane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__ComputedLane(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ComputedLane)();
size_t get_serialized_size_carma_v2x_msgs__msg__NodeSetXY(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__NodeSetXY(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeSetXY)();


using _NodeListXY__ros_msg_type = carma_v2x_msgs__msg__NodeListXY;

static bool _NodeListXY__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeListXY__ros_msg_type * ros_message = static_cast<const _NodeListXY__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr << ros_message->choice;
  }

  // Field name: nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeSetXY
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodes, cdr))
    {
      return false;
    }
  }

  // Field name: computed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ComputedLane
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->computed, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NodeListXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeListXY__ros_msg_type * ros_message = static_cast<_NodeListXY__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr >> ros_message->choice;
  }

  // Field name: nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeSetXY
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodes))
    {
      return false;
    }
  }

  // Field name: computed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ComputedLane
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->computed))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__NodeListXY(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeListXY__ros_msg_type * ros_message = static_cast<const _NodeListXY__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name choice
  {
    size_t item_size = sizeof(ros_message->choice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nodes

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__NodeSetXY(
    &(ros_message->nodes), current_alignment);
  // field.name computed

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__ComputedLane(
    &(ros_message->computed), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NodeListXY__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__NodeListXY(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__NodeListXY(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: choice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nodes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__NodeSetXY(
        full_bounded, current_alignment);
    }
  }
  // member: computed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__ComputedLane(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeListXY__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__NodeListXY(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeListXY = {
  "carma_v2x_msgs::msg",
  "NodeListXY",
  _NodeListXY__cdr_serialize,
  _NodeListXY__cdr_deserialize,
  _NodeListXY__get_serialized_size,
  _NodeListXY__max_serialized_size
};

static rosidl_message_type_support_t _NodeListXY__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeListXY,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeListXY)() {
  return &_NodeListXY__type_support;
}

#if defined(__cplusplus)
}
#endif
