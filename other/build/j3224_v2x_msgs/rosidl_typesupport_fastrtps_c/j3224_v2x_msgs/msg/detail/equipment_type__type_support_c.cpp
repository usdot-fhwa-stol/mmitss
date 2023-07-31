// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/EquipmentType.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/equipment_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/equipment_type__struct.h"
#include "j3224_v2x_msgs/msg/detail/equipment_type__functions.h"
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


// forward declare type support functions


using _EquipmentType__ros_msg_type = j3224_v2x_msgs__msg__EquipmentType;

static bool _EquipmentType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EquipmentType__ros_msg_type * ros_message = static_cast<const _EquipmentType__ros_msg_type *>(untyped_ros_message);
  // Field name: equipment_type
  {
    cdr << ros_message->equipment_type;
  }

  return true;
}

static bool _EquipmentType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EquipmentType__ros_msg_type * ros_message = static_cast<_EquipmentType__ros_msg_type *>(untyped_ros_message);
  // Field name: equipment_type
  {
    cdr >> ros_message->equipment_type;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__EquipmentType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EquipmentType__ros_msg_type * ros_message = static_cast<const _EquipmentType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name equipment_type
  {
    size_t item_size = sizeof(ros_message->equipment_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EquipmentType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__EquipmentType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__EquipmentType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: equipment_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EquipmentType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__EquipmentType(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EquipmentType = {
  "j3224_v2x_msgs::msg",
  "EquipmentType",
  _EquipmentType__cdr_serialize,
  _EquipmentType__cdr_deserialize,
  _EquipmentType__get_serialized_size,
  _EquipmentType__max_serialized_size
};

static rosidl_message_type_support_t _EquipmentType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EquipmentType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, EquipmentType)() {
  return &_EquipmentType__type_support;
}

#if defined(__cplusplus)
}
#endif
