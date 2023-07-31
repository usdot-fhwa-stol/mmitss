// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'reftime'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'nodes'
#include "carma_v2x_msgs/msg/detail/path_node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlGeometry __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlGeometry __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlGeometry_
{
  using Type = TrafficControlGeometry_<ContainerAllocator>;

  explicit TrafficControlGeometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reftime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->proj = "";
      this->datum = "";
      this->reflon = 0.0;
      this->reflat = 0.0;
      this->refelv = 0.0f;
      this->heading = 0.0f;
    }
  }

  explicit TrafficControlGeometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : proj(_alloc),
    datum(_alloc),
    reftime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->proj = "";
      this->datum = "";
      this->reflon = 0.0;
      this->reflat = 0.0;
      this->refelv = 0.0f;
      this->heading = 0.0f;
    }
  }

  // field types and members
  using _proj_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _proj_type proj;
  using _datum_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _datum_type datum;
  using _reftime_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _reftime_type reftime;
  using _reflon_type =
    double;
  _reflon_type reflon;
  using _reflat_type =
    double;
  _reflat_type reflat;
  using _refelv_type =
    float;
  _refelv_type refelv;
  using _heading_type =
    float;
  _heading_type heading;
  using _nodes_type =
    std::vector<carma_v2x_msgs::msg::PathNode_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::PathNode_<ContainerAllocator>>::other>;
  _nodes_type nodes;

  // setters for named parameter idiom
  Type & set__proj(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->proj = _arg;
    return *this;
  }
  Type & set__datum(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->datum = _arg;
    return *this;
  }
  Type & set__reftime(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->reftime = _arg;
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
  Type & set__refelv(
    const float & _arg)
  {
    this->refelv = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__nodes(
    const std::vector<carma_v2x_msgs::msg::PathNode_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::PathNode_<ContainerAllocator>>::other> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlGeometry
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlGeometry
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlGeometry_ & other) const
  {
    if (this->proj != other.proj) {
      return false;
    }
    if (this->datum != other.datum) {
      return false;
    }
    if (this->reftime != other.reftime) {
      return false;
    }
    if (this->reflon != other.reflon) {
      return false;
    }
    if (this->reflat != other.reflat) {
      return false;
    }
    if (this->refelv != other.refelv) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->nodes != other.nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlGeometry_

// alias to use template instance with default allocator
using TrafficControlGeometry =
  carma_v2x_msgs::msg::TrafficControlGeometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_HPP_
