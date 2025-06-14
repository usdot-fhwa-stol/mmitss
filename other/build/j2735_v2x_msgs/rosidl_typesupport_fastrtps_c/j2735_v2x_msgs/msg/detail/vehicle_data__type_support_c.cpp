// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/vehicle_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_data__struct.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_data__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/bumper_heights__functions.h"  // bumpers
#include "j2735_v2x_msgs/msg/detail/trailer_weight__functions.h"  // trailer_weight
#include "j2735_v2x_msgs/msg/detail/vehicle_height__functions.h"  // height
#include "j2735_v2x_msgs/msg/detail/vehicle_mass__functions.h"  // mass

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__BumperHeights(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__BumperHeights(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BumperHeights)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TrailerWeight(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TrailerWeight(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerWeight)();
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight)();
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleMass(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleMass(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleMass)();


using _VehicleData__ros_msg_type = j2735_v2x_msgs__msg__VehicleData;

static bool _VehicleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleData__ros_msg_type * ros_message = static_cast<const _VehicleData__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->height, cdr))
    {
      return false;
    }
  }

  // Field name: bumpers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BumperHeights
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bumpers, cdr))
    {
      return false;
    }
  }

  // Field name: mass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleMass
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mass, cdr))
    {
      return false;
    }
  }

  // Field name: trailer_weight
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerWeight
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trailer_weight, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VehicleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleData__ros_msg_type * ros_message = static_cast<_VehicleData__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->height))
    {
      return false;
    }
  }

  // Field name: bumpers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BumperHeights
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bumpers))
    {
      return false;
    }
  }

  // Field name: mass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleMass
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mass))
    {
      return false;
    }
  }

  // Field name: trailer_weight
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrailerWeight
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trailer_weight))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleData__ros_msg_type * ros_message = static_cast<const _VehicleData__ros_msg_type *>(untyped_ros_message);
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
  // field.name height

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
    &(ros_message->height), current_alignment);
  // field.name bumpers

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__BumperHeights(
    &(ros_message->bumpers), current_alignment);
  // field.name mass

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleMass(
    &(ros_message->mass), current_alignment);
  // field.name trailer_weight

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TrailerWeight(
    &(ros_message->trailer_weight), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__VehicleData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleData(
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
  // member: height
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
        full_bounded, current_alignment);
    }
  }
  // member: bumpers
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__BumperHeights(
        full_bounded, current_alignment);
    }
  }
  // member: mass
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleMass(
        full_bounded, current_alignment);
    }
  }
  // member: trailer_weight
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TrailerWeight(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__VehicleData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleData = {
  "j2735_v2x_msgs::msg",
  "VehicleData",
  _VehicleData__cdr_serialize,
  _VehicleData__cdr_deserialize,
  _VehicleData__get_serialized_size,
  _VehicleData__max_serialized_size
};

static rosidl_message_type_support_t _VehicleData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleData)() {
  return &_VehicleData__type_support;
}

#if defined(__cplusplus)
}
#endif
