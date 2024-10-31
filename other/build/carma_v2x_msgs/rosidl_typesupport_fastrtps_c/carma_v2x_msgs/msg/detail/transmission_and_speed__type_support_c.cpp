// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/transmission_and_speed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/transmission_and_speed__struct.h"
#include "carma_v2x_msgs/msg/detail/transmission_and_speed__functions.h"
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

#include "carma_v2x_msgs/msg/detail/velocity__functions.h"  // speed
#include "j2735_v2x_msgs/msg/detail/transmission_state__functions.h"  // transmission

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__Velocity(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Velocity(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Velocity)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TransmissionState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TransmissionState(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TransmissionState)();


using _TransmissionAndSpeed__ros_msg_type = carma_v2x_msgs__msg__TransmissionAndSpeed;

static bool _TransmissionAndSpeed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TransmissionAndSpeed__ros_msg_type * ros_message = static_cast<const _TransmissionAndSpeed__ros_msg_type *>(untyped_ros_message);
  // Field name: transmission
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TransmissionState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->transmission, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Velocity
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TransmissionAndSpeed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TransmissionAndSpeed__ros_msg_type * ros_message = static_cast<_TransmissionAndSpeed__ros_msg_type *>(untyped_ros_message);
  // Field name: transmission
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TransmissionState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->transmission))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Velocity
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__TransmissionAndSpeed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TransmissionAndSpeed__ros_msg_type * ros_message = static_cast<const _TransmissionAndSpeed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name transmission

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TransmissionState(
    &(ros_message->transmission), current_alignment);
  // field.name speed

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Velocity(
    &(ros_message->speed), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TransmissionAndSpeed__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__TransmissionAndSpeed(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__TransmissionAndSpeed(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: transmission
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TransmissionState(
        full_bounded, current_alignment);
    }
  }
  // member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Velocity(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TransmissionAndSpeed__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__TransmissionAndSpeed(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TransmissionAndSpeed = {
  "carma_v2x_msgs::msg",
  "TransmissionAndSpeed",
  _TransmissionAndSpeed__cdr_serialize,
  _TransmissionAndSpeed__cdr_deserialize,
  _TransmissionAndSpeed__get_serialized_size,
  _TransmissionAndSpeed__max_serialized_size
};

static rosidl_message_type_support_t _TransmissionAndSpeed__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TransmissionAndSpeed,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TransmissionAndSpeed)() {
  return &_TransmissionAndSpeed__type_support;
}

#if defined(__cplusplus)
}
#endif
