// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/PivotPointDescription.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__struct.h"
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/angle__functions.h"  // pivot_angle
#include "j2735_v2x_msgs/msg/detail/offset_b11__functions.h"  // pivot_offset
#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__functions.h"  // pivots

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__Angle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__Angle(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Angle)();
size_t get_serialized_size_j2735_v2x_msgs__msg__OffsetB11(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__OffsetB11(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB11)();
size_t get_serialized_size_j2735_v2x_msgs__msg__PivotingAllowed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__PivotingAllowed(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotingAllowed)();


using _PivotPointDescription__ros_msg_type = j2735_v2x_msgs__msg__PivotPointDescription;

static bool _PivotPointDescription__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PivotPointDescription__ros_msg_type * ros_message = static_cast<const _PivotPointDescription__ros_msg_type *>(untyped_ros_message);
  // Field name: pivot_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB11
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pivot_offset, cdr))
    {
      return false;
    }
  }

  // Field name: pivot_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Angle
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pivot_angle, cdr))
    {
      return false;
    }
  }

  // Field name: pivots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotingAllowed
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pivots, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PivotPointDescription__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PivotPointDescription__ros_msg_type * ros_message = static_cast<_PivotPointDescription__ros_msg_type *>(untyped_ros_message);
  // Field name: pivot_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, OffsetB11
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pivot_offset))
    {
      return false;
    }
  }

  // Field name: pivot_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Angle
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pivot_angle))
    {
      return false;
    }
  }

  // Field name: pivots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotingAllowed
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pivots))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PivotPointDescription__ros_msg_type * ros_message = static_cast<const _PivotPointDescription__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pivot_offset

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__OffsetB11(
    &(ros_message->pivot_offset), current_alignment);
  // field.name pivot_angle

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Angle(
    &(ros_message->pivot_angle), current_alignment);
  // field.name pivots

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PivotingAllowed(
    &(ros_message->pivots), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PivotPointDescription__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pivot_offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__OffsetB11(
        full_bounded, current_alignment);
    }
  }
  // member: pivot_angle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Angle(
        full_bounded, current_alignment);
    }
  }
  // member: pivots
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PivotingAllowed(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PivotPointDescription__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__PivotPointDescription(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PivotPointDescription = {
  "j2735_v2x_msgs::msg",
  "PivotPointDescription",
  _PivotPointDescription__cdr_serialize,
  _PivotPointDescription__cdr_deserialize,
  _PivotPointDescription__get_serialized_size,
  _PivotPointDescription__max_serialized_size
};

static rosidl_message_type_support_t _PivotPointDescription__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PivotPointDescription,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PivotPointDescription)() {
  return &_PivotPointDescription__type_support;
}

#if defined(__cplusplus)
}
#endif
