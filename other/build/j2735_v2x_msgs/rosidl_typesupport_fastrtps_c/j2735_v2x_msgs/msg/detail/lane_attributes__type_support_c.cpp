// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributes.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/lane_attributes__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes__struct.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/lane_direction__functions.h"  // directional_use
#include "j2735_v2x_msgs/msg/detail/lane_sharing__functions.h"  // shared_with
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__functions.h"  // lane_type

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneDirection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneDirection(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneDirection)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneSharing(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneSharing(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneSharing)();
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneTypeAttributes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LaneTypeAttributes(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneTypeAttributes)();


using _LaneAttributes__ros_msg_type = j2735_v2x_msgs__msg__LaneAttributes;

static bool _LaneAttributes__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneAttributes__ros_msg_type * ros_message = static_cast<const _LaneAttributes__ros_msg_type *>(untyped_ros_message);
  // Field name: directional_use
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneDirection
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->directional_use, cdr))
    {
      return false;
    }
  }

  // Field name: shared_with
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneSharing
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->shared_with, cdr))
    {
      return false;
    }
  }

  // Field name: lane_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneTypeAttributes
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lane_type, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LaneAttributes__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneAttributes__ros_msg_type * ros_message = static_cast<_LaneAttributes__ros_msg_type *>(untyped_ros_message);
  // Field name: directional_use
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneDirection
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->directional_use))
    {
      return false;
    }
  }

  // Field name: shared_with
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneSharing
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->shared_with))
    {
      return false;
    }
  }

  // Field name: lane_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneTypeAttributes
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lane_type))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributes(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneAttributes__ros_msg_type * ros_message = static_cast<const _LaneAttributes__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name directional_use

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneDirection(
    &(ros_message->directional_use), current_alignment);
  // field.name shared_with

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneSharing(
    &(ros_message->shared_with), current_alignment);
  // field.name lane_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneTypeAttributes(
    &(ros_message->lane_type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LaneAttributes__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__LaneAttributes(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributes(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: directional_use
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneDirection(
        full_bounded, current_alignment);
    }
  }
  // member: shared_with
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneSharing(
        full_bounded, current_alignment);
    }
  }
  // member: lane_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneTypeAttributes(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneAttributes__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__LaneAttributes(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneAttributes = {
  "j2735_v2x_msgs::msg",
  "LaneAttributes",
  _LaneAttributes__cdr_serialize,
  _LaneAttributes__cdr_deserialize,
  _LaneAttributes__get_serialized_size,
  _LaneAttributes__max_serialized_size
};

static rosidl_message_type_support_t _LaneAttributes__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneAttributes,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributes)() {
  return &_LaneAttributes__type_support;
}

#if defined(__cplusplus)
}
#endif
