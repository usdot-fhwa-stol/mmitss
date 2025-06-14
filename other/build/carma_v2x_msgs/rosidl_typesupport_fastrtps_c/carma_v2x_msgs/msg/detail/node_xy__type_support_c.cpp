// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/NodeXY.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/node_xy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/node_xy__struct.h"
#include "carma_v2x_msgs/msg/detail/node_xy__functions.h"
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

#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"  // attributes
#include "carma_v2x_msgs/msg/detail/node_offset_point_xy__functions.h"  // delta

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__NodeAttributeSetXY(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__NodeAttributeSetXY(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeAttributeSetXY)();
size_t get_serialized_size_carma_v2x_msgs__msg__NodeOffsetPointXY(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__NodeOffsetPointXY(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeOffsetPointXY)();


using _NodeXY__ros_msg_type = carma_v2x_msgs__msg__NodeXY;

static bool _NodeXY__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeXY__ros_msg_type * ros_message = static_cast<const _NodeXY__ros_msg_type *>(untyped_ros_message);
  // Field name: delta
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeOffsetPointXY
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->delta, cdr))
    {
      return false;
    }
  }

  // Field name: attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeAttributeSetXY
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->attributes, cdr))
    {
      return false;
    }
  }

  // Field name: attributes_exists
  {
    cdr << (ros_message->attributes_exists ? true : false);
  }

  return true;
}

static bool _NodeXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeXY__ros_msg_type * ros_message = static_cast<_NodeXY__ros_msg_type *>(untyped_ros_message);
  // Field name: delta
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeOffsetPointXY
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->delta))
    {
      return false;
    }
  }

  // Field name: attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeAttributeSetXY
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->attributes))
    {
      return false;
    }
  }

  // Field name: attributes_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->attributes_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__NodeXY(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeXY__ros_msg_type * ros_message = static_cast<const _NodeXY__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name delta

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__NodeOffsetPointXY(
    &(ros_message->delta), current_alignment);
  // field.name attributes

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__NodeAttributeSetXY(
    &(ros_message->attributes), current_alignment);
  // field.name attributes_exists
  {
    size_t item_size = sizeof(ros_message->attributes_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NodeXY__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__NodeXY(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__NodeXY(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: delta
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__NodeOffsetPointXY(
        full_bounded, current_alignment);
    }
  }
  // member: attributes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__NodeAttributeSetXY(
        full_bounded, current_alignment);
    }
  }
  // member: attributes_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeXY__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__NodeXY(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeXY = {
  "carma_v2x_msgs::msg",
  "NodeXY",
  _NodeXY__cdr_serialize,
  _NodeXY__cdr_deserialize,
  _NodeXY__get_serialized_size,
  _NodeXY__max_serialized_size
};

static rosidl_message_type_support_t _NodeXY__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeXY,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeXY)() {
  return &_NodeXY__type_support;
}

#if defined(__cplusplus)
}
#endif
