// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/VehicleSizeConfidence.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__struct.h"
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__functions.h"
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

#include "j3224_v2x_msgs/msg/detail/size_value_confidence__functions.h"  // vehicle_height_confidence, vehicle_length_confidence, vehicle_width_confidence

// forward declare type support functions
size_t get_serialized_size_j3224_v2x_msgs__msg__SizeValueConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__SizeValueConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, SizeValueConfidence)();


using _VehicleSizeConfidence__ros_msg_type = j3224_v2x_msgs__msg__VehicleSizeConfidence;

static bool _VehicleSizeConfidence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleSizeConfidence__ros_msg_type * ros_message = static_cast<const _VehicleSizeConfidence__ros_msg_type *>(untyped_ros_message);
  // Field name: vehicle_width_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, SizeValueConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_width_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: vehicle_length_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, SizeValueConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_length_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: vehicle_height_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, SizeValueConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_height_confidence, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VehicleSizeConfidence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleSizeConfidence__ros_msg_type * ros_message = static_cast<_VehicleSizeConfidence__ros_msg_type *>(untyped_ros_message);
  // Field name: vehicle_width_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, SizeValueConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_width_confidence))
    {
      return false;
    }
  }

  // Field name: vehicle_length_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, SizeValueConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_length_confidence))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: vehicle_height_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, SizeValueConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_height_confidence))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__VehicleSizeConfidence(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleSizeConfidence__ros_msg_type * ros_message = static_cast<const _VehicleSizeConfidence__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vehicle_width_confidence

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__SizeValueConfidence(
    &(ros_message->vehicle_width_confidence), current_alignment);
  // field.name vehicle_length_confidence

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__SizeValueConfidence(
    &(ros_message->vehicle_length_confidence), current_alignment);
  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_height_confidence

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__SizeValueConfidence(
    &(ros_message->vehicle_height_confidence), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleSizeConfidence__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__VehicleSizeConfidence(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__VehicleSizeConfidence(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: vehicle_width_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__SizeValueConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: vehicle_length_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__SizeValueConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_height_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__SizeValueConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleSizeConfidence__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__VehicleSizeConfidence(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleSizeConfidence = {
  "j3224_v2x_msgs::msg",
  "VehicleSizeConfidence",
  _VehicleSizeConfidence__cdr_serialize,
  _VehicleSizeConfidence__cdr_deserialize,
  _VehicleSizeConfidence__get_serialized_size,
  _VehicleSizeConfidence__max_serialized_size
};

static rosidl_message_type_support_t _VehicleSizeConfidence__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleSizeConfidence,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, VehicleSizeConfidence)() {
  return &_VehicleSizeConfidence__type_support;
}

#if defined(__cplusplus)
}
#endif
