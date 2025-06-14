// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_perception_msgs:msg/RoadwayObstacleList.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__struct.h"
#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__functions.h"
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

#include "carma_perception_msgs/msg/detail/roadway_obstacle__functions.h"  // roadway_obstacles

// forward declare type support functions
size_t get_serialized_size_carma_perception_msgs__msg__RoadwayObstacle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_perception_msgs__msg__RoadwayObstacle(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, RoadwayObstacle)();


using _RoadwayObstacleList__ros_msg_type = carma_perception_msgs__msg__RoadwayObstacleList;

static bool _RoadwayObstacleList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoadwayObstacleList__ros_msg_type * ros_message = static_cast<const _RoadwayObstacleList__ros_msg_type *>(untyped_ros_message);
  // Field name: roadway_obstacles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, RoadwayObstacle
      )()->data);
    size_t size = ros_message->roadway_obstacles.size;
    auto array_ptr = ros_message->roadway_obstacles.data;
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

static bool _RoadwayObstacleList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoadwayObstacleList__ros_msg_type * ros_message = static_cast<_RoadwayObstacleList__ros_msg_type *>(untyped_ros_message);
  // Field name: roadway_obstacles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, RoadwayObstacle
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->roadway_obstacles.data) {
      carma_perception_msgs__msg__RoadwayObstacle__Sequence__fini(&ros_message->roadway_obstacles);
    }
    if (!carma_perception_msgs__msg__RoadwayObstacle__Sequence__init(&ros_message->roadway_obstacles, size)) {
      return "failed to create array for field 'roadway_obstacles'";
    }
    auto array_ptr = ros_message->roadway_obstacles.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_perception_msgs
size_t get_serialized_size_carma_perception_msgs__msg__RoadwayObstacleList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoadwayObstacleList__ros_msg_type * ros_message = static_cast<const _RoadwayObstacleList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name roadway_obstacles
  {
    size_t array_size = ros_message->roadway_obstacles.size;
    auto array_ptr = ros_message->roadway_obstacles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_perception_msgs__msg__RoadwayObstacle(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RoadwayObstacleList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_perception_msgs__msg__RoadwayObstacleList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_perception_msgs
size_t max_serialized_size_carma_perception_msgs__msg__RoadwayObstacleList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: roadway_obstacles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_perception_msgs__msg__RoadwayObstacle(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RoadwayObstacleList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_perception_msgs__msg__RoadwayObstacleList(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RoadwayObstacleList = {
  "carma_perception_msgs::msg",
  "RoadwayObstacleList",
  _RoadwayObstacleList__cdr_serialize,
  _RoadwayObstacleList__cdr_deserialize,
  _RoadwayObstacleList__get_serialized_size,
  _RoadwayObstacleList__max_serialized_size
};

static rosidl_message_type_support_t _RoadwayObstacleList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoadwayObstacleList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_perception_msgs, msg, RoadwayObstacleList)() {
  return &_RoadwayObstacleList__type_support;
}

#if defined(__cplusplus)
}
#endif
