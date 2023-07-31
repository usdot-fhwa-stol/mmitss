// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/route__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/route__struct.h"
#include "carma_planning_msgs/msg/detail/route__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // end_point
#include "rosidl_runtime_c/primitives_sequence.h"  // route_path_lanelet_ids, shortest_path_lanelet_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // route_path_lanelet_ids, shortest_path_lanelet_ids
#include "rosidl_runtime_c/string.h"  // route_id, route_name
#include "rosidl_runtime_c/string_functions.h"  // route_id, route_name
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();
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


using _Route__ros_msg_type = carma_planning_msgs__msg__Route;

static bool _Route__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Route__ros_msg_type * ros_message = static_cast<const _Route__ros_msg_type *>(untyped_ros_message);
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

  // Field name: route_version
  {
    cdr << ros_message->route_version;
  }

  // Field name: map_version
  {
    cdr << ros_message->map_version;
  }

  // Field name: route_name
  {
    const rosidl_runtime_c__String * str = &ros_message->route_name;
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

  // Field name: is_rerouted
  {
    cdr << (ros_message->is_rerouted ? true : false);
  }

  // Field name: shortest_path_lanelet_ids
  {
    size_t size = ros_message->shortest_path_lanelet_ids.size;
    auto array_ptr = ros_message->shortest_path_lanelet_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: route_path_lanelet_ids
  {
    size_t size = ros_message->route_path_lanelet_ids.size;
    auto array_ptr = ros_message->route_path_lanelet_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: end_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->end_point, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Route__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Route__ros_msg_type * ros_message = static_cast<_Route__ros_msg_type *>(untyped_ros_message);
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

  // Field name: route_version
  {
    cdr >> ros_message->route_version;
  }

  // Field name: map_version
  {
    cdr >> ros_message->map_version;
  }

  // Field name: route_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->route_name.data) {
      rosidl_runtime_c__String__init(&ros_message->route_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->route_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'route_name'\n");
      return false;
    }
  }

  // Field name: is_rerouted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_rerouted = tmp ? true : false;
  }

  // Field name: shortest_path_lanelet_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->shortest_path_lanelet_ids.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->shortest_path_lanelet_ids);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->shortest_path_lanelet_ids, size)) {
      return "failed to create array for field 'shortest_path_lanelet_ids'";
    }
    auto array_ptr = ros_message->shortest_path_lanelet_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: route_path_lanelet_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->route_path_lanelet_ids.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->route_path_lanelet_ids);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->route_path_lanelet_ids, size)) {
      return "failed to create array for field 'route_path_lanelet_ids'";
    }
    auto array_ptr = ros_message->route_path_lanelet_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: end_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->end_point))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__msg__Route(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Route__ros_msg_type * ros_message = static_cast<const _Route__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name route_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->route_id.size + 1);
  // field.name route_version
  {
    size_t item_size = sizeof(ros_message->route_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name map_version
  {
    size_t item_size = sizeof(ros_message->map_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name route_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->route_name.size + 1);
  // field.name is_rerouted
  {
    size_t item_size = sizeof(ros_message->is_rerouted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shortest_path_lanelet_ids
  {
    size_t array_size = ros_message->shortest_path_lanelet_ids.size;
    auto array_ptr = ros_message->shortest_path_lanelet_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name route_path_lanelet_ids
  {
    size_t array_size = ros_message->route_path_lanelet_ids.size;
    auto array_ptr = ros_message->route_path_lanelet_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_point

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->end_point), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Route__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__Route(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__Route(
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
  // member: route_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: map_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: route_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: is_rerouted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: shortest_path_lanelet_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: route_path_lanelet_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Route__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__Route(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Route = {
  "carma_planning_msgs::msg",
  "Route",
  _Route__cdr_serialize,
  _Route__cdr_deserialize,
  _Route__get_serialized_size,
  _Route__max_serialized_size
};

static rosidl_message_type_support_t _Route__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Route,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, Route)() {
  return &_Route__type_support;
}

#if defined(__cplusplus)
}
#endif
