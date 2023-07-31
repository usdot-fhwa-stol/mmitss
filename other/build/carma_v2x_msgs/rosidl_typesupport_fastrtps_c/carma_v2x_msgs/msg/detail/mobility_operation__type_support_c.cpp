// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/MobilityOperation.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/mobility_operation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/mobility_operation__struct.h"
#include "carma_v2x_msgs/msg/detail/mobility_operation__functions.h"
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

#include "carma_v2x_msgs/msg/detail/mobility_header__functions.h"  // m_header
#include "rosidl_runtime_c/string.h"  // strategy, strategy_params
#include "rosidl_runtime_c/string_functions.h"  // strategy, strategy_params

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityHeader)();


using _MobilityOperation__ros_msg_type = carma_v2x_msgs__msg__MobilityOperation;

static bool _MobilityOperation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MobilityOperation__ros_msg_type * ros_message = static_cast<const _MobilityOperation__ros_msg_type *>(untyped_ros_message);
  // Field name: m_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->m_header, cdr))
    {
      return false;
    }
  }

  // Field name: strategy
  {
    const rosidl_runtime_c__String * str = &ros_message->strategy;
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

  // Field name: strategy_params
  {
    const rosidl_runtime_c__String * str = &ros_message->strategy_params;
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

static bool _MobilityOperation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MobilityOperation__ros_msg_type * ros_message = static_cast<_MobilityOperation__ros_msg_type *>(untyped_ros_message);
  // Field name: m_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->m_header))
    {
      return false;
    }
  }

  // Field name: strategy
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->strategy.data) {
      rosidl_runtime_c__String__init(&ros_message->strategy);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->strategy,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'strategy'\n");
      return false;
    }
  }

  // Field name: strategy_params
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->strategy_params.data) {
      rosidl_runtime_c__String__init(&ros_message->strategy_params);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->strategy_params,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'strategy_params'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__MobilityOperation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MobilityOperation__ros_msg_type * ros_message = static_cast<const _MobilityOperation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name m_header

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
    &(ros_message->m_header), current_alignment);
  // field.name strategy
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->strategy.size + 1);
  // field.name strategy_params
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->strategy_params.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MobilityOperation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__MobilityOperation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__MobilityOperation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: m_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
        full_bounded, current_alignment);
    }
  }
  // member: strategy
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: strategy_params
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

static size_t _MobilityOperation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__MobilityOperation(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MobilityOperation = {
  "carma_v2x_msgs::msg",
  "MobilityOperation",
  _MobilityOperation__cdr_serialize,
  _MobilityOperation__cdr_deserialize,
  _MobilityOperation__get_serialized_size,
  _MobilityOperation__max_serialized_size
};

static rosidl_message_type_support_t _MobilityOperation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MobilityOperation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityOperation)() {
  return &_MobilityOperation__type_support;
}

#if defined(__cplusplus)
}
#endif
