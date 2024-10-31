// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:srv/PluginList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_LIST__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__PluginList_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__PluginList_Request __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PluginList_Request_
{
  using Type = PluginList_Request_<ContainerAllocator>;

  explicit PluginList_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PluginList_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__PluginList_Request
    std::shared_ptr<carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__PluginList_Request
    std::shared_ptr<carma_planning_msgs::srv::PluginList_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PluginList_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PluginList_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PluginList_Request_

// alias to use template instance with default allocator
using PluginList_Request =
  carma_planning_msgs::srv::PluginList_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'plugins'
#include "carma_planning_msgs/msg/detail/plugin__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__PluginList_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__PluginList_Response __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PluginList_Response_
{
  using Type = PluginList_Response_<ContainerAllocator>;

  explicit PluginList_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PluginList_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _plugins_type =
    std::vector<carma_planning_msgs::msg::Plugin_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_planning_msgs::msg::Plugin_<ContainerAllocator>>::other>;
  _plugins_type plugins;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__plugins(
    const std::vector<carma_planning_msgs::msg::Plugin_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_planning_msgs::msg::Plugin_<ContainerAllocator>>::other> & _arg)
  {
    this->plugins = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__PluginList_Response
    std::shared_ptr<carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__PluginList_Response
    std::shared_ptr<carma_planning_msgs::srv::PluginList_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PluginList_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->plugins != other.plugins) {
      return false;
    }
    return true;
  }
  bool operator!=(const PluginList_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PluginList_Response_

// alias to use template instance with default allocator
using PluginList_Response =
  carma_planning_msgs::srv::PluginList_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{

namespace srv
{

struct PluginList
{
  using Request = carma_planning_msgs::srv::PluginList_Request;
  using Response = carma_planning_msgs::srv::PluginList_Response;
};

}  // namespace srv

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_LIST__STRUCT_HPP_
