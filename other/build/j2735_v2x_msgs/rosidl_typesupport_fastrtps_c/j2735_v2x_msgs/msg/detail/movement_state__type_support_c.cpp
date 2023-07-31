// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/movement_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/movement_state__struct.h"
#include "j2735_v2x_msgs/msg/detail/movement_state__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__functions.h"  // maneuver_assist_list
#include "j2735_v2x_msgs/msg/detail/movement_event_list__functions.h"  // state_time_speed
#include "rosidl_runtime_c/string.h"  // movement_name
#include "rosidl_runtime_c/string_functions.h"  // movement_name

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__ManeuverAssistList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__ManeuverAssistList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ManeuverAssistList)();
size_t get_serialized_size_j2735_v2x_msgs__msg__MovementEventList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__MovementEventList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MovementEventList)();


using _MovementState__ros_msg_type = j2735_v2x_msgs__msg__MovementState;

static bool _MovementState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MovementState__ros_msg_type * ros_message = static_cast<const _MovementState__ros_msg_type *>(untyped_ros_message);
  // Field name: movement_name
  {
    const rosidl_runtime_c__String * str = &ros_message->movement_name;
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

  // Field name: movement_name_exists
  {
    cdr << (ros_message->movement_name_exists ? true : false);
  }

  // Field name: signal_group
  {
    cdr << ros_message->signal_group;
  }

  // Field name: state_time_speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MovementEventList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->state_time_speed, cdr))
    {
      return false;
    }
  }

  // Field name: maneuver_assist_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ManeuverAssistList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->maneuver_assist_list, cdr))
    {
      return false;
    }
  }

  // Field name: maneuver_assist_list_exists
  {
    cdr << (ros_message->maneuver_assist_list_exists ? true : false);
  }

  return true;
}

static bool _MovementState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MovementState__ros_msg_type * ros_message = static_cast<_MovementState__ros_msg_type *>(untyped_ros_message);
  // Field name: movement_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->movement_name.data) {
      rosidl_runtime_c__String__init(&ros_message->movement_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->movement_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'movement_name'\n");
      return false;
    }
  }

  // Field name: movement_name_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->movement_name_exists = tmp ? true : false;
  }

  // Field name: signal_group
  {
    cdr >> ros_message->signal_group;
  }

  // Field name: state_time_speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MovementEventList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->state_time_speed))
    {
      return false;
    }
  }

  // Field name: maneuver_assist_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ManeuverAssistList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->maneuver_assist_list))
    {
      return false;
    }
  }

  // Field name: maneuver_assist_list_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->maneuver_assist_list_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__MovementState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MovementState__ros_msg_type * ros_message = static_cast<const _MovementState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name movement_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->movement_name.size + 1);
  // field.name movement_name_exists
  {
    size_t item_size = sizeof(ros_message->movement_name_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_group
  {
    size_t item_size = sizeof(ros_message->signal_group);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_time_speed

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__MovementEventList(
    &(ros_message->state_time_speed), current_alignment);
  // field.name maneuver_assist_list

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ManeuverAssistList(
    &(ros_message->maneuver_assist_list), current_alignment);
  // field.name maneuver_assist_list_exists
  {
    size_t item_size = sizeof(ros_message->maneuver_assist_list_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MovementState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__MovementState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__MovementState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: movement_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: movement_name_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_group
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: state_time_speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__MovementEventList(
        full_bounded, current_alignment);
    }
  }
  // member: maneuver_assist_list
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ManeuverAssistList(
        full_bounded, current_alignment);
    }
  }
  // member: maneuver_assist_list_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MovementState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__MovementState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MovementState = {
  "j2735_v2x_msgs::msg",
  "MovementState",
  _MovementState__cdr_serialize,
  _MovementState__cdr_deserialize,
  _MovementState__get_serialized_size,
  _MovementState__max_serialized_size
};

static rosidl_message_type_support_t _MovementState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MovementState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MovementState)() {
  return &_MovementState__type_support;
}

#if defined(__cplusplus)
}
#endif
