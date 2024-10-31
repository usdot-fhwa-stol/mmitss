// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/PositionOffsetXYZ.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/position_offset_xyz__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/position_offset_xyz__struct.h"
#include "j3224_v2x_msgs/msg/detail/position_offset_xyz__functions.h"
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

#include "j3224_v2x_msgs/msg/detail/object_distance__functions.h"  // offset_x, offset_y, offset_z

// forward declare type support functions
size_t get_serialized_size_j3224_v2x_msgs__msg__ObjectDistance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__ObjectDistance(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectDistance)();


using _PositionOffsetXYZ__ros_msg_type = j3224_v2x_msgs__msg__PositionOffsetXYZ;

static bool _PositionOffsetXYZ__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionOffsetXYZ__ros_msg_type * ros_message = static_cast<const _PositionOffsetXYZ__ros_msg_type *>(untyped_ros_message);
  // Field name: offset_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectDistance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->offset_x, cdr))
    {
      return false;
    }
  }

  // Field name: offset_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectDistance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->offset_y, cdr))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: offset_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectDistance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->offset_z, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PositionOffsetXYZ__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionOffsetXYZ__ros_msg_type * ros_message = static_cast<_PositionOffsetXYZ__ros_msg_type *>(untyped_ros_message);
  // Field name: offset_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectDistance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->offset_x))
    {
      return false;
    }
  }

  // Field name: offset_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectDistance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->offset_y))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: offset_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectDistance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->offset_z))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__PositionOffsetXYZ(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionOffsetXYZ__ros_msg_type * ros_message = static_cast<const _PositionOffsetXYZ__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name offset_x

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__ObjectDistance(
    &(ros_message->offset_x), current_alignment);
  // field.name offset_y

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__ObjectDistance(
    &(ros_message->offset_y), current_alignment);
  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_z

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__ObjectDistance(
    &(ros_message->offset_z), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PositionOffsetXYZ__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__PositionOffsetXYZ(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__PositionOffsetXYZ(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: offset_x
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__ObjectDistance(
        full_bounded, current_alignment);
    }
  }
  // member: offset_y
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__ObjectDistance(
        full_bounded, current_alignment);
    }
  }
  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: offset_z
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__ObjectDistance(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionOffsetXYZ__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__PositionOffsetXYZ(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PositionOffsetXYZ = {
  "j3224_v2x_msgs::msg",
  "PositionOffsetXYZ",
  _PositionOffsetXYZ__cdr_serialize,
  _PositionOffsetXYZ__cdr_deserialize,
  _PositionOffsetXYZ__get_serialized_size,
  _PositionOffsetXYZ__max_serialized_size
};

static rosidl_message_type_support_t _PositionOffsetXYZ__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionOffsetXYZ,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PositionOffsetXYZ)() {
  return &_PositionOffsetXYZ__type_support;
}

#if defined(__cplusplus)
}
#endif
