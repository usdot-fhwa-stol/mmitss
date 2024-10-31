// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/traffic_control_request_v01__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_request_v01__struct.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_request_v01__functions.h"
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

#include "carma_v2x_msgs/msg/detail/traffic_control_bounds__functions.h"  // bounds
#include "j2735_v2x_msgs/msg/detail/id64b__functions.h"  // reqid

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__TrafficControlBounds(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__TrafficControlBounds(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlBounds)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Id64b(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Id64b(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Id64b)();


using _TrafficControlRequestV01__ros_msg_type = carma_v2x_msgs__msg__TrafficControlRequestV01;

static bool _TrafficControlRequestV01__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficControlRequestV01__ros_msg_type * ros_message = static_cast<const _TrafficControlRequestV01__ros_msg_type *>(untyped_ros_message);
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

  // Field name: bounds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlBounds
      )()->data);
    size_t size = ros_message->bounds.size;
    auto array_ptr = ros_message->bounds.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _TrafficControlRequestV01__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficControlRequestV01__ros_msg_type * ros_message = static_cast<_TrafficControlRequestV01__ros_msg_type *>(untyped_ros_message);
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

  // Field name: bounds
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlBounds
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounds.data) {
      carma_v2x_msgs__msg__TrafficControlBounds__Sequence__fini(&ros_message->bounds);
    }
    if (!carma_v2x_msgs__msg__TrafficControlBounds__Sequence__init(&ros_message->bounds, size)) {
      return "failed to create array for field 'bounds'";
    }
    auto array_ptr = ros_message->bounds.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__TrafficControlRequestV01(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficControlRequestV01__ros_msg_type * ros_message = static_cast<const _TrafficControlRequestV01__ros_msg_type *>(untyped_ros_message);
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
  // field.name bounds
  {
    size_t array_size = ros_message->bounds.size;
    auto array_ptr = ros_message->bounds.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_v2x_msgs__msg__TrafficControlBounds(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficControlRequestV01__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__TrafficControlRequestV01(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__TrafficControlRequestV01(
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
  // member: bounds
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__TrafficControlBounds(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficControlRequestV01__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__TrafficControlRequestV01(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrafficControlRequestV01 = {
  "carma_v2x_msgs::msg",
  "TrafficControlRequestV01",
  _TrafficControlRequestV01__cdr_serialize,
  _TrafficControlRequestV01__cdr_deserialize,
  _TrafficControlRequestV01__get_serialized_size,
  _TrafficControlRequestV01__max_serialized_size
};

static rosidl_message_type_support_t _TrafficControlRequestV01__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficControlRequestV01,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlRequestV01)() {
  return &_TrafficControlRequestV01__type_support;
}

#if defined(__cplusplus)
}
#endif
