// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:srv/ComputePlanCost.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/compute_plan_cost__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/detail/compute_plan_cost__struct.h"
#include "carma_planning_msgs/srv/detail/compute_plan_cost__functions.h"
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

// forward declare type support functions
size_t get_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverPlan)();


using _ComputePlanCost_Request__ros_msg_type = carma_planning_msgs__srv__ComputePlanCost_Request;

static bool _ComputePlanCost_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ComputePlanCost_Request__ros_msg_type * ros_message = static_cast<const _ComputePlanCost_Request__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

static bool _ComputePlanCost_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ComputePlanCost_Request__ros_msg_type * ros_message = static_cast<_ComputePlanCost_Request__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__ComputePlanCost_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ComputePlanCost_Request__ros_msg_type * ros_message = static_cast<const _ComputePlanCost_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name maneuver_plan

  current_alignment += get_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
    &(ros_message->maneuver_plan), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ComputePlanCost_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__ComputePlanCost_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__ComputePlanCost_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: maneuver_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ComputePlanCost_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__ComputePlanCost_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ComputePlanCost_Request = {
  "carma_planning_msgs::srv",
  "ComputePlanCost_Request",
  _ComputePlanCost_Request__cdr_serialize,
  _ComputePlanCost_Request__cdr_deserialize,
  _ComputePlanCost_Request__get_serialized_size,
  _ComputePlanCost_Request__max_serialized_size
};

static rosidl_message_type_support_t _ComputePlanCost_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ComputePlanCost_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, ComputePlanCost_Request)() {
  return &_ComputePlanCost_Request__type_support;
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
// #include "carma_planning_msgs/srv/detail/compute_plan_cost__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/compute_plan_cost__functions.h"
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


// forward declare type support functions


using _ComputePlanCost_Response__ros_msg_type = carma_planning_msgs__srv__ComputePlanCost_Response;

static bool _ComputePlanCost_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ComputePlanCost_Response__ros_msg_type * ros_message = static_cast<const _ComputePlanCost_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: plan_cost
  {
    cdr << ros_message->plan_cost;
  }

  return true;
}

static bool _ComputePlanCost_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ComputePlanCost_Response__ros_msg_type * ros_message = static_cast<_ComputePlanCost_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: plan_cost
  {
    cdr >> ros_message->plan_cost;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__ComputePlanCost_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ComputePlanCost_Response__ros_msg_type * ros_message = static_cast<const _ComputePlanCost_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name plan_cost
  {
    size_t item_size = sizeof(ros_message->plan_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ComputePlanCost_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__ComputePlanCost_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__ComputePlanCost_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: plan_cost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ComputePlanCost_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__ComputePlanCost_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ComputePlanCost_Response = {
  "carma_planning_msgs::srv",
  "ComputePlanCost_Response",
  _ComputePlanCost_Response__cdr_serialize,
  _ComputePlanCost_Response__cdr_deserialize,
  _ComputePlanCost_Response__get_serialized_size,
  _ComputePlanCost_Response__max_serialized_size
};

static rosidl_message_type_support_t _ComputePlanCost_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ComputePlanCost_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, ComputePlanCost_Response)() {
  return &_ComputePlanCost_Response__type_support;
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
#include "carma_planning_msgs/srv/compute_plan_cost.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ComputePlanCost__callbacks = {
  "carma_planning_msgs::srv",
  "ComputePlanCost",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, ComputePlanCost_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, ComputePlanCost_Response)(),
};

static rosidl_service_type_support_t ComputePlanCost__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ComputePlanCost__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, ComputePlanCost)() {
  return &ComputePlanCost__handle;
}

#if defined(__cplusplus)
}
#endif
