// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/PluginStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__PluginStatus __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__PluginStatus __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PluginStatus_
{
  using Type = PluginStatus_<ContainerAllocator>;

  explicit PluginStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->status = 0;
      this->is_strategic_plugin = false;
      this->is_tactical_plugin = false;
      this->is_control_plugin = false;
    }
  }

  explicit PluginStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->status = 0;
      this->is_strategic_plugin = false;
      this->is_tactical_plugin = false;
      this->is_control_plugin = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _status_type =
    uint8_t;
  _status_type status;
  using _is_strategic_plugin_type =
    bool;
  _is_strategic_plugin_type is_strategic_plugin;
  using _is_tactical_plugin_type =
    bool;
  _is_tactical_plugin_type is_tactical_plugin;
  using _is_control_plugin_type =
    bool;
  _is_control_plugin_type is_control_plugin;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__is_strategic_plugin(
    const bool & _arg)
  {
    this->is_strategic_plugin = _arg;
    return *this;
  }
  Type & set__is_tactical_plugin(
    const bool & _arg)
  {
    this->is_tactical_plugin = _arg;
    return *this;
  }
  Type & set__is_control_plugin(
    const bool & _arg)
  {
    this->is_control_plugin = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DISABLED =
    0u;
  static constexpr uint8_t ENABLED =
    1u;
  static constexpr uint8_t AVAILABLE =
    2u;
  static constexpr uint8_t FAULT =
    3u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::PluginStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::PluginStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::PluginStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::PluginStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::PluginStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::PluginStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::PluginStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::PluginStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::PluginStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::PluginStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__PluginStatus
    std::shared_ptr<carma_planning_msgs::msg::PluginStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__PluginStatus
    std::shared_ptr<carma_planning_msgs::msg::PluginStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PluginStatus_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->is_strategic_plugin != other.is_strategic_plugin) {
      return false;
    }
    if (this->is_tactical_plugin != other.is_tactical_plugin) {
      return false;
    }
    if (this->is_control_plugin != other.is_control_plugin) {
      return false;
    }
    return true;
  }
  bool operator!=(const PluginStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PluginStatus_

// alias to use template instance with default allocator
using PluginStatus =
  carma_planning_msgs::msg::PluginStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PluginStatus_<ContainerAllocator>::DISABLED;
template<typename ContainerAllocator>
constexpr uint8_t PluginStatus_<ContainerAllocator>::ENABLED;
template<typename ContainerAllocator>
constexpr uint8_t PluginStatus_<ContainerAllocator>::AVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t PluginStatus_<ContainerAllocator>::FAULT;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__STRUCT_HPP_
