// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/MobilityHeader.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/mobility_header__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/mobility_header__struct.h"
#include "carma_v2x_msgs/msg/detail/mobility_header__functions.h"
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

#include "rosidl_runtime_c/string.h"  // plan_id, recipient_id, sender_bsm_id, sender_id
#include "rosidl_runtime_c/string_functions.h"  // plan_id, recipient_id, sender_bsm_id, sender_id

// forward declare type support functions


using _MobilityHeader__ros_msg_type = carma_v2x_msgs__msg__MobilityHeader;

static bool _MobilityHeader__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MobilityHeader__ros_msg_type * ros_message = static_cast<const _MobilityHeader__ros_msg_type *>(untyped_ros_message);
  // Field name: sender_id
  {
    const rosidl_runtime_c__String * str = &ros_message->sender_id;
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

  // Field name: recipient_id
  {
    const rosidl_runtime_c__String * str = &ros_message->recipient_id;
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

  // Field name: sender_bsm_id
  {
    const rosidl_runtime_c__String * str = &ros_message->sender_bsm_id;
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

  // Field name: plan_id
  {
    const rosidl_runtime_c__String * str = &ros_message->plan_id;
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

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  return true;
}

static bool _MobilityHeader__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MobilityHeader__ros_msg_type * ros_message = static_cast<_MobilityHeader__ros_msg_type *>(untyped_ros_message);
  // Field name: sender_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sender_id.data) {
      rosidl_runtime_c__String__init(&ros_message->sender_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sender_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sender_id'\n");
      return false;
    }
  }

  // Field name: recipient_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->recipient_id.data) {
      rosidl_runtime_c__String__init(&ros_message->recipient_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->recipient_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'recipient_id'\n");
      return false;
    }
  }

  // Field name: sender_bsm_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sender_bsm_id.data) {
      rosidl_runtime_c__String__init(&ros_message->sender_bsm_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sender_bsm_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sender_bsm_id'\n");
      return false;
    }
  }

  // Field name: plan_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->plan_id.data) {
      rosidl_runtime_c__String__init(&ros_message->plan_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->plan_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'plan_id'\n");
      return false;
    }
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MobilityHeader__ros_msg_type * ros_message = static_cast<const _MobilityHeader__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sender_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sender_id.size + 1);
  // field.name recipient_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->recipient_id.size + 1);
  // field.name sender_bsm_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sender_bsm_id.size + 1);
  // field.name plan_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->plan_id.size + 1);
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MobilityHeader__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sender_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: recipient_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sender_bsm_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: plan_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MobilityHeader__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MobilityHeader = {
  "carma_v2x_msgs::msg",
  "MobilityHeader",
  _MobilityHeader__cdr_serialize,
  _MobilityHeader__cdr_deserialize,
  _MobilityHeader__get_serialized_size,
  _MobilityHeader__max_serialized_size
};

static rosidl_message_type_support_t _MobilityHeader__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MobilityHeader,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityHeader)() {
  return &_MobilityHeader__type_support;
}

#if defined(__cplusplus)
}
#endif
