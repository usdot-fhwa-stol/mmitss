// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/LocationECEF.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_ECEF__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_ECEF__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__LocationECEF __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__LocationECEF __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocationECEF_
{
  using Type = LocationECEF_<ContainerAllocator>;

  explicit LocationECEF_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ecef_x = 0l;
      this->ecef_y = 0l;
      this->ecef_z = 0l;
      this->timestamp = 0ull;
    }
  }

  explicit LocationECEF_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ecef_x = 0l;
      this->ecef_y = 0l;
      this->ecef_z = 0l;
      this->timestamp = 0ull;
    }
  }

  // field types and members
  using _ecef_x_type =
    int32_t;
  _ecef_x_type ecef_x;
  using _ecef_y_type =
    int32_t;
  _ecef_y_type ecef_y;
  using _ecef_z_type =
    int32_t;
  _ecef_z_type ecef_z;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__ecef_x(
    const int32_t & _arg)
  {
    this->ecef_x = _arg;
    return *this;
  }
  Type & set__ecef_y(
    const int32_t & _arg)
  {
    this->ecef_y = _arg;
    return *this;
  }
  Type & set__ecef_z(
    const int32_t & _arg)
  {
    this->ecef_z = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__LocationECEF
    std::shared_ptr<carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__LocationECEF
    std::shared_ptr<carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocationECEF_ & other) const
  {
    if (this->ecef_x != other.ecef_x) {
      return false;
    }
    if (this->ecef_y != other.ecef_y) {
      return false;
    }
    if (this->ecef_z != other.ecef_z) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocationECEF_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocationECEF_

// alias to use template instance with default allocator
using LocationECEF =
  carma_v2x_msgs::msg::LocationECEF_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_ECEF__STRUCT_HPP_
