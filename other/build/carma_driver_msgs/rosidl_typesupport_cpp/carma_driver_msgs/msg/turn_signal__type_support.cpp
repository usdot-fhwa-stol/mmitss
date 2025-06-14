// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from carma_driver_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "carma_driver_msgs/msg/detail/turn_signal__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace carma_driver_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _TurnSignal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnSignal_type_support_ids_t;

static const _TurnSignal_type_support_ids_t _TurnSignal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurnSignal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnSignal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnSignal_type_support_symbol_names_t _TurnSignal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_driver_msgs, msg, TurnSignal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_driver_msgs, msg, TurnSignal)),
  }
};

typedef struct _TurnSignal_type_support_data_t
{
  void * data[2];
} _TurnSignal_type_support_data_t;

static _TurnSignal_type_support_data_t _TurnSignal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnSignal_message_typesupport_map = {
  2,
  "carma_driver_msgs",
  &_TurnSignal_message_typesupport_ids.typesupport_identifier[0],
  &_TurnSignal_message_typesupport_symbol_names.symbol_name[0],
  &_TurnSignal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurnSignal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnSignal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace carma_driver_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_driver_msgs::msg::TurnSignal>()
{
  return &::carma_driver_msgs::msg::rosidl_typesupport_cpp::TurnSignal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, carma_driver_msgs, msg, TurnSignal)() {
  return get_message_type_support_handle<carma_driver_msgs::msg::TurnSignal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
