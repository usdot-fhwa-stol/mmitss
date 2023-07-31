// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/AngularVelocityConfidence.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__struct.h"
#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__functions.h"
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

#include "j3224_v2x_msgs/msg/detail/pitch_rate_confidence__functions.h"  // pitch_rate_confidence
#include "j3224_v2x_msgs/msg/detail/roll_rate_confidence__functions.h"  // roll_rate_confidence

// forward declare type support functions
size_t get_serialized_size_j3224_v2x_msgs__msg__PitchRateConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__PitchRateConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PitchRateConfidence)();
size_t get_serialized_size_j3224_v2x_msgs__msg__RollRateConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__RollRateConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, RollRateConfidence)();


using _AngularVelocityConfidence__ros_msg_type = j3224_v2x_msgs__msg__AngularVelocityConfidence;

static bool _AngularVelocityConfidence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AngularVelocityConfidence__ros_msg_type * ros_message = static_cast<const _AngularVelocityConfidence__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: pitch_rate_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PitchRateConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pitch_rate_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: roll_rate_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, RollRateConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->roll_rate_confidence, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AngularVelocityConfidence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AngularVelocityConfidence__ros_msg_type * ros_message = static_cast<_AngularVelocityConfidence__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: pitch_rate_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PitchRateConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pitch_rate_confidence))
    {
      return false;
    }
  }

  // Field name: roll_rate_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, RollRateConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->roll_rate_confidence))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__AngularVelocityConfidence(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AngularVelocityConfidence__ros_msg_type * ros_message = static_cast<const _AngularVelocityConfidence__ros_msg_type *>(untyped_ros_message);
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
  // field.name pitch_rate_confidence

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__PitchRateConfidence(
    &(ros_message->pitch_rate_confidence), current_alignment);
  // field.name roll_rate_confidence

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__RollRateConfidence(
    &(ros_message->roll_rate_confidence), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AngularVelocityConfidence__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__AngularVelocityConfidence(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__AngularVelocityConfidence(
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

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pitch_rate_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__PitchRateConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: roll_rate_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__RollRateConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AngularVelocityConfidence__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__AngularVelocityConfidence(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AngularVelocityConfidence = {
  "j3224_v2x_msgs::msg",
  "AngularVelocityConfidence",
  _AngularVelocityConfidence__cdr_serialize,
  _AngularVelocityConfidence__cdr_deserialize,
  _AngularVelocityConfidence__get_serialized_size,
  _AngularVelocityConfidence__max_serialized_size
};

static rosidl_message_type_support_t _AngularVelocityConfidence__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AngularVelocityConfidence,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AngularVelocityConfidence)() {
  return &_AngularVelocityConfidence__type_support;
}

#if defined(__cplusplus)
}
#endif
