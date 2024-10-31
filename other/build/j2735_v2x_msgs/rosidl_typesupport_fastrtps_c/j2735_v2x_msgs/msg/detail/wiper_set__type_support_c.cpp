// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/WiperSet.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/wiper_set__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/wiper_set__struct.h"
#include "j2735_v2x_msgs/msg/detail/wiper_set__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/wiper_rate__functions.h"  // rate_front, rate_rear
#include "j2735_v2x_msgs/msg/detail/wiper_status__functions.h"  // status_front, status_rear

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__WiperRate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__WiperRate(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperRate)();
size_t get_serialized_size_j2735_v2x_msgs__msg__WiperStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__WiperStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperStatus)();


using _WiperSet__ros_msg_type = j2735_v2x_msgs__msg__WiperSet;

static bool _WiperSet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WiperSet__ros_msg_type * ros_message = static_cast<const _WiperSet__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: status_front
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status_front, cdr))
    {
      return false;
    }
  }

  // Field name: rate_front
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperRate
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rate_front, cdr))
    {
      return false;
    }
  }

  // Field name: status_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status_rear, cdr))
    {
      return false;
    }
  }

  // Field name: rate_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperRate
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rate_rear, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _WiperSet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WiperSet__ros_msg_type * ros_message = static_cast<_WiperSet__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: status_front
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status_front))
    {
      return false;
    }
  }

  // Field name: rate_front
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperRate
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rate_front))
    {
      return false;
    }
  }

  // Field name: status_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status_rear))
    {
      return false;
    }
  }

  // Field name: rate_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperRate
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rate_rear))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__WiperSet(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WiperSet__ros_msg_type * ros_message = static_cast<const _WiperSet__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_front

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__WiperStatus(
    &(ros_message->status_front), current_alignment);
  // field.name rate_front

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__WiperRate(
    &(ros_message->rate_front), current_alignment);
  // field.name status_rear

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__WiperStatus(
    &(ros_message->status_rear), current_alignment);
  // field.name rate_rear

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__WiperRate(
    &(ros_message->rate_rear), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _WiperSet__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__WiperSet(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__WiperSet(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: status_front
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__WiperStatus(
        full_bounded, current_alignment);
    }
  }
  // member: rate_front
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__WiperRate(
        full_bounded, current_alignment);
    }
  }
  // member: status_rear
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__WiperStatus(
        full_bounded, current_alignment);
    }
  }
  // member: rate_rear
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__WiperRate(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WiperSet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__WiperSet(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WiperSet = {
  "j2735_v2x_msgs::msg",
  "WiperSet",
  _WiperSet__cdr_serialize,
  _WiperSet__cdr_deserialize,
  _WiperSet__get_serialized_size,
  _WiperSet__max_serialized_size
};

static rosidl_message_type_support_t _WiperSet__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WiperSet,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, WiperSet)() {
  return &_WiperSet__type_support;
}

#if defined(__cplusplus)
}
#endif
