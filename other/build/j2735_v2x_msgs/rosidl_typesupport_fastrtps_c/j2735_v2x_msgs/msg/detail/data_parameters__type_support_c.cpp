// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/DataParameters.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/data_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/data_parameters__struct.h"
#include "j2735_v2x_msgs/msg/detail/data_parameters__functions.h"
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

#include "rosidl_runtime_c/string.h"  // geoid_used, last_checked_date, process_agency, process_method
#include "rosidl_runtime_c/string_functions.h"  // geoid_used, last_checked_date, process_agency, process_method

// forward declare type support functions


using _DataParameters__ros_msg_type = j2735_v2x_msgs__msg__DataParameters;

static bool _DataParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DataParameters__ros_msg_type * ros_message = static_cast<const _DataParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: process_method
  {
    const rosidl_runtime_c__String * str = &ros_message->process_method;
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

  // Field name: process_agency
  {
    const rosidl_runtime_c__String * str = &ros_message->process_agency;
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

  // Field name: last_checked_date
  {
    const rosidl_runtime_c__String * str = &ros_message->last_checked_date;
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

  // Field name: geoid_used
  {
    const rosidl_runtime_c__String * str = &ros_message->geoid_used;
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

static bool _DataParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DataParameters__ros_msg_type * ros_message = static_cast<_DataParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: process_method
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->process_method.data) {
      rosidl_runtime_c__String__init(&ros_message->process_method);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->process_method,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'process_method'\n");
      return false;
    }
  }

  // Field name: process_agency
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->process_agency.data) {
      rosidl_runtime_c__String__init(&ros_message->process_agency);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->process_agency,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'process_agency'\n");
      return false;
    }
  }

  // Field name: last_checked_date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->last_checked_date.data) {
      rosidl_runtime_c__String__init(&ros_message->last_checked_date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->last_checked_date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'last_checked_date'\n");
      return false;
    }
  }

  // Field name: geoid_used
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->geoid_used.data) {
      rosidl_runtime_c__String__init(&ros_message->geoid_used);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->geoid_used,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'geoid_used'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__DataParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataParameters__ros_msg_type * ros_message = static_cast<const _DataParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name process_method
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->process_method.size + 1);
  // field.name process_agency
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->process_agency.size + 1);
  // field.name last_checked_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->last_checked_date.size + 1);
  // field.name geoid_used
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->geoid_used.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DataParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__DataParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__DataParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: process_method
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: process_agency
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: last_checked_date
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: geoid_used
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

static size_t _DataParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__DataParameters(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DataParameters = {
  "j2735_v2x_msgs::msg",
  "DataParameters",
  _DataParameters__cdr_serialize,
  _DataParameters__cdr_deserialize,
  _DataParameters__get_serialized_size,
  _DataParameters__max_serialized_size
};

static rosidl_message_type_support_t _DataParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DataParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DataParameters)() {
  return &_DataParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
