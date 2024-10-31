// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/TractionControlStatus.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traction_control_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/traction_control_status__struct.h"
#include "j2735_v2x_msgs/msg/detail/traction_control_status__functions.h"
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


using _TractionControlStatus__ros_msg_type = j2735_v2x_msgs__msg__TractionControlStatus;

static bool _TractionControlStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TractionControlStatus__ros_msg_type * ros_message = static_cast<const _TractionControlStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: traction_control_status
  {
    cdr << ros_message->traction_control_status;
  }

  return true;
}

static bool _TractionControlStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TractionControlStatus__ros_msg_type * ros_message = static_cast<_TractionControlStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: traction_control_status
  {
    cdr >> ros_message->traction_control_status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TractionControlStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TractionControlStatus__ros_msg_type * ros_message = static_cast<const _TractionControlStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name traction_control_status
  {
    size_t item_size = sizeof(ros_message->traction_control_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TractionControlStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__TractionControlStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TractionControlStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: traction_control_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TractionControlStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__TractionControlStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TractionControlStatus = {
  "j2735_v2x_msgs::msg",
  "TractionControlStatus",
  _TractionControlStatus__cdr_serialize,
  _TractionControlStatus__cdr_deserialize,
  _TractionControlStatus__get_serialized_size,
  _TractionControlStatus__max_serialized_size
};

static rosidl_message_type_support_t _TractionControlStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TractionControlStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TractionControlStatus)() {
  return &_TractionControlStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
