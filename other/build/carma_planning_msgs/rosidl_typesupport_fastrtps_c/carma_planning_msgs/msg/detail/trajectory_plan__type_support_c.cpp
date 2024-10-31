// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/trajectory_plan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/trajectory_plan__struct.h"
#include "carma_planning_msgs/msg/detail/trajectory_plan__functions.h"
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

#include "carma_planning_msgs/msg/detail/trajectory_plan_point__functions.h"  // trajectory_points
#include "rosidl_runtime_c/string.h"  // trajectory_id
#include "rosidl_runtime_c/string_functions.h"  // trajectory_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_carma_planning_msgs__msg__TrajectoryPlanPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__TrajectoryPlanPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlanPoint)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _TrajectoryPlan__ros_msg_type = carma_planning_msgs__msg__TrajectoryPlan;

static bool _TrajectoryPlan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryPlan__ros_msg_type * ros_message = static_cast<const _TrajectoryPlan__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: trajectory_id
  {
    const rosidl_runtime_c__String * str = &ros_message->trajectory_id;
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

  // Field name: initial_longitudinal_velocity
  {
    cdr << ros_message->initial_longitudinal_velocity;
  }

  // Field name: trajectory_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlanPoint
      )()->data);
    size_t size = ros_message->trajectory_points.size;
    auto array_ptr = ros_message->trajectory_points.data;
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

static bool _TrajectoryPlan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryPlan__ros_msg_type * ros_message = static_cast<_TrajectoryPlan__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: trajectory_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->trajectory_id.data) {
      rosidl_runtime_c__String__init(&ros_message->trajectory_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->trajectory_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'trajectory_id'\n");
      return false;
    }
  }

  // Field name: initial_longitudinal_velocity
  {
    cdr >> ros_message->initial_longitudinal_velocity;
  }

  // Field name: trajectory_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlanPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->trajectory_points.data) {
      carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__fini(&ros_message->trajectory_points);
    }
    if (!carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__init(&ros_message->trajectory_points, size)) {
      return "failed to create array for field 'trajectory_points'";
    }
    auto array_ptr = ros_message->trajectory_points.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryPlan__ros_msg_type * ros_message = static_cast<const _TrajectoryPlan__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name trajectory_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->trajectory_id.size + 1);
  // field.name initial_longitudinal_velocity
  {
    size_t item_size = sizeof(ros_message->initial_longitudinal_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_points
  {
    size_t array_size = ros_message->trajectory_points.size;
    auto array_ptr = ros_message->trajectory_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_planning_msgs__msg__TrajectoryPlanPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryPlan__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: trajectory_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: initial_longitudinal_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: trajectory_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__TrajectoryPlanPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryPlan__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryPlan = {
  "carma_planning_msgs::msg",
  "TrajectoryPlan",
  _TrajectoryPlan__cdr_serialize,
  _TrajectoryPlan__cdr_deserialize,
  _TrajectoryPlan__get_serialized_size,
  _TrajectoryPlan__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryPlan__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryPlan,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlan)() {
  return &_TrajectoryPlan__type_support;
}

#if defined(__cplusplus)
}
#endif
