// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/connection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/connection__struct.h"
#include "j2735_v2x_msgs/msg/detail/connection__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/connecting_lane__functions.h"  // connecting_lane
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"  // remote_intersection

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__ConnectingLane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__ConnectingLane(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ConnectingLane)();
size_t get_serialized_size_j2735_v2x_msgs__msg__IntersectionReferenceID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__IntersectionReferenceID(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, IntersectionReferenceID)();


using _Connection__ros_msg_type = j2735_v2x_msgs__msg__Connection;

static bool _Connection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Connection__ros_msg_type * ros_message = static_cast<const _Connection__ros_msg_type *>(untyped_ros_message);
  // Field name: connecting_lane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ConnectingLane
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->connecting_lane, cdr))
    {
      return false;
    }
  }

  // Field name: remote_intersection
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, IntersectionReferenceID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->remote_intersection, cdr))
    {
      return false;
    }
  }

  // Field name: remote_intersection_exists
  {
    cdr << (ros_message->remote_intersection_exists ? true : false);
  }

  // Field name: signal_group
  {
    cdr << ros_message->signal_group;
  }

  // Field name: signal_group_exists
  {
    cdr << (ros_message->signal_group_exists ? true : false);
  }

  // Field name: user_class
  {
    cdr << ros_message->user_class;
  }

  // Field name: user_class_exists
  {
    cdr << (ros_message->user_class_exists ? true : false);
  }

  // Field name: connection_id
  {
    cdr << ros_message->connection_id;
  }

  // Field name: connection_id_exists
  {
    cdr << (ros_message->connection_id_exists ? true : false);
  }

  return true;
}

static bool _Connection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Connection__ros_msg_type * ros_message = static_cast<_Connection__ros_msg_type *>(untyped_ros_message);
  // Field name: connecting_lane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ConnectingLane
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->connecting_lane))
    {
      return false;
    }
  }

  // Field name: remote_intersection
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, IntersectionReferenceID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->remote_intersection))
    {
      return false;
    }
  }

  // Field name: remote_intersection_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->remote_intersection_exists = tmp ? true : false;
  }

  // Field name: signal_group
  {
    cdr >> ros_message->signal_group;
  }

  // Field name: signal_group_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->signal_group_exists = tmp ? true : false;
  }

  // Field name: user_class
  {
    cdr >> ros_message->user_class;
  }

  // Field name: user_class_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->user_class_exists = tmp ? true : false;
  }

  // Field name: connection_id
  {
    cdr >> ros_message->connection_id;
  }

  // Field name: connection_id_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connection_id_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Connection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Connection__ros_msg_type * ros_message = static_cast<const _Connection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name connecting_lane

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ConnectingLane(
    &(ros_message->connecting_lane), current_alignment);
  // field.name remote_intersection

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__IntersectionReferenceID(
    &(ros_message->remote_intersection), current_alignment);
  // field.name remote_intersection_exists
  {
    size_t item_size = sizeof(ros_message->remote_intersection_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_group
  {
    size_t item_size = sizeof(ros_message->signal_group);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_group_exists
  {
    size_t item_size = sizeof(ros_message->signal_group_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name user_class
  {
    size_t item_size = sizeof(ros_message->user_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name user_class_exists
  {
    size_t item_size = sizeof(ros_message->user_class_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name connection_id
  {
    size_t item_size = sizeof(ros_message->connection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name connection_id_exists
  {
    size_t item_size = sizeof(ros_message->connection_id_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Connection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__Connection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Connection(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: connecting_lane
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ConnectingLane(
        full_bounded, current_alignment);
    }
  }
  // member: remote_intersection
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__IntersectionReferenceID(
        full_bounded, current_alignment);
    }
  }
  // member: remote_intersection_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_group
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_group_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: user_class
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: user_class_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: connection_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: connection_id_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Connection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__Connection(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Connection = {
  "j2735_v2x_msgs::msg",
  "Connection",
  _Connection__cdr_serialize,
  _Connection__cdr_deserialize,
  _Connection__get_serialized_size,
  _Connection__max_serialized_size
};

static rosidl_message_type_support_t _Connection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Connection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Connection)() {
  return &_Connection__type_support;
}

#if defined(__cplusplus)
}
#endif
