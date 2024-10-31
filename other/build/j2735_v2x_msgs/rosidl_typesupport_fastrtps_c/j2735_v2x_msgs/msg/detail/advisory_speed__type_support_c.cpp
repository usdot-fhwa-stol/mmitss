// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/advisory_speed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/advisory_speed__struct.h"
#include "j2735_v2x_msgs/msg/detail/advisory_speed__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__functions.h"  // type
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"  // confidence

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeedType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeedType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AdvisorySpeedType)();
size_t get_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence)();


using _AdvisorySpeed__ros_msg_type = j2735_v2x_msgs__msg__AdvisorySpeed;

static bool _AdvisorySpeed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AdvisorySpeed__ros_msg_type * ros_message = static_cast<const _AdvisorySpeed__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AdvisorySpeedType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->type, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: speed_exists
  {
    cdr << (ros_message->speed_exists ? true : false);
  }

  // Field name: confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->confidence, cdr))
    {
      return false;
    }
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: distance_exists
  {
    cdr << (ros_message->distance_exists ? true : false);
  }

  // Field name: restriction_class_id
  {
    cdr << ros_message->restriction_class_id;
  }

  // Field name: restriction_class_id_exists
  {
    cdr << (ros_message->restriction_class_id_exists ? true : false);
  }

  return true;
}

static bool _AdvisorySpeed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AdvisorySpeed__ros_msg_type * ros_message = static_cast<_AdvisorySpeed__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AdvisorySpeedType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->type))
    {
      return false;
    }
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: speed_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->speed_exists = tmp ? true : false;
  }

  // Field name: confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->confidence))
    {
      return false;
    }
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: distance_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->distance_exists = tmp ? true : false;
  }

  // Field name: restriction_class_id
  {
    cdr >> ros_message->restriction_class_id;
  }

  // Field name: restriction_class_id_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->restriction_class_id_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AdvisorySpeed__ros_msg_type * ros_message = static_cast<const _AdvisorySpeed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeedType(
    &(ros_message->type), current_alignment);
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_exists
  {
    size_t item_size = sizeof(ros_message->speed_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
    &(ros_message->confidence), current_alignment);
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_exists
  {
    size_t item_size = sizeof(ros_message->distance_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name restriction_class_id
  {
    size_t item_size = sizeof(ros_message->restriction_class_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name restriction_class_id_exists
  {
    size_t item_size = sizeof(ros_message->restriction_class_id_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AdvisorySpeed__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeed(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeed(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeedType(
        full_bounded, current_alignment);
    }
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: distance_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: restriction_class_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: restriction_class_id_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AdvisorySpeed__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeed(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AdvisorySpeed = {
  "j2735_v2x_msgs::msg",
  "AdvisorySpeed",
  _AdvisorySpeed__cdr_serialize,
  _AdvisorySpeed__cdr_deserialize,
  _AdvisorySpeed__get_serialized_size,
  _AdvisorySpeed__max_serialized_size
};

static rosidl_message_type_support_t _AdvisorySpeed__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AdvisorySpeed,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AdvisorySpeed)() {
  return &_AdvisorySpeed__type_support;
}

#if defined(__cplusplus)
}
#endif
