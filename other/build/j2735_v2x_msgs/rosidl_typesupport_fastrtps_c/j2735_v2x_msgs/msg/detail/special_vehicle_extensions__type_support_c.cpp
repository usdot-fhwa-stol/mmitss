// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/SpecialVehicleExtensions.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__struct.h"
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/emergency_details__functions.h"  // vehicle_alerts
#include "j2735_v2x_msgs/msg/detail/event_description__functions.h"  // description
#include "j2735_v2x_msgs/msg/detail/trailer_data__functions.h"  // trailers

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__EmergencyDetails(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__EmergencyDetails(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, EmergencyDetails)();
size_t get_serialized_size_j2735_v2x_msgs__msg__EventDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__EventDescription(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, EventDescription)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TrailerData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TrailerData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerData)();


using _SpecialVehicleExtensions__ros_msg_type = j2735_v2x_msgs__msg__SpecialVehicleExtensions;

static bool _SpecialVehicleExtensions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpecialVehicleExtensions__ros_msg_type * ros_message = static_cast<const _SpecialVehicleExtensions__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: vehicle_alerts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, EmergencyDetails
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_alerts, cdr))
    {
      return false;
    }
  }

  // Field name: description
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, EventDescription
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->description, cdr))
    {
      return false;
    }
  }

  // Field name: trailers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trailers, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SpecialVehicleExtensions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpecialVehicleExtensions__ros_msg_type * ros_message = static_cast<_SpecialVehicleExtensions__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: vehicle_alerts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, EmergencyDetails
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_alerts))
    {
      return false;
    }
  }

  // Field name: description
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, EventDescription
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->description))
    {
      return false;
    }
  }

  // Field name: trailers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trailers))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__SpecialVehicleExtensions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpecialVehicleExtensions__ros_msg_type * ros_message = static_cast<const _SpecialVehicleExtensions__ros_msg_type *>(untyped_ros_message);
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
  // field.name vehicle_alerts

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__EmergencyDetails(
    &(ros_message->vehicle_alerts), current_alignment);
  // field.name description

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__EventDescription(
    &(ros_message->description), current_alignment);
  // field.name trailers

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TrailerData(
    &(ros_message->trailers), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SpecialVehicleExtensions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__SpecialVehicleExtensions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__SpecialVehicleExtensions(
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
  // member: vehicle_alerts
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__EmergencyDetails(
        full_bounded, current_alignment);
    }
  }
  // member: description
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__EventDescription(
        full_bounded, current_alignment);
    }
  }
  // member: trailers
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TrailerData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SpecialVehicleExtensions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__SpecialVehicleExtensions(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpecialVehicleExtensions = {
  "j2735_v2x_msgs::msg",
  "SpecialVehicleExtensions",
  _SpecialVehicleExtensions__cdr_serialize,
  _SpecialVehicleExtensions__cdr_deserialize,
  _SpecialVehicleExtensions__get_serialized_size,
  _SpecialVehicleExtensions__max_serialized_size
};

static rosidl_message_type_support_t _SpecialVehicleExtensions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpecialVehicleExtensions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpecialVehicleExtensions)() {
  return &_SpecialVehicleExtensions__type_support;
}

#if defined(__cplusplus)
}
#endif
