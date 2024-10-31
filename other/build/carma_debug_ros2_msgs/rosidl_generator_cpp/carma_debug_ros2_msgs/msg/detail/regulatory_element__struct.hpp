// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__STRUCT_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_debug_ros2_msgs__msg__RegulatoryElement __attribute__((deprecated))
#else
# define DEPRECATED__carma_debug_ros2_msgs__msg__RegulatoryElement __declspec(deprecated)
#endif

namespace carma_debug_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegulatoryElement_
{
  using Type = RegulatoryElement_<ContainerAllocator>;

  explicit RegulatoryElement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rule_name = "";
      this->unsupported_type = false;
      this->min_gap = 0.0;
      this->speed_limit = 0.0;
      this->direction = "";
      this->reason = "";
    }
  }

  explicit RegulatoryElement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rule_name(_alloc),
    direction(_alloc),
    reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rule_name = "";
      this->unsupported_type = false;
      this->min_gap = 0.0;
      this->speed_limit = 0.0;
      this->direction = "";
      this->reason = "";
    }
  }

  // field types and members
  using _rule_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rule_name_type rule_name;
  using _participants_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _participants_type participants;
  using _unsupported_type_type =
    bool;
  _unsupported_type_type unsupported_type;
  using _min_gap_type =
    double;
  _min_gap_type min_gap;
  using _speed_limit_type =
    double;
  _speed_limit_type speed_limit;
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _direction_type direction;
  using _left_participants_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _left_participants_type left_participants;
  using _right_participants_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _right_participants_type right_participants;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__rule_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rule_name = _arg;
    return *this;
  }
  Type & set__participants(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->participants = _arg;
    return *this;
  }
  Type & set__unsupported_type(
    const bool & _arg)
  {
    this->unsupported_type = _arg;
    return *this;
  }
  Type & set__min_gap(
    const double & _arg)
  {
    this->min_gap = _arg;
    return *this;
  }
  Type & set__speed_limit(
    const double & _arg)
  {
    this->speed_limit = _arg;
    return *this;
  }
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__left_participants(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->left_participants = _arg;
    return *this;
  }
  Type & set__right_participants(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->right_participants = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_debug_ros2_msgs__msg__RegulatoryElement
    std::shared_ptr<carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_debug_ros2_msgs__msg__RegulatoryElement
    std::shared_ptr<carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegulatoryElement_ & other) const
  {
    if (this->rule_name != other.rule_name) {
      return false;
    }
    if (this->participants != other.participants) {
      return false;
    }
    if (this->unsupported_type != other.unsupported_type) {
      return false;
    }
    if (this->min_gap != other.min_gap) {
      return false;
    }
    if (this->speed_limit != other.speed_limit) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->left_participants != other.left_participants) {
      return false;
    }
    if (this->right_participants != other.right_participants) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegulatoryElement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegulatoryElement_

// alias to use template instance with default allocator
using RegulatoryElement =
  carma_debug_ros2_msgs::msg::RegulatoryElement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_debug_ros2_msgs

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__STRUCT_HPP_
