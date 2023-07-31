// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/TrailerWeight.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__TrailerWeight __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__TrailerWeight __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrailerWeight_
{
  using Type = TrailerWeight_<ContainerAllocator>;

  explicit TrailerWeight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trailer_weight = 0.0;
    }
  }

  explicit TrailerWeight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trailer_weight = 0.0;
    }
  }

  // field types and members
  using _trailer_weight_type =
    double;
  _trailer_weight_type trailer_weight;

  // setters for named parameter idiom
  Type & set__trailer_weight(
    const double & _arg)
  {
    this->trailer_weight = _arg;
    return *this;
  }

  // constant declarations
  static constexpr double TRAILER_WEIGHT_MAX =
    128510.0;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__TrailerWeight
    std::shared_ptr<carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__TrailerWeight
    std::shared_ptr<carma_v2x_msgs::msg::TrailerWeight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrailerWeight_ & other) const
  {
    if (this->trailer_weight != other.trailer_weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrailerWeight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrailerWeight_

// alias to use template instance with default allocator
using TrailerWeight =
  carma_v2x_msgs::msg::TrailerWeight_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr double TrailerWeight_<ContainerAllocator>::TRAILER_WEIGHT_MAX;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__STRUCT_HPP_
