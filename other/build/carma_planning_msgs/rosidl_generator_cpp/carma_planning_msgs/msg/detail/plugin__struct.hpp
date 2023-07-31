// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/Plugin.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__Plugin __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__Plugin __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Plugin_
{
  using Type = Plugin_<ContainerAllocator>;

  explicit Plugin_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->version_id = "";
      this->type = 0;
      this->available = false;
      this->activated = false;
      this->capability = "";
    }
  }

  explicit Plugin_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    version_id(_alloc),
    capability(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->version_id = "";
      this->type = 0;
      this->available = false;
      this->activated = false;
      this->capability = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _version_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _version_id_type version_id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _available_type =
    bool;
  _available_type available;
  using _activated_type =
    bool;
  _activated_type activated;
  using _capability_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _capability_type capability;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__version_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->version_id = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__activated(
    const bool & _arg)
  {
    this->activated = _arg;
    return *this;
  }
  Type & set__capability(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->capability = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t STRATEGIC =
    1u;
  static constexpr uint8_t TACTICAL =
    2u;
  static constexpr uint8_t CONTROL =
    3u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::Plugin_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::Plugin_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::Plugin_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::Plugin_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::Plugin_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::Plugin_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::Plugin_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::Plugin_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::Plugin_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::Plugin_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__Plugin
    std::shared_ptr<carma_planning_msgs::msg::Plugin_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__Plugin
    std::shared_ptr<carma_planning_msgs::msg::Plugin_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Plugin_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->version_id != other.version_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->available != other.available) {
      return false;
    }
    if (this->activated != other.activated) {
      return false;
    }
    if (this->capability != other.capability) {
      return false;
    }
    return true;
  }
  bool operator!=(const Plugin_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Plugin_

// alias to use template instance with default allocator
using Plugin =
  carma_planning_msgs::msg::Plugin_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Plugin_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t Plugin_<ContainerAllocator>::STRATEGIC;
template<typename ContainerAllocator>
constexpr uint8_t Plugin_<ContainerAllocator>::TACTICAL;
template<typename ContainerAllocator>
constexpr uint8_t Plugin_<ContainerAllocator>::CONTROL;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN__STRUCT_HPP_
