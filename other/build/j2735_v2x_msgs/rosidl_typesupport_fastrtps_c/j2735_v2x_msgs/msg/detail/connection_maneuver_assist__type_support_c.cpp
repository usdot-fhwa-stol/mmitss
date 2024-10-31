// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.h"
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"
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


// forward declare type support functions


using _ConnectionManeuverAssist__ros_msg_type = j2735_v2x_msgs__msg__ConnectionManeuverAssist;

static bool _ConnectionManeuverAssist__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConnectionManeuverAssist__ros_msg_type * ros_message = static_cast<const _ConnectionManeuverAssist__ros_msg_type *>(untyped_ros_message);
  // Field name: connection_id
  {
    cdr << ros_message->connection_id;
  }

  // Field name: queue_length
  {
    cdr << ros_message->queue_length;
  }

  // Field name: queue_length_exists
  {
    cdr << (ros_message->queue_length_exists ? true : false);
  }

  // Field name: available_storage_length
  {
    cdr << ros_message->available_storage_length;
  }

  // Field name: available_storage_length_exists
  {
    cdr << (ros_message->available_storage_length_exists ? true : false);
  }

  // Field name: wait_on_stop
  {
    cdr << (ros_message->wait_on_stop ? true : false);
  }

  // Field name: wait_on_stop_exists
  {
    cdr << (ros_message->wait_on_stop_exists ? true : false);
  }

  // Field name: ped_bicycle_detect
  {
    cdr << (ros_message->ped_bicycle_detect ? true : false);
  }

  // Field name: ped_bicycle_detect_exists
  {
    cdr << (ros_message->ped_bicycle_detect_exists ? true : false);
  }

  return true;
}

static bool _ConnectionManeuverAssist__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConnectionManeuverAssist__ros_msg_type * ros_message = static_cast<_ConnectionManeuverAssist__ros_msg_type *>(untyped_ros_message);
  // Field name: connection_id
  {
    cdr >> ros_message->connection_id;
  }

  // Field name: queue_length
  {
    cdr >> ros_message->queue_length;
  }

  // Field name: queue_length_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->queue_length_exists = tmp ? true : false;
  }

  // Field name: available_storage_length
  {
    cdr >> ros_message->available_storage_length;
  }

  // Field name: available_storage_length_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->available_storage_length_exists = tmp ? true : false;
  }

  // Field name: wait_on_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wait_on_stop = tmp ? true : false;
  }

  // Field name: wait_on_stop_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wait_on_stop_exists = tmp ? true : false;
  }

  // Field name: ped_bicycle_detect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ped_bicycle_detect = tmp ? true : false;
  }

  // Field name: ped_bicycle_detect_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ped_bicycle_detect_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__ConnectionManeuverAssist(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConnectionManeuverAssist__ros_msg_type * ros_message = static_cast<const _ConnectionManeuverAssist__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name connection_id
  {
    size_t item_size = sizeof(ros_message->connection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name queue_length
  {
    size_t item_size = sizeof(ros_message->queue_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name queue_length_exists
  {
    size_t item_size = sizeof(ros_message->queue_length_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name available_storage_length
  {
    size_t item_size = sizeof(ros_message->available_storage_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name available_storage_length_exists
  {
    size_t item_size = sizeof(ros_message->available_storage_length_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wait_on_stop
  {
    size_t item_size = sizeof(ros_message->wait_on_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wait_on_stop_exists
  {
    size_t item_size = sizeof(ros_message->wait_on_stop_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ped_bicycle_detect
  {
    size_t item_size = sizeof(ros_message->ped_bicycle_detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ped_bicycle_detect_exists
  {
    size_t item_size = sizeof(ros_message->ped_bicycle_detect_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConnectionManeuverAssist__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__ConnectionManeuverAssist(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__ConnectionManeuverAssist(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: connection_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: queue_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: queue_length_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: available_storage_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: available_storage_length_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wait_on_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wait_on_stop_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ped_bicycle_detect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ped_bicycle_detect_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ConnectionManeuverAssist__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__ConnectionManeuverAssist(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConnectionManeuverAssist = {
  "j2735_v2x_msgs::msg",
  "ConnectionManeuverAssist",
  _ConnectionManeuverAssist__cdr_serialize,
  _ConnectionManeuverAssist__cdr_deserialize,
  _ConnectionManeuverAssist__get_serialized_size,
  _ConnectionManeuverAssist__max_serialized_size
};

static rosidl_message_type_support_t _ConnectionManeuverAssist__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConnectionManeuverAssist,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ConnectionManeuverAssist)() {
  return &_ConnectionManeuverAssist__type_support;
}

#if defined(__cplusplus)
}
#endif
