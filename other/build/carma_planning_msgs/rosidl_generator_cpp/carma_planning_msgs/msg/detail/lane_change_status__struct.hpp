// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/LaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__LaneChangeStatus __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__LaneChangeStatus __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneChangeStatus_
{
  using Type = LaneChangeStatus_<ContainerAllocator>;

  explicit LaneChangeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->description = "";
    }
  }

  explicit LaneChangeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->description = "";
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PLAN_SENT =
    1u;
  static constexpr uint8_t REQUEST_RECEIVED =
    2u;
  static constexpr uint8_t REQUEST_ACCEPTED =
    3u;
  static constexpr uint8_t REQUEST_REJECTED =
    4u;
  static constexpr uint8_t RESPONSE_SENT =
    5u;
  static constexpr uint8_t ACCEPTANCE_RECEIVED =
    6u;
  static constexpr uint8_t REJECTION_RECEIVED =
    7u;
  static constexpr uint8_t OTHER_RECEIVED =
    8u;
  static constexpr uint8_t PLANNING_SUCCESS =
    9u;
  static constexpr uint8_t TIMED_OUT =
    10u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__LaneChangeStatus
    std::shared_ptr<carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__LaneChangeStatus
    std::shared_ptr<carma_planning_msgs::msg::LaneChangeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneChangeStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneChangeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneChangeStatus_

// alias to use template instance with default allocator
using LaneChangeStatus =
  carma_planning_msgs::msg::LaneChangeStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::PLAN_SENT;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::REQUEST_RECEIVED;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::REQUEST_ACCEPTED;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::REQUEST_REJECTED;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::RESPONSE_SENT;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::ACCEPTANCE_RECEIVED;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::REJECTION_RECEIVED;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::OTHER_RECEIVED;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::PLANNING_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t LaneChangeStatus_<ContainerAllocator>::TIMED_OUT;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_HPP_
