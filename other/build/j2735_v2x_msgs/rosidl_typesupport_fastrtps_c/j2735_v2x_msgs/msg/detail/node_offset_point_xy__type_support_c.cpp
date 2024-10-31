// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__struct.h"
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__functions.h"  // node_latlon
#include "j2735_v2x_msgs/msg/detail/node_xy20b__functions.h"  // node_xy1
#include "j2735_v2x_msgs/msg/detail/node_xy22b__functions.h"  // node_xy2
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"  // node_xy3
#include "j2735_v2x_msgs/msg/detail/node_xy26b__functions.h"  // node_xy4
#include "j2735_v2x_msgs/msg/detail/node_xy28b__functions.h"  // node_xy5
#include "j2735_v2x_msgs/msg/detail/node_xy32b__functions.h"  // node_xy6

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeLLmD64b)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeXY20b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NodeXY20b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY20b)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeXY22b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NodeXY22b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY22b)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeXY24b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NodeXY24b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY24b)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeXY26b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NodeXY26b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY26b)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeXY28b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NodeXY28b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY28b)();
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeXY32b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__NodeXY32b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY32b)();


using _NodeOffsetPointXY__ros_msg_type = j2735_v2x_msgs__msg__NodeOffsetPointXY;

static bool _NodeOffsetPointXY__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeOffsetPointXY__ros_msg_type * ros_message = static_cast<const _NodeOffsetPointXY__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr << ros_message->choice;
  }

  // Field name: node_xy1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY20b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node_xy1, cdr))
    {
      return false;
    }
  }

  // Field name: node_xy2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY22b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node_xy2, cdr))
    {
      return false;
    }
  }

  // Field name: node_xy3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY24b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node_xy3, cdr))
    {
      return false;
    }
  }

  // Field name: node_xy4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY26b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node_xy4, cdr))
    {
      return false;
    }
  }

  // Field name: node_xy5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY28b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node_xy5, cdr))
    {
      return false;
    }
  }

  // Field name: node_xy6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY32b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node_xy6, cdr))
    {
      return false;
    }
  }

  // Field name: node_latlon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeLLmD64b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node_latlon, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NodeOffsetPointXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeOffsetPointXY__ros_msg_type * ros_message = static_cast<_NodeOffsetPointXY__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr >> ros_message->choice;
  }

  // Field name: node_xy1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY20b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node_xy1))
    {
      return false;
    }
  }

  // Field name: node_xy2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY22b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node_xy2))
    {
      return false;
    }
  }

  // Field name: node_xy3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY24b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node_xy3))
    {
      return false;
    }
  }

  // Field name: node_xy4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY26b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node_xy4))
    {
      return false;
    }
  }

  // Field name: node_xy5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY28b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node_xy5))
    {
      return false;
    }
  }

  // Field name: node_xy6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeXY32b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node_xy6))
    {
      return false;
    }
  }

  // Field name: node_latlon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeLLmD64b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node_latlon))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeOffsetPointXY(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeOffsetPointXY__ros_msg_type * ros_message = static_cast<const _NodeOffsetPointXY__ros_msg_type *>(untyped_ros_message);
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
  // field.name node_xy1

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeXY20b(
    &(ros_message->node_xy1), current_alignment);
  // field.name node_xy2

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeXY22b(
    &(ros_message->node_xy2), current_alignment);
  // field.name node_xy3

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeXY24b(
    &(ros_message->node_xy3), current_alignment);
  // field.name node_xy4

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeXY26b(
    &(ros_message->node_xy4), current_alignment);
  // field.name node_xy5

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeXY28b(
    &(ros_message->node_xy5), current_alignment);
  // field.name node_xy6

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeXY32b(
    &(ros_message->node_xy6), current_alignment);
  // field.name node_latlon

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
    &(ros_message->node_latlon), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NodeOffsetPointXY__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__NodeOffsetPointXY(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__NodeOffsetPointXY(
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
  // member: node_xy1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeXY20b(
        full_bounded, current_alignment);
    }
  }
  // member: node_xy2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeXY22b(
        full_bounded, current_alignment);
    }
  }
  // member: node_xy3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeXY24b(
        full_bounded, current_alignment);
    }
  }
  // member: node_xy4
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeXY26b(
        full_bounded, current_alignment);
    }
  }
  // member: node_xy5
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeXY28b(
        full_bounded, current_alignment);
    }
  }
  // member: node_xy6
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeXY32b(
        full_bounded, current_alignment);
    }
  }
  // member: node_latlon
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeOffsetPointXY__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__NodeOffsetPointXY(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeOffsetPointXY = {
  "j2735_v2x_msgs::msg",
  "NodeOffsetPointXY",
  _NodeOffsetPointXY__cdr_serialize,
  _NodeOffsetPointXY__cdr_deserialize,
  _NodeOffsetPointXY__get_serialized_size,
  _NodeOffsetPointXY__max_serialized_size
};

static rosidl_message_type_support_t _NodeOffsetPointXY__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeOffsetPointXY,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeOffsetPointXY)() {
  return &_NodeOffsetPointXY__type_support;
}

#if defined(__cplusplus)
}
#endif
