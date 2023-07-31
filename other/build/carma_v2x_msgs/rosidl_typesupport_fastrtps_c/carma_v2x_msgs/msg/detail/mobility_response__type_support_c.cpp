// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/MobilityResponse.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/mobility_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/mobility_response__struct.h"
#include "carma_v2x_msgs/msg/detail/mobility_response__functions.h"
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
#include "carma_v2x_msgs/msg/detail/mobility_reason__functions.h"  // reason
#include "carma_v2x_msgs/msg/detail/mobility_repeat__functions.h"  // repeat
#include "carma_v2x_msgs/msg/detail/plan_type__functions.h"  // plan_type

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityHeader)();
size_t get_serialized_size_carma_v2x_msgs__msg__MobilityReason(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__MobilityReason(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityReason)();
size_t get_serialized_size_carma_v2x_msgs__msg__MobilityRepeat(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__MobilityRepeat(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityRepeat)();
size_t get_serialized_size_carma_v2x_msgs__msg__PlanType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__PlanType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PlanType)();


using _MobilityResponse__ros_msg_type = carma_v2x_msgs__msg__MobilityResponse;

static bool _MobilityResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MobilityResponse__ros_msg_type * ros_message = static_cast<const _MobilityResponse__ros_msg_type *>(untyped_ros_message);
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

  // Field name: urgency
  {
    cdr << ros_message->urgency;
  }

  // Field name: is_accepted
  {
    cdr << (ros_message->is_accepted ? true : false);
  }

  // Field name: plan_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PlanType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->plan_type, cdr))
    {
      return false;
    }
  }

  // Field name: reason
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityReason
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->reason, cdr))
    {
      return false;
    }
  }

  // Field name: repeat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityRepeat
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->repeat, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MobilityResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MobilityResponse__ros_msg_type * ros_message = static_cast<_MobilityResponse__ros_msg_type *>(untyped_ros_message);
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

  // Field name: urgency
  {
    cdr >> ros_message->urgency;
  }

  // Field name: is_accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_accepted = tmp ? true : false;
  }

  // Field name: plan_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PlanType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->plan_type))
    {
      return false;
    }
  }

  // Field name: reason
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityReason
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->reason))
    {
      return false;
    }
  }

  // Field name: repeat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityRepeat
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->repeat))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__MobilityResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MobilityResponse__ros_msg_type * ros_message = static_cast<const _MobilityResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name m_header

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
    &(ros_message->m_header), current_alignment);
  // field.name urgency
  {
    size_t item_size = sizeof(ros_message->urgency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_accepted
  {
    size_t item_size = sizeof(ros_message->is_accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plan_type

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__PlanType(
    &(ros_message->plan_type), current_alignment);
  // field.name reason

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__MobilityReason(
    &(ros_message->reason), current_alignment);
  // field.name repeat

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__MobilityRepeat(
    &(ros_message->repeat), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MobilityResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__MobilityResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__MobilityResponse(
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
  // member: urgency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: is_accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: plan_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__PlanType(
        full_bounded, current_alignment);
    }
  }
  // member: reason
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__MobilityReason(
        full_bounded, current_alignment);
    }
  }
  // member: repeat
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__MobilityRepeat(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MobilityResponse__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__MobilityResponse(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MobilityResponse = {
  "carma_v2x_msgs::msg",
  "MobilityResponse",
  _MobilityResponse__cdr_serialize,
  _MobilityResponse__cdr_deserialize,
  _MobilityResponse__get_serialized_size,
  _MobilityResponse__max_serialized_size
};

static rosidl_message_type_support_t _MobilityResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MobilityResponse,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityResponse)() {
  return &_MobilityResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
