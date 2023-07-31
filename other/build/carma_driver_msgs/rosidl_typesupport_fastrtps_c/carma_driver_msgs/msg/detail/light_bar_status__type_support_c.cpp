// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_driver_msgs:msg/LightBarStatus.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/light_bar_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_driver_msgs/msg/detail/light_bar_status__struct.h"
#include "carma_driver_msgs/msg/detail/light_bar_status__functions.h"
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


using _LightBarStatus__ros_msg_type = carma_driver_msgs__msg__LightBarStatus;

static bool _LightBarStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LightBarStatus__ros_msg_type * ros_message = static_cast<const _LightBarStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: green_solid
  {
    cdr << ros_message->green_solid;
  }

  // Field name: yellow_solid
  {
    cdr << ros_message->yellow_solid;
  }

  // Field name: right_arrow
  {
    cdr << ros_message->right_arrow;
  }

  // Field name: left_arrow
  {
    cdr << ros_message->left_arrow;
  }

  // Field name: sides_solid
  {
    cdr << ros_message->sides_solid;
  }

  // Field name: flash
  {
    cdr << ros_message->flash;
  }

  // Field name: green_flash
  {
    cdr << ros_message->green_flash;
  }

  // Field name: takedown
  {
    cdr << ros_message->takedown;
  }

  return true;
}

static bool _LightBarStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LightBarStatus__ros_msg_type * ros_message = static_cast<_LightBarStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: green_solid
  {
    cdr >> ros_message->green_solid;
  }

  // Field name: yellow_solid
  {
    cdr >> ros_message->yellow_solid;
  }

  // Field name: right_arrow
  {
    cdr >> ros_message->right_arrow;
  }

  // Field name: left_arrow
  {
    cdr >> ros_message->left_arrow;
  }

  // Field name: sides_solid
  {
    cdr >> ros_message->sides_solid;
  }

  // Field name: flash
  {
    cdr >> ros_message->flash;
  }

  // Field name: green_flash
  {
    cdr >> ros_message->green_flash;
  }

  // Field name: takedown
  {
    cdr >> ros_message->takedown;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__msg__LightBarStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LightBarStatus__ros_msg_type * ros_message = static_cast<const _LightBarStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name green_solid
  {
    size_t item_size = sizeof(ros_message->green_solid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yellow_solid
  {
    size_t item_size = sizeof(ros_message->yellow_solid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_arrow
  {
    size_t item_size = sizeof(ros_message->right_arrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_arrow
  {
    size_t item_size = sizeof(ros_message->left_arrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sides_solid
  {
    size_t item_size = sizeof(ros_message->sides_solid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flash
  {
    size_t item_size = sizeof(ros_message->flash);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name green_flash
  {
    size_t item_size = sizeof(ros_message->green_flash);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name takedown
  {
    size_t item_size = sizeof(ros_message->takedown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LightBarStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_driver_msgs__msg__LightBarStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__msg__LightBarStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: green_solid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yellow_solid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_arrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_arrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sides_solid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flash
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: green_flash
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: takedown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LightBarStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_driver_msgs__msg__LightBarStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LightBarStatus = {
  "carma_driver_msgs::msg",
  "LightBarStatus",
  _LightBarStatus__cdr_serialize,
  _LightBarStatus__cdr_deserialize,
  _LightBarStatus__get_serialized_size,
  _LightBarStatus__max_serialized_size
};

static rosidl_message_type_support_t _LightBarStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LightBarStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, msg, LightBarStatus)() {
  return &_LightBarStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
