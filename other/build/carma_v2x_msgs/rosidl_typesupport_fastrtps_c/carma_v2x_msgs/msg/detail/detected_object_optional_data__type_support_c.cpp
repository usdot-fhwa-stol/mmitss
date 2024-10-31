// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/DetectedObjectOptionalData.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__struct.h"
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__functions.h"
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

#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__functions.h"  // det_obst
#include "carma_v2x_msgs/msg/detail/detected_vehicle_data__functions.h"  // det_veh
#include "carma_v2x_msgs/msg/detail/detected_vru_data__functions.h"  // det_vru

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__DetectedObstacleData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__DetectedObstacleData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedObstacleData)();
size_t get_serialized_size_carma_v2x_msgs__msg__DetectedVRUData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__DetectedVRUData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedVRUData)();
size_t get_serialized_size_carma_v2x_msgs__msg__DetectedVehicleData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__DetectedVehicleData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedVehicleData)();


using _DetectedObjectOptionalData__ros_msg_type = carma_v2x_msgs__msg__DetectedObjectOptionalData;

static bool _DetectedObjectOptionalData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectedObjectOptionalData__ros_msg_type * ros_message = static_cast<const _DetectedObjectOptionalData__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr << ros_message->choice;
  }

  // Field name: det_veh
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedVehicleData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->det_veh, cdr))
    {
      return false;
    }
  }

  // Field name: det_vru
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedVRUData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->det_vru, cdr))
    {
      return false;
    }
  }

  // Field name: det_obst
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedObstacleData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->det_obst, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DetectedObjectOptionalData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectedObjectOptionalData__ros_msg_type * ros_message = static_cast<_DetectedObjectOptionalData__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr >> ros_message->choice;
  }

  // Field name: det_veh
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedVehicleData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->det_veh))
    {
      return false;
    }
  }

  // Field name: det_vru
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedVRUData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->det_vru))
    {
      return false;
    }
  }

  // Field name: det_obst
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedObstacleData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->det_obst))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__DetectedObjectOptionalData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectedObjectOptionalData__ros_msg_type * ros_message = static_cast<const _DetectedObjectOptionalData__ros_msg_type *>(untyped_ros_message);
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
  // field.name det_veh

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__DetectedVehicleData(
    &(ros_message->det_veh), current_alignment);
  // field.name det_vru

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__DetectedVRUData(
    &(ros_message->det_vru), current_alignment);
  // field.name det_obst

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__DetectedObstacleData(
    &(ros_message->det_obst), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DetectedObjectOptionalData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__DetectedObjectOptionalData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__DetectedObjectOptionalData(
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
  // member: det_veh
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__DetectedVehicleData(
        full_bounded, current_alignment);
    }
  }
  // member: det_vru
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__DetectedVRUData(
        full_bounded, current_alignment);
    }
  }
  // member: det_obst
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__DetectedObstacleData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DetectedObjectOptionalData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__DetectedObjectOptionalData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DetectedObjectOptionalData = {
  "carma_v2x_msgs::msg",
  "DetectedObjectOptionalData",
  _DetectedObjectOptionalData__cdr_serialize,
  _DetectedObjectOptionalData__cdr_deserialize,
  _DetectedObjectOptionalData__get_serialized_size,
  _DetectedObjectOptionalData__max_serialized_size
};

static rosidl_message_type_support_t _DetectedObjectOptionalData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectedObjectOptionalData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, DetectedObjectOptionalData)() {
  return &_DetectedObjectOptionalData__type_support;
}

#if defined(__cplusplus)
}
#endif
