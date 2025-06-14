// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/movement_event__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/movement_event__struct.h"
#include "j2735_v2x_msgs/msg/detail/movement_event__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/advisory_speed_list__functions.h"  // speeds
#include "j2735_v2x_msgs/msg/detail/movement_phase_state__functions.h"  // event_state
#include "j2735_v2x_msgs/msg/detail/time_change_details__functions.h"  // timing

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeedList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeedList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AdvisorySpeedList)();
size_t get_serialized_size_j2735_v2x_msgs__msg__MovementPhaseState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__MovementPhaseState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MovementPhaseState)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TimeChangeDetails(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TimeChangeDetails(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TimeChangeDetails)();


using _MovementEvent__ros_msg_type = j2735_v2x_msgs__msg__MovementEvent;

static bool _MovementEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MovementEvent__ros_msg_type * ros_message = static_cast<const _MovementEvent__ros_msg_type *>(untyped_ros_message);
  // Field name: event_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MovementPhaseState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->event_state, cdr))
    {
      return false;
    }
  }

  // Field name: timing
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TimeChangeDetails
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->timing, cdr))
    {
      return false;
    }
  }

  // Field name: timing_exists
  {
    cdr << (ros_message->timing_exists ? true : false);
  }

  // Field name: speeds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AdvisorySpeedList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speeds, cdr))
    {
      return false;
    }
  }

  // Field name: speeds_exists
  {
    cdr << (ros_message->speeds_exists ? true : false);
  }

  return true;
}

static bool _MovementEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MovementEvent__ros_msg_type * ros_message = static_cast<_MovementEvent__ros_msg_type *>(untyped_ros_message);
  // Field name: event_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MovementPhaseState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->event_state))
    {
      return false;
    }
  }

  // Field name: timing
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TimeChangeDetails
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->timing))
    {
      return false;
    }
  }

  // Field name: timing_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->timing_exists = tmp ? true : false;
  }

  // Field name: speeds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AdvisorySpeedList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speeds))
    {
      return false;
    }
  }

  // Field name: speeds_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->speeds_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__MovementEvent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MovementEvent__ros_msg_type * ros_message = static_cast<const _MovementEvent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name event_state

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__MovementPhaseState(
    &(ros_message->event_state), current_alignment);
  // field.name timing

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TimeChangeDetails(
    &(ros_message->timing), current_alignment);
  // field.name timing_exists
  {
    size_t item_size = sizeof(ros_message->timing_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speeds

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeedList(
    &(ros_message->speeds), current_alignment);
  // field.name speeds_exists
  {
    size_t item_size = sizeof(ros_message->speeds_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MovementEvent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__MovementEvent(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__MovementEvent(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: event_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__MovementPhaseState(
        full_bounded, current_alignment);
    }
  }
  // member: timing
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TimeChangeDetails(
        full_bounded, current_alignment);
    }
  }
  // member: timing_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speeds
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AdvisorySpeedList(
        full_bounded, current_alignment);
    }
  }
  // member: speeds_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MovementEvent__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__MovementEvent(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MovementEvent = {
  "j2735_v2x_msgs::msg",
  "MovementEvent",
  _MovementEvent__cdr_serialize,
  _MovementEvent__cdr_deserialize,
  _MovementEvent__get_serialized_size,
  _MovementEvent__max_serialized_size
};

static rosidl_message_type_support_t _MovementEvent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MovementEvent,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MovementEvent)() {
  return &_MovementEvent__type_support;
}

#if defined(__cplusplus)
}
#endif
