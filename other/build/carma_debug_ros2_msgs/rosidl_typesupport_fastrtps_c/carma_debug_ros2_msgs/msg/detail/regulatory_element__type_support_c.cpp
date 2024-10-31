// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_debug_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__functions.h"
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

#include "rosidl_runtime_c/string.h"  // direction, left_participants, participants, reason, right_participants, rule_name
#include "rosidl_runtime_c/string_functions.h"  // direction, left_participants, participants, reason, right_participants, rule_name

// forward declare type support functions


using _RegulatoryElement__ros_msg_type = carma_debug_ros2_msgs__msg__RegulatoryElement;

static bool _RegulatoryElement__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RegulatoryElement__ros_msg_type * ros_message = static_cast<const _RegulatoryElement__ros_msg_type *>(untyped_ros_message);
  // Field name: rule_name
  {
    const rosidl_runtime_c__String * str = &ros_message->rule_name;
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

  // Field name: participants
  {
    size_t size = ros_message->participants.size;
    auto array_ptr = ros_message->participants.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: unsupported_type
  {
    cdr << (ros_message->unsupported_type ? true : false);
  }

  // Field name: min_gap
  {
    cdr << ros_message->min_gap;
  }

  // Field name: speed_limit
  {
    cdr << ros_message->speed_limit;
  }

  // Field name: direction
  {
    const rosidl_runtime_c__String * str = &ros_message->direction;
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

  // Field name: left_participants
  {
    size_t size = ros_message->left_participants.size;
    auto array_ptr = ros_message->left_participants.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: right_participants
  {
    size_t size = ros_message->right_participants.size;
    auto array_ptr = ros_message->right_participants.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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

  return true;
}

static bool _RegulatoryElement__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RegulatoryElement__ros_msg_type * ros_message = static_cast<_RegulatoryElement__ros_msg_type *>(untyped_ros_message);
  // Field name: rule_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rule_name.data) {
      rosidl_runtime_c__String__init(&ros_message->rule_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rule_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rule_name'\n");
      return false;
    }
  }

  // Field name: participants
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->participants.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->participants);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->participants, size)) {
      return "failed to create array for field 'participants'";
    }
    auto array_ptr = ros_message->participants.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'participants'\n");
        return false;
      }
    }
  }

  // Field name: unsupported_type
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->unsupported_type = tmp ? true : false;
  }

  // Field name: min_gap
  {
    cdr >> ros_message->min_gap;
  }

  // Field name: speed_limit
  {
    cdr >> ros_message->speed_limit;
  }

  // Field name: direction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->direction.data) {
      rosidl_runtime_c__String__init(&ros_message->direction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->direction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'direction'\n");
      return false;
    }
  }

  // Field name: left_participants
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left_participants.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->left_participants);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->left_participants, size)) {
      return "failed to create array for field 'left_participants'";
    }
    auto array_ptr = ros_message->left_participants.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'left_participants'\n");
        return false;
      }
    }
  }

  // Field name: right_participants
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right_participants.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->right_participants);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->right_participants, size)) {
      return "failed to create array for field 'right_participants'";
    }
    auto array_ptr = ros_message->right_participants.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'right_participants'\n");
        return false;
      }
    }
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_debug_ros2_msgs
size_t get_serialized_size_carma_debug_ros2_msgs__msg__RegulatoryElement(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RegulatoryElement__ros_msg_type * ros_message = static_cast<const _RegulatoryElement__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rule_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rule_name.size + 1);
  // field.name participants
  {
    size_t array_size = ros_message->participants.size;
    auto array_ptr = ros_message->participants.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name unsupported_type
  {
    size_t item_size = sizeof(ros_message->unsupported_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_gap
  {
    size_t item_size = sizeof(ros_message->min_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limit
  {
    size_t item_size = sizeof(ros_message->speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->direction.size + 1);
  // field.name left_participants
  {
    size_t array_size = ros_message->left_participants.size;
    auto array_ptr = ros_message->left_participants.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name right_participants
  {
    size_t array_size = ros_message->right_participants.size;
    auto array_ptr = ros_message->right_participants.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reason.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RegulatoryElement__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_debug_ros2_msgs__msg__RegulatoryElement(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_debug_ros2_msgs
size_t max_serialized_size_carma_debug_ros2_msgs__msg__RegulatoryElement(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rule_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: participants
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: unsupported_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: min_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: direction
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: left_participants
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: right_participants
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
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

  return current_alignment - initial_alignment;
}

static size_t _RegulatoryElement__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_debug_ros2_msgs__msg__RegulatoryElement(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RegulatoryElement = {
  "carma_debug_ros2_msgs::msg",
  "RegulatoryElement",
  _RegulatoryElement__cdr_serialize,
  _RegulatoryElement__cdr_deserialize,
  _RegulatoryElement__get_serialized_size,
  _RegulatoryElement__max_serialized_size
};

static rosidl_message_type_support_t _RegulatoryElement__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RegulatoryElement,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, RegulatoryElement)() {
  return &_RegulatoryElement__type_support;
}

#if defined(__cplusplus)
}
#endif
