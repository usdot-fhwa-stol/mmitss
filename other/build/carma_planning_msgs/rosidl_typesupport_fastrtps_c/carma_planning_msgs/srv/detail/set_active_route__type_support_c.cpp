// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:srv/SetActiveRoute.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/set_active_route__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/detail/set_active_route__struct.h"
#include "carma_planning_msgs/srv/detail/set_active_route__functions.h"
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

#include "carma_v2x_msgs/msg/detail/position3_d__functions.h"  // destination_points
#include "rosidl_runtime_c/string.h"  // route_id
#include "rosidl_runtime_c/string_functions.h"  // route_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__Position3D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__Position3D(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Position3D)();


using _SetActiveRoute_Request__ros_msg_type = carma_planning_msgs__srv__SetActiveRoute_Request;

static bool _SetActiveRoute_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetActiveRoute_Request__ros_msg_type * ros_message = static_cast<const _SetActiveRoute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr << ros_message->choice;
  }

  // Field name: route_id
  {
    const rosidl_runtime_c__String * str = &ros_message->route_id;
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

  // Field name: destination_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Position3D
      )()->data);
    size_t size = ros_message->destination_points.size;
    auto array_ptr = ros_message->destination_points.data;
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

static bool _SetActiveRoute_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetActiveRoute_Request__ros_msg_type * ros_message = static_cast<_SetActiveRoute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr >> ros_message->choice;
  }

  // Field name: route_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->route_id.data) {
      rosidl_runtime_c__String__init(&ros_message->route_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->route_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'route_id'\n");
      return false;
    }
  }

  // Field name: destination_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Position3D
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->destination_points.data) {
      carma_v2x_msgs__msg__Position3D__Sequence__fini(&ros_message->destination_points);
    }
    if (!carma_v2x_msgs__msg__Position3D__Sequence__init(&ros_message->destination_points, size)) {
      return "failed to create array for field 'destination_points'";
    }
    auto array_ptr = ros_message->destination_points.data;
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
size_t get_serialized_size_carma_planning_msgs__srv__SetActiveRoute_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetActiveRoute_Request__ros_msg_type * ros_message = static_cast<const _SetActiveRoute_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name choice
  {
    size_t item_size = sizeof(ros_message->choice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name route_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->route_id.size + 1);
  // field.name destination_points
  {
    size_t array_size = ros_message->destination_points.size;
    auto array_ptr = ros_message->destination_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_v2x_msgs__msg__Position3D(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetActiveRoute_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__SetActiveRoute_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__SetActiveRoute_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: choice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: route_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: destination_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Position3D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetActiveRoute_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__SetActiveRoute_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetActiveRoute_Request = {
  "carma_planning_msgs::srv",
  "SetActiveRoute_Request",
  _SetActiveRoute_Request__cdr_serialize,
  _SetActiveRoute_Request__cdr_deserialize,
  _SetActiveRoute_Request__get_serialized_size,
  _SetActiveRoute_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetActiveRoute_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetActiveRoute_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetActiveRoute_Request)() {
  return &_SetActiveRoute_Request__type_support;
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
// #include "carma_planning_msgs/srv/detail/set_active_route__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/set_active_route__functions.h"
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


using _SetActiveRoute_Response__ros_msg_type = carma_planning_msgs__srv__SetActiveRoute_Response;

static bool _SetActiveRoute_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetActiveRoute_Response__ros_msg_type * ros_message = static_cast<const _SetActiveRoute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error_status
  {
    cdr << ros_message->error_status;
  }

  return true;
}

static bool _SetActiveRoute_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetActiveRoute_Response__ros_msg_type * ros_message = static_cast<_SetActiveRoute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error_status
  {
    cdr >> ros_message->error_status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__SetActiveRoute_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetActiveRoute_Response__ros_msg_type * ros_message = static_cast<const _SetActiveRoute_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error_status
  {
    size_t item_size = sizeof(ros_message->error_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetActiveRoute_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__SetActiveRoute_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__SetActiveRoute_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: error_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetActiveRoute_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__SetActiveRoute_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetActiveRoute_Response = {
  "carma_planning_msgs::srv",
  "SetActiveRoute_Response",
  _SetActiveRoute_Response__cdr_serialize,
  _SetActiveRoute_Response__cdr_deserialize,
  _SetActiveRoute_Response__get_serialized_size,
  _SetActiveRoute_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetActiveRoute_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetActiveRoute_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetActiveRoute_Response)() {
  return &_SetActiveRoute_Response__type_support;
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
#include "carma_planning_msgs/srv/set_active_route.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetActiveRoute__callbacks = {
  "carma_planning_msgs::srv",
  "SetActiveRoute",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetActiveRoute_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetActiveRoute_Response)(),
};

static rosidl_service_type_support_t SetActiveRoute__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetActiveRoute__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, SetActiveRoute)() {
  return &SetActiveRoute__handle;
}

#if defined(__cplusplus)
}
#endif
