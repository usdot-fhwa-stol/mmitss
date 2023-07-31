// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/WiperRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__WiperRate __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__WiperRate __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WiperRate_
{
  using Type = WiperRate_<ContainerAllocator>;

  explicit WiperRate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wiper_rate = 0.0f;
    }
  }

  explicit WiperRate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wiper_rate = 0.0f;
    }
  }

  // field types and members
  using _wiper_rate_type =
    float;
  _wiper_rate_type wiper_rate;

  // setters for named parameter idiom
  Type & set__wiper_rate(
    const float & _arg)
  {
    this->wiper_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float WIPER_RATE_MIN =
    0.0;
  static constexpr float WIPER_RATE_MAX =
    2.12;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::WiperRate_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::WiperRate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::WiperRate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::WiperRate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::WiperRate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::WiperRate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::WiperRate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::WiperRate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::WiperRate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::WiperRate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__WiperRate
    std::shared_ptr<carma_v2x_msgs::msg::WiperRate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__WiperRate
    std::shared_ptr<carma_v2x_msgs::msg::WiperRate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WiperRate_ & other) const
  {
    if (this->wiper_rate != other.wiper_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const WiperRate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WiperRate_

// alias to use template instance with default allocator
using WiperRate =
  carma_v2x_msgs::msg::WiperRate_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float WiperRate_<ContainerAllocator>::WIPER_RATE_MIN;
template<typename ContainerAllocator>
constexpr float WiperRate_<ContainerAllocator>::WIPER_RATE_MAX;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_HPP_
