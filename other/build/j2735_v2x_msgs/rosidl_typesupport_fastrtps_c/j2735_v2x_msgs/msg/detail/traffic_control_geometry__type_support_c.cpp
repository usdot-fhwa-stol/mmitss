// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__struct.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/path_node__functions.h"  // nodes
#include "rosidl_runtime_c/string.h"  // datum, proj
#include "rosidl_runtime_c/string_functions.h"  // datum, proj

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__PathNode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__PathNode(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PathNode)();


using _TrafficControlGeometry__ros_msg_type = j2735_v2x_msgs__msg__TrafficControlGeometry;

static bool _TrafficControlGeometry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficControlGeometry__ros_msg_type * ros_message = static_cast<const _TrafficControlGeometry__ros_msg_type *>(untyped_ros_message);
  // Field name: proj
  {
    const rosidl_runtime_c__String * str = &ros_message->proj;
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

  // Field name: datum
  {
    const rosidl_runtime_c__String * str = &ros_message->datum;
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

  // Field name: reftime
  {
    cdr << ros_message->reftime;
  }

  // Field name: reflon
  {
    cdr << ros_message->reflon;
  }

  // Field name: reflat
  {
    cdr << ros_message->reflat;
  }

  // Field name: refelv
  {
    cdr << ros_message->refelv;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PathNode
      )()->data);
    size_t size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
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

static bool _TrafficControlGeometry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficControlGeometry__ros_msg_type * ros_message = static_cast<_TrafficControlGeometry__ros_msg_type *>(untyped_ros_message);
  // Field name: proj
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->proj.data) {
      rosidl_runtime_c__String__init(&ros_message->proj);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->proj,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'proj'\n");
      return false;
    }
  }

  // Field name: datum
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->datum.data) {
      rosidl_runtime_c__String__init(&ros_message->datum);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->datum,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'datum'\n");
      return false;
    }
  }

  // Field name: reftime
  {
    cdr >> ros_message->reftime;
  }

  // Field name: reflon
  {
    cdr >> ros_message->reflon;
  }

  // Field name: reflat
  {
    cdr >> ros_message->reflat;
  }

  // Field name: refelv
  {
    cdr >> ros_message->refelv;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PathNode
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->nodes.data) {
      j2735_v2x_msgs__msg__PathNode__Sequence__fini(&ros_message->nodes);
    }
    if (!j2735_v2x_msgs__msg__PathNode__Sequence__init(&ros_message->nodes, size)) {
      return "failed to create array for field 'nodes'";
    }
    auto array_ptr = ros_message->nodes.data;
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
size_t get_serialized_size_j2735_v2x_msgs__msg__TrafficControlGeometry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficControlGeometry__ros_msg_type * ros_message = static_cast<const _TrafficControlGeometry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name proj
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->proj.size + 1);
  // field.name datum
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->datum.size + 1);
  // field.name reftime
  {
    size_t item_size = sizeof(ros_message->reftime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reflon
  {
    size_t item_size = sizeof(ros_message->reflon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reflat
  {
    size_t item_size = sizeof(ros_message->reflat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name refelv
  {
    size_t item_size = sizeof(ros_message->refelv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nodes
  {
    size_t array_size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PathNode(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficControlGeometry__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__TrafficControlGeometry(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TrafficControlGeometry(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: proj
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: datum
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: reftime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reflon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reflat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: refelv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: nodes
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PathNode(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficControlGeometry__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__TrafficControlGeometry(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrafficControlGeometry = {
  "j2735_v2x_msgs::msg",
  "TrafficControlGeometry",
  _TrafficControlGeometry__cdr_serialize,
  _TrafficControlGeometry__cdr_deserialize,
  _TrafficControlGeometry__get_serialized_size,
  _TrafficControlGeometry__max_serialized_size
};

static rosidl_message_type_support_t _TrafficControlGeometry__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficControlGeometry,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlGeometry)() {
  return &_TrafficControlGeometry__type_support;
}

#if defined(__cplusplus)
}
#endif
