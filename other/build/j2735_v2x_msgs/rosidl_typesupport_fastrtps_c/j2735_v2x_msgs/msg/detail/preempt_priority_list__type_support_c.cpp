// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/PreemptPriorityList.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__struct.h"
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/signal_control_zone__functions.h"  // preempt_priority_list

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__SignalControlZone(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__SignalControlZone(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SignalControlZone)();


using _PreemptPriorityList__ros_msg_type = j2735_v2x_msgs__msg__PreemptPriorityList;

static bool _PreemptPriorityList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PreemptPriorityList__ros_msg_type * ros_message = static_cast<const _PreemptPriorityList__ros_msg_type *>(untyped_ros_message);
  // Field name: preempt_priority_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SignalControlZone
      )()->data);
    size_t size = ros_message->preempt_priority_list.size;
    auto array_ptr = ros_message->preempt_priority_list.data;
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

static bool _PreemptPriorityList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PreemptPriorityList__ros_msg_type * ros_message = static_cast<_PreemptPriorityList__ros_msg_type *>(untyped_ros_message);
  // Field name: preempt_priority_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SignalControlZone
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->preempt_priority_list.data) {
      j2735_v2x_msgs__msg__SignalControlZone__Sequence__fini(&ros_message->preempt_priority_list);
    }
    if (!j2735_v2x_msgs__msg__SignalControlZone__Sequence__init(&ros_message->preempt_priority_list, size)) {
      return "failed to create array for field 'preempt_priority_list'";
    }
    auto array_ptr = ros_message->preempt_priority_list.data;
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
size_t get_serialized_size_j2735_v2x_msgs__msg__PreemptPriorityList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PreemptPriorityList__ros_msg_type * ros_message = static_cast<const _PreemptPriorityList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name preempt_priority_list
  {
    size_t array_size = ros_message->preempt_priority_list.size;
    auto array_ptr = ros_message->preempt_priority_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SignalControlZone(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PreemptPriorityList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__PreemptPriorityList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PreemptPriorityList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: preempt_priority_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SignalControlZone(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PreemptPriorityList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__PreemptPriorityList(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PreemptPriorityList = {
  "j2735_v2x_msgs::msg",
  "PreemptPriorityList",
  _PreemptPriorityList__cdr_serialize,
  _PreemptPriorityList__cdr_deserialize,
  _PreemptPriorityList__get_serialized_size,
  _PreemptPriorityList__max_serialized_size
};

static rosidl_message_type_support_t _PreemptPriorityList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PreemptPriorityList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PreemptPriorityList)() {
  return &_PreemptPriorityList__type_support;
}

#if defined(__cplusplus)
}
#endif
