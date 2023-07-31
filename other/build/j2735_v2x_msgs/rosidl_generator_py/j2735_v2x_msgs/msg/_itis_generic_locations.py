# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ITISGenericLocations.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ITISGenericLocations(type):
    """Metaclass of message 'ITISGenericLocations'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ON_BRIDGES': 7937,
        'IN_TUNNELS': 7938,
        'ENTERING_OR_LEAVING_TUNNELS': 7939,
        'ON_RAMPS': 7940,
        'IN_ROAD_CONSTRUCTION_AREA': 7941,
        'AROUND_A_CURVE': 7942,
        'ON_CURVE': 8026,
        'ON_TRACKS': 8009,
        'IN_STREET': 8025,
        'SHOULDER': 8027,
        'ON_MINOR_ROADS': 7943,
        'ADJACENT_TO_ROADWAY': 7945,
        'ACROSS_TRACKS': 8024,
        'ON_BEND': 7946,
        'INTERSECTION': 8032,
        'ENTIRE_INTERSECTION': 7947,
        'IN_THE_MEDIAN': 7948,
        'MOVED_TO_SIDE_OF_ROAD': 7949,
        'MOVED_TO_SHOULDER': 7950,
        'ON_THE_ROADWAY': 7951,
        'DIP': 8010,
        'TRAFFIC_CIRCLE': 8011,
        'CROSSOVER': 8028,
        'CROSS_ROAD': 8029,
        'SIDE_ROAD': 8030,
        'TO': 8014,
        'BY': 8015,
        'THROUGH': 8016,
        'AREA_OF': 8017,
        'UNDER': 8018,
        'OVER': 8019,
        'FROM': 8020,
        'APPROACHING': 8021,
        'ENTERING_AT': 8022,
        'EXITING_AT': 8023,
        'IN_SHADED_AREAS': 7952,
        'IN_LOW_LYING_AREAS': 7953,
        'IN_THE_DOWNTOWN_AREA': 7954,
        'IN_THE_INNER_CITY_AREA': 7955,
        'IN_PARTS': 7956,
        'IN_SOME_PLACES': 7957,
        'IN_THE_DITCH': 7958,
        'IN_THE_VALLEY': 7959,
        'ON_HILL_TOP': 7960,
        'NEAR_THE_FOOTHILS': 7961,
        'AT_HIGH_ALTITUDES': 7962,
        'NEAR_THE_LAKE': 7963,
        'NEAR_THE_SHORE': 7964,
        'NEARBY_BASIN': 8008,
        'OVER_THE_CREST_OF_A_HILL': 7965,
        'OTHER_THAN_ON_THE_ROADWAY': 7966,
        'NEAR_THE_BEACH': 7967,
        'NEAR_BEACH_ACCESS_POINT': 7968,
        'MOUNTAIN_PASS': 8006,
        'LOWER_LEVEL': 7969,
        'UPPER_LEVEL': 7970,
        'AIRPORT': 7971,
        'CONCOURSE': 7972,
        'GATE': 7973,
        'BAGGAGE_CLAIM': 7974,
        'CUSTOMS_POINT': 7975,
        'RESERVATION_CENTER': 8007,
        'STATION': 7976,
        'PLATFORM': 7977,
        'DOCK': 7978,
        'DEPOT': 7979,
        'EV_CHARGING_POINT': 7980,
        'INFORMATION_WELCOME_POINT': 7981,
        'AT_REST_AREA': 7982,
        'AT_SERVICE_AREA': 7983,
        'AT_WEIGH_STATION': 7984,
        'ROADSIDE_PARK': 8003,
        'PICNIC_AREAS': 7985,
        'REST_AREA': 7986,
        'SERVICE_STATIONS': 7987,
        'TOILETS': 7988,
        'BUS_STOP': 8031,
        'PARK_AND_RIDE_LOT': 8012,
        'ON_THE_RIGHT': 7989,
        'ON_THE_LEFT': 7990,
        'IN_THE_CENTER': 7991,
        'IN_THE_OPPOSITE_DIRECTION': 7992,
        'CROSS_TRAFFIC': 7993,
        'NORTHBOUND_TRAFFIC': 7994,
        'EASTBOUND_TRAFFIC': 7995,
        'SOUTHBOUND_TRAFFIC': 7996,
        'WESTBOUND_TRAFFIC': 7997,
        'NORTH': 7998,
        'SOUTH': 7999,
        'EAST': 8000,
        'WEST': 8001,
        'NORTHEAST': 8002,
        'NORTHWEST': 8003,
        'SOUTHEAST': 8004,
        'SOUTHWEST': 8005,
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
                'j2735_v2x_msgs.msg.ITISGenericLocations')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__itis_generic_locations
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__itis_generic_locations
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__itis_generic_locations
            cls._TYPE_SUPPORT = module.type_support_msg__msg__itis_generic_locations
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__itis_generic_locations

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ON_BRIDGES': cls.__constants['ON_BRIDGES'],
            'IN_TUNNELS': cls.__constants['IN_TUNNELS'],
            'ENTERING_OR_LEAVING_TUNNELS': cls.__constants['ENTERING_OR_LEAVING_TUNNELS'],
            'ON_RAMPS': cls.__constants['ON_RAMPS'],
            'IN_ROAD_CONSTRUCTION_AREA': cls.__constants['IN_ROAD_CONSTRUCTION_AREA'],
            'AROUND_A_CURVE': cls.__constants['AROUND_A_CURVE'],
            'ON_CURVE': cls.__constants['ON_CURVE'],
            'ON_TRACKS': cls.__constants['ON_TRACKS'],
            'IN_STREET': cls.__constants['IN_STREET'],
            'SHOULDER': cls.__constants['SHOULDER'],
            'ON_MINOR_ROADS': cls.__constants['ON_MINOR_ROADS'],
            'ADJACENT_TO_ROADWAY': cls.__constants['ADJACENT_TO_ROADWAY'],
            'ACROSS_TRACKS': cls.__constants['ACROSS_TRACKS'],
            'ON_BEND': cls.__constants['ON_BEND'],
            'INTERSECTION': cls.__constants['INTERSECTION'],
            'ENTIRE_INTERSECTION': cls.__constants['ENTIRE_INTERSECTION'],
            'IN_THE_MEDIAN': cls.__constants['IN_THE_MEDIAN'],
            'MOVED_TO_SIDE_OF_ROAD': cls.__constants['MOVED_TO_SIDE_OF_ROAD'],
            'MOVED_TO_SHOULDER': cls.__constants['MOVED_TO_SHOULDER'],
            'ON_THE_ROADWAY': cls.__constants['ON_THE_ROADWAY'],
            'DIP': cls.__constants['DIP'],
            'TRAFFIC_CIRCLE': cls.__constants['TRAFFIC_CIRCLE'],
            'CROSSOVER': cls.__constants['CROSSOVER'],
            'CROSS_ROAD': cls.__constants['CROSS_ROAD'],
            'SIDE_ROAD': cls.__constants['SIDE_ROAD'],
            'TO': cls.__constants['TO'],
            'BY': cls.__constants['BY'],
            'THROUGH': cls.__constants['THROUGH'],
            'AREA_OF': cls.__constants['AREA_OF'],
            'UNDER': cls.__constants['UNDER'],
            'OVER': cls.__constants['OVER'],
            'FROM': cls.__constants['FROM'],
            'APPROACHING': cls.__constants['APPROACHING'],
            'ENTERING_AT': cls.__constants['ENTERING_AT'],
            'EXITING_AT': cls.__constants['EXITING_AT'],
            'IN_SHADED_AREAS': cls.__constants['IN_SHADED_AREAS'],
            'IN_LOW_LYING_AREAS': cls.__constants['IN_LOW_LYING_AREAS'],
            'IN_THE_DOWNTOWN_AREA': cls.__constants['IN_THE_DOWNTOWN_AREA'],
            'IN_THE_INNER_CITY_AREA': cls.__constants['IN_THE_INNER_CITY_AREA'],
            'IN_PARTS': cls.__constants['IN_PARTS'],
            'IN_SOME_PLACES': cls.__constants['IN_SOME_PLACES'],
            'IN_THE_DITCH': cls.__constants['IN_THE_DITCH'],
            'IN_THE_VALLEY': cls.__constants['IN_THE_VALLEY'],
            'ON_HILL_TOP': cls.__constants['ON_HILL_TOP'],
            'NEAR_THE_FOOTHILS': cls.__constants['NEAR_THE_FOOTHILS'],
            'AT_HIGH_ALTITUDES': cls.__constants['AT_HIGH_ALTITUDES'],
            'NEAR_THE_LAKE': cls.__constants['NEAR_THE_LAKE'],
            'NEAR_THE_SHORE': cls.__constants['NEAR_THE_SHORE'],
            'NEARBY_BASIN': cls.__constants['NEARBY_BASIN'],
            'OVER_THE_CREST_OF_A_HILL': cls.__constants['OVER_THE_CREST_OF_A_HILL'],
            'OTHER_THAN_ON_THE_ROADWAY': cls.__constants['OTHER_THAN_ON_THE_ROADWAY'],
            'NEAR_THE_BEACH': cls.__constants['NEAR_THE_BEACH'],
            'NEAR_BEACH_ACCESS_POINT': cls.__constants['NEAR_BEACH_ACCESS_POINT'],
            'MOUNTAIN_PASS': cls.__constants['MOUNTAIN_PASS'],
            'LOWER_LEVEL': cls.__constants['LOWER_LEVEL'],
            'UPPER_LEVEL': cls.__constants['UPPER_LEVEL'],
            'AIRPORT': cls.__constants['AIRPORT'],
            'CONCOURSE': cls.__constants['CONCOURSE'],
            'GATE': cls.__constants['GATE'],
            'BAGGAGE_CLAIM': cls.__constants['BAGGAGE_CLAIM'],
            'CUSTOMS_POINT': cls.__constants['CUSTOMS_POINT'],
            'RESERVATION_CENTER': cls.__constants['RESERVATION_CENTER'],
            'STATION': cls.__constants['STATION'],
            'PLATFORM': cls.__constants['PLATFORM'],
            'DOCK': cls.__constants['DOCK'],
            'DEPOT': cls.__constants['DEPOT'],
            'EV_CHARGING_POINT': cls.__constants['EV_CHARGING_POINT'],
            'INFORMATION_WELCOME_POINT': cls.__constants['INFORMATION_WELCOME_POINT'],
            'AT_REST_AREA': cls.__constants['AT_REST_AREA'],
            'AT_SERVICE_AREA': cls.__constants['AT_SERVICE_AREA'],
            'AT_WEIGH_STATION': cls.__constants['AT_WEIGH_STATION'],
            'ROADSIDE_PARK': cls.__constants['ROADSIDE_PARK'],
            'PICNIC_AREAS': cls.__constants['PICNIC_AREAS'],
            'REST_AREA': cls.__constants['REST_AREA'],
            'SERVICE_STATIONS': cls.__constants['SERVICE_STATIONS'],
            'TOILETS': cls.__constants['TOILETS'],
            'BUS_STOP': cls.__constants['BUS_STOP'],
            'PARK_AND_RIDE_LOT': cls.__constants['PARK_AND_RIDE_LOT'],
            'ON_THE_RIGHT': cls.__constants['ON_THE_RIGHT'],
            'ON_THE_LEFT': cls.__constants['ON_THE_LEFT'],
            'IN_THE_CENTER': cls.__constants['IN_THE_CENTER'],
            'IN_THE_OPPOSITE_DIRECTION': cls.__constants['IN_THE_OPPOSITE_DIRECTION'],
            'CROSS_TRAFFIC': cls.__constants['CROSS_TRAFFIC'],
            'NORTHBOUND_TRAFFIC': cls.__constants['NORTHBOUND_TRAFFIC'],
            'EASTBOUND_TRAFFIC': cls.__constants['EASTBOUND_TRAFFIC'],
            'SOUTHBOUND_TRAFFIC': cls.__constants['SOUTHBOUND_TRAFFIC'],
            'WESTBOUND_TRAFFIC': cls.__constants['WESTBOUND_TRAFFIC'],
            'NORTH': cls.__constants['NORTH'],
            'SOUTH': cls.__constants['SOUTH'],
            'EAST': cls.__constants['EAST'],
            'WEST': cls.__constants['WEST'],
            'NORTHEAST': cls.__constants['NORTHEAST'],
            'NORTHWEST': cls.__constants['NORTHWEST'],
            'SOUTHEAST': cls.__constants['SOUTHEAST'],
            'SOUTHWEST': cls.__constants['SOUTHWEST'],
        }

    @property
    def ON_BRIDGES(self):
        """Message constant 'ON_BRIDGES'."""
        return Metaclass_ITISGenericLocations.__constants['ON_BRIDGES']

    @property
    def IN_TUNNELS(self):
        """Message constant 'IN_TUNNELS'."""
        return Metaclass_ITISGenericLocations.__constants['IN_TUNNELS']

    @property
    def ENTERING_OR_LEAVING_TUNNELS(self):
        """Message constant 'ENTERING_OR_LEAVING_TUNNELS'."""
        return Metaclass_ITISGenericLocations.__constants['ENTERING_OR_LEAVING_TUNNELS']

    @property
    def ON_RAMPS(self):
        """Message constant 'ON_RAMPS'."""
        return Metaclass_ITISGenericLocations.__constants['ON_RAMPS']

    @property
    def IN_ROAD_CONSTRUCTION_AREA(self):
        """Message constant 'IN_ROAD_CONSTRUCTION_AREA'."""
        return Metaclass_ITISGenericLocations.__constants['IN_ROAD_CONSTRUCTION_AREA']

    @property
    def AROUND_A_CURVE(self):
        """Message constant 'AROUND_A_CURVE'."""
        return Metaclass_ITISGenericLocations.__constants['AROUND_A_CURVE']

    @property
    def ON_CURVE(self):
        """Message constant 'ON_CURVE'."""
        return Metaclass_ITISGenericLocations.__constants['ON_CURVE']

    @property
    def ON_TRACKS(self):
        """Message constant 'ON_TRACKS'."""
        return Metaclass_ITISGenericLocations.__constants['ON_TRACKS']

    @property
    def IN_STREET(self):
        """Message constant 'IN_STREET'."""
        return Metaclass_ITISGenericLocations.__constants['IN_STREET']

    @property
    def SHOULDER(self):
        """Message constant 'SHOULDER'."""
        return Metaclass_ITISGenericLocations.__constants['SHOULDER']

    @property
    def ON_MINOR_ROADS(self):
        """Message constant 'ON_MINOR_ROADS'."""
        return Metaclass_ITISGenericLocations.__constants['ON_MINOR_ROADS']

    @property
    def ADJACENT_TO_ROADWAY(self):
        """Message constant 'ADJACENT_TO_ROADWAY'."""
        return Metaclass_ITISGenericLocations.__constants['ADJACENT_TO_ROADWAY']

    @property
    def ACROSS_TRACKS(self):
        """Message constant 'ACROSS_TRACKS'."""
        return Metaclass_ITISGenericLocations.__constants['ACROSS_TRACKS']

    @property
    def ON_BEND(self):
        """Message constant 'ON_BEND'."""
        return Metaclass_ITISGenericLocations.__constants['ON_BEND']

    @property
    def INTERSECTION(self):
        """Message constant 'INTERSECTION'."""
        return Metaclass_ITISGenericLocations.__constants['INTERSECTION']

    @property
    def ENTIRE_INTERSECTION(self):
        """Message constant 'ENTIRE_INTERSECTION'."""
        return Metaclass_ITISGenericLocations.__constants['ENTIRE_INTERSECTION']

    @property
    def IN_THE_MEDIAN(self):
        """Message constant 'IN_THE_MEDIAN'."""
        return Metaclass_ITISGenericLocations.__constants['IN_THE_MEDIAN']

    @property
    def MOVED_TO_SIDE_OF_ROAD(self):
        """Message constant 'MOVED_TO_SIDE_OF_ROAD'."""
        return Metaclass_ITISGenericLocations.__constants['MOVED_TO_SIDE_OF_ROAD']

    @property
    def MOVED_TO_SHOULDER(self):
        """Message constant 'MOVED_TO_SHOULDER'."""
        return Metaclass_ITISGenericLocations.__constants['MOVED_TO_SHOULDER']

    @property
    def ON_THE_ROADWAY(self):
        """Message constant 'ON_THE_ROADWAY'."""
        return Metaclass_ITISGenericLocations.__constants['ON_THE_ROADWAY']

    @property
    def DIP(self):
        """Message constant 'DIP'."""
        return Metaclass_ITISGenericLocations.__constants['DIP']

    @property
    def TRAFFIC_CIRCLE(self):
        """Message constant 'TRAFFIC_CIRCLE'."""
        return Metaclass_ITISGenericLocations.__constants['TRAFFIC_CIRCLE']

    @property
    def CROSSOVER(self):
        """Message constant 'CROSSOVER'."""
        return Metaclass_ITISGenericLocations.__constants['CROSSOVER']

    @property
    def CROSS_ROAD(self):
        """Message constant 'CROSS_ROAD'."""
        return Metaclass_ITISGenericLocations.__constants['CROSS_ROAD']

    @property
    def SIDE_ROAD(self):
        """Message constant 'SIDE_ROAD'."""
        return Metaclass_ITISGenericLocations.__constants['SIDE_ROAD']

    @property
    def TO(self):
        """Message constant 'TO'."""
        return Metaclass_ITISGenericLocations.__constants['TO']

    @property
    def BY(self):
        """Message constant 'BY'."""
        return Metaclass_ITISGenericLocations.__constants['BY']

    @property
    def THROUGH(self):
        """Message constant 'THROUGH'."""
        return Metaclass_ITISGenericLocations.__constants['THROUGH']

    @property
    def AREA_OF(self):
        """Message constant 'AREA_OF'."""
        return Metaclass_ITISGenericLocations.__constants['AREA_OF']

    @property
    def UNDER(self):
        """Message constant 'UNDER'."""
        return Metaclass_ITISGenericLocations.__constants['UNDER']

    @property
    def OVER(self):
        """Message constant 'OVER'."""
        return Metaclass_ITISGenericLocations.__constants['OVER']

    @property
    def FROM(self):
        """Message constant 'FROM'."""
        return Metaclass_ITISGenericLocations.__constants['FROM']

    @property
    def APPROACHING(self):
        """Message constant 'APPROACHING'."""
        return Metaclass_ITISGenericLocations.__constants['APPROACHING']

    @property
    def ENTERING_AT(self):
        """Message constant 'ENTERING_AT'."""
        return Metaclass_ITISGenericLocations.__constants['ENTERING_AT']

    @property
    def EXITING_AT(self):
        """Message constant 'EXITING_AT'."""
        return Metaclass_ITISGenericLocations.__constants['EXITING_AT']

    @property
    def IN_SHADED_AREAS(self):
        """Message constant 'IN_SHADED_AREAS'."""
        return Metaclass_ITISGenericLocations.__constants['IN_SHADED_AREAS']

    @property
    def IN_LOW_LYING_AREAS(self):
        """Message constant 'IN_LOW_LYING_AREAS'."""
        return Metaclass_ITISGenericLocations.__constants['IN_LOW_LYING_AREAS']

    @property
    def IN_THE_DOWNTOWN_AREA(self):
        """Message constant 'IN_THE_DOWNTOWN_AREA'."""
        return Metaclass_ITISGenericLocations.__constants['IN_THE_DOWNTOWN_AREA']

    @property
    def IN_THE_INNER_CITY_AREA(self):
        """Message constant 'IN_THE_INNER_CITY_AREA'."""
        return Metaclass_ITISGenericLocations.__constants['IN_THE_INNER_CITY_AREA']

    @property
    def IN_PARTS(self):
        """Message constant 'IN_PARTS'."""
        return Metaclass_ITISGenericLocations.__constants['IN_PARTS']

    @property
    def IN_SOME_PLACES(self):
        """Message constant 'IN_SOME_PLACES'."""
        return Metaclass_ITISGenericLocations.__constants['IN_SOME_PLACES']

    @property
    def IN_THE_DITCH(self):
        """Message constant 'IN_THE_DITCH'."""
        return Metaclass_ITISGenericLocations.__constants['IN_THE_DITCH']

    @property
    def IN_THE_VALLEY(self):
        """Message constant 'IN_THE_VALLEY'."""
        return Metaclass_ITISGenericLocations.__constants['IN_THE_VALLEY']

    @property
    def ON_HILL_TOP(self):
        """Message constant 'ON_HILL_TOP'."""
        return Metaclass_ITISGenericLocations.__constants['ON_HILL_TOP']

    @property
    def NEAR_THE_FOOTHILS(self):
        """Message constant 'NEAR_THE_FOOTHILS'."""
        return Metaclass_ITISGenericLocations.__constants['NEAR_THE_FOOTHILS']

    @property
    def AT_HIGH_ALTITUDES(self):
        """Message constant 'AT_HIGH_ALTITUDES'."""
        return Metaclass_ITISGenericLocations.__constants['AT_HIGH_ALTITUDES']

    @property
    def NEAR_THE_LAKE(self):
        """Message constant 'NEAR_THE_LAKE'."""
        return Metaclass_ITISGenericLocations.__constants['NEAR_THE_LAKE']

    @property
    def NEAR_THE_SHORE(self):
        """Message constant 'NEAR_THE_SHORE'."""
        return Metaclass_ITISGenericLocations.__constants['NEAR_THE_SHORE']

    @property
    def NEARBY_BASIN(self):
        """Message constant 'NEARBY_BASIN'."""
        return Metaclass_ITISGenericLocations.__constants['NEARBY_BASIN']

    @property
    def OVER_THE_CREST_OF_A_HILL(self):
        """Message constant 'OVER_THE_CREST_OF_A_HILL'."""
        return Metaclass_ITISGenericLocations.__constants['OVER_THE_CREST_OF_A_HILL']

    @property
    def OTHER_THAN_ON_THE_ROADWAY(self):
        """Message constant 'OTHER_THAN_ON_THE_ROADWAY'."""
        return Metaclass_ITISGenericLocations.__constants['OTHER_THAN_ON_THE_ROADWAY']

    @property
    def NEAR_THE_BEACH(self):
        """Message constant 'NEAR_THE_BEACH'."""
        return Metaclass_ITISGenericLocations.__constants['NEAR_THE_BEACH']

    @property
    def NEAR_BEACH_ACCESS_POINT(self):
        """Message constant 'NEAR_BEACH_ACCESS_POINT'."""
        return Metaclass_ITISGenericLocations.__constants['NEAR_BEACH_ACCESS_POINT']

    @property
    def MOUNTAIN_PASS(self):
        """Message constant 'MOUNTAIN_PASS'."""
        return Metaclass_ITISGenericLocations.__constants['MOUNTAIN_PASS']

    @property
    def LOWER_LEVEL(self):
        """Message constant 'LOWER_LEVEL'."""
        return Metaclass_ITISGenericLocations.__constants['LOWER_LEVEL']

    @property
    def UPPER_LEVEL(self):
        """Message constant 'UPPER_LEVEL'."""
        return Metaclass_ITISGenericLocations.__constants['UPPER_LEVEL']

    @property
    def AIRPORT(self):
        """Message constant 'AIRPORT'."""
        return Metaclass_ITISGenericLocations.__constants['AIRPORT']

    @property
    def CONCOURSE(self):
        """Message constant 'CONCOURSE'."""
        return Metaclass_ITISGenericLocations.__constants['CONCOURSE']

    @property
    def GATE(self):
        """Message constant 'GATE'."""
        return Metaclass_ITISGenericLocations.__constants['GATE']

    @property
    def BAGGAGE_CLAIM(self):
        """Message constant 'BAGGAGE_CLAIM'."""
        return Metaclass_ITISGenericLocations.__constants['BAGGAGE_CLAIM']

    @property
    def CUSTOMS_POINT(self):
        """Message constant 'CUSTOMS_POINT'."""
        return Metaclass_ITISGenericLocations.__constants['CUSTOMS_POINT']

    @property
    def RESERVATION_CENTER(self):
        """Message constant 'RESERVATION_CENTER'."""
        return Metaclass_ITISGenericLocations.__constants['RESERVATION_CENTER']

    @property
    def STATION(self):
        """Message constant 'STATION'."""
        return Metaclass_ITISGenericLocations.__constants['STATION']

    @property
    def PLATFORM(self):
        """Message constant 'PLATFORM'."""
        return Metaclass_ITISGenericLocations.__constants['PLATFORM']

    @property
    def DOCK(self):
        """Message constant 'DOCK'."""
        return Metaclass_ITISGenericLocations.__constants['DOCK']

    @property
    def DEPOT(self):
        """Message constant 'DEPOT'."""
        return Metaclass_ITISGenericLocations.__constants['DEPOT']

    @property
    def EV_CHARGING_POINT(self):
        """Message constant 'EV_CHARGING_POINT'."""
        return Metaclass_ITISGenericLocations.__constants['EV_CHARGING_POINT']

    @property
    def INFORMATION_WELCOME_POINT(self):
        """Message constant 'INFORMATION_WELCOME_POINT'."""
        return Metaclass_ITISGenericLocations.__constants['INFORMATION_WELCOME_POINT']

    @property
    def AT_REST_AREA(self):
        """Message constant 'AT_REST_AREA'."""
        return Metaclass_ITISGenericLocations.__constants['AT_REST_AREA']

    @property
    def AT_SERVICE_AREA(self):
        """Message constant 'AT_SERVICE_AREA'."""
        return Metaclass_ITISGenericLocations.__constants['AT_SERVICE_AREA']

    @property
    def AT_WEIGH_STATION(self):
        """Message constant 'AT_WEIGH_STATION'."""
        return Metaclass_ITISGenericLocations.__constants['AT_WEIGH_STATION']

    @property
    def ROADSIDE_PARK(self):
        """Message constant 'ROADSIDE_PARK'."""
        return Metaclass_ITISGenericLocations.__constants['ROADSIDE_PARK']

    @property
    def PICNIC_AREAS(self):
        """Message constant 'PICNIC_AREAS'."""
        return Metaclass_ITISGenericLocations.__constants['PICNIC_AREAS']

    @property
    def REST_AREA(self):
        """Message constant 'REST_AREA'."""
        return Metaclass_ITISGenericLocations.__constants['REST_AREA']

    @property
    def SERVICE_STATIONS(self):
        """Message constant 'SERVICE_STATIONS'."""
        return Metaclass_ITISGenericLocations.__constants['SERVICE_STATIONS']

    @property
    def TOILETS(self):
        """Message constant 'TOILETS'."""
        return Metaclass_ITISGenericLocations.__constants['TOILETS']

    @property
    def BUS_STOP(self):
        """Message constant 'BUS_STOP'."""
        return Metaclass_ITISGenericLocations.__constants['BUS_STOP']

    @property
    def PARK_AND_RIDE_LOT(self):
        """Message constant 'PARK_AND_RIDE_LOT'."""
        return Metaclass_ITISGenericLocations.__constants['PARK_AND_RIDE_LOT']

    @property
    def ON_THE_RIGHT(self):
        """Message constant 'ON_THE_RIGHT'."""
        return Metaclass_ITISGenericLocations.__constants['ON_THE_RIGHT']

    @property
    def ON_THE_LEFT(self):
        """Message constant 'ON_THE_LEFT'."""
        return Metaclass_ITISGenericLocations.__constants['ON_THE_LEFT']

    @property
    def IN_THE_CENTER(self):
        """Message constant 'IN_THE_CENTER'."""
        return Metaclass_ITISGenericLocations.__constants['IN_THE_CENTER']

    @property
    def IN_THE_OPPOSITE_DIRECTION(self):
        """Message constant 'IN_THE_OPPOSITE_DIRECTION'."""
        return Metaclass_ITISGenericLocations.__constants['IN_THE_OPPOSITE_DIRECTION']

    @property
    def CROSS_TRAFFIC(self):
        """Message constant 'CROSS_TRAFFIC'."""
        return Metaclass_ITISGenericLocations.__constants['CROSS_TRAFFIC']

    @property
    def NORTHBOUND_TRAFFIC(self):
        """Message constant 'NORTHBOUND_TRAFFIC'."""
        return Metaclass_ITISGenericLocations.__constants['NORTHBOUND_TRAFFIC']

    @property
    def EASTBOUND_TRAFFIC(self):
        """Message constant 'EASTBOUND_TRAFFIC'."""
        return Metaclass_ITISGenericLocations.__constants['EASTBOUND_TRAFFIC']

    @property
    def SOUTHBOUND_TRAFFIC(self):
        """Message constant 'SOUTHBOUND_TRAFFIC'."""
        return Metaclass_ITISGenericLocations.__constants['SOUTHBOUND_TRAFFIC']

    @property
    def WESTBOUND_TRAFFIC(self):
        """Message constant 'WESTBOUND_TRAFFIC'."""
        return Metaclass_ITISGenericLocations.__constants['WESTBOUND_TRAFFIC']

    @property
    def NORTH(self):
        """Message constant 'NORTH'."""
        return Metaclass_ITISGenericLocations.__constants['NORTH']

    @property
    def SOUTH(self):
        """Message constant 'SOUTH'."""
        return Metaclass_ITISGenericLocations.__constants['SOUTH']

    @property
    def EAST(self):
        """Message constant 'EAST'."""
        return Metaclass_ITISGenericLocations.__constants['EAST']

    @property
    def WEST(self):
        """Message constant 'WEST'."""
        return Metaclass_ITISGenericLocations.__constants['WEST']

    @property
    def NORTHEAST(self):
        """Message constant 'NORTHEAST'."""
        return Metaclass_ITISGenericLocations.__constants['NORTHEAST']

    @property
    def NORTHWEST(self):
        """Message constant 'NORTHWEST'."""
        return Metaclass_ITISGenericLocations.__constants['NORTHWEST']

    @property
    def SOUTHEAST(self):
        """Message constant 'SOUTHEAST'."""
        return Metaclass_ITISGenericLocations.__constants['SOUTHEAST']

    @property
    def SOUTHWEST(self):
        """Message constant 'SOUTHWEST'."""
        return Metaclass_ITISGenericLocations.__constants['SOUTHWEST']


class ITISGenericLocations(metaclass=Metaclass_ITISGenericLocations):
    """
    Message class 'ITISGenericLocations'.

    Constants:
      ON_BRIDGES
      IN_TUNNELS
      ENTERING_OR_LEAVING_TUNNELS
      ON_RAMPS
      IN_ROAD_CONSTRUCTION_AREA
      AROUND_A_CURVE
      ON_CURVE
      ON_TRACKS
      IN_STREET
      SHOULDER
      ON_MINOR_ROADS
      ADJACENT_TO_ROADWAY
      ACROSS_TRACKS
      ON_BEND
      INTERSECTION
      ENTIRE_INTERSECTION
      IN_THE_MEDIAN
      MOVED_TO_SIDE_OF_ROAD
      MOVED_TO_SHOULDER
      ON_THE_ROADWAY
      DIP
      TRAFFIC_CIRCLE
      CROSSOVER
      CROSS_ROAD
      SIDE_ROAD
      TO
      BY
      THROUGH
      AREA_OF
      UNDER
      OVER
      FROM
      APPROACHING
      ENTERING_AT
      EXITING_AT
      IN_SHADED_AREAS
      IN_LOW_LYING_AREAS
      IN_THE_DOWNTOWN_AREA
      IN_THE_INNER_CITY_AREA
      IN_PARTS
      IN_SOME_PLACES
      IN_THE_DITCH
      IN_THE_VALLEY
      ON_HILL_TOP
      NEAR_THE_FOOTHILS
      AT_HIGH_ALTITUDES
      NEAR_THE_LAKE
      NEAR_THE_SHORE
      NEARBY_BASIN
      OVER_THE_CREST_OF_A_HILL
      OTHER_THAN_ON_THE_ROADWAY
      NEAR_THE_BEACH
      NEAR_BEACH_ACCESS_POINT
      MOUNTAIN_PASS
      LOWER_LEVEL
      UPPER_LEVEL
      AIRPORT
      CONCOURSE
      GATE
      BAGGAGE_CLAIM
      CUSTOMS_POINT
      RESERVATION_CENTER
      STATION
      PLATFORM
      DOCK
      DEPOT
      EV_CHARGING_POINT
      INFORMATION_WELCOME_POINT
      AT_REST_AREA
      AT_SERVICE_AREA
      AT_WEIGH_STATION
      ROADSIDE_PARK
      PICNIC_AREAS
      REST_AREA
      SERVICE_STATIONS
      TOILETS
      BUS_STOP
      PARK_AND_RIDE_LOT
      ON_THE_RIGHT
      ON_THE_LEFT
      IN_THE_CENTER
      IN_THE_OPPOSITE_DIRECTION
      CROSS_TRAFFIC
      NORTHBOUND_TRAFFIC
      EASTBOUND_TRAFFIC
      SOUTHBOUND_TRAFFIC
      WESTBOUND_TRAFFIC
      NORTH
      SOUTH
      EAST
      WEST
      NORTHEAST
      NORTHWEST
      SOUTHEAST
      SOUTHWEST
    """

    __slots__ = [
        '_generic_locations',
    ]

    _fields_and_field_types = {
        'generic_locations': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.generic_locations = kwargs.get('generic_locations', int())

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
        if self.generic_locations != other.generic_locations:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def generic_locations(self):
        """Message field 'generic_locations'."""
        return self._generic_locations

    @generic_locations.setter
    def generic_locations(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'generic_locations' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'generic_locations' field must be an unsigned integer in [0, 65535]"
        self._generic_locations = value
