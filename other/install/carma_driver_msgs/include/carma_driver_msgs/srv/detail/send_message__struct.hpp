// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:srv/SendMessage.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'message_to_send'
#include "carma_driver_msgs/msg/detail/byte_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__srv__SendMessage_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__srv__SendMessage_Request __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendMessage_Request_
{
  using Type = SendMessage_Request_<ContainerAllocator>;

  explicit SendMessage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message_to_send(_init)
  {
    (void)_init;
  }

  explicit SendMessage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message_to_send(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _message_to_send_type =
    carma_driver_msgs::msg::ByteArray_<ContainerAllocator>;
  _message_to_send_type message_to_send;

  // setters for named parameter idiom
  Type & set__message_to_send(
    const carma_driver_msgs::msg::ByteArray_<ContainerAllocator> & _arg)
  {
    this->message_to_send = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__srv__SendMessage_Request
    std::shared_ptr<carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__srv__SendMessage_Request
    std::shared_ptr<carma_driver_msgs::srv::SendMessage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendMessage_Request_ & other) const
  {
    if (this->message_to_send != other.message_to_send) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendMessage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendMessage_Request_

// alias to use template instance with default allocator
using SendMessage_Request =
  carma_driver_msgs::srv::SendMessage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_driver_msgs


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__srv__SendMessage_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__srv__SendMessage_Response __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendMessage_Response_
{
  using Type = SendMessage_Response_<ContainerAllocator>;

  explicit SendMessage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_status = 0;
    }
  }

  explicit SendMessage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_status = 0;
    }
  }

  // field types and members
  using _error_status_type =
    uint8_t;
  _error_status_type error_status;

  // setters for named parameter idiom
  Type & set__error_status(
    const uint8_t & _arg)
  {
    this->error_status = _arg;
    return *this;
  }

  // constant declarations
  // guard against 'NO_ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(NO_ERROR)
#    pragma push_macro("NO_ERROR")
#    undef NO_ERROR
#  endif
#endif
  static constexpr uint8_t NO_ERROR =
    0u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("NO_ERROR")
#endif
  static constexpr uint8_t MSG_FAILURE =
    1u;

  // pointer types
  using RawPtr =
    carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__srv__SendMessage_Response
    std::shared_ptr<carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__srv__SendMessage_Response
    std::shared_ptr<carma_driver_msgs::srv::SendMessage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendMessage_Response_ & other) const
  {
    if (this->error_status != other.error_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendMessage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendMessage_Response_

// alias to use template instance with default allocator
using SendMessage_Response =
  carma_driver_msgs::srv::SendMessage_Response_<std::allocator<void>>;

// constant definitions
// guard against 'NO_ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(NO_ERROR)
#    pragma push_macro("NO_ERROR")
#    undef NO_ERROR
#  endif
#endif
template<typename ContainerAllocator>
constexpr uint8_t SendMessage_Response_<ContainerAllocator>::NO_ERROR;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("NO_ERROR")
#endif
template<typename ContainerAllocator>
constexpr uint8_t SendMessage_Response_<ContainerAllocator>::MSG_FAILURE;

}  // namespace srv

}  // namespace carma_driver_msgs

namespace carma_driver_msgs
{

namespace srv
{

struct SendMessage
{
  using Request = carma_driver_msgs::srv::SendMessage_Request;
  using Response = carma_driver_msgs::srv::SendMessage_Response;
};

}  // namespace srv

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__STRUCT_HPP_
