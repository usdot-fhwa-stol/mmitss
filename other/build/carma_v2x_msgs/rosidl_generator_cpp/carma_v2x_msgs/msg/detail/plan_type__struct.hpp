// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/PlanType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PLAN_TYPE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PLAN_TYPE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__PlanType __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__PlanType __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanType_
{
  using Type = PlanType_<ContainerAllocator>;

  explicit PlanType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit PlanType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t CHANGE_LANE_LEFT =
    1u;
  static constexpr uint8_t CHANGE_LANE_RIGHT =
    2u;
  static constexpr uint8_t JOIN_PLATOON_AT_REAR =
    3u;
  static constexpr uint8_t PLATOON_FOLLOWER_JOIN =
    4u;
  static constexpr uint8_t JOIN_PLATOON_FROM_FRONT =
    5u;
  static constexpr uint8_t PLATOON_FRONT_JOIN =
    6u;
  static constexpr uint8_t CUT_IN_FROM_SIDE =
    7u;
  static constexpr uint8_t PLATOON_CUT_IN_JOIN =
    8u;
  static constexpr uint8_t STOP_CREATE_GAP =
    9u;
  static constexpr uint8_t CUT_IN_FRONT_DONE =
    10u;
  static constexpr uint8_t CUT_IN_MID_OR_REAR_DONE =
    11u;
  static constexpr uint8_t PLATOON_DEPARTURE =
    12u;
  static constexpr uint8_t DELETE_MEMBER =
    13u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::PlanType_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::PlanType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PlanType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PlanType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PlanType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PlanType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PlanType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PlanType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PlanType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PlanType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__PlanType
    std::shared_ptr<carma_v2x_msgs::msg::PlanType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__PlanType
    std::shared_ptr<carma_v2x_msgs::msg::PlanType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanType_

// alias to use template instance with default allocator
using PlanType =
  carma_v2x_msgs::msg::PlanType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::CHANGE_LANE_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::CHANGE_LANE_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::JOIN_PLATOON_AT_REAR;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::PLATOON_FOLLOWER_JOIN;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::JOIN_PLATOON_FROM_FRONT;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::PLATOON_FRONT_JOIN;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::CUT_IN_FROM_SIDE;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::PLATOON_CUT_IN_JOIN;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::STOP_CREATE_GAP;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::CUT_IN_FRONT_DONE;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::CUT_IN_MID_OR_REAR_DONE;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::PLATOON_DEPARTURE;
template<typename ContainerAllocator>
constexpr uint8_t PlanType_<ContainerAllocator>::DELETE_MEMBER;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PLAN_TYPE__STRUCT_HPP_
