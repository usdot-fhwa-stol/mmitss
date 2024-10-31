// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/attitude__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/attitude__struct.h"
#include "j3224_v2x_msgs/msg/detail/attitude__functions.h"
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

#include "j3224_v2x_msgs/msg/detail/pitch_detected__functions.h"  // pitch
#include "j3224_v2x_msgs/msg/detail/roll_detected__functions.h"  // roll
#include "j3224_v2x_msgs/msg/detail/yaw_detected__functions.h"  // yaw

// forward declare type support functions
size_t get_serialized_size_j3224_v2x_msgs__msg__PitchDetected(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__PitchDetected(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PitchDetected)();
size_t get_serialized_size_j3224_v2x_msgs__msg__RollDetected(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__RollDetected(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, RollDetected)();
size_t get_serialized_size_j3224_v2x_msgs__msg__YawDetected(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__YawDetected(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, YawDetected)();


using _Attitude__ros_msg_type = j3224_v2x_msgs__msg__Attitude;

static bool _Attitude__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Attitude__ros_msg_type * ros_message = static_cast<const _Attitude__ros_msg_type *>(untyped_ros_message);
  // Field name: pitch
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PitchDetected
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pitch, cdr))
    {
      return false;
    }
  }

  // Field name: roll
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, RollDetected
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->roll, cdr))
    {
      return false;
    }
  }

  // Field name: yaw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, YawDetected
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->yaw, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Attitude__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Attitude__ros_msg_type * ros_message = static_cast<_Attitude__ros_msg_type *>(untyped_ros_message);
  // Field name: pitch
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PitchDetected
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pitch))
    {
      return false;
    }
  }

  // Field name: roll
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, RollDetected
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->roll))
    {
      return false;
    }
  }

  // Field name: yaw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, YawDetected
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->yaw))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__Attitude(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Attitude__ros_msg_type * ros_message = static_cast<const _Attitude__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pitch

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__PitchDetected(
    &(ros_message->pitch), current_alignment);
  // field.name roll

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__RollDetected(
    &(ros_message->roll), current_alignment);
  // field.name yaw

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__YawDetected(
    &(ros_message->yaw), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Attitude__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__Attitude(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__Attitude(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pitch
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__PitchDetected(
        full_bounded, current_alignment);
    }
  }
  // member: roll
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__RollDetected(
        full_bounded, current_alignment);
    }
  }
  // member: yaw
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__YawDetected(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Attitude__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__Attitude(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Attitude = {
  "j3224_v2x_msgs::msg",
  "Attitude",
  _Attitude__cdr_serialize,
  _Attitude__cdr_deserialize,
  _Attitude__get_serialized_size,
  _Attitude__max_serialized_size
};

static rosidl_message_type_support_t _Attitude__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Attitude,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, Attitude)() {
  return &_Attitude__type_support;
}

#if defined(__cplusplus)
}
#endif
