// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/UpcomingLaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__UPCOMING_LANE_CHANGE_STATUS__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__UPCOMING_LANE_CHANGE_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__UpcomingLaneChangeStatus __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__UpcomingLaneChangeStatus __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpcomingLaneChangeStatus_
{
  using Type = UpcomingLaneChangeStatus_<ContainerAllocator>;

  explicit UpcomingLaneChangeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->downtrack_until_lanechange = 0.0;
      this->lane_change = 0;
    }
  }

  explicit UpcomingLaneChangeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->downtrack_until_lanechange = 0.0;
      this->lane_change = 0;
    }
  }

  // field types and members
  using _downtrack_until_lanechange_type =
    double;
  _downtrack_until_lanechange_type downtrack_until_lanechange;
  using _lane_change_type =
    uint8_t;
  _lane_change_type lane_change;

  // setters for named parameter idiom
  Type & set__downtrack_until_lanechange(
    const double & _arg)
  {
    this->downtrack_until_lanechange = _arg;
    return *this;
  }
  Type & set__lane_change(
    const uint8_t & _arg)
  {
    this->lane_change = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t LEFT =
    1u;
  static constexpr uint8_t RIGHT =
    2u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__UpcomingLaneChangeStatus
    std::shared_ptr<carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__UpcomingLaneChangeStatus
    std::shared_ptr<carma_planning_msgs::msg::UpcomingLaneChangeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpcomingLaneChangeStatus_ & other) const
  {
    if (this->downtrack_until_lanechange != other.downtrack_until_lanechange) {
      return false;
    }
    if (this->lane_change != other.lane_change) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpcomingLaneChangeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpcomingLaneChangeStatus_

// alias to use template instance with default allocator
using UpcomingLaneChangeStatus =
  carma_planning_msgs::msg::UpcomingLaneChangeStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t UpcomingLaneChangeStatus_<ContainerAllocator>::NONE;
template<typename ContainerAllocator>
constexpr uint8_t UpcomingLaneChangeStatus_<ContainerAllocator>::LEFT;
template<typename ContainerAllocator>
constexpr uint8_t UpcomingLaneChangeStatus_<ContainerAllocator>::RIGHT;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__UPCOMING_LANE_CHANGE_STATUS__STRUCT_HPP_
