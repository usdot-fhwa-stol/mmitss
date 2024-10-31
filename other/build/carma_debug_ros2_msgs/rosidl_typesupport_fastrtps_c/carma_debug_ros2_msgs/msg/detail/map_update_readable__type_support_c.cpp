// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_debug_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__functions.h"
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

#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__functions.h"  // remove_list, update_list
#include "rosidl_runtime_c/string.h"  // format_version, map_version, route_id, traffic_control_id
#include "rosidl_runtime_c/string_functions.h"  // format_version, map_version, route_id, traffic_control_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_debug_ros2_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_debug_ros2_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MapUpdateReadable__ros_msg_type = carma_debug_ros2_msgs__msg__MapUpdateReadable;

static bool _MapUpdateReadable__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MapUpdateReadable__ros_msg_type * ros_message = static_cast<const _MapUpdateReadable__ros_msg_type *>(untyped_ros_message);
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

  // Field name: format_version
  {
    const rosidl_runtime_c__String * str = &ros_message->format_version;
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

  // Field name: map_version
  {
    const rosidl_runtime_c__String * str = &ros_message->map_version;
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

  // Field name: invalidates_route
  {
    cdr << (ros_message->invalidates_route ? true : false);
  }

  // Field name: traffic_control_id
  {
    const rosidl_runtime_c__String * str = &ros_message->traffic_control_id;
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

  // Field name: update_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair
      )()->data);
    size_t size = ros_message->update_list.size;
    auto array_ptr = ros_message->update_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: remove_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair
      )()->data);
    size_t size = ros_message->remove_list.size;
    auto array_ptr = ros_message->remove_list.data;
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

static bool _MapUpdateReadable__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MapUpdateReadable__ros_msg_type * ros_message = static_cast<_MapUpdateReadable__ros_msg_type *>(untyped_ros_message);
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

  // Field name: format_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->format_version.data) {
      rosidl_runtime_c__String__init(&ros_message->format_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->format_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'format_version'\n");
      return false;
    }
  }

  // Field name: map_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->map_version.data) {
      rosidl_runtime_c__String__init(&ros_message->map_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->map_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'map_version'\n");
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

  // Field name: invalidates_route
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->invalidates_route = tmp ? true : false;
  }

  // Field name: traffic_control_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->traffic_control_id.data) {
      rosidl_runtime_c__String__init(&ros_message->traffic_control_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->traffic_control_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'traffic_control_id'\n");
      return false;
    }
  }

  // Field name: update_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->update_list.data) {
      carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__fini(&ros_message->update_list);
    }
    if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init(&ros_message->update_list, size)) {
      return "failed to create array for field 'update_list'";
    }
    auto array_ptr = ros_message->update_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: remove_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->remove_list.data) {
      carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__fini(&ros_message->remove_list);
    }
    if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init(&ros_message->remove_list, size)) {
      return "failed to create array for field 'remove_list'";
    }
    auto array_ptr = ros_message->remove_list.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_debug_ros2_msgs
size_t get_serialized_size_carma_debug_ros2_msgs__msg__MapUpdateReadable(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapUpdateReadable__ros_msg_type * ros_message = static_cast<const _MapUpdateReadable__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name format_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->format_version.size + 1);
  // field.name map_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->map_version.size + 1);
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
  // field.name invalidates_route
  {
    size_t item_size = sizeof(ros_message->invalidates_route);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name traffic_control_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->traffic_control_id.size + 1);
  // field.name update_list
  {
    size_t array_size = ros_message->update_list.size;
    auto array_ptr = ros_message->update_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name remove_list
  {
    size_t array_size = ros_message->remove_list.size;
    auto array_ptr = ros_message->remove_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MapUpdateReadable__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_debug_ros2_msgs__msg__MapUpdateReadable(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_debug_ros2_msgs
size_t max_serialized_size_carma_debug_ros2_msgs__msg__MapUpdateReadable(
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
  // member: format_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: map_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
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
  // member: invalidates_route
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: traffic_control_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: update_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
        full_bounded, current_alignment);
    }
  }
  // member: remove_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MapUpdateReadable__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_debug_ros2_msgs__msg__MapUpdateReadable(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MapUpdateReadable = {
  "carma_debug_ros2_msgs::msg",
  "MapUpdateReadable",
  _MapUpdateReadable__cdr_serialize,
  _MapUpdateReadable__cdr_deserialize,
  _MapUpdateReadable__get_serialized_size,
  _MapUpdateReadable__max_serialized_size
};

static rosidl_message_type_support_t _MapUpdateReadable__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapUpdateReadable,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_debug_ros2_msgs, msg, MapUpdateReadable)() {
  return &_MapUpdateReadable__type_support;
}

#if defined(__cplusplus)
}
#endif
