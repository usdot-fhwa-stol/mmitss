// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_perception_msgs:msg/ExternalObjectList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT_LIST__STRUCT_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT_LIST__STRUCT_HPP_

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
// Member 'objects'
#include "carma_perception_msgs/msg/detail/external_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_perception_msgs__msg__ExternalObjectList __attribute__((deprecated))
#else
# define DEPRECATED__carma_perception_msgs__msg__ExternalObjectList __declspec(deprecated)
#endif

namespace carma_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExternalObjectList_
{
  using Type = ExternalObjectList_<ContainerAllocator>;

  explicit ExternalObjectList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ExternalObjectList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _objects_type =
    std::vector<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>>::other>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>>::other> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_perception_msgs__msg__ExternalObjectList
    std::shared_ptr<carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_perception_msgs__msg__ExternalObjectList
    std::shared_ptr<carma_perception_msgs::msg::ExternalObjectList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalObjectList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalObjectList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalObjectList_

// alias to use template instance with default allocator
using ExternalObjectList =
  carma_perception_msgs::msg::ExternalObjectList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT_LIST__STRUCT_HPP_
