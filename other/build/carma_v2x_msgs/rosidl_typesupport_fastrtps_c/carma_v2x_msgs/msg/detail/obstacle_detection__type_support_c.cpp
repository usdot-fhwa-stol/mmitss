// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/obstacle_detection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/obstacle_detection__struct.h"
#include "carma_v2x_msgs/msg/detail/obstacle_detection__functions.h"
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

#include "carma_v2x_msgs/msg/detail/obstacle_direction__functions.h"  // ob_direct
#include "carma_v2x_msgs/msg/detail/obstacle_distance__functions.h"  // ob_dist
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"  // date_time
#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"  // description
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__functions.h"  // location_details
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__functions.h"  // vert_event

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__ObstacleDirection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__ObstacleDirection(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDirection)();
size_t get_serialized_size_carma_v2x_msgs__msg__ObstacleDistance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__ObstacleDistance(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDistance)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__DDateTime(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__DDateTime(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDateTime)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__ITISGenericLocations(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__ITISGenericLocations(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISGenericLocations)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__ITIScodes(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__ITIScodes(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITIScodes)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__VerticalAccelerationThreshold(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__VerticalAccelerationThreshold(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VerticalAccelerationThreshold)();


using _ObstacleDetection__ros_msg_type = carma_v2x_msgs__msg__ObstacleDetection;

static bool _ObstacleDetection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObstacleDetection__ros_msg_type * ros_message = static_cast<const _ObstacleDetection__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: ob_dist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDistance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ob_dist, cdr))
    {
      return false;
    }
  }

  // Field name: ob_direct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDirection
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ob_direct, cdr))
    {
      return false;
    }
  }

  // Field name: date_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDateTime
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->date_time, cdr))
    {
      return false;
    }
  }

  // Field name: description
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITIScodes
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->description, cdr))
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

  // Field name: vert_event
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VerticalAccelerationThreshold
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vert_event, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ObstacleDetection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObstacleDetection__ros_msg_type * ros_message = static_cast<_ObstacleDetection__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: ob_dist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDistance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ob_dist))
    {
      return false;
    }
  }

  // Field name: ob_direct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDirection
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ob_direct))
    {
      return false;
    }
  }

  // Field name: date_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDateTime
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->date_time))
    {
      return false;
    }
  }

  // Field name: description
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITIScodes
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->description))
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

  // Field name: vert_event
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VerticalAccelerationThreshold
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vert_event))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__ObstacleDetection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObstacleDetection__ros_msg_type * ros_message = static_cast<const _ObstacleDetection__ros_msg_type *>(untyped_ros_message);
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
  // field.name ob_dist

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__ObstacleDistance(
    &(ros_message->ob_dist), current_alignment);
  // field.name ob_direct

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__ObstacleDirection(
    &(ros_message->ob_direct), current_alignment);
  // field.name date_time

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DDateTime(
    &(ros_message->date_time), current_alignment);
  // field.name description

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ITIScodes(
    &(ros_message->description), current_alignment);
  // field.name location_details

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ITISGenericLocations(
    &(ros_message->location_details), current_alignment);
  // field.name vert_event

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VerticalAccelerationThreshold(
    &(ros_message->vert_event), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ObstacleDetection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__ObstacleDetection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__ObstacleDetection(
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
  // member: ob_dist
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__ObstacleDistance(
        full_bounded, current_alignment);
    }
  }
  // member: ob_direct
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__ObstacleDirection(
        full_bounded, current_alignment);
    }
  }
  // member: date_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DDateTime(
        full_bounded, current_alignment);
    }
  }
  // member: description
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
  // member: vert_event
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VerticalAccelerationThreshold(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ObstacleDetection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__ObstacleDetection(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObstacleDetection = {
  "carma_v2x_msgs::msg",
  "ObstacleDetection",
  _ObstacleDetection__cdr_serialize,
  _ObstacleDetection__cdr_deserialize,
  _ObstacleDetection__get_serialized_size,
  _ObstacleDetection__max_serialized_size
};

static rosidl_message_type_support_t _ObstacleDetection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObstacleDetection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDetection)() {
  return &_ObstacleDetection__type_support;
}

#if defined(__cplusplus)
}
#endif
