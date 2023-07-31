// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/robot_enabled__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_driver_msgs/msg/detail/robot_enabled__struct.h"
#include "carma_driver_msgs/msg/detail/robot_enabled__functions.h"
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


using _RobotEnabled__ros_msg_type = carma_driver_msgs__msg__RobotEnabled;

static bool _RobotEnabled__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotEnabled__ros_msg_type * ros_message = static_cast<const _RobotEnabled__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_active
  {
    cdr << (ros_message->robot_active ? true : false);
  }

  // Field name: robot_enabled
  {
    cdr << (ros_message->robot_enabled ? true : false);
  }

  // Field name: torque
  {
    cdr << ros_message->torque;
  }

  // Field name: torque_validity
  {
    cdr << (ros_message->torque_validity ? true : false);
  }

  // Field name: brake_decel
  {
    cdr << ros_message->brake_decel;
  }

  // Field name: brake_decel_validity
  {
    cdr << (ros_message->brake_decel_validity ? true : false);
  }

  // Field name: throttle_effort
  {
    cdr << ros_message->throttle_effort;
  }

  // Field name: throttle_effort_validity
  {
    cdr << (ros_message->throttle_effort_validity ? true : false);
  }

  // Field name: braking_effort
  {
    cdr << ros_message->braking_effort;
  }

  // Field name: braking_effort_validity
  {
    cdr << (ros_message->braking_effort_validity ? true : false);
  }

  return true;
}

static bool _RobotEnabled__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotEnabled__ros_msg_type * ros_message = static_cast<_RobotEnabled__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->robot_active = tmp ? true : false;
  }

  // Field name: robot_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->robot_enabled = tmp ? true : false;
  }

  // Field name: torque
  {
    cdr >> ros_message->torque;
  }

  // Field name: torque_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->torque_validity = tmp ? true : false;
  }

  // Field name: brake_decel
  {
    cdr >> ros_message->brake_decel;
  }

  // Field name: brake_decel_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_decel_validity = tmp ? true : false;
  }

  // Field name: throttle_effort
  {
    cdr >> ros_message->throttle_effort;
  }

  // Field name: throttle_effort_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->throttle_effort_validity = tmp ? true : false;
  }

  // Field name: braking_effort
  {
    cdr >> ros_message->braking_effort;
  }

  // Field name: braking_effort_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->braking_effort_validity = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__msg__RobotEnabled(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotEnabled__ros_msg_type * ros_message = static_cast<const _RobotEnabled__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_active
  {
    size_t item_size = sizeof(ros_message->robot_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_enabled
  {
    size_t item_size = sizeof(ros_message->robot_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque
  {
    size_t item_size = sizeof(ros_message->torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_validity
  {
    size_t item_size = sizeof(ros_message->torque_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_decel
  {
    size_t item_size = sizeof(ros_message->brake_decel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_decel_validity
  {
    size_t item_size = sizeof(ros_message->brake_decel_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_effort
  {
    size_t item_size = sizeof(ros_message->throttle_effort);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_effort_validity
  {
    size_t item_size = sizeof(ros_message->throttle_effort_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name braking_effort
  {
    size_t item_size = sizeof(ros_message->braking_effort);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name braking_effort_validity
  {
    size_t item_size = sizeof(ros_message->braking_effort_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotEnabled__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_driver_msgs__msg__RobotEnabled(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__msg__RobotEnabled(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: torque_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_decel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_decel_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_effort
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: throttle_effort_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: braking_effort
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: braking_effort_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotEnabled__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_driver_msgs__msg__RobotEnabled(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotEnabled = {
  "carma_driver_msgs::msg",
  "RobotEnabled",
  _RobotEnabled__cdr_serialize,
  _RobotEnabled__cdr_deserialize,
  _RobotEnabled__get_serialized_size,
  _RobotEnabled__max_serialized_size
};

static rosidl_message_type_support_t _RobotEnabled__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotEnabled,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, msg, RobotEnabled)() {
  return &_RobotEnabled__type_support;
}

#if defined(__cplusplus)
}
#endif
