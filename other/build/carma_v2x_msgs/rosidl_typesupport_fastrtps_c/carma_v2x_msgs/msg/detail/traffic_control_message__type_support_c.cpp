// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/TrafficControlMessage.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/traffic_control_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_message__struct.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_message__functions.h"
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

#include "carma_v2x_msgs/msg/detail/traffic_control_message_v01__functions.h"  // tcm_v01

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__TrafficControlMessageV01(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__TrafficControlMessageV01(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlMessageV01)();


using _TrafficControlMessage__ros_msg_type = carma_v2x_msgs__msg__TrafficControlMessage;

static bool _TrafficControlMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficControlMessage__ros_msg_type * ros_message = static_cast<const _TrafficControlMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr << ros_message->choice;
  }

  // Field name: tcm_v01
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlMessageV01
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tcm_v01, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrafficControlMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficControlMessage__ros_msg_type * ros_message = static_cast<_TrafficControlMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr >> ros_message->choice;
  }

  // Field name: tcm_v01
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlMessageV01
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tcm_v01))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__TrafficControlMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficControlMessage__ros_msg_type * ros_message = static_cast<const _TrafficControlMessage__ros_msg_type *>(untyped_ros_message);
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
  // field.name tcm_v01

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__TrafficControlMessageV01(
    &(ros_message->tcm_v01), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficControlMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__TrafficControlMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__TrafficControlMessage(
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
  // member: tcm_v01
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__TrafficControlMessageV01(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficControlMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__TrafficControlMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrafficControlMessage = {
  "carma_v2x_msgs::msg",
  "TrafficControlMessage",
  _TrafficControlMessage__cdr_serialize,
  _TrafficControlMessage__cdr_deserialize,
  _TrafficControlMessage__get_serialized_size,
  _TrafficControlMessage__max_serialized_size
};

static rosidl_message_type_support_t _TrafficControlMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficControlMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlMessage)() {
  return &_TrafficControlMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
