// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/brake_system_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.h"
#include "j2735_v2x_msgs/msg/detail/brake_system_status__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__functions.h"  // abs
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__functions.h"  // aux_brakes
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__functions.h"  // wheel_brakes
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__functions.h"  // brake_boost
#include "j2735_v2x_msgs/msg/detail/stability_control_status__functions.h"  // scs
#include "j2735_v2x_msgs/msg/detail/traction_control_status__functions.h"  // traction

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__AntiLockBrakeStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__AntiLockBrakeStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AntiLockBrakeStatus)();
size_t get_serialized_size_j2735_v2x_msgs__msg__AuxiliaryBrakeStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__AuxiliaryBrakeStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AuxiliaryBrakeStatus)();
size_t get_serialized_size_j2735_v2x_msgs__msg__BrakeAppliedStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__BrakeAppliedStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeAppliedStatus)();
size_t get_serialized_size_j2735_v2x_msgs__msg__BrakeBoostApplied(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__BrakeBoostApplied(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeBoostApplied)();
size_t get_serialized_size_j2735_v2x_msgs__msg__StabilityControlStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__StabilityControlStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, StabilityControlStatus)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TractionControlStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TractionControlStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TractionControlStatus)();


using _BrakeSystemStatus__ros_msg_type = j2735_v2x_msgs__msg__BrakeSystemStatus;

static bool _BrakeSystemStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BrakeSystemStatus__ros_msg_type * ros_message = static_cast<const _BrakeSystemStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: wheel_brakes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeAppliedStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wheel_brakes, cdr))
    {
      return false;
    }
  }

  // Field name: traction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TractionControlStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->traction, cdr))
    {
      return false;
    }
  }

  // Field name: abs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AntiLockBrakeStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->abs, cdr))
    {
      return false;
    }
  }

  // Field name: scs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, StabilityControlStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->scs, cdr))
    {
      return false;
    }
  }

  // Field name: brake_boost
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeBoostApplied
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->brake_boost, cdr))
    {
      return false;
    }
  }

  // Field name: aux_brakes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AuxiliaryBrakeStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->aux_brakes, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BrakeSystemStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BrakeSystemStatus__ros_msg_type * ros_message = static_cast<_BrakeSystemStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: wheel_brakes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeAppliedStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wheel_brakes))
    {
      return false;
    }
  }

  // Field name: traction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TractionControlStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->traction))
    {
      return false;
    }
  }

  // Field name: abs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AntiLockBrakeStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->abs))
    {
      return false;
    }
  }

  // Field name: scs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, StabilityControlStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->scs))
    {
      return false;
    }
  }

  // Field name: brake_boost
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeBoostApplied
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->brake_boost))
    {
      return false;
    }
  }

  // Field name: aux_brakes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AuxiliaryBrakeStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->aux_brakes))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__BrakeSystemStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BrakeSystemStatus__ros_msg_type * ros_message = static_cast<const _BrakeSystemStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wheel_brakes

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__BrakeAppliedStatus(
    &(ros_message->wheel_brakes), current_alignment);
  // field.name traction

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TractionControlStatus(
    &(ros_message->traction), current_alignment);
  // field.name abs

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AntiLockBrakeStatus(
    &(ros_message->abs), current_alignment);
  // field.name scs

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__StabilityControlStatus(
    &(ros_message->scs), current_alignment);
  // field.name brake_boost

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__BrakeBoostApplied(
    &(ros_message->brake_boost), current_alignment);
  // field.name aux_brakes

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AuxiliaryBrakeStatus(
    &(ros_message->aux_brakes), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BrakeSystemStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__BrakeSystemStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__BrakeSystemStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: wheel_brakes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__BrakeAppliedStatus(
        full_bounded, current_alignment);
    }
  }
  // member: traction
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TractionControlStatus(
        full_bounded, current_alignment);
    }
  }
  // member: abs
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AntiLockBrakeStatus(
        full_bounded, current_alignment);
    }
  }
  // member: scs
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__StabilityControlStatus(
        full_bounded, current_alignment);
    }
  }
  // member: brake_boost
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__BrakeBoostApplied(
        full_bounded, current_alignment);
    }
  }
  // member: aux_brakes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AuxiliaryBrakeStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BrakeSystemStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__BrakeSystemStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BrakeSystemStatus = {
  "j2735_v2x_msgs::msg",
  "BrakeSystemStatus",
  _BrakeSystemStatus__cdr_serialize,
  _BrakeSystemStatus__cdr_deserialize,
  _BrakeSystemStatus__get_serialized_size,
  _BrakeSystemStatus__max_serialized_size
};

static rosidl_message_type_support_t _BrakeSystemStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BrakeSystemStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BrakeSystemStatus)() {
  return &_BrakeSystemStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
