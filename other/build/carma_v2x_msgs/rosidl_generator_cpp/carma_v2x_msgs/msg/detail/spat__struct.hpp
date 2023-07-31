// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'intersection_state_list'
#include "carma_v2x_msgs/msg/detail/intersection_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__SPAT __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__SPAT __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SPAT_
{
  using Type = SPAT_<ContainerAllocator>;

  explicit SPAT_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->time_stamp_exists = false;
      this->name = "";
      this->name_exists = false;
    }
  }

  explicit SPAT_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->time_stamp_exists = false;
      this->name = "";
      this->name_exists = false;
    }
  }

  // field types and members
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _time_stamp_exists_type =
    bool;
  _time_stamp_exists_type time_stamp_exists;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _name_exists_type =
    bool;
  _name_exists_type name_exists;
  using _intersection_state_list_type =
    std::vector<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>::other>;
  _intersection_state_list_type intersection_state_list;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__time_stamp_exists(
    const bool & _arg)
  {
    this->time_stamp_exists = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__name_exists(
    const bool & _arg)
  {
    this->name_exists = _arg;
    return *this;
  }
  Type & set__intersection_state_list(
    const std::vector<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>::other> & _arg)
  {
    this->intersection_state_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::SPAT_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::SPAT_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::SPAT_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::SPAT_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::SPAT_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::SPAT_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::SPAT_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::SPAT_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::SPAT_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::SPAT_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__SPAT
    std::shared_ptr<carma_v2x_msgs::msg::SPAT_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__SPAT
    std::shared_ptr<carma_v2x_msgs::msg::SPAT_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SPAT_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->time_stamp_exists != other.time_stamp_exists) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->name_exists != other.name_exists) {
      return false;
    }
    if (this->intersection_state_list != other.intersection_state_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const SPAT_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SPAT_

// alias to use template instance with default allocator
using SPAT =
  carma_v2x_msgs::msg::SPAT_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_HPP_
