// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/traffic_control_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_params__struct.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_params__functions.h"
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

#include "carma_v2x_msgs/msg/detail/traffic_control_detail__functions.h"  // detail
#include "carma_v2x_msgs/msg/detail/traffic_control_schedule__functions.h"  // schedule
#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__functions.h"  // vclasses

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__TrafficControlDetail(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__TrafficControlDetail(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlDetail)();
size_t get_serialized_size_carma_v2x_msgs__msg__TrafficControlSchedule(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__TrafficControlSchedule(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlSchedule)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TrafficControlVehClass(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TrafficControlVehClass(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlVehClass)();


using _TrafficControlParams__ros_msg_type = carma_v2x_msgs__msg__TrafficControlParams;

static bool _TrafficControlParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficControlParams__ros_msg_type * ros_message = static_cast<const _TrafficControlParams__ros_msg_type *>(untyped_ros_message);
  // Field name: vclasses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlVehClass
      )()->data);
    size_t size = ros_message->vclasses.size;
    auto array_ptr = ros_message->vclasses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: schedule
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlSchedule
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->schedule, cdr))
    {
      return false;
    }
  }

  // Field name: regulatory
  {
    cdr << (ros_message->regulatory ? true : false);
  }

  // Field name: detail
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlDetail
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->detail, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrafficControlParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficControlParams__ros_msg_type * ros_message = static_cast<_TrafficControlParams__ros_msg_type *>(untyped_ros_message);
  // Field name: vclasses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlVehClass
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vclasses.data) {
      j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__fini(&ros_message->vclasses);
    }
    if (!j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__init(&ros_message->vclasses, size)) {
      return "failed to create array for field 'vclasses'";
    }
    auto array_ptr = ros_message->vclasses.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: schedule
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlSchedule
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->schedule))
    {
      return false;
    }
  }

  // Field name: regulatory
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->regulatory = tmp ? true : false;
  }

  // Field name: detail
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlDetail
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->detail))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__TrafficControlParams(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficControlParams__ros_msg_type * ros_message = static_cast<const _TrafficControlParams__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vclasses
  {
    size_t array_size = ros_message->vclasses.size;
    auto array_ptr = ros_message->vclasses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TrafficControlVehClass(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name schedule

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__TrafficControlSchedule(
    &(ros_message->schedule), current_alignment);
  // field.name regulatory
  {
    size_t item_size = sizeof(ros_message->regulatory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name detail

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__TrafficControlDetail(
    &(ros_message->detail), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficControlParams__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__TrafficControlParams(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__TrafficControlParams(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: vclasses
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TrafficControlVehClass(
        full_bounded, current_alignment);
    }
  }
  // member: schedule
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__TrafficControlSchedule(
        full_bounded, current_alignment);
    }
  }
  // member: regulatory
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: detail
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__TrafficControlDetail(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficControlParams__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__TrafficControlParams(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrafficControlParams = {
  "carma_v2x_msgs::msg",
  "TrafficControlParams",
  _TrafficControlParams__cdr_serialize,
  _TrafficControlParams__cdr_deserialize,
  _TrafficControlParams__get_serialized_size,
  _TrafficControlParams__max_serialized_size
};

static rosidl_message_type_support_t _TrafficControlParams__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficControlParams,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, TrafficControlParams)() {
  return &_TrafficControlParams__type_support;
}

#if defined(__cplusplus)
}
#endif
