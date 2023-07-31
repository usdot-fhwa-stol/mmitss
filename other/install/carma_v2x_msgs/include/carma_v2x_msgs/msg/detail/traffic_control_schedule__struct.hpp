// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'start'
// Member 'end'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'dow'
#include "j2735_v2x_msgs/msg/detail/day_of_week__struct.hpp"
// Member 'between'
#include "carma_v2x_msgs/msg/detail/daily_schedule__struct.hpp"
// Member 'repeat'
#include "carma_v2x_msgs/msg/detail/repeat_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlSchedule __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlSchedule __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlSchedule_
{
  using Type = TrafficControlSchedule_<ContainerAllocator>;

  explicit TrafficControlSchedule_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    end(_init),
    dow(_init),
    repeat(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_exists = false;
      this->dow_exists = false;
      this->between_exists = false;
      this->repeat_exists = false;
    }
  }

  explicit TrafficControlSchedule_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    end(_alloc, _init),
    dow(_alloc, _init),
    repeat(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_exists = false;
      this->dow_exists = false;
      this->between_exists = false;
      this->repeat_exists = false;
    }
  }

  // field types and members
  using _start_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_type start;
  using _end_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_type end;
  using _end_exists_type =
    bool;
  _end_exists_type end_exists;
  using _dow_type =
    j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator>;
  _dow_type dow;
  using _dow_exists_type =
    bool;
  _dow_exists_type dow_exists;
  using _between_type =
    std::vector<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>::other>;
  _between_type between;
  using _between_exists_type =
    bool;
  _between_exists_type between_exists;
  using _repeat_type =
    carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator>;
  _repeat_type repeat;
  using _repeat_exists_type =
    bool;
  _repeat_exists_type repeat_exists;

  // setters for named parameter idiom
  Type & set__start(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__end(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
    return *this;
  }
  Type & set__end_exists(
    const bool & _arg)
  {
    this->end_exists = _arg;
    return *this;
  }
  Type & set__dow(
    const j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator> & _arg)
  {
    this->dow = _arg;
    return *this;
  }
  Type & set__dow_exists(
    const bool & _arg)
  {
    this->dow_exists = _arg;
    return *this;
  }
  Type & set__between(
    const std::vector<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>::other> & _arg)
  {
    this->between = _arg;
    return *this;
  }
  Type & set__between_exists(
    const bool & _arg)
  {
    this->between_exists = _arg;
    return *this;
  }
  Type & set__repeat(
    const carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator> & _arg)
  {
    this->repeat = _arg;
    return *this;
  }
  Type & set__repeat_exists(
    const bool & _arg)
  {
    this->repeat_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlSchedule
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlSchedule
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlSchedule_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlSchedule_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    if (this->end_exists != other.end_exists) {
      return false;
    }
    if (this->dow != other.dow) {
      return false;
    }
    if (this->dow_exists != other.dow_exists) {
      return false;
    }
    if (this->between != other.between) {
      return false;
    }
    if (this->between_exists != other.between_exists) {
      return false;
    }
    if (this->repeat != other.repeat) {
      return false;
    }
    if (this->repeat_exists != other.repeat_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlSchedule_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlSchedule_

// alias to use template instance with default allocator
using TrafficControlSchedule =
  carma_v2x_msgs::msg::TrafficControlSchedule_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__STRUCT_HPP_
