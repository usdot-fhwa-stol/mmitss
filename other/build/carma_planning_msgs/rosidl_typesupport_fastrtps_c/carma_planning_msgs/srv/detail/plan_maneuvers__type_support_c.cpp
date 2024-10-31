// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:srv/PlanManeuvers.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/plan_maneuvers__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/detail/plan_maneuvers__struct.h"
#include "carma_planning_msgs/srv/detail/plan_maneuvers__functions.h"
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

#include "carma_planning_msgs/msg/detail/maneuver_plan__functions.h"  // prior_plan
#include "rosidl_runtime_c/string.h"  // veh_lane_id
#include "rosidl_runtime_c/string_functions.h"  // veh_lane_id
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


using _PlanManeuvers_Request__ros_msg_type = carma_planning_msgs__srv__PlanManeuvers_Request;

static bool _PlanManeuvers_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanManeuvers_Request__ros_msg_type * ros_message = static_cast<const _PlanManeuvers_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: prior_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverPlan
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->prior_plan, cdr))
    {
      return false;
    }
  }

  // Field name: veh_x
  {
    cdr << ros_message->veh_x;
  }

  // Field name: veh_y
  {
    cdr << ros_message->veh_y;
  }

  // Field name: veh_downtrack
  {
    cdr << ros_message->veh_downtrack;
  }

  // Field name: veh_logitudinal_velocity
  {
    cdr << ros_message->veh_logitudinal_velocity;
  }

  // Field name: veh_lane_id
  {
    const rosidl_runtime_c__String * str = &ros_message->veh_lane_id;
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

static bool _PlanManeuvers_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanManeuvers_Request__ros_msg_type * ros_message = static_cast<_PlanManeuvers_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: prior_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverPlan
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->prior_plan))
    {
      return false;
    }
  }

  // Field name: veh_x
  {
    cdr >> ros_message->veh_x;
  }

  // Field name: veh_y
  {
    cdr >> ros_message->veh_y;
  }

  // Field name: veh_downtrack
  {
    cdr >> ros_message->veh_downtrack;
  }

  // Field name: veh_logitudinal_velocity
  {
    cdr >> ros_message->veh_logitudinal_velocity;
  }

  // Field name: veh_lane_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->veh_lane_id.data) {
      rosidl_runtime_c__String__init(&ros_message->veh_lane_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->veh_lane_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'veh_lane_id'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__PlanManeuvers_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanManeuvers_Request__ros_msg_type * ros_message = static_cast<const _PlanManeuvers_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name prior_plan

  current_alignment += get_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
    &(ros_message->prior_plan), current_alignment);
  // field.name veh_x
  {
    size_t item_size = sizeof(ros_message->veh_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_y
  {
    size_t item_size = sizeof(ros_message->veh_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_downtrack
  {
    size_t item_size = sizeof(ros_message->veh_downtrack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_logitudinal_velocity
  {
    size_t item_size = sizeof(ros_message->veh_logitudinal_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_lane_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->veh_lane_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _PlanManeuvers_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__PlanManeuvers_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__PlanManeuvers_Request(
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
  // member: prior_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
        full_bounded, current_alignment);
    }
  }
  // member: veh_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: veh_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: veh_downtrack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: veh_logitudinal_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: veh_lane_id
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

static size_t _PlanManeuvers_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__PlanManeuvers_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlanManeuvers_Request = {
  "carma_planning_msgs::srv",
  "PlanManeuvers_Request",
  _PlanManeuvers_Request__cdr_serialize,
  _PlanManeuvers_Request__cdr_deserialize,
  _PlanManeuvers_Request__get_serialized_size,
  _PlanManeuvers_Request__max_serialized_size
};

static rosidl_message_type_support_t _PlanManeuvers_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanManeuvers_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanManeuvers_Request)() {
  return &_PlanManeuvers_Request__type_support;
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
// #include "carma_planning_msgs/srv/detail/plan_maneuvers__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plan_maneuvers__functions.h"
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
// #include "carma_planning_msgs/msg/detail/maneuver_plan__functions.h"  // new_plan

// forward declare type support functions
size_t get_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverPlan)();


using _PlanManeuvers_Response__ros_msg_type = carma_planning_msgs__srv__PlanManeuvers_Response;

static bool _PlanManeuvers_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanManeuvers_Response__ros_msg_type * ros_message = static_cast<const _PlanManeuvers_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: new_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverPlan
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->new_plan, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PlanManeuvers_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanManeuvers_Response__ros_msg_type * ros_message = static_cast<_PlanManeuvers_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: new_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverPlan
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->new_plan))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__PlanManeuvers_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanManeuvers_Response__ros_msg_type * ros_message = static_cast<const _PlanManeuvers_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name new_plan

  current_alignment += get_serialized_size_carma_planning_msgs__msg__ManeuverPlan(
    &(ros_message->new_plan), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PlanManeuvers_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__PlanManeuvers_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__PlanManeuvers_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: new_plan
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

static size_t _PlanManeuvers_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__PlanManeuvers_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlanManeuvers_Response = {
  "carma_planning_msgs::srv",
  "PlanManeuvers_Response",
  _PlanManeuvers_Response__cdr_serialize,
  _PlanManeuvers_Response__cdr_deserialize,
  _PlanManeuvers_Response__get_serialized_size,
  _PlanManeuvers_Response__max_serialized_size
};

static rosidl_message_type_support_t _PlanManeuvers_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanManeuvers_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanManeuvers_Response)() {
  return &_PlanManeuvers_Response__type_support;
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
#include "carma_planning_msgs/srv/plan_maneuvers.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PlanManeuvers__callbacks = {
  "carma_planning_msgs::srv",
  "PlanManeuvers",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanManeuvers_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanManeuvers_Response)(),
};

static rosidl_service_type_support_t PlanManeuvers__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PlanManeuvers__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PlanManeuvers)() {
  return &PlanManeuvers__handle;
}

#if defined(__cplusplus)
}
#endif
