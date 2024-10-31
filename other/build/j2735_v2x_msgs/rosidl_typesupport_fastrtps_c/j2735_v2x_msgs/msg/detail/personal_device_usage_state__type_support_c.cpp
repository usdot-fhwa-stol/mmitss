// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/PersonalDeviceUsageState.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__struct.h"
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__functions.h"
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


using _PersonalDeviceUsageState__ros_msg_type = j2735_v2x_msgs__msg__PersonalDeviceUsageState;

static bool _PersonalDeviceUsageState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PersonalDeviceUsageState__ros_msg_type * ros_message = static_cast<const _PersonalDeviceUsageState__ros_msg_type *>(untyped_ros_message);
  // Field name: states
  {
    cdr << ros_message->states;
  }

  return true;
}

static bool _PersonalDeviceUsageState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PersonalDeviceUsageState__ros_msg_type * ros_message = static_cast<_PersonalDeviceUsageState__ros_msg_type *>(untyped_ros_message);
  // Field name: states
  {
    cdr >> ros_message->states;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUsageState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PersonalDeviceUsageState__ros_msg_type * ros_message = static_cast<const _PersonalDeviceUsageState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name states
  {
    size_t item_size = sizeof(ros_message->states);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PersonalDeviceUsageState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUsageState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUsageState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: states
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PersonalDeviceUsageState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUsageState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PersonalDeviceUsageState = {
  "j2735_v2x_msgs::msg",
  "PersonalDeviceUsageState",
  _PersonalDeviceUsageState__cdr_serialize,
  _PersonalDeviceUsageState__cdr_deserialize,
  _PersonalDeviceUsageState__get_serialized_size,
  _PersonalDeviceUsageState__max_serialized_size
};

static rosidl_message_type_support_t _PersonalDeviceUsageState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PersonalDeviceUsageState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUsageState)() {
  return &_PersonalDeviceUsageState__type_support;
}

#if defined(__cplusplus)
}
#endif
