// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/PropelledInformation.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/propelled_information__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/propelled_information__struct.h"
#include "j2735_v2x_msgs/msg/detail/propelled_information__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/animal_propelled_type__functions.h"  // animal
#include "j2735_v2x_msgs/msg/detail/human_propelled_type__functions.h"  // human
#include "j2735_v2x_msgs/msg/detail/motorized_propelled_type__functions.h"  // motor

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__AnimalPropelledType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__AnimalPropelledType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AnimalPropelledType)();
size_t get_serialized_size_j2735_v2x_msgs__msg__HumanPropelledType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__HumanPropelledType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HumanPropelledType)();
size_t get_serialized_size_j2735_v2x_msgs__msg__MotorizedPropelledType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__MotorizedPropelledType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MotorizedPropelledType)();


using _PropelledInformation__ros_msg_type = j2735_v2x_msgs__msg__PropelledInformation;

static bool _PropelledInformation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PropelledInformation__ros_msg_type * ros_message = static_cast<const _PropelledInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr << ros_message->choice;
  }

  // Field name: human
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HumanPropelledType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->human, cdr))
    {
      return false;
    }
  }

  // Field name: animal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AnimalPropelledType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->animal, cdr))
    {
      return false;
    }
  }

  // Field name: motor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MotorizedPropelledType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->motor, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PropelledInformation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PropelledInformation__ros_msg_type * ros_message = static_cast<_PropelledInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr >> ros_message->choice;
  }

  // Field name: human
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HumanPropelledType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->human))
    {
      return false;
    }
  }

  // Field name: animal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AnimalPropelledType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->animal))
    {
      return false;
    }
  }

  // Field name: motor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MotorizedPropelledType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->motor))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PropelledInformation__ros_msg_type * ros_message = static_cast<const _PropelledInformation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name choice
  {
    size_t item_size = sizeof(ros_message->choice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name human

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__HumanPropelledType(
    &(ros_message->human), current_alignment);
  // field.name animal

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AnimalPropelledType(
    &(ros_message->animal), current_alignment);
  // field.name motor

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__MotorizedPropelledType(
    &(ros_message->motor), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PropelledInformation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: choice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: human
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__HumanPropelledType(
        full_bounded, current_alignment);
    }
  }
  // member: animal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AnimalPropelledType(
        full_bounded, current_alignment);
    }
  }
  // member: motor
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__MotorizedPropelledType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PropelledInformation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PropelledInformation = {
  "j2735_v2x_msgs::msg",
  "PropelledInformation",
  _PropelledInformation__cdr_serialize,
  _PropelledInformation__cdr_deserialize,
  _PropelledInformation__get_serialized_size,
  _PropelledInformation__max_serialized_size
};

static rosidl_message_type_support_t _PropelledInformation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PropelledInformation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PropelledInformation)() {
  return &_PropelledInformation__type_support;
}

#if defined(__cplusplus)
}
#endif
