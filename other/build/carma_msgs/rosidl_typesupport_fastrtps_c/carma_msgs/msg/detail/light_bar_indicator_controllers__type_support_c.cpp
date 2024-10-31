// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__struct.h"
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__functions.h"
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

#include "rosidl_runtime_c/string.h"  // green_flash_owner, green_solid_owner, yellow_arrow_left_owner, yellow_arrow_out_owner, yellow_arrow_right_owner, yellow_dim_owner, yellow_flash_owner, yellow_sides_owner
#include "rosidl_runtime_c/string_functions.h"  // green_flash_owner, green_solid_owner, yellow_arrow_left_owner, yellow_arrow_out_owner, yellow_arrow_right_owner, yellow_dim_owner, yellow_flash_owner, yellow_sides_owner

// forward declare type support functions


using _LightBarIndicatorControllers__ros_msg_type = carma_msgs__msg__LightBarIndicatorControllers;

static bool _LightBarIndicatorControllers__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LightBarIndicatorControllers__ros_msg_type * ros_message = static_cast<const _LightBarIndicatorControllers__ros_msg_type *>(untyped_ros_message);
  // Field name: green_solid_owner
  {
    const rosidl_runtime_c__String * str = &ros_message->green_solid_owner;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: green_flash_owner
  {
    const rosidl_runtime_c__String * str = &ros_message->green_flash_owner;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: yellow_sides_owner
  {
    const rosidl_runtime_c__String * str = &ros_message->yellow_sides_owner;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: yellow_dim_owner
  {
    const rosidl_runtime_c__String * str = &ros_message->yellow_dim_owner;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: yellow_flash_owner
  {
    const rosidl_runtime_c__String * str = &ros_message->yellow_flash_owner;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: yellow_arrow_left_owner
  {
    const rosidl_runtime_c__String * str = &ros_message->yellow_arrow_left_owner;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: yellow_arrow_right_owner
  {
    const rosidl_runtime_c__String * str = &ros_message->yellow_arrow_right_owner;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: yellow_arrow_out_owner
  {
    const rosidl_runtime_c__String * str = &ros_message->yellow_arrow_out_owner;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _LightBarIndicatorControllers__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LightBarIndicatorControllers__ros_msg_type * ros_message = static_cast<_LightBarIndicatorControllers__ros_msg_type *>(untyped_ros_message);
  // Field name: green_solid_owner
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->green_solid_owner.data) {
      rosidl_runtime_c__String__init(&ros_message->green_solid_owner);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->green_solid_owner,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'green_solid_owner'\n");
      return false;
    }
  }

  // Field name: green_flash_owner
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->green_flash_owner.data) {
      rosidl_runtime_c__String__init(&ros_message->green_flash_owner);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->green_flash_owner,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'green_flash_owner'\n");
      return false;
    }
  }

  // Field name: yellow_sides_owner
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->yellow_sides_owner.data) {
      rosidl_runtime_c__String__init(&ros_message->yellow_sides_owner);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->yellow_sides_owner,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'yellow_sides_owner'\n");
      return false;
    }
  }

  // Field name: yellow_dim_owner
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->yellow_dim_owner.data) {
      rosidl_runtime_c__String__init(&ros_message->yellow_dim_owner);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->yellow_dim_owner,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'yellow_dim_owner'\n");
      return false;
    }
  }

  // Field name: yellow_flash_owner
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->yellow_flash_owner.data) {
      rosidl_runtime_c__String__init(&ros_message->yellow_flash_owner);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->yellow_flash_owner,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'yellow_flash_owner'\n");
      return false;
    }
  }

  // Field name: yellow_arrow_left_owner
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->yellow_arrow_left_owner.data) {
      rosidl_runtime_c__String__init(&ros_message->yellow_arrow_left_owner);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->yellow_arrow_left_owner,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'yellow_arrow_left_owner'\n");
      return false;
    }
  }

  // Field name: yellow_arrow_right_owner
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->yellow_arrow_right_owner.data) {
      rosidl_runtime_c__String__init(&ros_message->yellow_arrow_right_owner);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->yellow_arrow_right_owner,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'yellow_arrow_right_owner'\n");
      return false;
    }
  }

  // Field name: yellow_arrow_out_owner
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->yellow_arrow_out_owner.data) {
      rosidl_runtime_c__String__init(&ros_message->yellow_arrow_out_owner);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->yellow_arrow_out_owner,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'yellow_arrow_out_owner'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t get_serialized_size_carma_msgs__msg__LightBarIndicatorControllers(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LightBarIndicatorControllers__ros_msg_type * ros_message = static_cast<const _LightBarIndicatorControllers__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name green_solid_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->green_solid_owner.size + 1);
  // field.name green_flash_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->green_flash_owner.size + 1);
  // field.name yellow_sides_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->yellow_sides_owner.size + 1);
  // field.name yellow_dim_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->yellow_dim_owner.size + 1);
  // field.name yellow_flash_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->yellow_flash_owner.size + 1);
  // field.name yellow_arrow_left_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->yellow_arrow_left_owner.size + 1);
  // field.name yellow_arrow_right_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->yellow_arrow_right_owner.size + 1);
  // field.name yellow_arrow_out_owner
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->yellow_arrow_out_owner.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _LightBarIndicatorControllers__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_msgs__msg__LightBarIndicatorControllers(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t max_serialized_size_carma_msgs__msg__LightBarIndicatorControllers(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: green_solid_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: green_flash_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: yellow_sides_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: yellow_dim_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: yellow_flash_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: yellow_arrow_left_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: yellow_arrow_right_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: yellow_arrow_out_owner
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LightBarIndicatorControllers__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_msgs__msg__LightBarIndicatorControllers(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LightBarIndicatorControllers = {
  "carma_msgs::msg",
  "LightBarIndicatorControllers",
  _LightBarIndicatorControllers__cdr_serialize,
  _LightBarIndicatorControllers__cdr_deserialize,
  _LightBarIndicatorControllers__get_serialized_size,
  _LightBarIndicatorControllers__max_serialized_size
};

static rosidl_message_type_support_t _LightBarIndicatorControllers__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LightBarIndicatorControllers,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarIndicatorControllers)() {
  return &_LightBarIndicatorControllers__type_support;
}

#if defined(__cplusplus)
}
#endif
