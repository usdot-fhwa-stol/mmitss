// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:srv/PluginActivation.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__PluginActivation_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__PluginActivation_Request __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PluginActivation_Request_
{
  using Type = PluginActivation_Request_<ContainerAllocator>;

  explicit PluginActivation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plugin_name = "";
      this->plugin_version = "";
      this->activated = false;
    }
  }

  explicit PluginActivation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    plugin_name(_alloc),
    plugin_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plugin_name = "";
      this->plugin_version = "";
      this->activated = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _plugin_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _plugin_name_type plugin_name;
  using _plugin_version_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _plugin_version_type plugin_version;
  using _activated_type =
    bool;
  _activated_type activated;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__plugin_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->plugin_name = _arg;
    return *this;
  }
  Type & set__plugin_version(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->plugin_version = _arg;
    return *this;
  }
  Type & set__activated(
    const bool & _arg)
  {
    this->activated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__PluginActivation_Request
    std::shared_ptr<carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__PluginActivation_Request
    std::shared_ptr<carma_planning_msgs::srv::PluginActivation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PluginActivation_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->plugin_name != other.plugin_name) {
      return false;
    }
    if (this->plugin_version != other.plugin_version) {
      return false;
    }
    if (this->activated != other.activated) {
      return false;
    }
    return true;
  }
  bool operator!=(const PluginActivation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PluginActivation_Request_

// alias to use template instance with default allocator
using PluginActivation_Request =
  carma_planning_msgs::srv::PluginActivation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__PluginActivation_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__PluginActivation_Response __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PluginActivation_Response_
{
  using Type = PluginActivation_Response_<ContainerAllocator>;

  explicit PluginActivation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->newstate = false;
    }
  }

  explicit PluginActivation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->newstate = false;
    }
  }

  // field types and members
  using _newstate_type =
    bool;
  _newstate_type newstate;

  // setters for named parameter idiom
  Type & set__newstate(
    const bool & _arg)
  {
    this->newstate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__PluginActivation_Response
    std::shared_ptr<carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__PluginActivation_Response
    std::shared_ptr<carma_planning_msgs::srv::PluginActivation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PluginActivation_Response_ & other) const
  {
    if (this->newstate != other.newstate) {
      return false;
    }
    return true;
  }
  bool operator!=(const PluginActivation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PluginActivation_Response_

// alias to use template instance with default allocator
using PluginActivation_Response =
  carma_planning_msgs::srv::PluginActivation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{

namespace srv
{

struct PluginActivation
{
  using Request = carma_planning_msgs::srv::PluginActivation_Request;
  using Response = carma_planning_msgs::srv::PluginActivation_Response;
};

}  // namespace srv

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__STRUCT_HPP_
