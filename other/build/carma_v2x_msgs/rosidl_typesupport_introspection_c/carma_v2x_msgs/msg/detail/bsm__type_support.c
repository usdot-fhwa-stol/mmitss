// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/bsm__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/bsm__functions.h"
#include "carma_v2x_msgs/msg/detail/bsm__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `core_data`
#include "carma_v2x_msgs/msg/bsm_core_data.h"
// Member `core_data`
#include "carma_v2x_msgs/msg/detail/bsm_core_data__rosidl_typesupport_introspection_c.h"
// Member `part_ii`
#include "carma_v2x_msgs/msg/bsm_part_ii_extension.h"
// Member `part_ii`
#include "carma_v2x_msgs/msg/detail/bsm_part_ii_extension__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "carma_v2x_msgs/msg/bsm_regional_extension.h"
// Member `regional`
#include "carma_v2x_msgs/msg/detail/bsm_regional_extension__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BSM__rosidl_typesupport_introspection_c__BSM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__BSM__init(message_memory);
}

void BSM__rosidl_typesupport_introspection_c__BSM_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__BSM__fini(message_memory);
}

size_t BSM__rosidl_typesupport_introspection_c__size_function__BSMPartIIExtension__part_ii(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__BSMPartIIExtension__Sequence * member =
    (const carma_v2x_msgs__msg__BSMPartIIExtension__Sequence *)(untyped_member);
  return member->size;
}

const void * BSM__rosidl_typesupport_introspection_c__get_const_function__BSMPartIIExtension__part_ii(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__BSMPartIIExtension__Sequence * member =
    (const carma_v2x_msgs__msg__BSMPartIIExtension__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BSM__rosidl_typesupport_introspection_c__get_function__BSMPartIIExtension__part_ii(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__BSMPartIIExtension__Sequence * member =
    (carma_v2x_msgs__msg__BSMPartIIExtension__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BSM__rosidl_typesupport_introspection_c__resize_function__BSMPartIIExtension__part_ii(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__BSMPartIIExtension__Sequence * member =
    (carma_v2x_msgs__msg__BSMPartIIExtension__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__BSMPartIIExtension__Sequence__fini(member);
  return carma_v2x_msgs__msg__BSMPartIIExtension__Sequence__init(member, size);
}

size_t BSM__rosidl_typesupport_introspection_c__size_function__BSMRegionalExtension__regional(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__BSMRegionalExtension__Sequence * member =
    (const carma_v2x_msgs__msg__BSMRegionalExtension__Sequence *)(untyped_member);
  return member->size;
}

const void * BSM__rosidl_typesupport_introspection_c__get_const_function__BSMRegionalExtension__regional(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__BSMRegionalExtension__Sequence * member =
    (const carma_v2x_msgs__msg__BSMRegionalExtension__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BSM__rosidl_typesupport_introspection_c__get_function__BSMRegionalExtension__regional(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__BSMRegionalExtension__Sequence * member =
    (carma_v2x_msgs__msg__BSMRegionalExtension__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BSM__rosidl_typesupport_introspection_c__resize_function__BSMRegionalExtension__regional(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__BSMRegionalExtension__Sequence * member =
    (carma_v2x_msgs__msg__BSMRegionalExtension__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__BSMRegionalExtension__Sequence__fini(member);
  return carma_v2x_msgs__msg__BSMRegionalExtension__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__BSM, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "core_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__BSM, core_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__BSM, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "part_ii",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__BSM, part_ii),  // bytes offset in struct
    NULL,  // default value
    BSM__rosidl_typesupport_introspection_c__size_function__BSMPartIIExtension__part_ii,  // size() function pointer
    BSM__rosidl_typesupport_introspection_c__get_const_function__BSMPartIIExtension__part_ii,  // get_const(index) function pointer
    BSM__rosidl_typesupport_introspection_c__get_function__BSMPartIIExtension__part_ii,  // get(index) function pointer
    BSM__rosidl_typesupport_introspection_c__resize_function__BSMPartIIExtension__part_ii  // resize(index) function pointer
  },
  {
    "regional",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__BSM, regional),  // bytes offset in struct
    NULL,  // default value
    BSM__rosidl_typesupport_introspection_c__size_function__BSMRegionalExtension__regional,  // size() function pointer
    BSM__rosidl_typesupport_introspection_c__get_const_function__BSMRegionalExtension__regional,  // get_const(index) function pointer
    BSM__rosidl_typesupport_introspection_c__get_function__BSMRegionalExtension__regional,  // get(index) function pointer
    BSM__rosidl_typesupport_introspection_c__resize_function__BSMRegionalExtension__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BSM__rosidl_typesupport_introspection_c__BSM_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "BSM",  // message name
  5,  // number of fields
  sizeof(carma_v2x_msgs__msg__BSM),
  BSM__rosidl_typesupport_introspection_c__BSM_message_member_array,  // message members
  BSM__rosidl_typesupport_introspection_c__BSM_init_function,  // function to initialize message memory (memory has to be allocated)
  BSM__rosidl_typesupport_introspection_c__BSM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BSM__rosidl_typesupport_introspection_c__BSM_message_type_support_handle = {
  0,
  &BSM__rosidl_typesupport_introspection_c__BSM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, BSM)() {
  BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, BSMCoreData)();
  BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, BSMPartIIExtension)();
  BSM__rosidl_typesupport_introspection_c__BSM_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, BSMRegionalExtension)();
  if (!BSM__rosidl_typesupport_introspection_c__BSM_message_type_support_handle.typesupport_identifier) {
    BSM__rosidl_typesupport_introspection_c__BSM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BSM__rosidl_typesupport_introspection_c__BSM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
