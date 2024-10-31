// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/TrailerHistoryPointList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'trailer_history_points'
#include "carma_v2x_msgs/msg/detail/trailer_history_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__TrailerHistoryPointList __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__TrailerHistoryPointList __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrailerHistoryPointList_
{
  using Type = TrailerHistoryPointList_<ContainerAllocator>;

  explicit TrailerHistoryPointList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TrailerHistoryPointList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _trailer_history_points_type =
    std::vector<carma_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>>::other>;
  _trailer_history_points_type trailer_history_points;

  // setters for named parameter idiom
  Type & set__trailer_history_points(
    const std::vector<carma_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>>::other> & _arg)
  {
    this->trailer_history_points = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MIN_SIZE =
    1u;
  static constexpr uint8_t MAX_SIZE =
    23u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__TrailerHistoryPointList
    std::shared_ptr<carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__TrailerHistoryPointList
    std::shared_ptr<carma_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrailerHistoryPointList_ & other) const
  {
    if (this->trailer_history_points != other.trailer_history_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrailerHistoryPointList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrailerHistoryPointList_

// alias to use template instance with default allocator
using TrailerHistoryPointList =
  carma_v2x_msgs::msg::TrailerHistoryPointList_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TrailerHistoryPointList_<ContainerAllocator>::MIN_SIZE;
template<typename ContainerAllocator>
constexpr uint8_t TrailerHistoryPointList_<ContainerAllocator>::MAX_SIZE;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__STRUCT_HPP_
