// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/robot_enabled__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_driver_msgs/msg/detail/robot_enabled__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carma_driver_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
cdr_serialize(
  const carma_driver_msgs::msg::RobotEnabled & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_active
  cdr << (ros_message.robot_active ? true : false);
  // Member: robot_enabled
  cdr << (ros_message.robot_enabled ? true : false);
  // Member: torque
  cdr << ros_message.torque;
  // Member: torque_validity
  cdr << (ros_message.torque_validity ? true : false);
  // Member: brake_decel
  cdr << ros_message.brake_decel;
  // Member: brake_decel_validity
  cdr << (ros_message.brake_decel_validity ? true : false);
  // Member: throttle_effort
  cdr << ros_message.throttle_effort;
  // Member: throttle_effort_validity
  cdr << (ros_message.throttle_effort_validity ? true : false);
  // Member: braking_effort
  cdr << ros_message.braking_effort;
  // Member: braking_effort_validity
  cdr << (ros_message.braking_effort_validity ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_driver_msgs::msg::RobotEnabled & ros_message)
{
  // Member: robot_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.robot_active = tmp ? true : false;
  }

  // Member: robot_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.robot_enabled = tmp ? true : false;
  }

  // Member: torque
  cdr >> ros_message.torque;

  // Member: torque_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.torque_validity = tmp ? true : false;
  }

  // Member: brake_decel
  cdr >> ros_message.brake_decel;

  // Member: brake_decel_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.brake_decel_validity = tmp ? true : false;
  }

  // Member: throttle_effort
  cdr >> ros_message.throttle_effort;

  // Member: throttle_effort_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.throttle_effort_validity = tmp ? true : false;
  }

  // Member: braking_effort
  cdr >> ros_message.braking_effort;

  // Member: braking_effort_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.braking_effort_validity = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
get_serialized_size(
  const carma_driver_msgs::msg::RobotEnabled & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_active
  {
    size_t item_size = sizeof(ros_message.robot_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_enabled
  {
    size_t item_size = sizeof(ros_message.robot_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque
  {
    size_t item_size = sizeof(ros_message.torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque_validity
  {
    size_t item_size = sizeof(ros_message.torque_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_decel
  {
    size_t item_size = sizeof(ros_message.brake_decel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_decel_validity
  {
    size_t item_size = sizeof(ros_message.brake_decel_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_effort
  {
    size_t item_size = sizeof(ros_message.throttle_effort);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_effort_validity
  {
    size_t item_size = sizeof(ros_message.throttle_effort_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: braking_effort
  {
    size_t item_size = sizeof(ros_message.braking_effort);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: braking_effort_validity
  {
    size_t item_size = sizeof(ros_message.braking_effort_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_driver_msgs
max_serialized_size_RobotEnabled(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: robot_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robot_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: torque_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_decel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_decel_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_effort
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: throttle_effort_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: braking_effort
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: braking_effort_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RobotEnabled__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_driver_msgs::msg::RobotEnabled *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotEnabled__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_driver_msgs::msg::RobotEnabled *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotEnabled__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_driver_msgs::msg::RobotEnabled *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotEnabled__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotEnabled(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotEnabled__callbacks = {
  "carma_driver_msgs::msg",
  "RobotEnabled",
  _RobotEnabled__cdr_serialize,
  _RobotEnabled__cdr_deserialize,
  _RobotEnabled__get_serialized_size,
  _RobotEnabled__max_serialized_size
};

static rosidl_message_type_support_t _RobotEnabled__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotEnabled__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_driver_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_driver_msgs::msg::RobotEnabled>()
{
  return &carma_driver_msgs::msg::typesupport_fastrtps_cpp::_RobotEnabled__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_driver_msgs, msg, RobotEnabled)() {
  return &carma_driver_msgs::msg::typesupport_fastrtps_cpp::_RobotEnabled__handle;
}

#ifdef __cplusplus
}
#endif
