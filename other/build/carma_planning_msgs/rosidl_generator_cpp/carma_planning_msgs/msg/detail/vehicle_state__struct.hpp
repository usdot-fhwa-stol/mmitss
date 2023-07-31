// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__VehicleState __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos_global = 0.0;
      this->y_pos_global = 0.0;
      this->orientation = 0.0;
      this->longitudinal_vel = 0.0;
      this->lateral_vel = 0.0;
      this->yaw_rate = 0.0;
      this->front_wheel_rotation_rate = 0.0;
      this->rear_wheel_rotation_rate = 0.0;
      this->steering_angle = 0.0;
      this->trailer_angle = 0.0;
      this->prev_vel_cmd = 0.0;
      this->prev_steering_cmd = 0.0;
    }
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_pos_global = 0.0;
      this->y_pos_global = 0.0;
      this->orientation = 0.0;
      this->longitudinal_vel = 0.0;
      this->lateral_vel = 0.0;
      this->yaw_rate = 0.0;
      this->front_wheel_rotation_rate = 0.0;
      this->rear_wheel_rotation_rate = 0.0;
      this->steering_angle = 0.0;
      this->trailer_angle = 0.0;
      this->prev_vel_cmd = 0.0;
      this->prev_steering_cmd = 0.0;
    }
  }

  // field types and members
  using _x_pos_global_type =
    double;
  _x_pos_global_type x_pos_global;
  using _y_pos_global_type =
    double;
  _y_pos_global_type y_pos_global;
  using _orientation_type =
    double;
  _orientation_type orientation;
  using _longitudinal_vel_type =
    double;
  _longitudinal_vel_type longitudinal_vel;
  using _lateral_vel_type =
    double;
  _lateral_vel_type lateral_vel;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _front_wheel_rotation_rate_type =
    double;
  _front_wheel_rotation_rate_type front_wheel_rotation_rate;
  using _rear_wheel_rotation_rate_type =
    double;
  _rear_wheel_rotation_rate_type rear_wheel_rotation_rate;
  using _steering_angle_type =
    double;
  _steering_angle_type steering_angle;
  using _trailer_angle_type =
    double;
  _trailer_angle_type trailer_angle;
  using _prev_vel_cmd_type =
    double;
  _prev_vel_cmd_type prev_vel_cmd;
  using _prev_steering_cmd_type =
    double;
  _prev_steering_cmd_type prev_steering_cmd;

  // setters for named parameter idiom
  Type & set__x_pos_global(
    const double & _arg)
  {
    this->x_pos_global = _arg;
    return *this;
  }
  Type & set__y_pos_global(
    const double & _arg)
  {
    this->y_pos_global = _arg;
    return *this;
  }
  Type & set__orientation(
    const double & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__longitudinal_vel(
    const double & _arg)
  {
    this->longitudinal_vel = _arg;
    return *this;
  }
  Type & set__lateral_vel(
    const double & _arg)
  {
    this->lateral_vel = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__front_wheel_rotation_rate(
    const double & _arg)
  {
    this->front_wheel_rotation_rate = _arg;
    return *this;
  }
  Type & set__rear_wheel_rotation_rate(
    const double & _arg)
  {
    this->rear_wheel_rotation_rate = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const double & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }
  Type & set__trailer_angle(
    const double & _arg)
  {
    this->trailer_angle = _arg;
    return *this;
  }
  Type & set__prev_vel_cmd(
    const double & _arg)
  {
    this->prev_vel_cmd = _arg;
    return *this;
  }
  Type & set__prev_steering_cmd(
    const double & _arg)
  {
    this->prev_steering_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__VehicleState
    std::shared_ptr<carma_planning_msgs::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__VehicleState
    std::shared_ptr<carma_planning_msgs::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->x_pos_global != other.x_pos_global) {
      return false;
    }
    if (this->y_pos_global != other.y_pos_global) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->longitudinal_vel != other.longitudinal_vel) {
      return false;
    }
    if (this->lateral_vel != other.lateral_vel) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->front_wheel_rotation_rate != other.front_wheel_rotation_rate) {
      return false;
    }
    if (this->rear_wheel_rotation_rate != other.rear_wheel_rotation_rate) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    if (this->trailer_angle != other.trailer_angle) {
      return false;
    }
    if (this->prev_vel_cmd != other.prev_vel_cmd) {
      return false;
    }
    if (this->prev_steering_cmd != other.prev_steering_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  carma_planning_msgs::msg::VehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
