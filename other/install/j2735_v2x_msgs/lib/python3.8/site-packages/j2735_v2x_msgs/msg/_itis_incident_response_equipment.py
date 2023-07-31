# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ITISIncidentResponseEquipment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ITISIncidentResponseEquipment(type):
    """Metaclass of message 'ITISIncidentResponseEquipment'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GROUND_FIRE_SUPPRESSION': 9985,
        'HEAVY_GROUND_EQUIPMENT': 9986,
        'AIRCRAFT': 9988,
        'MARINE_EQUIPMENT': 9989,
        'SUPPORT_EQUIPMENT': 9990,
        'MEDICAL_RESCUE_UNIT': 9991,
        'OTHER': 9993,
        'GROUND_FIRE_SUPPRESSION_OTHER': 9994,
        'ENGINE': 9995,
        'TRUCK_OR_AERIAL': 9996,
        'QUINT': 9997,
        'TANKER_PUMPER_COMBINATION': 9998,
        'BRUSH_TRUCK': 10000,
        'AIRCRAFT_RESCUE_FIREFIGHTING': 10001,
        'HEAVY_GROUND_EQUIPMENT_OTHER': 10004,
        'DOZER_OR_PLOW': 10005,
        'TRACTOR': 10006,
        'TANKER_OR_TENDER': 10008,
        'AIRCRAFT_OTHER': 10024,
        'AIRCRAFT_FIXED_WING_TANKER': 10025,
        'HELITANKER': 10026,
        'HELICOPTER': 10027,
        'MARINE_EQUIPMENT_OTHER': 10034,
        'FIRE_BOAT_WITH_PUMP': 10035,
        'BOAT_NO_PUMP': 10036,
        'SUPPORT_APPARATUS_OTHER': 10044,
        'BREATHING_APPARATUS_SUPPORT': 10045,
        'LIGHT_AND_AIR_UNIT': 10046,
        'MEDICAL_RESCUE_UNIT_OTHER': 10054,
        'RESCUE_UNIT': 10055,
        'URBAN_SEARCH_RESCUE_UNIT': 10056,
        'HIGH_ANGLE_RESCUE': 10057,
        'CRASH_FIRE_RESCUE': 10058,
        'BLS_UNIT': 10059,
        'ALS_UNIT': 10060,
        'MOBILE_COMMAND_POST': 10075,
        'CHIEF_OFFICER_CAR': 10076,
        'HAZMAT_UNIT': 10077,
        'TYPE_I_HAND_CREW': 10078,
        'TYPE_II_HAND_CREW': 10079,
        'PRIVATELY_OWNED_VEHICLE': 10083,
        'OTHER_APPARATUS_RESOURCE': 10084,
        'AMBULANCE': 10085,
        'BOMB_SQUAD_VAN': 10086,
        'COMBINE_HARVESTER': 10087,
        'CONSTRUCTION_VEHICLE': 10088,
        'FARM_TRACTOR': 10089,
        'GRASS_CUTTING_MACHINES': 10090,
        'HAZMAT_CONTAINMENT_TOW': 10091,
        'HEAVY_TOW': 10092,
        'LIGHT_TOW': 10094,
        'FLATBED_TOW': 10114,
        'HEDGE_CUTTING_MACHINES': 10093,
        'MOBILE_CRANE': 10095,
        'REFUSE_COLLECTION_VEHICLE': 10096,
        'RESURFACING_VEHICLE': 10097,
        'ROAD_SWEEPER': 10098,
        'ROADSIDE_LITTER_COLLECTION_CREWS': 10099,
        'SALVAGE_VEHICLE': 10100,
        'SAND_TRUCK': 10101,
        'SNOWPLOW': 10102,
        'STEAM_ROLLER': 10103,
        'SWAT_TEAM_VAN': 10104,
        'TRACK_LAYING_VEHICLE': 10105,
        'UNKNOWN_VEHICLE': 10106,
        'WHITE_LINING_VEHICLE': 10107,
        'DUMP_TRUCK': 10108,
        'SUPERVISOR_VEHICLE': 10109,
        'SNOW_BLOWER': 10110,
        'ROTARY_SNOW_BLOWER': 10111,
        'ROAD_GRADER': 10112,
        'STEAM_TRUCK': 10113,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.ITISIncidentResponseEquipment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__itis_incident_response_equipment
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__itis_incident_response_equipment
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__itis_incident_response_equipment
            cls._TYPE_SUPPORT = module.type_support_msg__msg__itis_incident_response_equipment
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__itis_incident_response_equipment

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GROUND_FIRE_SUPPRESSION': cls.__constants['GROUND_FIRE_SUPPRESSION'],
            'HEAVY_GROUND_EQUIPMENT': cls.__constants['HEAVY_GROUND_EQUIPMENT'],
            'AIRCRAFT': cls.__constants['AIRCRAFT'],
            'MARINE_EQUIPMENT': cls.__constants['MARINE_EQUIPMENT'],
            'SUPPORT_EQUIPMENT': cls.__constants['SUPPORT_EQUIPMENT'],
            'MEDICAL_RESCUE_UNIT': cls.__constants['MEDICAL_RESCUE_UNIT'],
            'OTHER': cls.__constants['OTHER'],
            'GROUND_FIRE_SUPPRESSION_OTHER': cls.__constants['GROUND_FIRE_SUPPRESSION_OTHER'],
            'ENGINE': cls.__constants['ENGINE'],
            'TRUCK_OR_AERIAL': cls.__constants['TRUCK_OR_AERIAL'],
            'QUINT': cls.__constants['QUINT'],
            'TANKER_PUMPER_COMBINATION': cls.__constants['TANKER_PUMPER_COMBINATION'],
            'BRUSH_TRUCK': cls.__constants['BRUSH_TRUCK'],
            'AIRCRAFT_RESCUE_FIREFIGHTING': cls.__constants['AIRCRAFT_RESCUE_FIREFIGHTING'],
            'HEAVY_GROUND_EQUIPMENT_OTHER': cls.__constants['HEAVY_GROUND_EQUIPMENT_OTHER'],
            'DOZER_OR_PLOW': cls.__constants['DOZER_OR_PLOW'],
            'TRACTOR': cls.__constants['TRACTOR'],
            'TANKER_OR_TENDER': cls.__constants['TANKER_OR_TENDER'],
            'AIRCRAFT_OTHER': cls.__constants['AIRCRAFT_OTHER'],
            'AIRCRAFT_FIXED_WING_TANKER': cls.__constants['AIRCRAFT_FIXED_WING_TANKER'],
            'HELITANKER': cls.__constants['HELITANKER'],
            'HELICOPTER': cls.__constants['HELICOPTER'],
            'MARINE_EQUIPMENT_OTHER': cls.__constants['MARINE_EQUIPMENT_OTHER'],
            'FIRE_BOAT_WITH_PUMP': cls.__constants['FIRE_BOAT_WITH_PUMP'],
            'BOAT_NO_PUMP': cls.__constants['BOAT_NO_PUMP'],
            'SUPPORT_APPARATUS_OTHER': cls.__constants['SUPPORT_APPARATUS_OTHER'],
            'BREATHING_APPARATUS_SUPPORT': cls.__constants['BREATHING_APPARATUS_SUPPORT'],
            'LIGHT_AND_AIR_UNIT': cls.__constants['LIGHT_AND_AIR_UNIT'],
            'MEDICAL_RESCUE_UNIT_OTHER': cls.__constants['MEDICAL_RESCUE_UNIT_OTHER'],
            'RESCUE_UNIT': cls.__constants['RESCUE_UNIT'],
            'URBAN_SEARCH_RESCUE_UNIT': cls.__constants['URBAN_SEARCH_RESCUE_UNIT'],
            'HIGH_ANGLE_RESCUE': cls.__constants['HIGH_ANGLE_RESCUE'],
            'CRASH_FIRE_RESCUE': cls.__constants['CRASH_FIRE_RESCUE'],
            'BLS_UNIT': cls.__constants['BLS_UNIT'],
            'ALS_UNIT': cls.__constants['ALS_UNIT'],
            'MOBILE_COMMAND_POST': cls.__constants['MOBILE_COMMAND_POST'],
            'CHIEF_OFFICER_CAR': cls.__constants['CHIEF_OFFICER_CAR'],
            'HAZMAT_UNIT': cls.__constants['HAZMAT_UNIT'],
            'TYPE_I_HAND_CREW': cls.__constants['TYPE_I_HAND_CREW'],
            'TYPE_II_HAND_CREW': cls.__constants['TYPE_II_HAND_CREW'],
            'PRIVATELY_OWNED_VEHICLE': cls.__constants['PRIVATELY_OWNED_VEHICLE'],
            'OTHER_APPARATUS_RESOURCE': cls.__constants['OTHER_APPARATUS_RESOURCE'],
            'AMBULANCE': cls.__constants['AMBULANCE'],
            'BOMB_SQUAD_VAN': cls.__constants['BOMB_SQUAD_VAN'],
            'COMBINE_HARVESTER': cls.__constants['COMBINE_HARVESTER'],
            'CONSTRUCTION_VEHICLE': cls.__constants['CONSTRUCTION_VEHICLE'],
            'FARM_TRACTOR': cls.__constants['FARM_TRACTOR'],
            'GRASS_CUTTING_MACHINES': cls.__constants['GRASS_CUTTING_MACHINES'],
            'HAZMAT_CONTAINMENT_TOW': cls.__constants['HAZMAT_CONTAINMENT_TOW'],
            'HEAVY_TOW': cls.__constants['HEAVY_TOW'],
            'LIGHT_TOW': cls.__constants['LIGHT_TOW'],
            'FLATBED_TOW': cls.__constants['FLATBED_TOW'],
            'HEDGE_CUTTING_MACHINES': cls.__constants['HEDGE_CUTTING_MACHINES'],
            'MOBILE_CRANE': cls.__constants['MOBILE_CRANE'],
            'REFUSE_COLLECTION_VEHICLE': cls.__constants['REFUSE_COLLECTION_VEHICLE'],
            'RESURFACING_VEHICLE': cls.__constants['RESURFACING_VEHICLE'],
            'ROAD_SWEEPER': cls.__constants['ROAD_SWEEPER'],
            'ROADSIDE_LITTER_COLLECTION_CREWS': cls.__constants['ROADSIDE_LITTER_COLLECTION_CREWS'],
            'SALVAGE_VEHICLE': cls.__constants['SALVAGE_VEHICLE'],
            'SAND_TRUCK': cls.__constants['SAND_TRUCK'],
            'SNOWPLOW': cls.__constants['SNOWPLOW'],
            'STEAM_ROLLER': cls.__constants['STEAM_ROLLER'],
            'SWAT_TEAM_VAN': cls.__constants['SWAT_TEAM_VAN'],
            'TRACK_LAYING_VEHICLE': cls.__constants['TRACK_LAYING_VEHICLE'],
            'UNKNOWN_VEHICLE': cls.__constants['UNKNOWN_VEHICLE'],
            'WHITE_LINING_VEHICLE': cls.__constants['WHITE_LINING_VEHICLE'],
            'DUMP_TRUCK': cls.__constants['DUMP_TRUCK'],
            'SUPERVISOR_VEHICLE': cls.__constants['SUPERVISOR_VEHICLE'],
            'SNOW_BLOWER': cls.__constants['SNOW_BLOWER'],
            'ROTARY_SNOW_BLOWER': cls.__constants['ROTARY_SNOW_BLOWER'],
            'ROAD_GRADER': cls.__constants['ROAD_GRADER'],
            'STEAM_TRUCK': cls.__constants['STEAM_TRUCK'],
        }

    @property
    def GROUND_FIRE_SUPPRESSION(self):
        """Message constant 'GROUND_FIRE_SUPPRESSION'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['GROUND_FIRE_SUPPRESSION']

    @property
    def HEAVY_GROUND_EQUIPMENT(self):
        """Message constant 'HEAVY_GROUND_EQUIPMENT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['HEAVY_GROUND_EQUIPMENT']

    @property
    def AIRCRAFT(self):
        """Message constant 'AIRCRAFT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['AIRCRAFT']

    @property
    def MARINE_EQUIPMENT(self):
        """Message constant 'MARINE_EQUIPMENT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['MARINE_EQUIPMENT']

    @property
    def SUPPORT_EQUIPMENT(self):
        """Message constant 'SUPPORT_EQUIPMENT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['SUPPORT_EQUIPMENT']

    @property
    def MEDICAL_RESCUE_UNIT(self):
        """Message constant 'MEDICAL_RESCUE_UNIT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['MEDICAL_RESCUE_UNIT']

    @property
    def OTHER(self):
        """Message constant 'OTHER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['OTHER']

    @property
    def GROUND_FIRE_SUPPRESSION_OTHER(self):
        """Message constant 'GROUND_FIRE_SUPPRESSION_OTHER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['GROUND_FIRE_SUPPRESSION_OTHER']

    @property
    def ENGINE(self):
        """Message constant 'ENGINE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['ENGINE']

    @property
    def TRUCK_OR_AERIAL(self):
        """Message constant 'TRUCK_OR_AERIAL'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['TRUCK_OR_AERIAL']

    @property
    def QUINT(self):
        """Message constant 'QUINT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['QUINT']

    @property
    def TANKER_PUMPER_COMBINATION(self):
        """Message constant 'TANKER_PUMPER_COMBINATION'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['TANKER_PUMPER_COMBINATION']

    @property
    def BRUSH_TRUCK(self):
        """Message constant 'BRUSH_TRUCK'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['BRUSH_TRUCK']

    @property
    def AIRCRAFT_RESCUE_FIREFIGHTING(self):
        """Message constant 'AIRCRAFT_RESCUE_FIREFIGHTING'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['AIRCRAFT_RESCUE_FIREFIGHTING']

    @property
    def HEAVY_GROUND_EQUIPMENT_OTHER(self):
        """Message constant 'HEAVY_GROUND_EQUIPMENT_OTHER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['HEAVY_GROUND_EQUIPMENT_OTHER']

    @property
    def DOZER_OR_PLOW(self):
        """Message constant 'DOZER_OR_PLOW'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['DOZER_OR_PLOW']

    @property
    def TRACTOR(self):
        """Message constant 'TRACTOR'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['TRACTOR']

    @property
    def TANKER_OR_TENDER(self):
        """Message constant 'TANKER_OR_TENDER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['TANKER_OR_TENDER']

    @property
    def AIRCRAFT_OTHER(self):
        """Message constant 'AIRCRAFT_OTHER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['AIRCRAFT_OTHER']

    @property
    def AIRCRAFT_FIXED_WING_TANKER(self):
        """Message constant 'AIRCRAFT_FIXED_WING_TANKER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['AIRCRAFT_FIXED_WING_TANKER']

    @property
    def HELITANKER(self):
        """Message constant 'HELITANKER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['HELITANKER']

    @property
    def HELICOPTER(self):
        """Message constant 'HELICOPTER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['HELICOPTER']

    @property
    def MARINE_EQUIPMENT_OTHER(self):
        """Message constant 'MARINE_EQUIPMENT_OTHER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['MARINE_EQUIPMENT_OTHER']

    @property
    def FIRE_BOAT_WITH_PUMP(self):
        """Message constant 'FIRE_BOAT_WITH_PUMP'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['FIRE_BOAT_WITH_PUMP']

    @property
    def BOAT_NO_PUMP(self):
        """Message constant 'BOAT_NO_PUMP'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['BOAT_NO_PUMP']

    @property
    def SUPPORT_APPARATUS_OTHER(self):
        """Message constant 'SUPPORT_APPARATUS_OTHER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['SUPPORT_APPARATUS_OTHER']

    @property
    def BREATHING_APPARATUS_SUPPORT(self):
        """Message constant 'BREATHING_APPARATUS_SUPPORT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['BREATHING_APPARATUS_SUPPORT']

    @property
    def LIGHT_AND_AIR_UNIT(self):
        """Message constant 'LIGHT_AND_AIR_UNIT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['LIGHT_AND_AIR_UNIT']

    @property
    def MEDICAL_RESCUE_UNIT_OTHER(self):
        """Message constant 'MEDICAL_RESCUE_UNIT_OTHER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['MEDICAL_RESCUE_UNIT_OTHER']

    @property
    def RESCUE_UNIT(self):
        """Message constant 'RESCUE_UNIT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['RESCUE_UNIT']

    @property
    def URBAN_SEARCH_RESCUE_UNIT(self):
        """Message constant 'URBAN_SEARCH_RESCUE_UNIT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['URBAN_SEARCH_RESCUE_UNIT']

    @property
    def HIGH_ANGLE_RESCUE(self):
        """Message constant 'HIGH_ANGLE_RESCUE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['HIGH_ANGLE_RESCUE']

    @property
    def CRASH_FIRE_RESCUE(self):
        """Message constant 'CRASH_FIRE_RESCUE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['CRASH_FIRE_RESCUE']

    @property
    def BLS_UNIT(self):
        """Message constant 'BLS_UNIT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['BLS_UNIT']

    @property
    def ALS_UNIT(self):
        """Message constant 'ALS_UNIT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['ALS_UNIT']

    @property
    def MOBILE_COMMAND_POST(self):
        """Message constant 'MOBILE_COMMAND_POST'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['MOBILE_COMMAND_POST']

    @property
    def CHIEF_OFFICER_CAR(self):
        """Message constant 'CHIEF_OFFICER_CAR'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['CHIEF_OFFICER_CAR']

    @property
    def HAZMAT_UNIT(self):
        """Message constant 'HAZMAT_UNIT'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['HAZMAT_UNIT']

    @property
    def TYPE_I_HAND_CREW(self):
        """Message constant 'TYPE_I_HAND_CREW'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['TYPE_I_HAND_CREW']

    @property
    def TYPE_II_HAND_CREW(self):
        """Message constant 'TYPE_II_HAND_CREW'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['TYPE_II_HAND_CREW']

    @property
    def PRIVATELY_OWNED_VEHICLE(self):
        """Message constant 'PRIVATELY_OWNED_VEHICLE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['PRIVATELY_OWNED_VEHICLE']

    @property
    def OTHER_APPARATUS_RESOURCE(self):
        """Message constant 'OTHER_APPARATUS_RESOURCE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['OTHER_APPARATUS_RESOURCE']

    @property
    def AMBULANCE(self):
        """Message constant 'AMBULANCE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['AMBULANCE']

    @property
    def BOMB_SQUAD_VAN(self):
        """Message constant 'BOMB_SQUAD_VAN'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['BOMB_SQUAD_VAN']

    @property
    def COMBINE_HARVESTER(self):
        """Message constant 'COMBINE_HARVESTER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['COMBINE_HARVESTER']

    @property
    def CONSTRUCTION_VEHICLE(self):
        """Message constant 'CONSTRUCTION_VEHICLE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['CONSTRUCTION_VEHICLE']

    @property
    def FARM_TRACTOR(self):
        """Message constant 'FARM_TRACTOR'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['FARM_TRACTOR']

    @property
    def GRASS_CUTTING_MACHINES(self):
        """Message constant 'GRASS_CUTTING_MACHINES'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['GRASS_CUTTING_MACHINES']

    @property
    def HAZMAT_CONTAINMENT_TOW(self):
        """Message constant 'HAZMAT_CONTAINMENT_TOW'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['HAZMAT_CONTAINMENT_TOW']

    @property
    def HEAVY_TOW(self):
        """Message constant 'HEAVY_TOW'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['HEAVY_TOW']

    @property
    def LIGHT_TOW(self):
        """Message constant 'LIGHT_TOW'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['LIGHT_TOW']

    @property
    def FLATBED_TOW(self):
        """Message constant 'FLATBED_TOW'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['FLATBED_TOW']

    @property
    def HEDGE_CUTTING_MACHINES(self):
        """Message constant 'HEDGE_CUTTING_MACHINES'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['HEDGE_CUTTING_MACHINES']

    @property
    def MOBILE_CRANE(self):
        """Message constant 'MOBILE_CRANE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['MOBILE_CRANE']

    @property
    def REFUSE_COLLECTION_VEHICLE(self):
        """Message constant 'REFUSE_COLLECTION_VEHICLE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['REFUSE_COLLECTION_VEHICLE']

    @property
    def RESURFACING_VEHICLE(self):
        """Message constant 'RESURFACING_VEHICLE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['RESURFACING_VEHICLE']

    @property
    def ROAD_SWEEPER(self):
        """Message constant 'ROAD_SWEEPER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['ROAD_SWEEPER']

    @property
    def ROADSIDE_LITTER_COLLECTION_CREWS(self):
        """Message constant 'ROADSIDE_LITTER_COLLECTION_CREWS'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['ROADSIDE_LITTER_COLLECTION_CREWS']

    @property
    def SALVAGE_VEHICLE(self):
        """Message constant 'SALVAGE_VEHICLE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['SALVAGE_VEHICLE']

    @property
    def SAND_TRUCK(self):
        """Message constant 'SAND_TRUCK'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['SAND_TRUCK']

    @property
    def SNOWPLOW(self):
        """Message constant 'SNOWPLOW'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['SNOWPLOW']

    @property
    def STEAM_ROLLER(self):
        """Message constant 'STEAM_ROLLER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['STEAM_ROLLER']

    @property
    def SWAT_TEAM_VAN(self):
        """Message constant 'SWAT_TEAM_VAN'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['SWAT_TEAM_VAN']

    @property
    def TRACK_LAYING_VEHICLE(self):
        """Message constant 'TRACK_LAYING_VEHICLE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['TRACK_LAYING_VEHICLE']

    @property
    def UNKNOWN_VEHICLE(self):
        """Message constant 'UNKNOWN_VEHICLE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['UNKNOWN_VEHICLE']

    @property
    def WHITE_LINING_VEHICLE(self):
        """Message constant 'WHITE_LINING_VEHICLE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['WHITE_LINING_VEHICLE']

    @property
    def DUMP_TRUCK(self):
        """Message constant 'DUMP_TRUCK'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['DUMP_TRUCK']

    @property
    def SUPERVISOR_VEHICLE(self):
        """Message constant 'SUPERVISOR_VEHICLE'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['SUPERVISOR_VEHICLE']

    @property
    def SNOW_BLOWER(self):
        """Message constant 'SNOW_BLOWER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['SNOW_BLOWER']

    @property
    def ROTARY_SNOW_BLOWER(self):
        """Message constant 'ROTARY_SNOW_BLOWER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['ROTARY_SNOW_BLOWER']

    @property
    def ROAD_GRADER(self):
        """Message constant 'ROAD_GRADER'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['ROAD_GRADER']

    @property
    def STEAM_TRUCK(self):
        """Message constant 'STEAM_TRUCK'."""
        return Metaclass_ITISIncidentResponseEquipment.__constants['STEAM_TRUCK']


class ITISIncidentResponseEquipment(metaclass=Metaclass_ITISIncidentResponseEquipment):
    """
    Message class 'ITISIncidentResponseEquipment'.

    Constants:
      GROUND_FIRE_SUPPRESSION
      HEAVY_GROUND_EQUIPMENT
      AIRCRAFT
      MARINE_EQUIPMENT
      SUPPORT_EQUIPMENT
      MEDICAL_RESCUE_UNIT
      OTHER
      GROUND_FIRE_SUPPRESSION_OTHER
      ENGINE
      TRUCK_OR_AERIAL
      QUINT
      TANKER_PUMPER_COMBINATION
      BRUSH_TRUCK
      AIRCRAFT_RESCUE_FIREFIGHTING
      HEAVY_GROUND_EQUIPMENT_OTHER
      DOZER_OR_PLOW
      TRACTOR
      TANKER_OR_TENDER
      AIRCRAFT_OTHER
      AIRCRAFT_FIXED_WING_TANKER
      HELITANKER
      HELICOPTER
      MARINE_EQUIPMENT_OTHER
      FIRE_BOAT_WITH_PUMP
      BOAT_NO_PUMP
      SUPPORT_APPARATUS_OTHER
      BREATHING_APPARATUS_SUPPORT
      LIGHT_AND_AIR_UNIT
      MEDICAL_RESCUE_UNIT_OTHER
      RESCUE_UNIT
      URBAN_SEARCH_RESCUE_UNIT
      HIGH_ANGLE_RESCUE
      CRASH_FIRE_RESCUE
      BLS_UNIT
      ALS_UNIT
      MOBILE_COMMAND_POST
      CHIEF_OFFICER_CAR
      HAZMAT_UNIT
      TYPE_I_HAND_CREW
      TYPE_II_HAND_CREW
      PRIVATELY_OWNED_VEHICLE
      OTHER_APPARATUS_RESOURCE
      AMBULANCE
      BOMB_SQUAD_VAN
      COMBINE_HARVESTER
      CONSTRUCTION_VEHICLE
      FARM_TRACTOR
      GRASS_CUTTING_MACHINES
      HAZMAT_CONTAINMENT_TOW
      HEAVY_TOW
      LIGHT_TOW
      FLATBED_TOW
      HEDGE_CUTTING_MACHINES
      MOBILE_CRANE
      REFUSE_COLLECTION_VEHICLE
      RESURFACING_VEHICLE
      ROAD_SWEEPER
      ROADSIDE_LITTER_COLLECTION_CREWS
      SALVAGE_VEHICLE
      SAND_TRUCK
      SNOWPLOW
      STEAM_ROLLER
      SWAT_TEAM_VAN
      TRACK_LAYING_VEHICLE
      UNKNOWN_VEHICLE
      WHITE_LINING_VEHICLE
      DUMP_TRUCK
      SUPERVISOR_VEHICLE
      SNOW_BLOWER
      ROTARY_SNOW_BLOWER
      ROAD_GRADER
      STEAM_TRUCK
    """

    __slots__ = [
        '_incident_response_equipment',
    ]

    _fields_and_field_types = {
        'incident_response_equipment': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.incident_response_equipment = kwargs.get('incident_response_equipment', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.incident_response_equipment != other.incident_response_equipment:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def incident_response_equipment(self):
        """Message field 'incident_response_equipment'."""
        return self._incident_response_equipment

    @incident_response_equipment.setter
    def incident_response_equipment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'incident_response_equipment' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'incident_response_equipment' field must be an unsigned integer in [0, 65535]"
        self._incident_response_equipment = value
