// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/LaneChangeInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_INFO__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__LaneChangeInfo __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__LaneChangeInfo __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneChangeInfo_
{
  using Type = LaneChangeInfo_<ContainerAllocator>;

  explicit LaneChangeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->distance_to_lanechange = 0.0f;
    }
  }

  explicit LaneChangeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->distance_to_lanechange = 0.0f;
    }
  }

  // field types and members
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _distance_to_lanechange_type =
    float;
  _distance_to_lanechange_type distance_to_lanechange;

  // setters for named parameter idiom
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__distance_to_lanechange(
    const float & _arg)
  {
    this->distance_to_lanechange = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TOLEFT =
    0u;
  static constexpr uint8_t TORIGHT =
    1u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__LaneChangeInfo
    std::shared_ptr<carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__LaneChangeInfo
    std::shared_ptr<carma_planning_msgs::msg::LaneChangeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneChangeInfo_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->distance_to_lanechange != other.distance_to_lanechange) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneChangeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneChangeInfo_

// alias to use template instance with default allocator
using LaneChangeInfo =
  carma_planning_msgs::msg::LaneChangeInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeInfo_<ContainerAllocator>::TOLEFT;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeInfo_<ContainerAllocator>::TORIGHT;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_INFO__STRUCT_HPP_
