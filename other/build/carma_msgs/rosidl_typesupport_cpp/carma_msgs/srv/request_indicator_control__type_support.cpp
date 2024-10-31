// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace carma_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RequestIndicatorControl_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RequestIndicatorControl_Request_type_support_ids_t;

static const _RequestIndicatorControl_Request_type_support_ids_t _RequestIndicatorControl_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RequestIndicatorControl_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RequestIndicatorControl_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RequestIndicatorControl_Request_type_support_symbol_names_t _RequestIndicatorControl_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, srv, RequestIndicatorControl_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_msgs, srv, RequestIndicatorControl_Request)),
  }
};

typedef struct _RequestIndicatorControl_Request_type_support_data_t
{
  void * data[2];
} _RequestIndicatorControl_Request_type_support_data_t;

static _RequestIndicatorControl_Request_type_support_data_t _RequestIndicatorControl_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RequestIndicatorControl_Request_message_typesupport_map = {
  2,
  "carma_msgs",
  &_RequestIndicatorControl_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RequestIndicatorControl_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RequestIndicatorControl_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RequestIndicatorControl_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RequestIndicatorControl_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace carma_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::srv::RequestIndicatorControl_Request>()
{
  return &::carma_msgs::srv::rosidl_typesupport_cpp::RequestIndicatorControl_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, carma_msgs, srv, RequestIndicatorControl_Request)() {
  return get_message_type_support_handle<carma_msgs::srv::RequestIndicatorControl_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace carma_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RequestIndicatorControl_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RequestIndicatorControl_Response_type_support_ids_t;

static const _RequestIndicatorControl_Response_type_support_ids_t _RequestIndicatorControl_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RequestIndicatorControl_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RequestIndicatorControl_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RequestIndicatorControl_Response_type_support_symbol_names_t _RequestIndicatorControl_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, srv, RequestIndicatorControl_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_msgs, srv, RequestIndicatorControl_Response)),
  }
};

typedef struct _RequestIndicatorControl_Response_type_support_data_t
{
  void * data[2];
} _RequestIndicatorControl_Response_type_support_data_t;

static _RequestIndicatorControl_Response_type_support_data_t _RequestIndicatorControl_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RequestIndicatorControl_Response_message_typesupport_map = {
  2,
  "carma_msgs",
  &_RequestIndicatorControl_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RequestIndicatorControl_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RequestIndicatorControl_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RequestIndicatorControl_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RequestIndicatorControl_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace carma_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::srv::RequestIndicatorControl_Response>()
{
  return &::carma_msgs::srv::rosidl_typesupport_cpp::RequestIndicatorControl_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, carma_msgs, srv, RequestIndicatorControl_Response)() {
  return get_message_type_support_handle<carma_msgs::srv::RequestIndicatorControl_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace carma_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RequestIndicatorControl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RequestIndicatorControl_type_support_ids_t;

static const _RequestIndicatorControl_type_support_ids_t _RequestIndicatorControl_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RequestIndicatorControl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RequestIndicatorControl_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RequestIndicatorControl_type_support_symbol_names_t _RequestIndicatorControl_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, srv, RequestIndicatorControl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_msgs, srv, RequestIndicatorControl)),
  }
};

typedef struct _RequestIndicatorControl_type_support_data_t
{
  void * data[2];
} _RequestIndicatorControl_type_support_data_t;

static _RequestIndicatorControl_type_support_data_t _RequestIndicatorControl_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RequestIndicatorControl_service_typesupport_map = {
  2,
  "carma_msgs",
  &_RequestIndicatorControl_service_typesupport_ids.typesupport_identifier[0],
  &_RequestIndicatorControl_service_typesupport_symbol_names.symbol_name[0],
  &_RequestIndicatorControl_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RequestIndicatorControl_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RequestIndicatorControl_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace carma_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<carma_msgs::srv::RequestIndicatorControl>()
{
  return &::carma_msgs::srv::rosidl_typesupport_cpp::RequestIndicatorControl_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, carma_msgs, srv, RequestIndicatorControl)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<carma_msgs::srv::RequestIndicatorControl>();
}

#ifdef __cplusplus
}
#endif
