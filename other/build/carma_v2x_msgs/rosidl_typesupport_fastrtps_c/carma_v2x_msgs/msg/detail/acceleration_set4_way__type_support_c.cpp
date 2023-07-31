// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__struct.h"
#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"
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


using _AccelerationSet4Way__ros_msg_type = carma_v2x_msgs__msg__AccelerationSet4Way;

static bool _AccelerationSet4Way__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AccelerationSet4Way__ros_msg_type * ros_message = static_cast<const _AccelerationSet4Way__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: longitudinal
  {
    cdr << ros_message->longitudinal;
  }

  // Field name: lateral
  {
    cdr << ros_message->lateral;
  }

  // Field name: vert
  {
    cdr << ros_message->vert;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  return true;
}

static bool _AccelerationSet4Way__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AccelerationSet4Way__ros_msg_type * ros_message = static_cast<_AccelerationSet4Way__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: longitudinal
  {
    cdr >> ros_message->longitudinal;
  }

  // Field name: lateral
  {
    cdr >> ros_message->lateral;
  }

  // Field name: vert
  {
    cdr >> ros_message->vert;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__AccelerationSet4Way(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AccelerationSet4Way__ros_msg_type * ros_message = static_cast<const _AccelerationSet4Way__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal
  {
    size_t item_size = sizeof(ros_message->longitudinal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral
  {
    size_t item_size = sizeof(ros_message->lateral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vert
  {
    size_t item_size = sizeof(ros_message->vert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AccelerationSet4Way__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__AccelerationSet4Way(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__AccelerationSet4Way(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: longitudinal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lateral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vert
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AccelerationSet4Way__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__AccelerationSet4Way(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AccelerationSet4Way = {
  "carma_v2x_msgs::msg",
  "AccelerationSet4Way",
  _AccelerationSet4Way__cdr_serialize,
  _AccelerationSet4Way__cdr_deserialize,
  _AccelerationSet4Way__get_serialized_size,
  _AccelerationSet4Way__max_serialized_size
};

static rosidl_message_type_support_t _AccelerationSet4Way__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AccelerationSet4Way,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, AccelerationSet4Way)() {
  return &_AccelerationSet4Way__type_support;
}

#if defined(__cplusplus)
}
#endif
