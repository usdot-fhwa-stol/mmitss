// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/emergency_details__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/emergency_details__struct.h"
#include "j2735_v2x_msgs/msg/detail/emergency_details__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__functions.h"  // lights_use
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__functions.h"  // multi
#include "j2735_v2x_msgs/msg/detail/privileged_events__functions.h"  // events
#include "j2735_v2x_msgs/msg/detail/response_type__functions.h"  // response_type
#include "j2735_v2x_msgs/msg/detail/siren_in_use__functions.h"  // siren_use

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__LightbarInUse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__LightbarInUse(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LightbarInUse)();
size_t get_serialized_size_j2735_v2x_msgs__msg__MultiVehicleResponse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__MultiVehicleResponse(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MultiVehicleResponse)();
size_t get_serialized_size_j2735_v2x_msgs__msg__PrivilegedEvents(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__PrivilegedEvents(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PrivilegedEvents)();
size_t get_serialized_size_j2735_v2x_msgs__msg__ResponseType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__ResponseType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ResponseType)();
size_t get_serialized_size_j2735_v2x_msgs__msg__SirenInUse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__SirenInUse(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SirenInUse)();


using _EmergencyDetails__ros_msg_type = j2735_v2x_msgs__msg__EmergencyDetails;

static bool _EmergencyDetails__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EmergencyDetails__ros_msg_type * ros_message = static_cast<const _EmergencyDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: ssp_index
  {
    cdr << ros_message->ssp_index;
  }

  // Field name: siren_use
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SirenInUse
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->siren_use, cdr))
    {
      return false;
    }
  }

  // Field name: lights_use
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LightbarInUse
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lights_use, cdr))
    {
      return false;
    }
  }

  // Field name: multi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MultiVehicleResponse
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->multi, cdr))
    {
      return false;
    }
  }

  // Field name: events
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PrivilegedEvents
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->events, cdr))
    {
      return false;
    }
  }

  // Field name: response_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ResponseType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->response_type, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _EmergencyDetails__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EmergencyDetails__ros_msg_type * ros_message = static_cast<_EmergencyDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: ssp_index
  {
    cdr >> ros_message->ssp_index;
  }

  // Field name: siren_use
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SirenInUse
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->siren_use))
    {
      return false;
    }
  }

  // Field name: lights_use
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LightbarInUse
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lights_use))
    {
      return false;
    }
  }

  // Field name: multi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MultiVehicleResponse
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->multi))
    {
      return false;
    }
  }

  // Field name: events
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PrivilegedEvents
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->events))
    {
      return false;
    }
  }

  // Field name: response_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ResponseType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->response_type))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__EmergencyDetails(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EmergencyDetails__ros_msg_type * ros_message = static_cast<const _EmergencyDetails__ros_msg_type *>(untyped_ros_message);
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
  // field.name ssp_index
  {
    size_t item_size = sizeof(ros_message->ssp_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name siren_use

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SirenInUse(
    &(ros_message->siren_use), current_alignment);
  // field.name lights_use

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LightbarInUse(
    &(ros_message->lights_use), current_alignment);
  // field.name multi

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__MultiVehicleResponse(
    &(ros_message->multi), current_alignment);
  // field.name events

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PrivilegedEvents(
    &(ros_message->events), current_alignment);
  // field.name response_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ResponseType(
    &(ros_message->response_type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _EmergencyDetails__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__EmergencyDetails(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__EmergencyDetails(
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
  // member: ssp_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: siren_use
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SirenInUse(
        full_bounded, current_alignment);
    }
  }
  // member: lights_use
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LightbarInUse(
        full_bounded, current_alignment);
    }
  }
  // member: multi
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__MultiVehicleResponse(
        full_bounded, current_alignment);
    }
  }
  // member: events
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PrivilegedEvents(
        full_bounded, current_alignment);
    }
  }
  // member: response_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ResponseType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _EmergencyDetails__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__EmergencyDetails(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EmergencyDetails = {
  "j2735_v2x_msgs::msg",
  "EmergencyDetails",
  _EmergencyDetails__cdr_serialize,
  _EmergencyDetails__cdr_deserialize,
  _EmergencyDetails__get_serialized_size,
  _EmergencyDetails__max_serialized_size
};

static rosidl_message_type_support_t _EmergencyDetails__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EmergencyDetails,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, EmergencyDetails)() {
  return &_EmergencyDetails__type_support;
}

#if defined(__cplusplus)
}
#endif
