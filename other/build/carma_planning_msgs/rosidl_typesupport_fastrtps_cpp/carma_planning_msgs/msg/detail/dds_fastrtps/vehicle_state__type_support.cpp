// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_planning_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/vehicle_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_planning_msgs/msg/detail/vehicle_state__struct.hpp"

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

namespace carma_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::msg::VehicleState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_pos_global
  cdr << ros_message.x_pos_global;
  // Member: y_pos_global
  cdr << ros_message.y_pos_global;
  // Member: orientation
  cdr << ros_message.orientation;
  // Member: longitudinal_vel
  cdr << ros_message.longitudinal_vel;
  // Member: lateral_vel
  cdr << ros_message.lateral_vel;
  // Member: yaw_rate
  cdr << ros_message.yaw_rate;
  // Member: front_wheel_rotation_rate
  cdr << ros_message.front_wheel_rotation_rate;
  // Member: rear_wheel_rotation_rate
  cdr << ros_message.rear_wheel_rotation_rate;
  // Member: steering_angle
  cdr << ros_message.steering_angle;
  // Member: trailer_angle
  cdr << ros_message.trailer_angle;
  // Member: prev_vel_cmd
  cdr << ros_message.prev_vel_cmd;
  // Member: prev_steering_cmd
  cdr << ros_message.prev_steering_cmd;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::msg::VehicleState & ros_message)
{
  // Member: x_pos_global
  cdr >> ros_message.x_pos_global;

  // Member: y_pos_global
  cdr >> ros_message.y_pos_global;

  // Member: orientation
  cdr >> ros_message.orientation;

  // Member: longitudinal_vel
  cdr >> ros_message.longitudinal_vel;

  // Member: lateral_vel
  cdr >> ros_message.lateral_vel;

  // Member: yaw_rate
  cdr >> ros_message.yaw_rate;

  // Member: front_wheel_rotation_rate
  cdr >> ros_message.front_wheel_rotation_rate;

  // Member: rear_wheel_rotation_rate
  cdr >> ros_message.rear_wheel_rotation_rate;

  // Member: steering_angle
  cdr >> ros_message.steering_angle;

  // Member: trailer_angle
  cdr >> ros_message.trailer_angle;

  // Member: prev_vel_cmd
  cdr >> ros_message.prev_vel_cmd;

  // Member: prev_steering_cmd
  cdr >> ros_message.prev_steering_cmd;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::msg::VehicleState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_pos_global
  {
    size_t item_size = sizeof(ros_message.x_pos_global);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_pos_global
  {
    size_t item_size = sizeof(ros_message.y_pos_global);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: orientation
  {
    size_t item_size = sizeof(ros_message.orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitudinal_vel
  {
    size_t item_size = sizeof(ros_message.longitudinal_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_vel
  {
    size_t item_size = sizeof(ros_message.lateral_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate
  {
    size_t item_size = sizeof(ros_message.yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_wheel_rotation_rate
  {
    size_t item_size = sizeof(ros_message.front_wheel_rotation_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_wheel_rotation_rate
  {
    size_t item_size = sizeof(ros_message.rear_wheel_rotation_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_angle
  {
    size_t item_size = sizeof(ros_message.steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trailer_angle
  {
    size_t item_size = sizeof(ros_message.trailer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prev_vel_cmd
  {
    size_t item_size = sizeof(ros_message.prev_vel_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prev_steering_cmd
  {
    size_t item_size = sizeof(ros_message.prev_steering_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_VehicleState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x_pos_global
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_pos_global
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitudinal_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lateral_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_wheel_rotation_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rear_wheel_rotation_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: trailer_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: prev_vel_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: prev_steering_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::VehicleState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::msg::VehicleState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::VehicleState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleState(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleState__callbacks = {
  "carma_planning_msgs::msg",
  "VehicleState",
  _VehicleState__cdr_serialize,
  _VehicleState__cdr_deserialize,
  _VehicleState__get_serialized_size,
  _VehicleState__max_serialized_size
};

static rosidl_message_type_support_t _VehicleState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::msg::VehicleState>()
{
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_VehicleState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, msg, VehicleState)() {
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_VehicleState__handle;
}

#ifdef __cplusplus
}
#endif
