// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/AngularVelocity.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/angular_velocity__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/angular_velocity__struct.h"
#include "j3224_v2x_msgs/msg/detail/angular_velocity__functions.h"
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

#include "j3224_v2x_msgs/msg/detail/pitch_rate__functions.h"  // pitch_rate
#include "j3224_v2x_msgs/msg/detail/roll_rate__functions.h"  // roll_rate

// forward declare type support functions
size_t get_serialized_size_j3224_v2x_msgs__msg__PitchRate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__PitchRate(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PitchRate)();
size_t get_serialized_size_j3224_v2x_msgs__msg__RollRate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__RollRate(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, RollRate)();


using _AngularVelocity__ros_msg_type = j3224_v2x_msgs__msg__AngularVelocity;

static bool _AngularVelocity__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AngularVelocity__ros_msg_type * ros_message = static_cast<const _AngularVelocity__ros_msg_type *>(untyped_ros_message);
  // Field name: pitch_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PitchRate
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pitch_rate, cdr))
    {
      return false;
    }
  }

  // Field name: roll_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, RollRate
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->roll_rate, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AngularVelocity__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AngularVelocity__ros_msg_type * ros_message = static_cast<_AngularVelocity__ros_msg_type *>(untyped_ros_message);
  // Field name: pitch_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PitchRate
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pitch_rate))
    {
      return false;
    }
  }

  // Field name: roll_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, RollRate
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->roll_rate))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__AngularVelocity(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AngularVelocity__ros_msg_type * ros_message = static_cast<const _AngularVelocity__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pitch_rate

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__PitchRate(
    &(ros_message->pitch_rate), current_alignment);
  // field.name roll_rate

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__RollRate(
    &(ros_message->roll_rate), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AngularVelocity__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__AngularVelocity(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__AngularVelocity(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pitch_rate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__PitchRate(
        full_bounded, current_alignment);
    }
  }
  // member: roll_rate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__RollRate(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AngularVelocity__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__AngularVelocity(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AngularVelocity = {
  "j3224_v2x_msgs::msg",
  "AngularVelocity",
  _AngularVelocity__cdr_serialize,
  _AngularVelocity__cdr_deserialize,
  _AngularVelocity__get_serialized_size,
  _AngularVelocity__max_serialized_size
};

static rosidl_message_type_support_t _AngularVelocity__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AngularVelocity,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AngularVelocity)() {
  return &_AngularVelocity__type_support;
}

#if defined(__cplusplus)
}
#endif
