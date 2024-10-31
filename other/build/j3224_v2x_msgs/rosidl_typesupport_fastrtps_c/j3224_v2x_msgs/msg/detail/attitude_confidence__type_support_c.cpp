// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/AttitudeConfidence.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__struct.h"
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/heading_confidence__functions.h"  // pitch_confidence, roll_confidence, yaw_confidence

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence)();


using _AttitudeConfidence__ros_msg_type = j3224_v2x_msgs__msg__AttitudeConfidence;

static bool _AttitudeConfidence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AttitudeConfidence__ros_msg_type * ros_message = static_cast<const _AttitudeConfidence__ros_msg_type *>(untyped_ros_message);
  // Field name: pitch_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pitch_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: roll_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->roll_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: yaw_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->yaw_confidence, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AttitudeConfidence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AttitudeConfidence__ros_msg_type * ros_message = static_cast<_AttitudeConfidence__ros_msg_type *>(untyped_ros_message);
  // Field name: pitch_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pitch_confidence))
    {
      return false;
    }
  }

  // Field name: roll_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->roll_confidence))
    {
      return false;
    }
  }

  // Field name: yaw_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->yaw_confidence))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__AttitudeConfidence(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AttitudeConfidence__ros_msg_type * ros_message = static_cast<const _AttitudeConfidence__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pitch_confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
    &(ros_message->pitch_confidence), current_alignment);
  // field.name roll_confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
    &(ros_message->roll_confidence), current_alignment);
  // field.name yaw_confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
    &(ros_message->yaw_confidence), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AttitudeConfidence__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__AttitudeConfidence(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__AttitudeConfidence(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pitch_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: roll_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: yaw_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AttitudeConfidence__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__AttitudeConfidence(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AttitudeConfidence = {
  "j3224_v2x_msgs::msg",
  "AttitudeConfidence",
  _AttitudeConfidence__cdr_serialize,
  _AttitudeConfidence__cdr_deserialize,
  _AttitudeConfidence__get_serialized_size,
  _AttitudeConfidence__max_serialized_size
};

static rosidl_message_type_support_t _AttitudeConfidence__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AttitudeConfidence,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AttitudeConfidence)() {
  return &_AttitudeConfidence__type_support;
}

#if defined(__cplusplus)
}
#endif
