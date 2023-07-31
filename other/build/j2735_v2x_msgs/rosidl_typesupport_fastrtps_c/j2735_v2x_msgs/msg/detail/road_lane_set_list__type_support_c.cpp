// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/RoadLaneSetList.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__struct.h"
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/generic_lane__functions.h"  // road_lane_set_list

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__GenericLane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__GenericLane(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, GenericLane)();


using _RoadLaneSetList__ros_msg_type = j2735_v2x_msgs__msg__RoadLaneSetList;

static bool _RoadLaneSetList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoadLaneSetList__ros_msg_type * ros_message = static_cast<const _RoadLaneSetList__ros_msg_type *>(untyped_ros_message);
  // Field name: road_lane_set_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, GenericLane
      )()->data);
    size_t size = ros_message->road_lane_set_list.size;
    auto array_ptr = ros_message->road_lane_set_list.data;
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

static bool _RoadLaneSetList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoadLaneSetList__ros_msg_type * ros_message = static_cast<_RoadLaneSetList__ros_msg_type *>(untyped_ros_message);
  // Field name: road_lane_set_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, GenericLane
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->road_lane_set_list.data) {
      j2735_v2x_msgs__msg__GenericLane__Sequence__fini(&ros_message->road_lane_set_list);
    }
    if (!j2735_v2x_msgs__msg__GenericLane__Sequence__init(&ros_message->road_lane_set_list, size)) {
      return "failed to create array for field 'road_lane_set_list'";
    }
    auto array_ptr = ros_message->road_lane_set_list.data;
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
size_t get_serialized_size_j2735_v2x_msgs__msg__RoadLaneSetList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoadLaneSetList__ros_msg_type * ros_message = static_cast<const _RoadLaneSetList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name road_lane_set_list
  {
    size_t array_size = ros_message->road_lane_set_list.size;
    auto array_ptr = ros_message->road_lane_set_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__GenericLane(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RoadLaneSetList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__RoadLaneSetList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__RoadLaneSetList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: road_lane_set_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__GenericLane(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RoadLaneSetList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__RoadLaneSetList(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RoadLaneSetList = {
  "j2735_v2x_msgs::msg",
  "RoadLaneSetList",
  _RoadLaneSetList__cdr_serialize,
  _RoadLaneSetList__cdr_deserialize,
  _RoadLaneSetList__get_serialized_size,
  _RoadLaneSetList__max_serialized_size
};

static rosidl_message_type_support_t _RoadLaneSetList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoadLaneSetList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, RoadLaneSetList)() {
  return &_RoadLaneSetList__type_support;
}

#if defined(__cplusplus)
}
#endif
