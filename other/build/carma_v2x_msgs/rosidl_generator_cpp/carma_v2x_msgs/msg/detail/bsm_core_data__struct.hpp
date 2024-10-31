// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'accuracy'
#include "carma_v2x_msgs/msg/detail/positional_accuracy__struct.hpp"
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__struct.hpp"
// Member 'accel_set'
#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__struct.hpp"
// Member 'brakes'
#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.hpp"
// Member 'size'
#include "carma_v2x_msgs/msg/detail/vehicle_size__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__BSMCoreData __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__BSMCoreData __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSMCoreData_
{
  using Type = BSMCoreData_<ContainerAllocator>;

  explicit BSMCoreData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accuracy(_init),
    transmission(_init),
    accel_set(_init),
    brakes(_init),
    size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_count = 0;
      this->presence_vector = 0;
      this->sec_mark = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->elev = 0.0f;
      this->speed = 0.0f;
      this->heading = 0.0f;
      this->angle = 0.0f;
    }
  }

  explicit BSMCoreData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accuracy(_alloc, _init),
    transmission(_alloc, _init),
    accel_set(_alloc, _init),
    brakes(_alloc, _init),
    size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_count = 0;
      this->presence_vector = 0;
      this->sec_mark = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->elev = 0.0f;
      this->speed = 0.0f;
      this->heading = 0.0f;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _msg_count_type =
    uint8_t;
  _msg_count_type msg_count;
  using _id_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _id_type id;
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _sec_mark_type =
    uint16_t;
  _sec_mark_type sec_mark;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _elev_type =
    float;
  _elev_type elev;
  using _accuracy_type =
    carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>;
  _accuracy_type accuracy;
  using _transmission_type =
    j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator>;
  _transmission_type transmission;
  using _speed_type =
    float;
  _speed_type speed;
  using _heading_type =
    float;
  _heading_type heading;
  using _angle_type =
    float;
  _angle_type angle;
  using _accel_set_type =
    carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>;
  _accel_set_type accel_set;
  using _brakes_type =
    j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator>;
  _brakes_type brakes;
  using _size_type =
    carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator>;
  _size_type size;

  // setters for named parameter idiom
  Type & set__msg_count(
    const uint8_t & _arg)
  {
    this->msg_count = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__sec_mark(
    const uint16_t & _arg)
  {
    this->sec_mark = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__elev(
    const float & _arg)
  {
    this->elev = _arg;
    return *this;
  }
  Type & set__accuracy(
    const carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__transmission(
    const j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator> & _arg)
  {
    this->transmission = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__accel_set(
    const carma_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> & _arg)
  {
    this->accel_set = _arg;
    return *this;
  }
  Type & set__brakes(
    const j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator> & _arg)
  {
    this->brakes = _arg;
    return *this;
  }
  Type & set__size(
    const carma_v2x_msgs::msg::VehicleSize_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t MSG_COUNT_MAX =
    127u;
  static constexpr uint16_t ID_TIME_MAX =
    3000u;
  static constexpr uint16_t SEC_MARK_AVAILABLE =
    1u;
  static constexpr uint16_t LATITUDE_AVAILABLE =
    2u;
  static constexpr uint16_t LONGITUDE_AVAILABLE =
    4u;
  static constexpr uint16_t ELEVATION_AVAILABLE =
    8u;
  static constexpr uint16_t SPEED_AVAILABLE =
    16u;
  static constexpr uint16_t HEADING_AVAILABLE =
    32u;
  static constexpr uint16_t STEER_WHEEL_ANGLE_AVAILABLE =
    64u;
  static constexpr uint16_t SEC_MARK_MOD =
    60000u;
  static constexpr double LATITUDE_MAX =
    90.0;
  static constexpr double LATITUDE_MIN =
    -90.0;
  static constexpr double LONGITUDE_MAX =
    180.0;
  static constexpr double LONGITUDE_MIN =
    -179.9999999;
  static constexpr float ELEVATION_MAX =
    6143.9;
  static constexpr float ELEVATION_MIN =
    -409.5;
  static constexpr float SPEED_MAX =
    163.8;
  static constexpr float SPEED_MIN =
    0.0;
  static constexpr float HEADING_MAX =
    359.9875;
  static constexpr float HEADING_MIN =
    0.0;
  static constexpr float STEER_WHEEL_ANGLE_MAX =
    189.0;
  static constexpr float STEER_WHEEL_ANGLE_MIN =
    -189.0;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__BSMCoreData
    std::shared_ptr<carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__BSMCoreData
    std::shared_ptr<carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSMCoreData_ & other) const
  {
    if (this->msg_count != other.msg_count) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->sec_mark != other.sec_mark) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->elev != other.elev) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->transmission != other.transmission) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->accel_set != other.accel_set) {
      return false;
    }
    if (this->brakes != other.brakes) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSMCoreData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSMCoreData_

// alias to use template instance with default allocator
using BSMCoreData =
  carma_v2x_msgs::msg::BSMCoreData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::MSG_COUNT_MAX;
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::ID_TIME_MAX;
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::SEC_MARK_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::LATITUDE_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::LONGITUDE_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::ELEVATION_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::SPEED_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::HEADING_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::STEER_WHEEL_ANGLE_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t BSMCoreData_<ContainerAllocator>::SEC_MARK_MOD;
template<typename ContainerAllocator>
constexpr double BSMCoreData_<ContainerAllocator>::LATITUDE_MAX;
template<typename ContainerAllocator>
constexpr double BSMCoreData_<ContainerAllocator>::LATITUDE_MIN;
template<typename ContainerAllocator>
constexpr double BSMCoreData_<ContainerAllocator>::LONGITUDE_MAX;
template<typename ContainerAllocator>
constexpr double BSMCoreData_<ContainerAllocator>::LONGITUDE_MIN;
template<typename ContainerAllocator>
constexpr float BSMCoreData_<ContainerAllocator>::ELEVATION_MAX;
template<typename ContainerAllocator>
constexpr float BSMCoreData_<ContainerAllocator>::ELEVATION_MIN;
template<typename ContainerAllocator>
constexpr float BSMCoreData_<ContainerAllocator>::SPEED_MAX;
template<typename ContainerAllocator>
constexpr float BSMCoreData_<ContainerAllocator>::SPEED_MIN;
template<typename ContainerAllocator>
constexpr float BSMCoreData_<ContainerAllocator>::HEADING_MAX;
template<typename ContainerAllocator>
constexpr float BSMCoreData_<ContainerAllocator>::HEADING_MIN;
template<typename ContainerAllocator>
constexpr float BSMCoreData_<ContainerAllocator>::STEER_WHEEL_ANGLE_MAX;
template<typename ContainerAllocator>
constexpr float BSMCoreData_<ContainerAllocator>::STEER_WHEEL_ANGLE_MIN;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_HPP_
