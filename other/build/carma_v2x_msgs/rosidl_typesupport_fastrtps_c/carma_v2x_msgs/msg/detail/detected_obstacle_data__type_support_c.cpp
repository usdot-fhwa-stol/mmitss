// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/DetectedObstacleData.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__struct.h"
#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__functions.h"
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

#include "carma_v2x_msgs/msg/detail/obstacle_size__functions.h"  // obst_size
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__functions.h"  // obst_size_confidence

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__ObstacleSize(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__ObstacleSize(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleSize)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__ObstacleSizeConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__ObstacleSizeConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObstacleSizeConfidence)();


using _DetectedObstacleData__ros_msg_type = carma_v2x_msgs__msg__DetectedObstacleData;

static bool _DetectedObstacleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectedObstacleData__ros_msg_type * ros_message = static_cast<const _DetectedObstacleData__ros_msg_type *>(untyped_ros_message);
  // Field name: obst_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleSize
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->obst_size, cdr))
    {
      return false;
    }
  }

  // Field name: obst_size_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObstacleSizeConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->obst_size_confidence, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DetectedObstacleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectedObstacleData__ros_msg_type * ros_message = static_cast<_DetectedObstacleData__ros_msg_type *>(untyped_ros_message);
  // Field name: obst_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleSize
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->obst_size))
    {
      return false;
    }
  }

  // Field name: obst_size_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObstacleSizeConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->obst_size_confidence))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__DetectedObstacleData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectedObstacleData__ros_msg_type * ros_message = static_cast<const _DetectedObstacleData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name obst_size

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__ObstacleSize(
    &(ros_message->obst_size), current_alignment);
  // field.name obst_size_confidence

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__ObstacleSizeConfidence(
    &(ros_message->obst_size_confidence), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DetectedObstacleData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__DetectedObstacleData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__DetectedObstacleData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: obst_size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__ObstacleSize(
        full_bounded, current_alignment);
    }
  }
  // member: obst_size_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__ObstacleSizeConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DetectedObstacleData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__DetectedObstacleData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DetectedObstacleData = {
  "carma_v2x_msgs::msg",
  "DetectedObstacleData",
  _DetectedObstacleData__cdr_serialize,
  _DetectedObstacleData__cdr_deserialize,
  _DetectedObstacleData__get_serialized_size,
  _DetectedObstacleData__max_serialized_size
};

static rosidl_message_type_support_t _DetectedObstacleData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectedObstacleData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedObstacleData)() {
  return &_DetectedObstacleData__type_support;
}

#if defined(__cplusplus)
}
#endif
