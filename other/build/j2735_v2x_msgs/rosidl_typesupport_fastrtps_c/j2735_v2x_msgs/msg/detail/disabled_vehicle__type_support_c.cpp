// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__struct.h"
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"  // status_details
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__functions.h"  // location_details

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__ITISGenericLocations(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__ITISGenericLocations(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISGenericLocations)();
size_t get_serialized_size_j2735_v2x_msgs__msg__ITIScodes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__ITIScodes(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITIScodes)();


using _DisabledVehicle__ros_msg_type = j2735_v2x_msgs__msg__DisabledVehicle;

static bool _DisabledVehicle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DisabledVehicle__ros_msg_type * ros_message = static_cast<const _DisabledVehicle__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: status_details
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITIScodes
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status_details, cdr))
    {
      return false;
    }
  }

  // Field name: location_details
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISGenericLocations
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->location_details, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DisabledVehicle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DisabledVehicle__ros_msg_type * ros_message = static_cast<_DisabledVehicle__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: status_details
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITIScodes
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status_details))
    {
      return false;
    }
  }

  // Field name: location_details
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISGenericLocations
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->location_details))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__DisabledVehicle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DisabledVehicle__ros_msg_type * ros_message = static_cast<const _DisabledVehicle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_details

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ITIScodes(
    &(ros_message->status_details), current_alignment);
  // field.name location_details

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ITISGenericLocations(
    &(ros_message->location_details), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DisabledVehicle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__DisabledVehicle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__DisabledVehicle(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: status_details
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ITIScodes(
        full_bounded, current_alignment);
    }
  }
  // member: location_details
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ITISGenericLocations(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DisabledVehicle__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__DisabledVehicle(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DisabledVehicle = {
  "j2735_v2x_msgs::msg",
  "DisabledVehicle",
  _DisabledVehicle__cdr_serialize,
  _DisabledVehicle__cdr_deserialize,
  _DisabledVehicle__get_serialized_size,
  _DisabledVehicle__max_serialized_size
};

static rosidl_message_type_support_t _DisabledVehicle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DisabledVehicle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DisabledVehicle)() {
  return &_DisabledVehicle__type_support;
}

#if defined(__cplusplus)
}
#endif
