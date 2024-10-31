// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__struct.h"
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/heading_confidence__functions.h"  // heading
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"  // speed
#include "j2735_v2x_msgs/msg/detail/throttle_confidence__functions.h"  // throttle

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence)();
size_t get_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence)();
size_t get_serialized_size_j2735_v2x_msgs__msg__ThrottleConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__ThrottleConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ThrottleConfidence)();


using _SpeedandHeadingandThrottleConfidence__ros_msg_type = j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence;

static bool _SpeedandHeadingandThrottleConfidence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpeedandHeadingandThrottleConfidence__ros_msg_type * ros_message = static_cast<const _SpeedandHeadingandThrottleConfidence__ros_msg_type *>(untyped_ros_message);
  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heading, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed, cdr))
    {
      return false;
    }
  }

  // Field name: throttle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ThrottleConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->throttle, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SpeedandHeadingandThrottleConfidence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpeedandHeadingandThrottleConfidence__ros_msg_type * ros_message = static_cast<_SpeedandHeadingandThrottleConfidence__ros_msg_type *>(untyped_ros_message);
  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heading))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed))
    {
      return false;
    }
  }

  // Field name: throttle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ThrottleConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->throttle))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpeedandHeadingandThrottleConfidence__ros_msg_type * ros_message = static_cast<const _SpeedandHeadingandThrottleConfidence__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name heading

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
    &(ros_message->heading), current_alignment);
  // field.name speed

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
    &(ros_message->speed), current_alignment);
  // field.name throttle

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ThrottleConfidence(
    &(ros_message->throttle), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SpeedandHeadingandThrottleConfidence__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: heading
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: throttle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ThrottleConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SpeedandHeadingandThrottleConfidence__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpeedandHeadingandThrottleConfidence = {
  "j2735_v2x_msgs::msg",
  "SpeedandHeadingandThrottleConfidence",
  _SpeedandHeadingandThrottleConfidence__cdr_serialize,
  _SpeedandHeadingandThrottleConfidence__cdr_deserialize,
  _SpeedandHeadingandThrottleConfidence__get_serialized_size,
  _SpeedandHeadingandThrottleConfidence__max_serialized_size
};

static rosidl_message_type_support_t _SpeedandHeadingandThrottleConfidence__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpeedandHeadingandThrottleConfidence,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedandHeadingandThrottleConfidence)() {
  return &_SpeedandHeadingandThrottleConfidence__type_support;
}

#if defined(__cplusplus)
}
#endif
