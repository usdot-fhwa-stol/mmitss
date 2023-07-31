// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ITISIncidentResponseEquipment.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_INCIDENT_RESPONSE_EQUIPMENT__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_INCIDENT_RESPONSE_EQUIPMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ITISIncidentResponseEquipment __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ITISIncidentResponseEquipment __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ITISIncidentResponseEquipment_
{
  using Type = ITISIncidentResponseEquipment_<ContainerAllocator>;

  explicit ITISIncidentResponseEquipment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->incident_response_equipment = 0;
    }
  }

  explicit ITISIncidentResponseEquipment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->incident_response_equipment = 0;
    }
  }

  // field types and members
  using _incident_response_equipment_type =
    uint16_t;
  _incident_response_equipment_type incident_response_equipment;

  // setters for named parameter idiom
  Type & set__incident_response_equipment(
    const uint16_t & _arg)
  {
    this->incident_response_equipment = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t GROUND_FIRE_SUPPRESSION =
    9985u;
  static constexpr uint16_t HEAVY_GROUND_EQUIPMENT =
    9986u;
  static constexpr uint16_t AIRCRAFT =
    9988u;
  static constexpr uint16_t MARINE_EQUIPMENT =
    9989u;
  static constexpr uint16_t SUPPORT_EQUIPMENT =
    9990u;
  static constexpr uint16_t MEDICAL_RESCUE_UNIT =
    9991u;
  static constexpr uint16_t OTHER =
    9993u;
  static constexpr uint16_t GROUND_FIRE_SUPPRESSION_OTHER =
    9994u;
  static constexpr uint16_t ENGINE =
    9995u;
  static constexpr uint16_t TRUCK_OR_AERIAL =
    9996u;
  static constexpr uint16_t QUINT =
    9997u;
  static constexpr uint16_t TANKER_PUMPER_COMBINATION =
    9998u;
  static constexpr uint16_t BRUSH_TRUCK =
    10000u;
  static constexpr uint16_t AIRCRAFT_RESCUE_FIREFIGHTING =
    10001u;
  static constexpr uint16_t HEAVY_GROUND_EQUIPMENT_OTHER =
    10004u;
  static constexpr uint16_t DOZER_OR_PLOW =
    10005u;
  static constexpr uint16_t TRACTOR =
    10006u;
  static constexpr uint16_t TANKER_OR_TENDER =
    10008u;
  static constexpr uint16_t AIRCRAFT_OTHER =
    10024u;
  static constexpr uint16_t AIRCRAFT_FIXED_WING_TANKER =
    10025u;
  static constexpr uint16_t HELITANKER =
    10026u;
  static constexpr uint16_t HELICOPTER =
    10027u;
  static constexpr uint16_t MARINE_EQUIPMENT_OTHER =
    10034u;
  static constexpr uint16_t FIRE_BOAT_WITH_PUMP =
    10035u;
  static constexpr uint16_t BOAT_NO_PUMP =
    10036u;
  static constexpr uint16_t SUPPORT_APPARATUS_OTHER =
    10044u;
  static constexpr uint16_t BREATHING_APPARATUS_SUPPORT =
    10045u;
  static constexpr uint16_t LIGHT_AND_AIR_UNIT =
    10046u;
  static constexpr uint16_t MEDICAL_RESCUE_UNIT_OTHER =
    10054u;
  static constexpr uint16_t RESCUE_UNIT =
    10055u;
  static constexpr uint16_t URBAN_SEARCH_RESCUE_UNIT =
    10056u;
  static constexpr uint16_t HIGH_ANGLE_RESCUE =
    10057u;
  static constexpr uint16_t CRASH_FIRE_RESCUE =
    10058u;
  static constexpr uint16_t BLS_UNIT =
    10059u;
  static constexpr uint16_t ALS_UNIT =
    10060u;
  static constexpr uint16_t MOBILE_COMMAND_POST =
    10075u;
  static constexpr uint16_t CHIEF_OFFICER_CAR =
    10076u;
  static constexpr uint16_t HAZMAT_UNIT =
    10077u;
  static constexpr uint16_t TYPE_I_HAND_CREW =
    10078u;
  static constexpr uint16_t TYPE_II_HAND_CREW =
    10079u;
  static constexpr uint16_t PRIVATELY_OWNED_VEHICLE =
    10083u;
  static constexpr uint16_t OTHER_APPARATUS_RESOURCE =
    10084u;
  static constexpr uint16_t AMBULANCE =
    10085u;
  static constexpr uint16_t BOMB_SQUAD_VAN =
    10086u;
  static constexpr uint16_t COMBINE_HARVESTER =
    10087u;
  static constexpr uint16_t CONSTRUCTION_VEHICLE =
    10088u;
  static constexpr uint16_t FARM_TRACTOR =
    10089u;
  static constexpr uint16_t GRASS_CUTTING_MACHINES =
    10090u;
  static constexpr uint16_t HAZMAT_CONTAINMENT_TOW =
    10091u;
  static constexpr uint16_t HEAVY_TOW =
    10092u;
  static constexpr uint16_t LIGHT_TOW =
    10094u;
  static constexpr uint16_t FLATBED_TOW =
    10114u;
  static constexpr uint16_t HEDGE_CUTTING_MACHINES =
    10093u;
  static constexpr uint16_t MOBILE_CRANE =
    10095u;
  static constexpr uint16_t REFUSE_COLLECTION_VEHICLE =
    10096u;
  static constexpr uint16_t RESURFACING_VEHICLE =
    10097u;
  static constexpr uint16_t ROAD_SWEEPER =
    10098u;
  static constexpr uint16_t ROADSIDE_LITTER_COLLECTION_CREWS =
    10099u;
  static constexpr uint16_t SALVAGE_VEHICLE =
    10100u;
  static constexpr uint16_t SAND_TRUCK =
    10101u;
  static constexpr uint16_t SNOWPLOW =
    10102u;
  static constexpr uint16_t STEAM_ROLLER =
    10103u;
  static constexpr uint16_t SWAT_TEAM_VAN =
    10104u;
  static constexpr uint16_t TRACK_LAYING_VEHICLE =
    10105u;
  static constexpr uint16_t UNKNOWN_VEHICLE =
    10106u;
  static constexpr uint16_t WHITE_LINING_VEHICLE =
    10107u;
  static constexpr uint16_t DUMP_TRUCK =
    10108u;
  static constexpr uint16_t SUPERVISOR_VEHICLE =
    10109u;
  static constexpr uint16_t SNOW_BLOWER =
    10110u;
  static constexpr uint16_t ROTARY_SNOW_BLOWER =
    10111u;
  static constexpr uint16_t ROAD_GRADER =
    10112u;
  static constexpr uint16_t STEAM_TRUCK =
    10113u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ITISIncidentResponseEquipment
    std::shared_ptr<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ITISIncidentResponseEquipment
    std::shared_ptr<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ITISIncidentResponseEquipment_ & other) const
  {
    if (this->incident_response_equipment != other.incident_response_equipment) {
      return false;
    }
    return true;
  }
  bool operator!=(const ITISIncidentResponseEquipment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ITISIncidentResponseEquipment_

// alias to use template instance with default allocator
using ITISIncidentResponseEquipment =
  j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::GROUND_FIRE_SUPPRESSION;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::HEAVY_GROUND_EQUIPMENT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::AIRCRAFT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::MARINE_EQUIPMENT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::SUPPORT_EQUIPMENT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::MEDICAL_RESCUE_UNIT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::OTHER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::GROUND_FIRE_SUPPRESSION_OTHER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::ENGINE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::TRUCK_OR_AERIAL;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::QUINT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::TANKER_PUMPER_COMBINATION;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::BRUSH_TRUCK;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::AIRCRAFT_RESCUE_FIREFIGHTING;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::HEAVY_GROUND_EQUIPMENT_OTHER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::DOZER_OR_PLOW;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::TRACTOR;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::TANKER_OR_TENDER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::AIRCRAFT_OTHER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::AIRCRAFT_FIXED_WING_TANKER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::HELITANKER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::HELICOPTER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::MARINE_EQUIPMENT_OTHER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::FIRE_BOAT_WITH_PUMP;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::BOAT_NO_PUMP;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::SUPPORT_APPARATUS_OTHER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::BREATHING_APPARATUS_SUPPORT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::LIGHT_AND_AIR_UNIT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::MEDICAL_RESCUE_UNIT_OTHER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::RESCUE_UNIT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::URBAN_SEARCH_RESCUE_UNIT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::HIGH_ANGLE_RESCUE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::CRASH_FIRE_RESCUE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::BLS_UNIT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::ALS_UNIT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::MOBILE_COMMAND_POST;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::CHIEF_OFFICER_CAR;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::HAZMAT_UNIT;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::TYPE_I_HAND_CREW;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::TYPE_II_HAND_CREW;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::PRIVATELY_OWNED_VEHICLE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::OTHER_APPARATUS_RESOURCE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::AMBULANCE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::BOMB_SQUAD_VAN;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::COMBINE_HARVESTER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::CONSTRUCTION_VEHICLE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::FARM_TRACTOR;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::GRASS_CUTTING_MACHINES;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::HAZMAT_CONTAINMENT_TOW;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::HEAVY_TOW;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::LIGHT_TOW;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::FLATBED_TOW;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::HEDGE_CUTTING_MACHINES;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::MOBILE_CRANE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::REFUSE_COLLECTION_VEHICLE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::RESURFACING_VEHICLE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::ROAD_SWEEPER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::ROADSIDE_LITTER_COLLECTION_CREWS;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::SALVAGE_VEHICLE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::SAND_TRUCK;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::SNOWPLOW;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::STEAM_ROLLER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::SWAT_TEAM_VAN;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::TRACK_LAYING_VEHICLE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::UNKNOWN_VEHICLE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::WHITE_LINING_VEHICLE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::DUMP_TRUCK;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::SUPERVISOR_VEHICLE;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::SNOW_BLOWER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::ROTARY_SNOW_BLOWER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::ROAD_GRADER;
template<typename ContainerAllocator>
constexpr uint16_t ITISIncidentResponseEquipment_<ContainerAllocator>::STEAM_TRUCK;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_INCIDENT_RESPONSE_EQUIPMENT__STRUCT_HPP_
