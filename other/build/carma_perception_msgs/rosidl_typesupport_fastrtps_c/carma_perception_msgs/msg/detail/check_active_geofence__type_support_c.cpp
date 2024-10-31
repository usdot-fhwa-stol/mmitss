// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/check_active_geofence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_perception_msgs/msg/detail/check_active_geofence__struct.h"
#include "carma_perception_msgs/msg/detail/check_active_geofence__functions.h"
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

#include "rosidl_runtime_c/string.h"  // reason
#include "rosidl_runtime_c/string_functions.h"  // reason

// forward declare type support functions


using _CheckActiveGeofence__ros_msg_type = carma_perception_msgs__msg__CheckActiveGeofence;

static bool _CheckActiveGeofence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CheckActiveGeofence__ros_msg_type * ros_message = static_cast<const _CheckActiveGeofence__ros_msg_type *>(untyped_ros_message);
  // Field name: is_on_active_geofence
  {
    cdr << (ros_message->is_on_active_geofence ? true : false);
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: reason
  {
    const rosidl_runtime_c__String * str = &ros_message->reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: value
  {
    cdr << ros_message->value;
  }

  // Field name: distance_to_next_geofence
  {
    cdr << ros_message->distance_to_next_geofence;
  }

  // Field name: minimum_gap
  {
    cdr << ros_message->minimum_gap;
  }

  // Field name: advisory_speed
  {
    cdr << ros_message->advisory_speed;
  }

  return true;
}

static bool _CheckActiveGeofence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CheckActiveGeofence__ros_msg_type * ros_message = static_cast<_CheckActiveGeofence__ros_msg_type *>(untyped_ros_message);
  // Field name: is_on_active_geofence
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_on_active_geofence = tmp ? true : false;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reason.data) {
      rosidl_runtime_c__String__init(&ros_message->reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reason'\n");
      return false;
    }
  }

  // Field name: value
  {
    cdr >> ros_message->value;
  }

  // Field name: distance_to_next_geofence
  {
    cdr >> ros_message->distance_to_next_geofence;
  }

  // Field name: minimum_gap
  {
    cdr >> ros_message->minimum_gap;
  }

  // Field name: advisory_speed
  {
    cdr >> ros_message->advisory_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_perception_msgs
size_t get_serialized_size_carma_perception_msgs__msg__CheckActiveGeofence(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CheckActiveGeofence__ros_msg_type * ros_message = static_cast<const _CheckActiveGeofence__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_on_active_geofence
  {
    size_t item_size = sizeof(ros_message->is_on_active_geofence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reason.size + 1);
  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_to_next_geofence
  {
    size_t item_size = sizeof(ros_message->distance_to_next_geofence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name minimum_gap
  {
    size_t item_size = sizeof(ros_message->minimum_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name advisory_speed
  {
    size_t item_size = sizeof(ros_message->advisory_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CheckActiveGeofence__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_perception_msgs__msg__CheckActiveGeofence(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_perception_msgs
size_t max_serialized_size_carma_perception_msgs__msg__CheckActiveGeofence(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: is_on_active_geofence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reason
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distance_to_next_geofence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: minimum_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: advisory_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CheckActiveGeofence__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_perception_msgs__msg__CheckActiveGeofence(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CheckActiveGeofence = {
  "carma_perception_msgs::msg",
  "CheckActiveGeofence",
  _CheckActiveGeofence__cdr_serialize,
  _CheckActiveGeofence__cdr_deserialize,
  _CheckActiveGeofence__get_serialized_size,
  _CheckActiveGeofence__max_serialized_size
};

static rosidl_message_type_support_t _CheckActiveGeofence__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CheckActiveGeofence,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, CheckActiveGeofence)() {
  return &_CheckActiveGeofence__type_support;
}

#if defined(__cplusplus)
}
#endif
