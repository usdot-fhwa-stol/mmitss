// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/PlatooningInfo.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/platooning_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/platooning_info__struct.h"
#include "carma_planning_msgs/msg/detail/platooning_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // leader_id, platoon_id
#include "rosidl_runtime_c/string_functions.h"  // leader_id, platoon_id

// forward declare type support functions


using _PlatooningInfo__ros_msg_type = carma_planning_msgs__msg__PlatooningInfo;

static bool _PlatooningInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlatooningInfo__ros_msg_type * ros_message = static_cast<const _PlatooningInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: platoon_id
  {
    const rosidl_runtime_c__String * str = &ros_message->platoon_id;
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

  // Field name: size
  {
    cdr << ros_message->size;
  }

  // Field name: size_limit
  {
    cdr << ros_message->size_limit;
  }

  // Field name: leader_id
  {
    const rosidl_runtime_c__String * str = &ros_message->leader_id;
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

  // Field name: leader_downtrack_distance
  {
    cdr << ros_message->leader_downtrack_distance;
  }

  // Field name: leader_cmd_speed
  {
    cdr << ros_message->leader_cmd_speed;
  }

  // Field name: host_platoon_position
  {
    cdr << ros_message->host_platoon_position;
  }

  // Field name: host_cmd_speed
  {
    cdr << ros_message->host_cmd_speed;
  }

  // Field name: desired_gap
  {
    cdr << ros_message->desired_gap;
  }

  // Field name: actual_gap
  {
    cdr << ros_message->actual_gap;
  }

  // Field name: current_predecessor_time_headway_sum
  {
    cdr << ros_message->current_predecessor_time_headway_sum;
  }

  // Field name: predecessor_speed
  {
    cdr << ros_message->predecessor_speed;
  }

  // Field name: predecessor_position
  {
    cdr << ros_message->predecessor_position;
  }

  // Field name: is_create_gap
  {
    cdr << (ros_message->is_create_gap ? true : false);
  }

  // Field name: create_gap_adjuster
  {
    cdr << ros_message->create_gap_adjuster;
  }

  return true;
}

static bool _PlatooningInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlatooningInfo__ros_msg_type * ros_message = static_cast<_PlatooningInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: platoon_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->platoon_id.data) {
      rosidl_runtime_c__String__init(&ros_message->platoon_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->platoon_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'platoon_id'\n");
      return false;
    }
  }

  // Field name: size
  {
    cdr >> ros_message->size;
  }

  // Field name: size_limit
  {
    cdr >> ros_message->size_limit;
  }

  // Field name: leader_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->leader_id.data) {
      rosidl_runtime_c__String__init(&ros_message->leader_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->leader_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'leader_id'\n");
      return false;
    }
  }

  // Field name: leader_downtrack_distance
  {
    cdr >> ros_message->leader_downtrack_distance;
  }

  // Field name: leader_cmd_speed
  {
    cdr >> ros_message->leader_cmd_speed;
  }

  // Field name: host_platoon_position
  {
    cdr >> ros_message->host_platoon_position;
  }

  // Field name: host_cmd_speed
  {
    cdr >> ros_message->host_cmd_speed;
  }

  // Field name: desired_gap
  {
    cdr >> ros_message->desired_gap;
  }

  // Field name: actual_gap
  {
    cdr >> ros_message->actual_gap;
  }

  // Field name: current_predecessor_time_headway_sum
  {
    cdr >> ros_message->current_predecessor_time_headway_sum;
  }

  // Field name: predecessor_speed
  {
    cdr >> ros_message->predecessor_speed;
  }

  // Field name: predecessor_position
  {
    cdr >> ros_message->predecessor_position;
  }

  // Field name: is_create_gap
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_create_gap = tmp ? true : false;
  }

  // Field name: create_gap_adjuster
  {
    cdr >> ros_message->create_gap_adjuster;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__msg__PlatooningInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlatooningInfo__ros_msg_type * ros_message = static_cast<const _PlatooningInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name platoon_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->platoon_id.size + 1);
  // field.name size
  {
    size_t item_size = sizeof(ros_message->size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name size_limit
  {
    size_t item_size = sizeof(ros_message->size_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leader_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->leader_id.size + 1);
  // field.name leader_downtrack_distance
  {
    size_t item_size = sizeof(ros_message->leader_downtrack_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leader_cmd_speed
  {
    size_t item_size = sizeof(ros_message->leader_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name host_platoon_position
  {
    size_t item_size = sizeof(ros_message->host_platoon_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name host_cmd_speed
  {
    size_t item_size = sizeof(ros_message->host_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name desired_gap
  {
    size_t item_size = sizeof(ros_message->desired_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_gap
  {
    size_t item_size = sizeof(ros_message->actual_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_predecessor_time_headway_sum
  {
    size_t item_size = sizeof(ros_message->current_predecessor_time_headway_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predecessor_speed
  {
    size_t item_size = sizeof(ros_message->predecessor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predecessor_position
  {
    size_t item_size = sizeof(ros_message->predecessor_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_create_gap
  {
    size_t item_size = sizeof(ros_message->is_create_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name create_gap_adjuster
  {
    size_t item_size = sizeof(ros_message->create_gap_adjuster);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlatooningInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__PlatooningInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__PlatooningInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: platoon_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: size_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: leader_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: leader_downtrack_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leader_cmd_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: host_platoon_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: host_cmd_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: desired_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actual_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_predecessor_time_headway_sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: predecessor_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: predecessor_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_create_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: create_gap_adjuster
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PlatooningInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__PlatooningInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlatooningInfo = {
  "carma_planning_msgs::msg",
  "PlatooningInfo",
  _PlatooningInfo__cdr_serialize,
  _PlatooningInfo__cdr_deserialize,
  _PlatooningInfo__get_serialized_size,
  _PlatooningInfo__max_serialized_size
};

static rosidl_message_type_support_t _PlatooningInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlatooningInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, PlatooningInfo)() {
  return &_PlatooningInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
