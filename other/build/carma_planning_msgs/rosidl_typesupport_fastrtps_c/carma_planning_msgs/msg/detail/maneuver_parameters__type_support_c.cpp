// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/ManeuverParameters.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/maneuver_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/maneuver_parameters__struct.h"
#include "carma_planning_msgs/msg/detail/maneuver_parameters__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // time_valued_meta_data
#include "rosidl_runtime_c/primitives_sequence.h"  // bool_valued_meta_data, float_valued_meta_data, int_valued_meta_data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bool_valued_meta_data, float_valued_meta_data, int_valued_meta_data
#include "rosidl_runtime_c/string.h"  // maneuver_id, planning_strategic_plugin, planning_tactical_plugin, string_valued_meta_data
#include "rosidl_runtime_c/string_functions.h"  // maneuver_id, planning_strategic_plugin, planning_tactical_plugin, string_valued_meta_data

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _ManeuverParameters__ros_msg_type = carma_planning_msgs__msg__ManeuverParameters;

static bool _ManeuverParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ManeuverParameters__ros_msg_type * ros_message = static_cast<const _ManeuverParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: maneuver_id
  {
    const rosidl_runtime_c__String * str = &ros_message->maneuver_id;
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

  // Field name: negotiation_type
  {
    cdr << ros_message->negotiation_type;
  }

  // Field name: planning_strategic_plugin
  {
    const rosidl_runtime_c__String * str = &ros_message->planning_strategic_plugin;
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

  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: planning_tactical_plugin
  {
    const rosidl_runtime_c__String * str = &ros_message->planning_tactical_plugin;
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

  // Field name: bool_valued_meta_data
  {
    size_t size = ros_message->bool_valued_meta_data.size;
    auto array_ptr = ros_message->bool_valued_meta_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int_valued_meta_data
  {
    size_t size = ros_message->int_valued_meta_data.size;
    auto array_ptr = ros_message->int_valued_meta_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float_valued_meta_data
  {
    size_t size = ros_message->float_valued_meta_data.size;
    auto array_ptr = ros_message->float_valued_meta_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: string_valued_meta_data
  {
    size_t size = ros_message->string_valued_meta_data.size;
    auto array_ptr = ros_message->string_valued_meta_data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: time_valued_meta_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    size_t size = ros_message->time_valued_meta_data.size;
    auto array_ptr = ros_message->time_valued_meta_data.data;
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

static bool _ManeuverParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ManeuverParameters__ros_msg_type * ros_message = static_cast<_ManeuverParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: maneuver_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->maneuver_id.data) {
      rosidl_runtime_c__String__init(&ros_message->maneuver_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->maneuver_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'maneuver_id'\n");
      return false;
    }
  }

  // Field name: negotiation_type
  {
    cdr >> ros_message->negotiation_type;
  }

  // Field name: planning_strategic_plugin
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->planning_strategic_plugin.data) {
      rosidl_runtime_c__String__init(&ros_message->planning_strategic_plugin);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->planning_strategic_plugin,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'planning_strategic_plugin'\n");
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: planning_tactical_plugin
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->planning_tactical_plugin.data) {
      rosidl_runtime_c__String__init(&ros_message->planning_tactical_plugin);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->planning_tactical_plugin,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'planning_tactical_plugin'\n");
      return false;
    }
  }

  // Field name: bool_valued_meta_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bool_valued_meta_data.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->bool_valued_meta_data);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->bool_valued_meta_data, size)) {
      return "failed to create array for field 'bool_valued_meta_data'";
    }
    auto array_ptr = ros_message->bool_valued_meta_data.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: int_valued_meta_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int_valued_meta_data.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->int_valued_meta_data);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->int_valued_meta_data, size)) {
      return "failed to create array for field 'int_valued_meta_data'";
    }
    auto array_ptr = ros_message->int_valued_meta_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float_valued_meta_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float_valued_meta_data.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->float_valued_meta_data);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->float_valued_meta_data, size)) {
      return "failed to create array for field 'float_valued_meta_data'";
    }
    auto array_ptr = ros_message->float_valued_meta_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: string_valued_meta_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->string_valued_meta_data.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->string_valued_meta_data);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->string_valued_meta_data, size)) {
      return "failed to create array for field 'string_valued_meta_data'";
    }
    auto array_ptr = ros_message->string_valued_meta_data.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_valued_meta_data'\n");
        return false;
      }
    }
  }

  // Field name: time_valued_meta_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->time_valued_meta_data.data) {
      builtin_interfaces__msg__Time__Sequence__fini(&ros_message->time_valued_meta_data);
    }
    if (!builtin_interfaces__msg__Time__Sequence__init(&ros_message->time_valued_meta_data, size)) {
      return "failed to create array for field 'time_valued_meta_data'";
    }
    auto array_ptr = ros_message->time_valued_meta_data.data;
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
size_t get_serialized_size_carma_planning_msgs__msg__ManeuverParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManeuverParameters__ros_msg_type * ros_message = static_cast<const _ManeuverParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name maneuver_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->maneuver_id.size + 1);
  // field.name negotiation_type
  {
    size_t item_size = sizeof(ros_message->negotiation_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name planning_strategic_plugin
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->planning_strategic_plugin.size + 1);
  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name planning_tactical_plugin
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->planning_tactical_plugin.size + 1);
  // field.name bool_valued_meta_data
  {
    size_t array_size = ros_message->bool_valued_meta_data.size;
    auto array_ptr = ros_message->bool_valued_meta_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int_valued_meta_data
  {
    size_t array_size = ros_message->int_valued_meta_data.size;
    auto array_ptr = ros_message->int_valued_meta_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float_valued_meta_data
  {
    size_t array_size = ros_message->float_valued_meta_data.size;
    auto array_ptr = ros_message->float_valued_meta_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_valued_meta_data
  {
    size_t array_size = ros_message->string_valued_meta_data.size;
    auto array_ptr = ros_message->string_valued_meta_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name time_valued_meta_data
  {
    size_t array_size = ros_message->time_valued_meta_data.size;
    auto array_ptr = ros_message->time_valued_meta_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ManeuverParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__ManeuverParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__ManeuverParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: maneuver_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: negotiation_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: planning_strategic_plugin
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: planning_tactical_plugin
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bool_valued_meta_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int_valued_meta_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: float_valued_meta_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: string_valued_meta_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: time_valued_meta_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ManeuverParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__ManeuverParameters(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ManeuverParameters = {
  "carma_planning_msgs::msg",
  "ManeuverParameters",
  _ManeuverParameters__cdr_serialize,
  _ManeuverParameters__cdr_deserialize,
  _ManeuverParameters__get_serialized_size,
  _ManeuverParameters__max_serialized_size
};

static rosidl_message_type_support_t _ManeuverParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ManeuverParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, ManeuverParameters)() {
  return &_ManeuverParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
