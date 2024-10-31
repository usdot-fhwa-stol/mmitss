// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_debug_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__functions.h"
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

#include "carma_planning_msgs/msg/detail/trajectory_plan__functions.h"  // trajectory_plan
#include "carma_planning_msgs/msg/detail/vehicle_state__functions.h"  // starting_state
#include "rosidl_runtime_c/primitives_sequence.h"  // curvatures, relative_downtrack, speed_limits, tangent_headings, velocity_profile
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // curvatures, relative_downtrack, speed_limits, tangent_headings, velocity_profile

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_debug_ros2_msgs
size_t get_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_debug_ros2_msgs
size_t max_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlan)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_debug_ros2_msgs
size_t get_serialized_size_carma_planning_msgs__msg__VehicleState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_debug_ros2_msgs
size_t max_serialized_size_carma_planning_msgs__msg__VehicleState(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, VehicleState)();


using _TrajectoryCurvatureSpeeds__ros_msg_type = carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds;

static bool _TrajectoryCurvatureSpeeds__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryCurvatureSpeeds__ros_msg_type * ros_message = static_cast<const _TrajectoryCurvatureSpeeds__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlan
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory_plan, cdr))
    {
      return false;
    }
  }

  // Field name: curvatures
  {
    size_t size = ros_message->curvatures.size;
    auto array_ptr = ros_message->curvatures.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: speed_limits
  {
    size_t size = ros_message->speed_limits.size;
    auto array_ptr = ros_message->speed_limits.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocity_profile
  {
    size_t size = ros_message->velocity_profile.size;
    auto array_ptr = ros_message->velocity_profile.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tangent_headings
  {
    size_t size = ros_message->tangent_headings.size;
    auto array_ptr = ros_message->tangent_headings.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: relative_downtrack
  {
    size_t size = ros_message->relative_downtrack.size;
    auto array_ptr = ros_message->relative_downtrack.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lat_accel_limit
  {
    cdr << ros_message->lat_accel_limit;
  }

  // Field name: lon_accel_limit
  {
    cdr << ros_message->lon_accel_limit;
  }

  // Field name: starting_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, VehicleState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->starting_state, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryCurvatureSpeeds__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryCurvatureSpeeds__ros_msg_type * ros_message = static_cast<_TrajectoryCurvatureSpeeds__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlan
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory_plan))
    {
      return false;
    }
  }

  // Field name: curvatures
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->curvatures.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->curvatures);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->curvatures, size)) {
      return "failed to create array for field 'curvatures'";
    }
    auto array_ptr = ros_message->curvatures.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: speed_limits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->speed_limits.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->speed_limits);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->speed_limits, size)) {
      return "failed to create array for field 'speed_limits'";
    }
    auto array_ptr = ros_message->speed_limits.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocity_profile
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->velocity_profile.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->velocity_profile);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->velocity_profile, size)) {
      return "failed to create array for field 'velocity_profile'";
    }
    auto array_ptr = ros_message->velocity_profile.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tangent_headings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tangent_headings.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->tangent_headings);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->tangent_headings, size)) {
      return "failed to create array for field 'tangent_headings'";
    }
    auto array_ptr = ros_message->tangent_headings.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: relative_downtrack
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->relative_downtrack.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->relative_downtrack);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->relative_downtrack, size)) {
      return "failed to create array for field 'relative_downtrack'";
    }
    auto array_ptr = ros_message->relative_downtrack.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lat_accel_limit
  {
    cdr >> ros_message->lat_accel_limit;
  }

  // Field name: lon_accel_limit
  {
    cdr >> ros_message->lon_accel_limit;
  }

  // Field name: starting_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, VehicleState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->starting_state))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_debug_ros2_msgs
size_t get_serialized_size_carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryCurvatureSpeeds__ros_msg_type * ros_message = static_cast<const _TrajectoryCurvatureSpeeds__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory_plan

  current_alignment += get_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
    &(ros_message->trajectory_plan), current_alignment);
  // field.name curvatures
  {
    size_t array_size = ros_message->curvatures.size;
    auto array_ptr = ros_message->curvatures.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limits
  {
    size_t array_size = ros_message->speed_limits.size;
    auto array_ptr = ros_message->speed_limits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_profile
  {
    size_t array_size = ros_message->velocity_profile.size;
    auto array_ptr = ros_message->velocity_profile.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tangent_headings
  {
    size_t array_size = ros_message->tangent_headings.size;
    auto array_ptr = ros_message->tangent_headings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_downtrack
  {
    size_t array_size = ros_message->relative_downtrack.size;
    auto array_ptr = ros_message->relative_downtrack.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_accel_limit
  {
    size_t item_size = sizeof(ros_message->lat_accel_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon_accel_limit
  {
    size_t item_size = sizeof(ros_message->lon_accel_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name starting_state

  current_alignment += get_serialized_size_carma_planning_msgs__msg__VehicleState(
    &(ros_message->starting_state), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryCurvatureSpeeds__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_debug_ros2_msgs
size_t max_serialized_size_carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: trajectory_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
        full_bounded, current_alignment);
    }
  }
  // member: curvatures
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_limits
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velocity_profile
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tangent_headings
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: relative_downtrack
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat_accel_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon_accel_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: starting_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__VehicleState(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryCurvatureSpeeds__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryCurvatureSpeeds = {
  "carma_debug_ros2_msgs::msg",
  "TrajectoryCurvatureSpeeds",
  _TrajectoryCurvatureSpeeds__cdr_serialize,
  _TrajectoryCurvatureSpeeds__cdr_deserialize,
  _TrajectoryCurvatureSpeeds__get_serialized_size,
  _TrajectoryCurvatureSpeeds__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryCurvatureSpeeds__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryCurvatureSpeeds,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, TrajectoryCurvatureSpeeds)() {
  return &_TrajectoryCurvatureSpeeds__type_support;
}

#if defined(__cplusplus)
}
#endif
