// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/vehicle_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/vehicle_state__struct.h"
#include "carma_planning_msgs/msg/detail/vehicle_state__functions.h"
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


using _VehicleState__ros_msg_type = carma_planning_msgs__msg__VehicleState;

static bool _VehicleState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleState__ros_msg_type * ros_message = static_cast<const _VehicleState__ros_msg_type *>(untyped_ros_message);
  // Field name: x_pos_global
  {
    cdr << ros_message->x_pos_global;
  }

  // Field name: y_pos_global
  {
    cdr << ros_message->y_pos_global;
  }

  // Field name: orientation
  {
    cdr << ros_message->orientation;
  }

  // Field name: longitudinal_vel
  {
    cdr << ros_message->longitudinal_vel;
  }

  // Field name: lateral_vel
  {
    cdr << ros_message->lateral_vel;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: front_wheel_rotation_rate
  {
    cdr << ros_message->front_wheel_rotation_rate;
  }

  // Field name: rear_wheel_rotation_rate
  {
    cdr << ros_message->rear_wheel_rotation_rate;
  }

  // Field name: steering_angle
  {
    cdr << ros_message->steering_angle;
  }

  // Field name: trailer_angle
  {
    cdr << ros_message->trailer_angle;
  }

  // Field name: prev_vel_cmd
  {
    cdr << ros_message->prev_vel_cmd;
  }

  // Field name: prev_steering_cmd
  {
    cdr << ros_message->prev_steering_cmd;
  }

  return true;
}

static bool _VehicleState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleState__ros_msg_type * ros_message = static_cast<_VehicleState__ros_msg_type *>(untyped_ros_message);
  // Field name: x_pos_global
  {
    cdr >> ros_message->x_pos_global;
  }

  // Field name: y_pos_global
  {
    cdr >> ros_message->y_pos_global;
  }

  // Field name: orientation
  {
    cdr >> ros_message->orientation;
  }

  // Field name: longitudinal_vel
  {
    cdr >> ros_message->longitudinal_vel;
  }

  // Field name: lateral_vel
  {
    cdr >> ros_message->lateral_vel;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: front_wheel_rotation_rate
  {
    cdr >> ros_message->front_wheel_rotation_rate;
  }

  // Field name: rear_wheel_rotation_rate
  {
    cdr >> ros_message->rear_wheel_rotation_rate;
  }

  // Field name: steering_angle
  {
    cdr >> ros_message->steering_angle;
  }

  // Field name: trailer_angle
  {
    cdr >> ros_message->trailer_angle;
  }

  // Field name: prev_vel_cmd
  {
    cdr >> ros_message->prev_vel_cmd;
  }

  // Field name: prev_steering_cmd
  {
    cdr >> ros_message->prev_steering_cmd;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__msg__VehicleState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleState__ros_msg_type * ros_message = static_cast<const _VehicleState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_pos_global
  {
    size_t item_size = sizeof(ros_message->x_pos_global);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_pos_global
  {
    size_t item_size = sizeof(ros_message->y_pos_global);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation
  {
    size_t item_size = sizeof(ros_message->orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal_vel
  {
    size_t item_size = sizeof(ros_message->longitudinal_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_vel
  {
    size_t item_size = sizeof(ros_message->lateral_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_wheel_rotation_rate
  {
    size_t item_size = sizeof(ros_message->front_wheel_rotation_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_wheel_rotation_rate
  {
    size_t item_size = sizeof(ros_message->rear_wheel_rotation_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle
  {
    size_t item_size = sizeof(ros_message->steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trailer_angle
  {
    size_t item_size = sizeof(ros_message->trailer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prev_vel_cmd
  {
    size_t item_size = sizeof(ros_message->prev_vel_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prev_steering_cmd
  {
    size_t item_size = sizeof(ros_message->prev_steering_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__VehicleState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__VehicleState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x_pos_global
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_pos_global
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitudinal_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lateral_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_wheel_rotation_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_wheel_rotation_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: trailer_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: prev_vel_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: prev_steering_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__VehicleState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleState = {
  "carma_planning_msgs::msg",
  "VehicleState",
  _VehicleState__cdr_serialize,
  _VehicleState__cdr_deserialize,
  _VehicleState__get_serialized_size,
  _VehicleState__max_serialized_size
};

static rosidl_message_type_support_t _VehicleState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, VehicleState)() {
  return &_VehicleState__type_support;
}

#if defined(__cplusplus)
}
#endif
