// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__struct.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/id128b__functions.h"  // id
#include "j2735_v2x_msgs/msg/detail/id64b__functions.h"  // reqid
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__functions.h"  // geometry
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__functions.h"  // package
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__functions.h"  // params

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__Id128b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__Id128b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Id128b)();
size_t get_serialized_size_j2735_v2x_msgs__msg__Id64b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__Id64b(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Id64b)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TrafficControlGeometry(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TrafficControlGeometry(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlGeometry)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TrafficControlPackage(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TrafficControlPackage(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlPackage)();
size_t get_serialized_size_j2735_v2x_msgs__msg__TrafficControlParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__TrafficControlParams(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlParams)();


using _TrafficControlMessageV01__ros_msg_type = j2735_v2x_msgs__msg__TrafficControlMessageV01;

static bool _TrafficControlMessageV01__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficControlMessageV01__ros_msg_type * ros_message = static_cast<const _TrafficControlMessageV01__ros_msg_type *>(untyped_ros_message);
  // Field name: reqid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Id64b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->reqid, cdr))
    {
      return false;
    }
  }

  // Field name: reqseq
  {
    cdr << ros_message->reqseq;
  }

  // Field name: msgtot
  {
    cdr << ros_message->msgtot;
  }

  // Field name: msgnum
  {
    cdr << ros_message->msgnum;
  }

  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Id128b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->id, cdr))
    {
      return false;
    }
  }

  // Field name: updated
  {
    cdr << ros_message->updated;
  }

  // Field name: package
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlPackage
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->package, cdr))
    {
      return false;
    }
  }

  // Field name: package_exists
  {
    cdr << (ros_message->package_exists ? true : false);
  }

  // Field name: params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params, cdr))
    {
      return false;
    }
  }

  // Field name: params_exists
  {
    cdr << (ros_message->params_exists ? true : false);
  }

  // Field name: geometry
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlGeometry
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->geometry, cdr))
    {
      return false;
    }
  }

  // Field name: geometry_exists
  {
    cdr << (ros_message->geometry_exists ? true : false);
  }

  return true;
}

static bool _TrafficControlMessageV01__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficControlMessageV01__ros_msg_type * ros_message = static_cast<_TrafficControlMessageV01__ros_msg_type *>(untyped_ros_message);
  // Field name: reqid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Id64b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->reqid))
    {
      return false;
    }
  }

  // Field name: reqseq
  {
    cdr >> ros_message->reqseq;
  }

  // Field name: msgtot
  {
    cdr >> ros_message->msgtot;
  }

  // Field name: msgnum
  {
    cdr >> ros_message->msgnum;
  }

  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Id128b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->id))
    {
      return false;
    }
  }

  // Field name: updated
  {
    cdr >> ros_message->updated;
  }

  // Field name: package
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlPackage
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->package))
    {
      return false;
    }
  }

  // Field name: package_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->package_exists = tmp ? true : false;
  }

  // Field name: params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params))
    {
      return false;
    }
  }

  // Field name: params_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->params_exists = tmp ? true : false;
  }

  // Field name: geometry
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlGeometry
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->geometry))
    {
      return false;
    }
  }

  // Field name: geometry_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->geometry_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TrafficControlMessageV01(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficControlMessageV01__ros_msg_type * ros_message = static_cast<const _TrafficControlMessageV01__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reqid

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Id64b(
    &(ros_message->reqid), current_alignment);
  // field.name reqseq
  {
    size_t item_size = sizeof(ros_message->reqseq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msgtot
  {
    size_t item_size = sizeof(ros_message->msgtot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msgnum
  {
    size_t item_size = sizeof(ros_message->msgnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Id128b(
    &(ros_message->id), current_alignment);
  // field.name updated
  {
    size_t item_size = sizeof(ros_message->updated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name package

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TrafficControlPackage(
    &(ros_message->package), current_alignment);
  // field.name package_exists
  {
    size_t item_size = sizeof(ros_message->package_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name params

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TrafficControlParams(
    &(ros_message->params), current_alignment);
  // field.name params_exists
  {
    size_t item_size = sizeof(ros_message->params_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name geometry

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TrafficControlGeometry(
    &(ros_message->geometry), current_alignment);
  // field.name geometry_exists
  {
    size_t item_size = sizeof(ros_message->geometry_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficControlMessageV01__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__TrafficControlMessageV01(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TrafficControlMessageV01(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: reqid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Id64b(
        full_bounded, current_alignment);
    }
  }
  // member: reqseq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: msgtot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: msgnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Id128b(
        full_bounded, current_alignment);
    }
  }
  // member: updated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: package
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TrafficControlPackage(
        full_bounded, current_alignment);
    }
  }
  // member: package_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: params
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TrafficControlParams(
        full_bounded, current_alignment);
    }
  }
  // member: params_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: geometry
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TrafficControlGeometry(
        full_bounded, current_alignment);
    }
  }
  // member: geometry_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficControlMessageV01__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__TrafficControlMessageV01(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrafficControlMessageV01 = {
  "j2735_v2x_msgs::msg",
  "TrafficControlMessageV01",
  _TrafficControlMessageV01__cdr_serialize,
  _TrafficControlMessageV01__cdr_deserialize,
  _TrafficControlMessageV01__get_serialized_size,
  _TrafficControlMessageV01__max_serialized_size
};

static rosidl_message_type_support_t _TrafficControlMessageV01__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficControlMessageV01,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlMessageV01)() {
  return &_TrafficControlMessageV01__type_support;
}

#if defined(__cplusplus)
}
#endif
