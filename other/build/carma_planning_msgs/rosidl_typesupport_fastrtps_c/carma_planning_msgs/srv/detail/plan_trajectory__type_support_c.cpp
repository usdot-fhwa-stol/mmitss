// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:srv/PlanTrajectory.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/plan_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/detail/plan_trajectory__struct.h"
#include "carma_planning_msgs/srv/detail/plan_trajectory__functions.h"
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

#include "carma_planning_msgs/msg/detail/maneuver_plan__functions.h"  // maneuver_plan
#include "carma_planning_msgs/msg/detail/trajectory_plan__functions.h"  // initial_trajectory_plan
#include "carma_planning_msgs/msg/detail/vehicle_state__functions.h"  // vehicle_state
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverPlan)();
size_t get_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlan)();
size_t get_serialized_size_carma_planning_msgs__msg__VehicleState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__VehicleState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, VehicleState)();
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


using _PlanTrajectory_Request__ros_msg_type = carma_planning_msgs__srv__PlanTrajectory_Request;

static bool _PlanTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanTrajectory_Request__ros_msg_type * ros_message = static_cast<const _PlanTrajectory_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: vehicle_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, VehicleState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_state, cdr))
    {
      return false;
    }
  }

  // Field name: maneuver_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverPlan
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->maneuver_plan, cdr))
    {
      return false;
    }
  }

  // Field name: initial_trajectory_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlan
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initial_trajectory_plan, cdr))
    {
      return false;
    }
  }

  // Field name: maneuver_index_to_plan
  {
    cdr << ros_message->maneuver_index_to_plan;
  }

  return true;
}

static bool _PlanTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanTrajectory_Request__ros_msg_type * ros_message = static_cast<_PlanTrajectory_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: vehicle_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, VehicleState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_state))
    {
      return false;
    }
  }

  // Field name: maneuver_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverPlan
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->maneuver_plan))
    {
      return false;
    }
  }

  // Field name: initial_trajectory_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlan
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initial_trajectory_plan))
    {
      return false;
    }
  }

  // Field name: maneuver_index_to_plan
  {
    cdr >> ros_message->maneuver_index_to_plan;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__PlanTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanTrajectory_Request__ros_msg_type * ros_message = static_cast<const _PlanTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name vehicle_state

  current_alignment += get_serialized_size_carma_planning_msgs__msg__VehicleState(
    &(ros_message->vehicle_state), current_alignment);
  // field.name maneuver_plan

  current_alignment += get_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
    &(ros_message->maneuver_plan), current_alignment);
  // field.name initial_trajectory_plan

  current_alignment += get_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
    &(ros_message->initial_trajectory_plan), current_alignment);
  // field.name maneuver_index_to_plan
  {
    size_t item_size = sizeof(ros_message->maneuver_index_to_plan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanTrajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__PlanTrajectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__PlanTrajectory_Request(
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
  // member: vehicle_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__VehicleState(
        full_bounded, current_alignment);
    }
  }
  // member: maneuver_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
        full_bounded, current_alignment);
    }
  }
  // member: initial_trajectory_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
        full_bounded, current_alignment);
    }
  }
  // member: maneuver_index_to_plan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PlanTrajectory_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__PlanTrajectory_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlanTrajectory_Request = {
  "carma_planning_msgs::srv",
  "PlanTrajectory_Request",
  _PlanTrajectory_Request__cdr_serialize,
  _PlanTrajectory_Request__cdr_deserialize,
  _PlanTrajectory_Request__get_serialized_size,
  _PlanTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _PlanTrajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanTrajectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanTrajectory_Request)() {
  return &_PlanTrajectory_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plan_trajectory__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plan_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "carma_planning_msgs/msg/detail/trajectory_plan__functions.h"  // trajectory_plan
#include "rosidl_runtime_c/primitives_sequence.h"  // maneuver_status, related_maneuvers
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // maneuver_status, related_maneuvers

// forward declare type support functions
size_t get_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, TrajectoryPlan)();


using _PlanTrajectory_Response__ros_msg_type = carma_planning_msgs__srv__PlanTrajectory_Response;

static bool _PlanTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanTrajectory_Response__ros_msg_type * ros_message = static_cast<const _PlanTrajectory_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: related_maneuvers
  {
    size_t size = ros_message->related_maneuvers.size;
    auto array_ptr = ros_message->related_maneuvers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: maneuver_status
  {
    size_t size = ros_message->maneuver_status.size;
    auto array_ptr = ros_message->maneuver_status.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PlanTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanTrajectory_Response__ros_msg_type * ros_message = static_cast<_PlanTrajectory_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: related_maneuvers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->related_maneuvers.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->related_maneuvers);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->related_maneuvers, size)) {
      return "failed to create array for field 'related_maneuvers'";
    }
    auto array_ptr = ros_message->related_maneuvers.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: maneuver_status
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->maneuver_status.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->maneuver_status);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->maneuver_status, size)) {
      return "failed to create array for field 'maneuver_status'";
    }
    auto array_ptr = ros_message->maneuver_status.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__PlanTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanTrajectory_Response__ros_msg_type * ros_message = static_cast<const _PlanTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory_plan

  current_alignment += get_serialized_size_carma_planning_msgs__msg__TrajectoryPlan(
    &(ros_message->trajectory_plan), current_alignment);
  // field.name related_maneuvers
  {
    size_t array_size = ros_message->related_maneuvers.size;
    auto array_ptr = ros_message->related_maneuvers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuver_status
  {
    size_t array_size = ros_message->maneuver_status.size;
    auto array_ptr = ros_message->maneuver_status.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanTrajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__PlanTrajectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__PlanTrajectory_Response(
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
  // member: related_maneuvers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: maneuver_status
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PlanTrajectory_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__PlanTrajectory_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlanTrajectory_Response = {
  "carma_planning_msgs::srv",
  "PlanTrajectory_Response",
  _PlanTrajectory_Response__cdr_serialize,
  _PlanTrajectory_Response__cdr_deserialize,
  _PlanTrajectory_Response__get_serialized_size,
  _PlanTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _PlanTrajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanTrajectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanTrajectory_Response)() {
  return &_PlanTrajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/plan_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PlanTrajectory__callbacks = {
  "carma_planning_msgs::srv",
  "PlanTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanTrajectory_Response)(),
};

static rosidl_service_type_support_t PlanTrajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PlanTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanTrajectory)() {
  return &PlanTrajectory__handle;
}

#if defined(__cplusplus)
}
#endif
