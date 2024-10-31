// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/vehicle_safety_extensions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/vehicle_safety_extensions__struct.h"
#include "carma_v2x_msgs/msg/detail/vehicle_safety_extensions__functions.h"
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

#include "carma_v2x_msgs/msg/detail/path_history__functions.h"  // path_history
#include "carma_v2x_msgs/msg/detail/path_prediction__functions.h"  // path_prediction
#include "j2735_v2x_msgs/msg/detail/exterior_lights__functions.h"  // lights
#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__functions.h"  // events

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__PathHistory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__PathHistory(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathHistory)();
size_t get_serialized_size_carma_v2x_msgs__msg__PathPrediction(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__PathPrediction(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathPrediction)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__ExteriorLights(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__ExteriorLights(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ExteriorLights)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleEventFlags(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleEventFlags(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleEventFlags)();


using _VehicleSafetyExtensions__ros_msg_type = carma_v2x_msgs__msg__VehicleSafetyExtensions;

static bool _VehicleSafetyExtensions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleSafetyExtensions__ros_msg_type * ros_message = static_cast<const _VehicleSafetyExtensions__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: events
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleEventFlags
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->events, cdr))
    {
      return false;
    }
  }

  // Field name: path_history
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathHistory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path_history, cdr))
    {
      return false;
    }
  }

  // Field name: path_prediction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathPrediction
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path_prediction, cdr))
    {
      return false;
    }
  }

  // Field name: lights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ExteriorLights
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lights, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VehicleSafetyExtensions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleSafetyExtensions__ros_msg_type * ros_message = static_cast<_VehicleSafetyExtensions__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: events
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleEventFlags
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->events))
    {
      return false;
    }
  }

  // Field name: path_history
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathHistory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path_history))
    {
      return false;
    }
  }

  // Field name: path_prediction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathPrediction
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path_prediction))
    {
      return false;
    }
  }

  // Field name: lights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ExteriorLights
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lights))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__VehicleSafetyExtensions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleSafetyExtensions__ros_msg_type * ros_message = static_cast<const _VehicleSafetyExtensions__ros_msg_type *>(untyped_ros_message);
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
  // field.name events

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleEventFlags(
    &(ros_message->events), current_alignment);
  // field.name path_history

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__PathHistory(
    &(ros_message->path_history), current_alignment);
  // field.name path_prediction

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__PathPrediction(
    &(ros_message->path_prediction), current_alignment);
  // field.name lights

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ExteriorLights(
    &(ros_message->lights), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleSafetyExtensions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__VehicleSafetyExtensions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__VehicleSafetyExtensions(
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
  // member: events
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleEventFlags(
        full_bounded, current_alignment);
    }
  }
  // member: path_history
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__PathHistory(
        full_bounded, current_alignment);
    }
  }
  // member: path_prediction
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__PathPrediction(
        full_bounded, current_alignment);
    }
  }
  // member: lights
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ExteriorLights(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleSafetyExtensions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__VehicleSafetyExtensions(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleSafetyExtensions = {
  "carma_v2x_msgs::msg",
  "VehicleSafetyExtensions",
  _VehicleSafetyExtensions__cdr_serialize,
  _VehicleSafetyExtensions__cdr_deserialize,
  _VehicleSafetyExtensions__get_serialized_size,
  _VehicleSafetyExtensions__max_serialized_size
};

static rosidl_message_type_support_t _VehicleSafetyExtensions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleSafetyExtensions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, VehicleSafetyExtensions)() {
  return &_VehicleSafetyExtensions__type_support;
}

#if defined(__cplusplus)
}
#endif
