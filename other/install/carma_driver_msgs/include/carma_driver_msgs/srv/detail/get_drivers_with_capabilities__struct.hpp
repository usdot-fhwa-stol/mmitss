// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:srv/GetDriversWithCapabilities.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__srv__GetDriversWithCapabilities_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__srv__GetDriversWithCapabilities_Request __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDriversWithCapabilities_Request_
{
  using Type = GetDriversWithCapabilities_Request_<ContainerAllocator>;

  explicit GetDriversWithCapabilities_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetDriversWithCapabilities_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _capabilities_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _capabilities_type capabilities;

  // setters for named parameter idiom
  Type & set__capabilities(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->capabilities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__srv__GetDriversWithCapabilities_Request
    std::shared_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__srv__GetDriversWithCapabilities_Request
    std::shared_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDriversWithCapabilities_Request_ & other) const
  {
    if (this->capabilities != other.capabilities) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDriversWithCapabilities_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDriversWithCapabilities_Request_

// alias to use template instance with default allocator
using GetDriversWithCapabilities_Request =
  carma_driver_msgs::srv::GetDriversWithCapabilities_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_driver_msgs


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__srv__GetDriversWithCapabilities_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__srv__GetDriversWithCapabilities_Response __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDriversWithCapabilities_Response_
{
  using Type = GetDriversWithCapabilities_Response_<ContainerAllocator>;

  explicit GetDriversWithCapabilities_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetDriversWithCapabilities_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _driver_data_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _driver_data_type driver_data;

  // setters for named parameter idiom
  Type & set__driver_data(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->driver_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__srv__GetDriversWithCapabilities_Response
    std::shared_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__srv__GetDriversWithCapabilities_Response
    std::shared_ptr<carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDriversWithCapabilities_Response_ & other) const
  {
    if (this->driver_data != other.driver_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDriversWithCapabilities_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDriversWithCapabilities_Response_

// alias to use template instance with default allocator
using GetDriversWithCapabilities_Response =
  carma_driver_msgs::srv::GetDriversWithCapabilities_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_driver_msgs

namespace carma_driver_msgs
{

namespace srv
{

struct GetDriversWithCapabilities
{
  using Request = carma_driver_msgs::srv::GetDriversWithCapabilities_Request;
  using Response = carma_driver_msgs::srv::GetDriversWithCapabilities_Response;
};

}  // namespace srv

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__STRUCT_HPP_
