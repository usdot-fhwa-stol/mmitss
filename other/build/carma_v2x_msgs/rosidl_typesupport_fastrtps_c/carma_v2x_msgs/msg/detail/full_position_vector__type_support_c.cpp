// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/full_position_vector__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/full_position_vector__struct.h"
#include "carma_v2x_msgs/msg/detail/full_position_vector__functions.h"
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

#include "carma_v2x_msgs/msg/detail/elevation__functions.h"  // elevation
#include "carma_v2x_msgs/msg/detail/heading__functions.h"  // heading
#include "carma_v2x_msgs/msg/detail/latitude__functions.h"  // lat
#include "carma_v2x_msgs/msg/detail/longitude__functions.h"  // lon
#include "carma_v2x_msgs/msg/detail/positional_accuracy__functions.h"  // pos_accuracy
#include "carma_v2x_msgs/msg/detail/transmission_and_speed__functions.h"  // speed
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"  // utc_time
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__functions.h"  // pos_confidence
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"  // speed_confidence
#include "j2735_v2x_msgs/msg/detail/time_confidence__functions.h"  // time_confidence

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__Elevation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Elevation(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Elevation)();
size_t get_serialized_size_carma_v2x_msgs__msg__Heading(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Heading(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Heading)();
size_t get_serialized_size_carma_v2x_msgs__msg__Latitude(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Latitude(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Latitude)();
size_t get_serialized_size_carma_v2x_msgs__msg__Longitude(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Longitude(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Longitude)();
size_t get_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PositionalAccuracy)();
size_t get_serialized_size_carma_v2x_msgs__msg__TransmissionAndSpeed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__TransmissionAndSpeed(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TransmissionAndSpeed)();
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
size_t get_serialized_size_j2735_v2x_msgs__msg__PositionConfidenceSet(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PositionConfidenceSet(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionConfidenceSet)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedandHeadingandThrottleConfidence)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TimeConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TimeConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TimeConfidence)();


using _FullPositionVector__ros_msg_type = carma_v2x_msgs__msg__FullPositionVector;

static bool _FullPositionVector__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FullPositionVector__ros_msg_type * ros_message = static_cast<const _FullPositionVector__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: utc_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDateTime
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->utc_time, cdr))
    {
      return false;
    }
  }

  // Field name: lon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Longitude
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lon, cdr))
    {
      return false;
    }
  }

  // Field name: lat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Latitude
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lat, cdr))
    {
      return false;
    }
  }

  // Field name: elevation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Elevation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->elevation, cdr))
    {
      return false;
    }
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Heading
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heading, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TransmissionAndSpeed
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed, cdr))
    {
      return false;
    }
  }

  // Field name: pos_accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pos_accuracy, cdr))
    {
      return false;
    }
  }

  // Field name: time_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TimeConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->time_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: pos_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionConfidenceSet
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pos_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: speed_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedandHeadingandThrottleConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed_confidence, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FullPositionVector__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FullPositionVector__ros_msg_type * ros_message = static_cast<_FullPositionVector__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: utc_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DDateTime
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->utc_time))
    {
      return false;
    }
  }

  // Field name: lon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Longitude
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lon))
    {
      return false;
    }
  }

  // Field name: lat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Latitude
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lat))
    {
      return false;
    }
  }

  // Field name: elevation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Elevation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->elevation))
    {
      return false;
    }
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Heading
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heading))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TransmissionAndSpeed
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed))
    {
      return false;
    }
  }

  // Field name: pos_accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pos_accuracy))
    {
      return false;
    }
  }

  // Field name: time_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TimeConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->time_confidence))
    {
      return false;
    }
  }

  // Field name: pos_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionConfidenceSet
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pos_confidence))
    {
      return false;
    }
  }

  // Field name: speed_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedandHeadingandThrottleConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed_confidence))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__FullPositionVector(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FullPositionVector__ros_msg_type * ros_message = static_cast<const _FullPositionVector__ros_msg_type *>(untyped_ros_message);
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
  // field.name utc_time

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DDateTime(
    &(ros_message->utc_time), current_alignment);
  // field.name lon

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Longitude(
    &(ros_message->lon), current_alignment);
  // field.name lat

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Latitude(
    &(ros_message->lat), current_alignment);
  // field.name elevation

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Elevation(
    &(ros_message->elevation), current_alignment);
  // field.name heading

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Heading(
    &(ros_message->heading), current_alignment);
  // field.name speed

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__TransmissionAndSpeed(
    &(ros_message->speed), current_alignment);
  // field.name pos_accuracy

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
    &(ros_message->pos_accuracy), current_alignment);
  // field.name time_confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TimeConfidence(
    &(ros_message->time_confidence), current_alignment);
  // field.name pos_confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PositionConfidenceSet(
    &(ros_message->pos_confidence), current_alignment);
  // field.name speed_confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence(
    &(ros_message->speed_confidence), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FullPositionVector__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__FullPositionVector(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__FullPositionVector(
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
  // member: utc_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DDateTime(
        full_bounded, current_alignment);
    }
  }
  // member: lon
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Longitude(
        full_bounded, current_alignment);
    }
  }
  // member: lat
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Latitude(
        full_bounded, current_alignment);
    }
  }
  // member: elevation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Elevation(
        full_bounded, current_alignment);
    }
  }
  // member: heading
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Heading(
        full_bounded, current_alignment);
    }
  }
  // member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__TransmissionAndSpeed(
        full_bounded, current_alignment);
    }
  }
  // member: pos_accuracy
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
        full_bounded, current_alignment);
    }
  }
  // member: time_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TimeConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: pos_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PositionConfidenceSet(
        full_bounded, current_alignment);
    }
  }
  // member: speed_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FullPositionVector__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__FullPositionVector(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FullPositionVector = {
  "carma_v2x_msgs::msg",
  "FullPositionVector",
  _FullPositionVector__cdr_serialize,
  _FullPositionVector__cdr_deserialize,
  _FullPositionVector__get_serialized_size,
  _FullPositionVector__max_serialized_size
};

static rosidl_message_type_support_t _FullPositionVector__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FullPositionVector,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, FullPositionVector)() {
  return &_FullPositionVector__type_support;
}

#if defined(__cplusplus)
}
#endif
