// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/LocationOffsetECEF.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_OFFSET_ECEF__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_OFFSET_ECEF__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__LocationOffsetECEF __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__LocationOffsetECEF __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocationOffsetECEF_
{
  using Type = LocationOffsetECEF_<ContainerAllocator>;

  explicit LocationOffsetECEF_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset_x = 0;
      this->offset_y = 0;
      this->offset_z = 0;
    }
  }

  explicit LocationOffsetECEF_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset_x = 0;
      this->offset_y = 0;
      this->offset_z = 0;
    }
  }

  // field types and members
  using _offset_x_type =
    int16_t;
  _offset_x_type offset_x;
  using _offset_y_type =
    int16_t;
  _offset_y_type offset_y;
  using _offset_z_type =
    int16_t;
  _offset_z_type offset_z;

  // setters for named parameter idiom
  Type & set__offset_x(
    const int16_t & _arg)
  {
    this->offset_x = _arg;
    return *this;
  }
  Type & set__offset_y(
    const int16_t & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }
  Type & set__offset_z(
    const int16_t & _arg)
  {
    this->offset_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__LocationOffsetECEF
    std::shared_ptr<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__LocationOffsetECEF
    std::shared_ptr<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocationOffsetECEF_ & other) const
  {
    if (this->offset_x != other.offset_x) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    if (this->offset_z != other.offset_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocationOffsetECEF_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocationOffsetECEF_

// alias to use template instance with default allocator
using LocationOffsetECEF =
  carma_v2x_msgs::msg::LocationOffsetECEF_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_OFFSET_ECEF__STRUCT_HPP_
