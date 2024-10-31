// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/BSMRegionalExtension.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__struct.h"
#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/position3_d__functions.h"  // route_destination_points

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__Position3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__Position3D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Position3D)();


using _BSMRegionalExtension__ros_msg_type = j2735_v2x_msgs__msg__BSMRegionalExtension;

static bool _BSMRegionalExtension__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BSMRegionalExtension__ros_msg_type * ros_message = static_cast<const _BSMRegionalExtension__ros_msg_type *>(untyped_ros_message);
  // Field name: regional_extension_id
  {
    cdr << ros_message->regional_extension_id;
  }

  // Field name: route_destination_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Position3D
      )()->data);
    size_t size = ros_message->route_destination_points.size;
    auto array_ptr = ros_message->route_destination_points.data;
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

static bool _BSMRegionalExtension__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BSMRegionalExtension__ros_msg_type * ros_message = static_cast<_BSMRegionalExtension__ros_msg_type *>(untyped_ros_message);
  // Field name: regional_extension_id
  {
    cdr >> ros_message->regional_extension_id;
  }

  // Field name: route_destination_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Position3D
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->route_destination_points.data) {
      j2735_v2x_msgs__msg__Position3D__Sequence__fini(&ros_message->route_destination_points);
    }
    if (!j2735_v2x_msgs__msg__Position3D__Sequence__init(&ros_message->route_destination_points, size)) {
      return "failed to create array for field 'route_destination_points'";
    }
    auto array_ptr = ros_message->route_destination_points.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__BSMRegionalExtension(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BSMRegionalExtension__ros_msg_type * ros_message = static_cast<const _BSMRegionalExtension__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name regional_extension_id
  {
    size_t item_size = sizeof(ros_message->regional_extension_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name route_destination_points
  {
    size_t array_size = ros_message->route_destination_points.size;
    auto array_ptr = ros_message->route_destination_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Position3D(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BSMRegionalExtension__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__BSMRegionalExtension(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__BSMRegionalExtension(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: regional_extension_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: route_destination_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Position3D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BSMRegionalExtension__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__BSMRegionalExtension(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BSMRegionalExtension = {
  "j2735_v2x_msgs::msg",
  "BSMRegionalExtension",
  _BSMRegionalExtension__cdr_serialize,
  _BSMRegionalExtension__cdr_deserialize,
  _BSMRegionalExtension__get_serialized_size,
  _BSMRegionalExtension__max_serialized_size
};

static rosidl_message_type_support_t _BSMRegionalExtension__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BSMRegionalExtension,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BSMRegionalExtension)() {
  return &_BSMRegionalExtension__type_support;
}

#if defined(__cplusplus)
}
#endif
