// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/path_history_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/path_history_point__struct.h"
#include "carma_v2x_msgs/msg/detail/path_history_point__functions.h"
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

#include "carma_v2x_msgs/msg/detail/coarse_heading__functions.h"  // heading
#include "carma_v2x_msgs/msg/detail/offset_llb18__functions.h"  // lat_offset, lon_offset
#include "carma_v2x_msgs/msg/detail/positional_accuracy__functions.h"  // pos_accuracy
#include "carma_v2x_msgs/msg/detail/speed__functions.h"  // speed
#include "carma_v2x_msgs/msg/detail/time_offset__functions.h"  // time_offset
#include "carma_v2x_msgs/msg/detail/vert_offset_b12__functions.h"  // elevation_offset

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__CoarseHeading(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__CoarseHeading(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, CoarseHeading)();
size_t get_serialized_size_carma_v2x_msgs__msg__OffsetLLB18(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__OffsetLLB18(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetLLB18)();
size_t get_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PositionalAccuracy)();
size_t get_serialized_size_carma_v2x_msgs__msg__Speed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Speed(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Speed)();
size_t get_serialized_size_carma_v2x_msgs__msg__TimeOffset(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__TimeOffset(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TimeOffset)();
size_t get_serialized_size_carma_v2x_msgs__msg__VertOffsetB12(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__VertOffsetB12(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, VertOffsetB12)();


using _PathHistoryPoint__ros_msg_type = carma_v2x_msgs__msg__PathHistoryPoint;

static bool _PathHistoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathHistoryPoint__ros_msg_type * ros_message = static_cast<const _PathHistoryPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: lat_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetLLB18
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lat_offset, cdr))
    {
      return false;
    }
  }

  // Field name: lon_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetLLB18
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lon_offset, cdr))
    {
      return false;
    }
  }

  // Field name: elevation_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, VertOffsetB12
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->elevation_offset, cdr))
    {
      return false;
    }
  }

  // Field name: time_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TimeOffset
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->time_offset, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Speed
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed, cdr))
    {
      return false;
    }
  }

  // Field name: pos_accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pos_accuracy, cdr))
    {
      return false;
    }
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, CoarseHeading
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heading, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PathHistoryPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathHistoryPoint__ros_msg_type * ros_message = static_cast<_PathHistoryPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: lat_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetLLB18
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lat_offset))
    {
      return false;
    }
  }

  // Field name: lon_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, OffsetLLB18
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lon_offset))
    {
      return false;
    }
  }

  // Field name: elevation_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, VertOffsetB12
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->elevation_offset))
    {
      return false;
    }
  }

  // Field name: time_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TimeOffset
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->time_offset))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Speed
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed))
    {
      return false;
    }
  }

  // Field name: pos_accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pos_accuracy))
    {
      return false;
    }
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, CoarseHeading
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heading))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__PathHistoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathHistoryPoint__ros_msg_type * ros_message = static_cast<const _PathHistoryPoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lat_offset

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__OffsetLLB18(
    &(ros_message->lat_offset), current_alignment);
  // field.name lon_offset

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__OffsetLLB18(
    &(ros_message->lon_offset), current_alignment);
  // field.name elevation_offset

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__VertOffsetB12(
    &(ros_message->elevation_offset), current_alignment);
  // field.name time_offset

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__TimeOffset(
    &(ros_message->time_offset), current_alignment);
  // field.name speed

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Speed(
    &(ros_message->speed), current_alignment);
  // field.name pos_accuracy

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
    &(ros_message->pos_accuracy), current_alignment);
  // field.name heading

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__CoarseHeading(
    &(ros_message->heading), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PathHistoryPoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__PathHistoryPoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__PathHistoryPoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: lat_offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__OffsetLLB18(
        full_bounded, current_alignment);
    }
  }
  // member: lon_offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__OffsetLLB18(
        full_bounded, current_alignment);
    }
  }
  // member: elevation_offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__VertOffsetB12(
        full_bounded, current_alignment);
    }
  }
  // member: time_offset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__TimeOffset(
        full_bounded, current_alignment);
    }
  }
  // member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Speed(
        full_bounded, current_alignment);
    }
  }
  // member: pos_accuracy
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
        full_bounded, current_alignment);
    }
  }
  // member: heading
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__CoarseHeading(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PathHistoryPoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__PathHistoryPoint(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathHistoryPoint = {
  "carma_v2x_msgs::msg",
  "PathHistoryPoint",
  _PathHistoryPoint__cdr_serialize,
  _PathHistoryPoint__cdr_deserialize,
  _PathHistoryPoint__get_serialized_size,
  _PathHistoryPoint__max_serialized_size
};

static rosidl_message_type_support_t _PathHistoryPoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathHistoryPoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathHistoryPoint)() {
  return &_PathHistoryPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
