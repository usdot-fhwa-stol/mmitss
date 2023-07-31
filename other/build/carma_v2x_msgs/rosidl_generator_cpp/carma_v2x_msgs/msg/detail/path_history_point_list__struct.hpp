// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/PathHistoryPointList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'points'
#include "carma_v2x_msgs/msg/detail/path_history_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__PathHistoryPointList __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__PathHistoryPointList __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathHistoryPointList_
{
  using Type = PathHistoryPointList_<ContainerAllocator>;

  explicit PathHistoryPointList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PathHistoryPointList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _points_type =
    std::vector<carma_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>>::other>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<carma_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MIN_SIZE =
    1u;
  static constexpr uint8_t MAX_SIZE =
    23u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__PathHistoryPointList
    std::shared_ptr<carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__PathHistoryPointList
    std::shared_ptr<carma_v2x_msgs::msg::PathHistoryPointList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathHistoryPointList_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathHistoryPointList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathHistoryPointList_

// alias to use template instance with default allocator
using PathHistoryPointList =
  carma_v2x_msgs::msg::PathHistoryPointList_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PathHistoryPointList_<ContainerAllocator>::MIN_SIZE;
template<typename ContainerAllocator>
constexpr uint8_t PathHistoryPointList_<ContainerAllocator>::MAX_SIZE;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__STRUCT_HPP_
