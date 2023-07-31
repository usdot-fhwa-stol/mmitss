// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'oldest'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'offsets'
#include "carma_v2x_msgs/msg/detail/offset_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlBounds __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlBounds __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlBounds_
{
  using Type = TrafficControlBounds_<ContainerAllocator>;

  explicit TrafficControlBounds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : oldest(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reflon = 0.0;
      this->reflat = 0.0;
      this->offsets.fill(carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>{_init});
    }
  }

  explicit TrafficControlBounds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : oldest(_alloc, _init),
    offsets(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reflon = 0.0;
      this->reflat = 0.0;
      this->offsets.fill(carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _oldest_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _oldest_type oldest;
  using _reflon_type =
    double;
  _reflon_type reflon;
  using _reflat_type =
    double;
  _reflat_type reflat;
  using _offsets_type =
    std::array<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>, 3>;
  _offsets_type offsets;

  // setters for named parameter idiom
  Type & set__oldest(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->oldest = _arg;
    return *this;
  }
  Type & set__reflon(
    const double & _arg)
  {
    this->reflon = _arg;
    return *this;
  }
  Type & set__reflat(
    const double & _arg)
  {
    this->reflat = _arg;
    return *this;
  }
  Type & set__offsets(
    const std::array<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>, 3> & _arg)
  {
    this->offsets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlBounds
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlBounds
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlBounds_ & other) const
  {
    if (this->oldest != other.oldest) {
      return false;
    }
    if (this->reflon != other.reflon) {
      return false;
    }
    if (this->reflat != other.reflat) {
      return false;
    }
    if (this->offsets != other.offsets) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlBounds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlBounds_

// alias to use template instance with default allocator
using TrafficControlBounds =
  carma_v2x_msgs::msg::TrafficControlBounds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_HPP_
