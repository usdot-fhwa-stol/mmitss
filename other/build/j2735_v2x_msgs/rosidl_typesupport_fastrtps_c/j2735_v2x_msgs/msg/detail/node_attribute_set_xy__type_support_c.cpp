// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__struct.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__functions.h"  // data
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__functions.h"  // local_node
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__functions.h"  // disabled, enabled

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneDataAttributeList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneDataAttributeList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneDataAttributeList)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeAttributeXYList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NodeAttributeXYList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeAttributeXYList)();
size_t get_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXYList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXYList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXYList)();


using _NodeAttributeSetXY__ros_msg_type = j2735_v2x_msgs__msg__NodeAttributeSetXY;

static bool _NodeAttributeSetXY__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeAttributeSetXY__ros_msg_type * ros_message = static_cast<const _NodeAttributeSetXY__ros_msg_type *>(untyped_ros_message);
  // Field name: local_node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeAttributeXYList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->local_node, cdr))
    {
      return false;
    }
  }

  // Field name: local_node_exists
  {
    cdr << (ros_message->local_node_exists ? true : false);
  }

  // Field name: disabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXYList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->disabled, cdr))
    {
      return false;
    }
  }

  // Field name: disabled_exists
  {
    cdr << (ros_message->disabled_exists ? true : false);
  }

  // Field name: enabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXYList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->enabled, cdr))
    {
      return false;
    }
  }

  // Field name: enabled_exists
  {
    cdr << (ros_message->enabled_exists ? true : false);
  }

  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneDataAttributeList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->data, cdr))
    {
      return false;
    }
  }

  // Field name: data_exists
  {
    cdr << (ros_message->data_exists ? true : false);
  }

  // Field name: d_width
  {
    cdr << ros_message->d_width;
  }

  // Field name: d_width_exists
  {
    cdr << (ros_message->d_width_exists ? true : false);
  }

  // Field name: d_elevation
  {
    cdr << ros_message->d_elevation;
  }

  // Field name: d_elevation_exists
  {
    cdr << (ros_message->d_elevation_exists ? true : false);
  }

  return true;
}

static bool _NodeAttributeSetXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeAttributeSetXY__ros_msg_type * ros_message = static_cast<_NodeAttributeSetXY__ros_msg_type *>(untyped_ros_message);
  // Field name: local_node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeAttributeXYList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->local_node))
    {
      return false;
    }
  }

  // Field name: local_node_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_node_exists = tmp ? true : false;
  }

  // Field name: disabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXYList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->disabled))
    {
      return false;
    }
  }

  // Field name: disabled_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disabled_exists = tmp ? true : false;
  }

  // Field name: enabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXYList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->enabled))
    {
      return false;
    }
  }

  // Field name: enabled_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled_exists = tmp ? true : false;
  }

  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneDataAttributeList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->data))
    {
      return false;
    }
  }

  // Field name: data_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data_exists = tmp ? true : false;
  }

  // Field name: d_width
  {
    cdr >> ros_message->d_width;
  }

  // Field name: d_width_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->d_width_exists = tmp ? true : false;
  }

  // Field name: d_elevation
  {
    cdr >> ros_message->d_elevation;
  }

  // Field name: d_elevation_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->d_elevation_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeAttributeSetXY(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeAttributeSetXY__ros_msg_type * ros_message = static_cast<const _NodeAttributeSetXY__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name local_node

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeAttributeXYList(
    &(ros_message->local_node), current_alignment);
  // field.name local_node_exists
  {
    size_t item_size = sizeof(ros_message->local_node_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disabled

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXYList(
    &(ros_message->disabled), current_alignment);
  // field.name disabled_exists
  {
    size_t item_size = sizeof(ros_message->disabled_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXYList(
    &(ros_message->enabled), current_alignment);
  // field.name enabled_exists
  {
    size_t item_size = sizeof(ros_message->enabled_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneDataAttributeList(
    &(ros_message->data), current_alignment);
  // field.name data_exists
  {
    size_t item_size = sizeof(ros_message->data_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_width
  {
    size_t item_size = sizeof(ros_message->d_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_width_exists
  {
    size_t item_size = sizeof(ros_message->d_width_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_elevation
  {
    size_t item_size = sizeof(ros_message->d_elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_elevation_exists
  {
    size_t item_size = sizeof(ros_message->d_elevation_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NodeAttributeSetXY__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__NodeAttributeSetXY(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__NodeAttributeSetXY(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: local_node
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeAttributeXYList(
        full_bounded, current_alignment);
    }
  }
  // member: local_node_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXYList(
        full_bounded, current_alignment);
    }
  }
  // member: disabled_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXYList(
        full_bounded, current_alignment);
    }
  }
  // member: enabled_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneDataAttributeList(
        full_bounded, current_alignment);
    }
  }
  // member: data_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: d_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: d_width_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: d_elevation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: d_elevation_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeAttributeSetXY__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__NodeAttributeSetXY(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeAttributeSetXY = {
  "j2735_v2x_msgs::msg",
  "NodeAttributeSetXY",
  _NodeAttributeSetXY__cdr_serialize,
  _NodeAttributeSetXY__cdr_deserialize,
  _NodeAttributeSetXY__get_serialized_size,
  _NodeAttributeSetXY__max_serialized_size
};

static rosidl_message_type_support_t _NodeAttributeSetXY__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeAttributeSetXY,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeAttributeSetXY)() {
  return &_NodeAttributeSetXY__type_support;
}

#if defined(__cplusplus)
}
#endif
