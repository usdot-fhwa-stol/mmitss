// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_localization_msgs:msg/LocalizationStatusReport.idl
// generated code does not contain a copyright notice

#ifndef CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__STRUCT_HPP_
#define CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__carma_localization_msgs__msg__LocalizationStatusReport __attribute__((deprecated))
#else
# define DEPRECATED__carma_localization_msgs__msg__LocalizationStatusReport __declspec(deprecated)
#endif

namespace carma_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalizationStatusReport_
{
  using Type = LocalizationStatusReport_<ContainerAllocator>;

  explicit LocalizationStatusReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit LocalizationStatusReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNINITIALIZED =
    0u;
  static constexpr uint8_t INITIALIZING =
    1u;
  static constexpr uint8_t OPERATIONAL =
    2u;
  static constexpr uint8_t DEGRADED =
    3u;
  static constexpr uint8_t DEGRADED_NO_LIDAR_FIX =
    4u;
  static constexpr uint8_t AWAIT_MANUAL_INITIALIZATION =
    5u;

  // pointer types
  using RawPtr =
    carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_localization_msgs__msg__LocalizationStatusReport
    std::shared_ptr<carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_localization_msgs__msg__LocalizationStatusReport
    std::shared_ptr<carma_localization_msgs::msg::LocalizationStatusReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizationStatusReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizationStatusReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizationStatusReport_

// alias to use template instance with default allocator
using LocalizationStatusReport =
  carma_localization_msgs::msg::LocalizationStatusReport_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LocalizationStatusReport_<ContainerAllocator>::UNINITIALIZED;
template<typename ContainerAllocator>
constexpr uint8_t LocalizationStatusReport_<ContainerAllocator>::INITIALIZING;
template<typename ContainerAllocator>
constexpr uint8_t LocalizationStatusReport_<ContainerAllocator>::OPERATIONAL;
template<typename ContainerAllocator>
constexpr uint8_t LocalizationStatusReport_<ContainerAllocator>::DEGRADED;
template<typename ContainerAllocator>
constexpr uint8_t LocalizationStatusReport_<ContainerAllocator>::DEGRADED_NO_LIDAR_FIX;
template<typename ContainerAllocator>
constexpr uint8_t LocalizationStatusReport_<ContainerAllocator>::AWAIT_MANUAL_INITIALIZATION;

}  // namespace msg

}  // namespace carma_localization_msgs

#endif  // CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__STRUCT_HPP_
