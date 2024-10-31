// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__STRUCT_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'element'
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair __attribute__((deprecated))
#else
# define DEPRECATED__carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair __declspec(deprecated)
#endif

namespace carma_debug_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneletIdRegulatoryElementPair_
{
  using Type = LaneletIdRegulatoryElementPair_<ContainerAllocator>;

  explicit LaneletIdRegulatoryElementPair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : element(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanelet_id = 0ull;
    }
  }

  explicit LaneletIdRegulatoryElementPair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : element(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanelet_id = 0ull;
    }
  }

  // field types and members
  using _lanelet_id_type =
    uint64_t;
  _lanelet_id_type lanelet_id;
  using _element_type =
    carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator>;
  _element_type element;

  // setters for named parameter idiom
  Type & set__lanelet_id(
    const uint64_t & _arg)
  {
    this->lanelet_id = _arg;
    return *this;
  }
  Type & set__element(
    const carma_debug_ros2_msgs::msg::RegulatoryElement_<ContainerAllocator> & _arg)
  {
    this->element = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair
    std::shared_ptr<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair
    std::shared_ptr<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneletIdRegulatoryElementPair_ & other) const
  {
    if (this->lanelet_id != other.lanelet_id) {
      return false;
    }
    if (this->element != other.element) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneletIdRegulatoryElementPair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneletIdRegulatoryElementPair_

// alias to use template instance with default allocator
using LaneletIdRegulatoryElementPair =
  carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_debug_ros2_msgs

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__STRUCT_HPP_
