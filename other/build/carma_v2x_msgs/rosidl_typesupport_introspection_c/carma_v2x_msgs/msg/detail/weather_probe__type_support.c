// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/weather_probe__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/weather_probe__functions.h"
#include "carma_v2x_msgs/msg/detail/weather_probe__struct.h"


// Include directives for member types
// Member `air_temp`
#include "carma_v2x_msgs/msg/ambient_air_temperature.h"
// Member `air_temp`
#include "carma_v2x_msgs/msg/detail/ambient_air_temperature__rosidl_typesupport_introspection_c.h"
// Member `air_pressure`
#include "carma_v2x_msgs/msg/ambient_air_pressure.h"
// Member `air_pressure`
#include "carma_v2x_msgs/msg/detail/ambient_air_pressure__rosidl_typesupport_introspection_c.h"
// Member `rain_rates`
#include "carma_v2x_msgs/msg/wiper_set.h"
// Member `rain_rates`
#include "carma_v2x_msgs/msg/detail/wiper_set__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__WeatherProbe__init(message_memory);
}

void WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__WeatherProbe__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_member_array[4] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__WeatherProbe, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "air_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__WeatherProbe, air_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "air_pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__WeatherProbe, air_pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rain_rates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__WeatherProbe, rain_rates),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "WeatherProbe",  // message name
  4,  // number of fields
  sizeof(carma_v2x_msgs__msg__WeatherProbe),
  WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_member_array,  // message members
  WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_init_function,  // function to initialize message memory (memory has to be allocated)
  WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_type_support_handle = {
  0,
  &WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, WeatherProbe)() {
  WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, AmbientAirTemperature)();
  WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, AmbientAirPressure)();
  WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, WiperSet)();
  if (!WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_type_support_handle.typesupport_identifier) {
    WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WeatherProbe__rosidl_typesupport_introspection_c__WeatherProbe_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
