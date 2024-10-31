// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/ObstacleSize.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/obstacle_size__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/obstacle_size__struct.h"
#include "carma_v2x_msgs/msg/detail/obstacle_size__functions.h"
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

#include "carma_v2x_msgs/msg/detail/size_value__functions.h"  // height, length, width

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__SizeValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__SizeValue(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, SizeValue)();


using _ObstacleSize__ros_msg_type = carma_v2x_msgs__msg__ObstacleSize;

static bool _ObstacleSize__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObstacleSize__ros_msg_type * ros_message = static_cast<const _ObstacleSize__ros_msg_type *>(untyped_ros_message);
  // Field name: width
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, SizeValue
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->width, cdr))
    {
      return false;
    }
  }

  // Field name: length
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, SizeValue
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->length, cdr))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, SizeValue
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->height, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ObstacleSize__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObstacleSize__ros_msg_type * ros_message = static_cast<_ObstacleSize__ros_msg_type *>(untyped_ros_message);
  // Field name: width
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, SizeValue
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->width))
    {
      return false;
    }
  }

  // Field name: length
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, SizeValue
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->length))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, SizeValue
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->height))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__ObstacleSize(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObstacleSize__ros_msg_type * ros_message = static_cast<const _ObstacleSize__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name width

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__SizeValue(
    &(ros_message->width), current_alignment);
  // field.name length

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__SizeValue(
    &(ros_message->length), current_alignment);
  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__SizeValue(
    &(ros_message->height), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ObstacleSize__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__ObstacleSize(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__ObstacleSize(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: width
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__SizeValue(
        full_bounded, current_alignment);
    }
  }
  // member: length
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__SizeValue(
        full_bounded, current_alignment);
    }
  }
  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: height
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__SizeValue(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ObstacleSize__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__ObstacleSize(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObstacleSize = {
  "carma_v2x_msgs::msg",
  "ObstacleSize",
  _ObstacleSize__cdr_serialize,
  _ObstacleSize__cdr_deserialize,
  _ObstacleSize__get_serialized_size,
  _ObstacleSize__max_serialized_size
};

static rosidl_message_type_support_t _ObstacleSize__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObstacleSize,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleSize)() {
  return &_ObstacleSize__type_support;
}

#if defined(__cplusplus)
}
#endif
