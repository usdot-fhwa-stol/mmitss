// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/movement_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/movement_state__struct.h"
#include "carma_v2x_msgs/msg/detail/movement_state__functions.h"
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

#include "carma_v2x_msgs/msg/detail/movement_event__functions.h"  // movement_event_list
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"  // connection_maneuver_assist_list
#include "rosidl_runtime_c/string.h"  // movement_name
#include "rosidl_runtime_c/string_functions.h"  // movement_name

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__MovementEvent(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__MovementEvent(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MovementEvent)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__ConnectionManeuverAssist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__ConnectionManeuverAssist(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ConnectionManeuverAssist)();


using _MovementState__ros_msg_type = carma_v2x_msgs__msg__MovementState;

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

  // Field name: movement_event_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MovementEvent
      )()->data);
    size_t size = ros_message->movement_event_list.size;
    auto array_ptr = ros_message->movement_event_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: connection_maneuver_assist_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ConnectionManeuverAssist
      )()->data);
    size_t size = ros_message->connection_maneuver_assist_list.size;
    auto array_ptr = ros_message->connection_maneuver_assist_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
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

  // Field name: movement_event_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MovementEvent
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->movement_event_list.data) {
      carma_v2x_msgs__msg__MovementEvent__Sequence__fini(&ros_message->movement_event_list);
    }
    if (!carma_v2x_msgs__msg__MovementEvent__Sequence__init(&ros_message->movement_event_list, size)) {
      return "failed to create array for field 'movement_event_list'";
    }
    auto array_ptr = ros_message->movement_event_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: connection_maneuver_assist_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ConnectionManeuverAssist
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->connection_maneuver_assist_list.data) {
      j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__fini(&ros_message->connection_maneuver_assist_list);
    }
    if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__init(&ros_message->connection_maneuver_assist_list, size)) {
      return "failed to create array for field 'connection_maneuver_assist_list'";
    }
    auto array_ptr = ros_message->connection_maneuver_assist_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__MovementState(
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
  // field.name movement_event_list
  {
    size_t array_size = ros_message->movement_event_list.size;
    auto array_ptr = ros_message->movement_event_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_v2x_msgs__msg__MovementEvent(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name connection_maneuver_assist_list
  {
    size_t array_size = ros_message->connection_maneuver_assist_list.size;
    auto array_ptr = ros_message->connection_maneuver_assist_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ConnectionManeuverAssist(
        &array_ptr[index], current_alignment);
    }
  }
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
    get_serialized_size_carma_v2x_msgs__msg__MovementState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__MovementState(
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
  // member: movement_event_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__MovementEvent(
        full_bounded, current_alignment);
    }
  }
  // member: connection_maneuver_assist_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ConnectionManeuverAssist(
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
  return max_serialized_size_carma_v2x_msgs__msg__MovementState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MovementState = {
  "carma_v2x_msgs::msg",
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, MovementState)() {
  return &_MovementState__type_support;
}

#if defined(__cplusplus)
}
#endif
