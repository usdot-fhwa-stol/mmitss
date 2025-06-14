// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RequestIndicatorControl_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_msgs::srv::RequestIndicatorControl_Request(_init);
}

void RequestIndicatorControl_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_msgs::srv::RequestIndicatorControl_Request *>(message_memory);
  typed_message->~RequestIndicatorControl_Request();
}

size_t size_function__RequestIndicatorControl_Request__ind_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_msgs::msg::LightBarIndicator> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RequestIndicatorControl_Request__ind_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_msgs::msg::LightBarIndicator> *>(untyped_member);
  return &member[index];
}

void * get_function__RequestIndicatorControl_Request__ind_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_msgs::msg::LightBarIndicator> *>(untyped_member);
  return &member[index];
}

void resize_function__RequestIndicatorControl_Request__ind_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_msgs::msg::LightBarIndicator> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RequestIndicatorControl_Request__cda_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_msgs::msg::LightBarCDAType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RequestIndicatorControl_Request__cda_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_msgs::msg::LightBarCDAType> *>(untyped_member);
  return &member[index];
}

void * get_function__RequestIndicatorControl_Request__cda_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_msgs::msg::LightBarCDAType> *>(untyped_member);
  return &member[index];
}

void resize_function__RequestIndicatorControl_Request__cda_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_msgs::msg::LightBarCDAType> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RequestIndicatorControl_Request_message_member_array[3] = {
  {
    "ind_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_msgs::msg::LightBarIndicator>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::srv::RequestIndicatorControl_Request, ind_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__RequestIndicatorControl_Request__ind_list,  // size() function pointer
    get_const_function__RequestIndicatorControl_Request__ind_list,  // get_const(index) function pointer
    get_function__RequestIndicatorControl_Request__ind_list,  // get(index) function pointer
    resize_function__RequestIndicatorControl_Request__ind_list  // resize(index) function pointer
  },
  {
    "cda_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_msgs::msg::LightBarCDAType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::srv::RequestIndicatorControl_Request, cda_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__RequestIndicatorControl_Request__cda_list,  // size() function pointer
    get_const_function__RequestIndicatorControl_Request__cda_list,  // get_const(index) function pointer
    get_function__RequestIndicatorControl_Request__cda_list,  // get(index) function pointer
    resize_function__RequestIndicatorControl_Request__cda_list  // resize(index) function pointer
  },
  {
    "requester_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::srv::RequestIndicatorControl_Request, requester_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RequestIndicatorControl_Request_message_members = {
  "carma_msgs::srv",  // message namespace
  "RequestIndicatorControl_Request",  // message name
  3,  // number of fields
  sizeof(carma_msgs::srv::RequestIndicatorControl_Request),
  RequestIndicatorControl_Request_message_member_array,  // message members
  RequestIndicatorControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RequestIndicatorControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RequestIndicatorControl_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RequestIndicatorControl_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace carma_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::srv::RequestIndicatorControl_Request>()
{
  return &::carma_msgs::srv::rosidl_typesupport_introspection_cpp::RequestIndicatorControl_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_msgs, srv, RequestIndicatorControl_Request)() {
  return &::carma_msgs::srv::rosidl_typesupport_introspection_cpp::RequestIndicatorControl_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RequestIndicatorControl_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_msgs::srv::RequestIndicatorControl_Response(_init);
}

void RequestIndicatorControl_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_msgs::srv::RequestIndicatorControl_Response *>(message_memory);
  typed_message->~RequestIndicatorControl_Response();
}

size_t size_function__RequestIndicatorControl_Response__ind_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_msgs::msg::LightBarIndicator> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RequestIndicatorControl_Response__ind_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_msgs::msg::LightBarIndicator> *>(untyped_member);
  return &member[index];
}

void * get_function__RequestIndicatorControl_Response__ind_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_msgs::msg::LightBarIndicator> *>(untyped_member);
  return &member[index];
}

void resize_function__RequestIndicatorControl_Response__ind_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_msgs::msg::LightBarIndicator> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RequestIndicatorControl_Response__cda_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_msgs::msg::LightBarCDAType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RequestIndicatorControl_Response__cda_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_msgs::msg::LightBarCDAType> *>(untyped_member);
  return &member[index];
}

void * get_function__RequestIndicatorControl_Response__cda_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_msgs::msg::LightBarCDAType> *>(untyped_member);
  return &member[index];
}

void resize_function__RequestIndicatorControl_Response__cda_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_msgs::msg::LightBarCDAType> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RequestIndicatorControl_Response_message_member_array[2] = {
  {
    "ind_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_msgs::msg::LightBarIndicator>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::srv::RequestIndicatorControl_Response, ind_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__RequestIndicatorControl_Response__ind_list,  // size() function pointer
    get_const_function__RequestIndicatorControl_Response__ind_list,  // get_const(index) function pointer
    get_function__RequestIndicatorControl_Response__ind_list,  // get(index) function pointer
    resize_function__RequestIndicatorControl_Response__ind_list  // resize(index) function pointer
  },
  {
    "cda_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_msgs::msg::LightBarCDAType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs::srv::RequestIndicatorControl_Response, cda_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__RequestIndicatorControl_Response__cda_list,  // size() function pointer
    get_const_function__RequestIndicatorControl_Response__cda_list,  // get_const(index) function pointer
    get_function__RequestIndicatorControl_Response__cda_list,  // get(index) function pointer
    resize_function__RequestIndicatorControl_Response__cda_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RequestIndicatorControl_Response_message_members = {
  "carma_msgs::srv",  // message namespace
  "RequestIndicatorControl_Response",  // message name
  2,  // number of fields
  sizeof(carma_msgs::srv::RequestIndicatorControl_Response),
  RequestIndicatorControl_Response_message_member_array,  // message members
  RequestIndicatorControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RequestIndicatorControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RequestIndicatorControl_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RequestIndicatorControl_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace carma_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::srv::RequestIndicatorControl_Response>()
{
  return &::carma_msgs::srv::rosidl_typesupport_introspection_cpp::RequestIndicatorControl_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_msgs, srv, RequestIndicatorControl_Response)() {
  return &::carma_msgs::srv::rosidl_typesupport_introspection_cpp::RequestIndicatorControl_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace carma_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RequestIndicatorControl_service_members = {
  "carma_msgs::srv",  // service namespace
  "RequestIndicatorControl",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<carma_msgs::srv::RequestIndicatorControl>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t RequestIndicatorControl_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RequestIndicatorControl_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace carma_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<carma_msgs::srv::RequestIndicatorControl>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::carma_msgs::srv::rosidl_typesupport_introspection_cpp::RequestIndicatorControl_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::carma_msgs::srv::RequestIndicatorControl_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::carma_msgs::srv::RequestIndicatorControl_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_msgs, srv, RequestIndicatorControl)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<carma_msgs::srv::RequestIndicatorControl>();
}

#ifdef __cplusplus
}
#endif
