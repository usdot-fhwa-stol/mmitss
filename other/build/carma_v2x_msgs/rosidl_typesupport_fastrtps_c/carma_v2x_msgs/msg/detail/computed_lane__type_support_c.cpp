// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/computed_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/computed_lane__struct.h"
#include "carma_v2x_msgs/msg/detail/computed_lane__functions.h"
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

#include "carma_v2x_msgs/msg/detail/offset_axis__functions.h"  // offset_x_axis, offset_y_axis

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__OffsetAxis(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__OffsetAxis(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetAxis)();


using _ComputedLane__ros_msg_type = carma_v2x_msgs__msg__ComputedLane;

static bool _ComputedLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ComputedLane__ros_msg_type * ros_message = static_cast<const _ComputedLane__ros_msg_type *>(untyped_ros_message);
  // Field name: reference_lane_id
  {
    cdr << ros_message->reference_lane_id;
  }

  // Field name: offset_x_axis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetAxis
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->offset_x_axis, cdr))
    {
      return false;
    }
  }

  // Field name: offset_y_axis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetAxis
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->offset_y_axis, cdr))
    {
      return false;
    }
  }

  // Field name: rotate_xy
  {
    cdr << ros_message->rotate_xy;
  }

  // Field name: rotatexy_exists
  {
    cdr << (ros_message->rotatexy_exists ? true : false);
  }

  // Field name: scale_x_axis
  {
    cdr << ros_message->scale_x_axis;
  }

  // Field name: scale_x_axis_exists
  {
    cdr << (ros_message->scale_x_axis_exists ? true : false);
  }

  // Field name: scale_y_axis
  {
    cdr << ros_message->scale_y_axis;
  }

  // Field name: scale_y_axis_exists
  {
    cdr << (ros_message->scale_y_axis_exists ? true : false);
  }

  return true;
}

static bool _ComputedLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ComputedLane__ros_msg_type * ros_message = static_cast<_ComputedLane__ros_msg_type *>(untyped_ros_message);
  // Field name: reference_lane_id
  {
    cdr >> ros_message->reference_lane_id;
  }

  // Field name: offset_x_axis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetAxis
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->offset_x_axis))
    {
      return false;
    }
  }

  // Field name: offset_y_axis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetAxis
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->offset_y_axis))
    {
      return false;
    }
  }

  // Field name: rotate_xy
  {
    cdr >> ros_message->rotate_xy;
  }

  // Field name: rotatexy_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rotatexy_exists = tmp ? true : false;
  }

  // Field name: scale_x_axis
  {
    cdr >> ros_message->scale_x_axis;
  }

  // Field name: scale_x_axis_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->scale_x_axis_exists = tmp ? true : false;
  }

  // Field name: scale_y_axis
  {
    cdr >> ros_message->scale_y_axis;
  }

  // Field name: scale_y_axis_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->scale_y_axis_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__ComputedLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ComputedLane__ros_msg_type * ros_message = static_cast<const _ComputedLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reference_lane_id
  {
    size_t item_size = sizeof(ros_message->reference_lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_x_axis

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__OffsetAxis(
    &(ros_message->offset_x_axis), current_alignment);
  // field.name offset_y_axis

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__OffsetAxis(
    &(ros_message->offset_y_axis), current_alignment);
  // field.name rotate_xy
  {
    size_t item_size = sizeof(ros_message->rotate_xy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotatexy_exists
  {
    size_t item_size = sizeof(ros_message->rotatexy_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scale_x_axis
  {
    size_t item_size = sizeof(ros_message->scale_x_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scale_x_axis_exists
  {
    size_t item_size = sizeof(ros_message->scale_x_axis_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scale_y_axis
  {
    size_t item_size = sizeof(ros_message->scale_y_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scale_y_axis_exists
  {
    size_t item_size = sizeof(ros_message->scale_y_axis_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ComputedLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__ComputedLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__ComputedLane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: reference_lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: offset_x_axis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__OffsetAxis(
        full_bounded, current_alignment);
    }
  }
  // member: offset_y_axis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__OffsetAxis(
        full_bounded, current_alignment);
    }
  }
  // member: rotate_xy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotatexy_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scale_x_axis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scale_x_axis_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scale_y_axis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scale_y_axis_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ComputedLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__ComputedLane(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ComputedLane = {
  "carma_v2x_msgs::msg",
  "ComputedLane",
  _ComputedLane__cdr_serialize,
  _ComputedLane__cdr_deserialize,
  _ComputedLane__get_serialized_size,
  _ComputedLane__max_serialized_size
};

static rosidl_message_type_support_t _ComputedLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ComputedLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ComputedLane)() {
  return &_ComputedLane__type_support;
}

#if defined(__cplusplus)
}
#endif
