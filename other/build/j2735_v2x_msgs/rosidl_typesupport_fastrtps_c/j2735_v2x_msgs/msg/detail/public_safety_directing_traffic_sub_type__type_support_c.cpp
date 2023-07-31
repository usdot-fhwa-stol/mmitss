// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/PublicSafetyDirectingTrafficSubType.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__struct.h"
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__functions.h"
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


using _PublicSafetyDirectingTrafficSubType__ros_msg_type = j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType;

static bool _PublicSafetyDirectingTrafficSubType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PublicSafetyDirectingTrafficSubType__ros_msg_type * ros_message = static_cast<const _PublicSafetyDirectingTrafficSubType__ros_msg_type *>(untyped_ros_message);
  // Field name: sub_types
  {
    cdr << ros_message->sub_types;
  }

  return true;
}

static bool _PublicSafetyDirectingTrafficSubType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PublicSafetyDirectingTrafficSubType__ros_msg_type * ros_message = static_cast<_PublicSafetyDirectingTrafficSubType__ros_msg_type *>(untyped_ros_message);
  // Field name: sub_types
  {
    cdr >> ros_message->sub_types;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PublicSafetyDirectingTrafficSubType__ros_msg_type * ros_message = static_cast<const _PublicSafetyDirectingTrafficSubType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sub_types
  {
    size_t item_size = sizeof(ros_message->sub_types);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PublicSafetyDirectingTrafficSubType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sub_types
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PublicSafetyDirectingTrafficSubType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PublicSafetyDirectingTrafficSubType = {
  "j2735_v2x_msgs::msg",
  "PublicSafetyDirectingTrafficSubType",
  _PublicSafetyDirectingTrafficSubType__cdr_serialize,
  _PublicSafetyDirectingTrafficSubType__cdr_deserialize,
  _PublicSafetyDirectingTrafficSubType__get_serialized_size,
  _PublicSafetyDirectingTrafficSubType__max_serialized_size
};

static rosidl_message_type_support_t _PublicSafetyDirectingTrafficSubType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PublicSafetyDirectingTrafficSubType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyDirectingTrafficSubType)() {
  return &_PublicSafetyDirectingTrafficSubType__type_support;
}

#if defined(__cplusplus)
}
#endif
