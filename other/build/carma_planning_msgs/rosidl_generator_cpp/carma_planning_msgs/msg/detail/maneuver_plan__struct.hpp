// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/ManeuverPlan.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__STRUCT_HPP_

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
// Member 'planning_start_time'
// Member 'planning_completion_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'maneuvers'
#include "carma_planning_msgs/msg/detail/maneuver__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__ManeuverPlan __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__ManeuverPlan __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManeuverPlan_
{
  using Type = ManeuverPlan_<ContainerAllocator>;

  explicit ManeuverPlan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    planning_start_time(_init),
    planning_completion_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_plan_id = "";
    }
  }

  explicit ManeuverPlan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    maneuver_plan_id(_alloc),
    planning_start_time(_alloc, _init),
    planning_completion_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_plan_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _maneuver_plan_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _maneuver_plan_id_type maneuver_plan_id;
  using _planning_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _planning_start_time_type planning_start_time;
  using _planning_completion_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _planning_completion_time_type planning_completion_time;
  using _maneuvers_type =
    std::vector<carma_planning_msgs::msg::Maneuver_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_planning_msgs::msg::Maneuver_<ContainerAllocator>>::other>;
  _maneuvers_type maneuvers;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__maneuver_plan_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->maneuver_plan_id = _arg;
    return *this;
  }
  Type & set__planning_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->planning_start_time = _arg;
    return *this;
  }
  Type & set__planning_completion_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->planning_completion_time = _arg;
    return *this;
  }
  Type & set__maneuvers(
    const std::vector<carma_planning_msgs::msg::Maneuver_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_planning_msgs::msg::Maneuver_<ContainerAllocator>>::other> & _arg)
  {
    this->maneuvers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__ManeuverPlan
    std::shared_ptr<carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__ManeuverPlan
    std::shared_ptr<carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManeuverPlan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->maneuver_plan_id != other.maneuver_plan_id) {
      return false;
    }
    if (this->planning_start_time != other.planning_start_time) {
      return false;
    }
    if (this->planning_completion_time != other.planning_completion_time) {
      return false;
    }
    if (this->maneuvers != other.maneuvers) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManeuverPlan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManeuverPlan_

// alias to use template instance with default allocator
using ManeuverPlan =
  carma_planning_msgs::msg::ManeuverPlan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__STRUCT_HPP_
