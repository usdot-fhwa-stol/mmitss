// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_debug_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__functions.h"
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

#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__functions.h"  // element

// forward declare type support functions
size_t get_serialized_size_carma_debug_ros2_msgs__msg__RegulatoryElement(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_debug_ros2_msgs__msg__RegulatoryElement(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, RegulatoryElement)();


using _LaneletIdRegulatoryElementPair__ros_msg_type = carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair;

static bool _LaneletIdRegulatoryElementPair__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneletIdRegulatoryElementPair__ros_msg_type * ros_message = static_cast<const _LaneletIdRegulatoryElementPair__ros_msg_type *>(untyped_ros_message);
  // Field name: lanelet_id
  {
    cdr << ros_message->lanelet_id;
  }

  // Field name: element
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, RegulatoryElement
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->element, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LaneletIdRegulatoryElementPair__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneletIdRegulatoryElementPair__ros_msg_type * ros_message = static_cast<_LaneletIdRegulatoryElementPair__ros_msg_type *>(untyped_ros_message);
  // Field name: lanelet_id
  {
    cdr >> ros_message->lanelet_id;
  }

  // Field name: element
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, RegulatoryElement
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->element))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_debug_ros2_msgs
size_t get_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneletIdRegulatoryElementPair__ros_msg_type * ros_message = static_cast<const _LaneletIdRegulatoryElementPair__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lanelet_id
  {
    size_t item_size = sizeof(ros_message->lanelet_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name element

  current_alignment += get_serialized_size_carma_debug_ros2_msgs__msg__RegulatoryElement(
    &(ros_message->element), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LaneletIdRegulatoryElementPair__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_debug_ros2_msgs
size_t max_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: lanelet_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: element
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_debug_ros2_msgs__msg__RegulatoryElement(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneletIdRegulatoryElementPair__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneletIdRegulatoryElementPair = {
  "carma_debug_ros2_msgs::msg",
  "LaneletIdRegulatoryElementPair",
  _LaneletIdRegulatoryElementPair__cdr_serialize,
  _LaneletIdRegulatoryElementPair__cdr_deserialize,
  _LaneletIdRegulatoryElementPair__get_serialized_size,
  _LaneletIdRegulatoryElementPair__max_serialized_size
};

static rosidl_message_type_support_t _LaneletIdRegulatoryElementPair__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneletIdRegulatoryElementPair,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair)() {
  return &_LaneletIdRegulatoryElementPair__type_support;
}

#if defined(__cplusplus)
}
#endif
