// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/MobilityRequest.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/mobility_request__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/mobility_request__struct.h"
#include "carma_v2x_msgs/msg/detail/mobility_request__functions.h"
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

#include "carma_v2x_msgs/msg/detail/location_ecef__functions.h"  // location
#include "carma_v2x_msgs/msg/detail/mobility_header__functions.h"  // m_header
#include "carma_v2x_msgs/msg/detail/plan_type__functions.h"  // plan_type
#include "carma_v2x_msgs/msg/detail/trajectory__functions.h"  // trajectory
#include "rosidl_runtime_c/string.h"  // strategy, strategy_params
#include "rosidl_runtime_c/string_functions.h"  // strategy, strategy_params

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__LocationECEF(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__LocationECEF(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, LocationECEF)();
size_t get_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__MobilityHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityHeader)();
size_t get_serialized_size_carma_v2x_msgs__msg__PlanType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__PlanType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PlanType)();
size_t get_serialized_size_carma_v2x_msgs__msg__Trajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Trajectory(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Trajectory)();


using _MobilityRequest__ros_msg_type = carma_v2x_msgs__msg__MobilityRequest;

static bool _MobilityRequest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MobilityRequest__ros_msg_type * ros_message = static_cast<const _MobilityRequest__ros_msg_type *>(untyped_ros_message);
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

  // Field name: urgency
  {
    cdr << ros_message->urgency;
  }

  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, LocationECEF
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->location, cdr))
    {
      return false;
    }
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

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: expiration
  {
    cdr << ros_message->expiration;
  }

  return true;
}

static bool _MobilityRequest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MobilityRequest__ros_msg_type * ros_message = static_cast<_MobilityRequest__ros_msg_type *>(untyped_ros_message);
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

  // Field name: urgency
  {
    cdr >> ros_message->urgency;
  }

  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, LocationECEF
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->location))
    {
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

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Trajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory))
    {
      return false;
    }
  }

  // Field name: expiration
  {
    cdr >> ros_message->expiration;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__MobilityRequest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MobilityRequest__ros_msg_type * ros_message = static_cast<const _MobilityRequest__ros_msg_type *>(untyped_ros_message);
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
  // field.name plan_type

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__PlanType(
    &(ros_message->plan_type), current_alignment);
  // field.name urgency
  {
    size_t item_size = sizeof(ros_message->urgency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name location

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__LocationECEF(
    &(ros_message->location), current_alignment);
  // field.name strategy_params
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->strategy_params.size + 1);
  // field.name trajectory

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Trajectory(
    &(ros_message->trajectory), current_alignment);
  // field.name expiration
  {
    size_t item_size = sizeof(ros_message->expiration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MobilityRequest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__MobilityRequest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__MobilityRequest(
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
  // member: plan_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__PlanType(
        full_bounded, current_alignment);
    }
  }
  // member: urgency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: location
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__LocationECEF(
        full_bounded, current_alignment);
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
  // member: trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Trajectory(
        full_bounded, current_alignment);
    }
  }
  // member: expiration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MobilityRequest__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__MobilityRequest(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MobilityRequest = {
  "carma_v2x_msgs::msg",
  "MobilityRequest",
  _MobilityRequest__cdr_serialize,
  _MobilityRequest__cdr_deserialize,
  _MobilityRequest__get_serialized_size,
  _MobilityRequest__max_serialized_size
};

static rosidl_message_type_support_t _MobilityRequest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MobilityRequest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MobilityRequest)() {
  return &_MobilityRequest__type_support;
}

#if defined(__cplusplus)
}
#endif
