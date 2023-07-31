# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/BasicVehicleClass.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BasicVehicleClass(type):
    """Metaclass of message 'BasicVehicleClass'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN_VEHICLE_CLASS': 0,
        'SPECIAL_VEHICLE_CLASS': 1,
        'PASSENGER_VEHICLE_TYPE_UNKNOWN': 10,
        'PASSENGER_VEHICLE_TYPE_OTHER': 11,
        'LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN': 20,
        'LIGHT_TRUCK_VEHICLE_TYPE_OTHER': 21,
        'TRUCK_VEHICLE_TYPE_UNKNOWN': 25,
        'TRUCK_VEHICLE_TYPE_OTHER': 26,
        'TRUCK_AXLE_COUNT_2': 27,
        'TRUCK_AXLE_COUNT_3': 28,
        'TRUCK_AXLE_COUNT_4': 29,
        'TRUCK_AXLE_COUNT_4_TRAILER': 30,
        'TRUCK_AXLE_COUNT_5_TRAILER': 31,
        'TRUCK_AXLE_COUNT_6_TRAILER': 32,
        'TRUCK_AXLE_COUNT_5_MULTI_TRAILER': 33,
        'TRUCK_AXLE_COUNT_6_MULTI_TRAILER': 34,
        'TRUCK_AXLE_COUNT_7_MULTI_TRAILER': 35,
        'MOTORCYCLE_TYPE_UNKNOWN': 40,
        'MOTORCYCLE_TYPE_OTHER': 41,
        'MOTORCYCLE_CRUISER_STANDARD': 42,
        'MOTORCYCLE_SPORT_UNCLAD': 43,
        'MOTORCYCLE_SPORT_TOURING': 44,
        'MOTORCYCLE_SUPORT_SPORT': 45,
        'MOTORCYCLE_TOURING': 46,
        'MOTORCYCLE_TRIKE': 47,
        'MOTORCYCLE_WITH_PASSENGERS': 48,
        'TRANSIT_TYPE_UNKNOWN': 50,
        'TRANSIT_TYPE_OTHER': 51,
        'TRANSIT_BRT': 52,
        'TRANSIT_EXPRESS_BUS': 53,
        'TRANSIT_LOCAL_BUS': 54,
        'TRANSIT_SCHOOL_BUS': 55,
        'TRANSIT_FIXED_GUIDEWAY': 56,
        'TRANSIT_PARATRANSIT': 57,
        'TRANSIT_PARATRANSIT_AMBULANCE': 58,
        'EMERGENCY_TYPE_UNKNOWN': 60,
        'EMERGENCY_TYPE_OTHER': 61,
        'EMERGENCY_FIRE_LIGHT_VEHICLE': 62,
        'EMERGENCY_FIRE_HEAVY_VEHICLE': 63,
        'EMERGENCY_FIRE_PARAMEDIC_VEHICLE': 64,
        'EMERGENCY_FIRE_AMBULANCE_VEHICLE': 65,
        'EMERGENCY_POLICE_LIGHT_VEHICLE': 66,
        'EMERGENCY_POLICE_HEAVY_VEHICLE': 67,
        'EMERGENCY_OTHER_RESPONDER': 68,
        'EMERGENCY_OTHER_AMBULANCE': 69,
        'OTHER_TRAVELER_TYPE_UNKNOWN': 80,
        'OTHER_TRAVELER_TYPE_OTHER': 81,
        'OTHER_TRAVELER_PEDESTRIAN': 82,
        'OTHER_TRAVELER_VISUALLY_DISABLED': 83,
        'OTHER_TRAVELER_PHYSICALLY_DISABLED': 84,
        'OTHER_TRAVELER_BICYCLE': 85,
        'OTHER_TRAVELER_VULNERABLE_ROADWORKER': 86,
        'INFRASTRUCTURE_TYPE_UNKNOWN': 90,
        'INFRASTRUCTURE_FIXED': 91,
        'INFRASTRUCTURE_MOVABLE': 92,
        'INFRASTRUCTURE_CARGO_TRAILER': 93,
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
                'j2735_v2x_msgs.msg.BasicVehicleClass')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__basic_vehicle_class
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__basic_vehicle_class
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__basic_vehicle_class
            cls._TYPE_SUPPORT = module.type_support_msg__msg__basic_vehicle_class
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__basic_vehicle_class

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN_VEHICLE_CLASS': cls.__constants['UNKNOWN_VEHICLE_CLASS'],
            'SPECIAL_VEHICLE_CLASS': cls.__constants['SPECIAL_VEHICLE_CLASS'],
            'PASSENGER_VEHICLE_TYPE_UNKNOWN': cls.__constants['PASSENGER_VEHICLE_TYPE_UNKNOWN'],
            'PASSENGER_VEHICLE_TYPE_OTHER': cls.__constants['PASSENGER_VEHICLE_TYPE_OTHER'],
            'LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN': cls.__constants['LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN'],
            'LIGHT_TRUCK_VEHICLE_TYPE_OTHER': cls.__constants['LIGHT_TRUCK_VEHICLE_TYPE_OTHER'],
            'TRUCK_VEHICLE_TYPE_UNKNOWN': cls.__constants['TRUCK_VEHICLE_TYPE_UNKNOWN'],
            'TRUCK_VEHICLE_TYPE_OTHER': cls.__constants['TRUCK_VEHICLE_TYPE_OTHER'],
            'TRUCK_AXLE_COUNT_2': cls.__constants['TRUCK_AXLE_COUNT_2'],
            'TRUCK_AXLE_COUNT_3': cls.__constants['TRUCK_AXLE_COUNT_3'],
            'TRUCK_AXLE_COUNT_4': cls.__constants['TRUCK_AXLE_COUNT_4'],
            'TRUCK_AXLE_COUNT_4_TRAILER': cls.__constants['TRUCK_AXLE_COUNT_4_TRAILER'],
            'TRUCK_AXLE_COUNT_5_TRAILER': cls.__constants['TRUCK_AXLE_COUNT_5_TRAILER'],
            'TRUCK_AXLE_COUNT_6_TRAILER': cls.__constants['TRUCK_AXLE_COUNT_6_TRAILER'],
            'TRUCK_AXLE_COUNT_5_MULTI_TRAILER': cls.__constants['TRUCK_AXLE_COUNT_5_MULTI_TRAILER'],
            'TRUCK_AXLE_COUNT_6_MULTI_TRAILER': cls.__constants['TRUCK_AXLE_COUNT_6_MULTI_TRAILER'],
            'TRUCK_AXLE_COUNT_7_MULTI_TRAILER': cls.__constants['TRUCK_AXLE_COUNT_7_MULTI_TRAILER'],
            'MOTORCYCLE_TYPE_UNKNOWN': cls.__constants['MOTORCYCLE_TYPE_UNKNOWN'],
            'MOTORCYCLE_TYPE_OTHER': cls.__constants['MOTORCYCLE_TYPE_OTHER'],
            'MOTORCYCLE_CRUISER_STANDARD': cls.__constants['MOTORCYCLE_CRUISER_STANDARD'],
            'MOTORCYCLE_SPORT_UNCLAD': cls.__constants['MOTORCYCLE_SPORT_UNCLAD'],
            'MOTORCYCLE_SPORT_TOURING': cls.__constants['MOTORCYCLE_SPORT_TOURING'],
            'MOTORCYCLE_SUPORT_SPORT': cls.__constants['MOTORCYCLE_SUPORT_SPORT'],
            'MOTORCYCLE_TOURING': cls.__constants['MOTORCYCLE_TOURING'],
            'MOTORCYCLE_TRIKE': cls.__constants['MOTORCYCLE_TRIKE'],
            'MOTORCYCLE_WITH_PASSENGERS': cls.__constants['MOTORCYCLE_WITH_PASSENGERS'],
            'TRANSIT_TYPE_UNKNOWN': cls.__constants['TRANSIT_TYPE_UNKNOWN'],
            'TRANSIT_TYPE_OTHER': cls.__constants['TRANSIT_TYPE_OTHER'],
            'TRANSIT_BRT': cls.__constants['TRANSIT_BRT'],
            'TRANSIT_EXPRESS_BUS': cls.__constants['TRANSIT_EXPRESS_BUS'],
            'TRANSIT_LOCAL_BUS': cls.__constants['TRANSIT_LOCAL_BUS'],
            'TRANSIT_SCHOOL_BUS': cls.__constants['TRANSIT_SCHOOL_BUS'],
            'TRANSIT_FIXED_GUIDEWAY': cls.__constants['TRANSIT_FIXED_GUIDEWAY'],
            'TRANSIT_PARATRANSIT': cls.__constants['TRANSIT_PARATRANSIT'],
            'TRANSIT_PARATRANSIT_AMBULANCE': cls.__constants['TRANSIT_PARATRANSIT_AMBULANCE'],
            'EMERGENCY_TYPE_UNKNOWN': cls.__constants['EMERGENCY_TYPE_UNKNOWN'],
            'EMERGENCY_TYPE_OTHER': cls.__constants['EMERGENCY_TYPE_OTHER'],
            'EMERGENCY_FIRE_LIGHT_VEHICLE': cls.__constants['EMERGENCY_FIRE_LIGHT_VEHICLE'],
            'EMERGENCY_FIRE_HEAVY_VEHICLE': cls.__constants['EMERGENCY_FIRE_HEAVY_VEHICLE'],
            'EMERGENCY_FIRE_PARAMEDIC_VEHICLE': cls.__constants['EMERGENCY_FIRE_PARAMEDIC_VEHICLE'],
            'EMERGENCY_FIRE_AMBULANCE_VEHICLE': cls.__constants['EMERGENCY_FIRE_AMBULANCE_VEHICLE'],
            'EMERGENCY_POLICE_LIGHT_VEHICLE': cls.__constants['EMERGENCY_POLICE_LIGHT_VEHICLE'],
            'EMERGENCY_POLICE_HEAVY_VEHICLE': cls.__constants['EMERGENCY_POLICE_HEAVY_VEHICLE'],
            'EMERGENCY_OTHER_RESPONDER': cls.__constants['EMERGENCY_OTHER_RESPONDER'],
            'EMERGENCY_OTHER_AMBULANCE': cls.__constants['EMERGENCY_OTHER_AMBULANCE'],
            'OTHER_TRAVELER_TYPE_UNKNOWN': cls.__constants['OTHER_TRAVELER_TYPE_UNKNOWN'],
            'OTHER_TRAVELER_TYPE_OTHER': cls.__constants['OTHER_TRAVELER_TYPE_OTHER'],
            'OTHER_TRAVELER_PEDESTRIAN': cls.__constants['OTHER_TRAVELER_PEDESTRIAN'],
            'OTHER_TRAVELER_VISUALLY_DISABLED': cls.__constants['OTHER_TRAVELER_VISUALLY_DISABLED'],
            'OTHER_TRAVELER_PHYSICALLY_DISABLED': cls.__constants['OTHER_TRAVELER_PHYSICALLY_DISABLED'],
            'OTHER_TRAVELER_BICYCLE': cls.__constants['OTHER_TRAVELER_BICYCLE'],
            'OTHER_TRAVELER_VULNERABLE_ROADWORKER': cls.__constants['OTHER_TRAVELER_VULNERABLE_ROADWORKER'],
            'INFRASTRUCTURE_TYPE_UNKNOWN': cls.__constants['INFRASTRUCTURE_TYPE_UNKNOWN'],
            'INFRASTRUCTURE_FIXED': cls.__constants['INFRASTRUCTURE_FIXED'],
            'INFRASTRUCTURE_MOVABLE': cls.__constants['INFRASTRUCTURE_MOVABLE'],
            'INFRASTRUCTURE_CARGO_TRAILER': cls.__constants['INFRASTRUCTURE_CARGO_TRAILER'],
        }

    @property
    def UNKNOWN_VEHICLE_CLASS(self):
        """Message constant 'UNKNOWN_VEHICLE_CLASS'."""
        return Metaclass_BasicVehicleClass.__constants['UNKNOWN_VEHICLE_CLASS']

    @property
    def SPECIAL_VEHICLE_CLASS(self):
        """Message constant 'SPECIAL_VEHICLE_CLASS'."""
        return Metaclass_BasicVehicleClass.__constants['SPECIAL_VEHICLE_CLASS']

    @property
    def PASSENGER_VEHICLE_TYPE_UNKNOWN(self):
        """Message constant 'PASSENGER_VEHICLE_TYPE_UNKNOWN'."""
        return Metaclass_BasicVehicleClass.__constants['PASSENGER_VEHICLE_TYPE_UNKNOWN']

    @property
    def PASSENGER_VEHICLE_TYPE_OTHER(self):
        """Message constant 'PASSENGER_VEHICLE_TYPE_OTHER'."""
        return Metaclass_BasicVehicleClass.__constants['PASSENGER_VEHICLE_TYPE_OTHER']

    @property
    def LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN(self):
        """Message constant 'LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN'."""
        return Metaclass_BasicVehicleClass.__constants['LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN']

    @property
    def LIGHT_TRUCK_VEHICLE_TYPE_OTHER(self):
        """Message constant 'LIGHT_TRUCK_VEHICLE_TYPE_OTHER'."""
        return Metaclass_BasicVehicleClass.__constants['LIGHT_TRUCK_VEHICLE_TYPE_OTHER']

    @property
    def TRUCK_VEHICLE_TYPE_UNKNOWN(self):
        """Message constant 'TRUCK_VEHICLE_TYPE_UNKNOWN'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_VEHICLE_TYPE_UNKNOWN']

    @property
    def TRUCK_VEHICLE_TYPE_OTHER(self):
        """Message constant 'TRUCK_VEHICLE_TYPE_OTHER'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_VEHICLE_TYPE_OTHER']

    @property
    def TRUCK_AXLE_COUNT_2(self):
        """Message constant 'TRUCK_AXLE_COUNT_2'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_AXLE_COUNT_2']

    @property
    def TRUCK_AXLE_COUNT_3(self):
        """Message constant 'TRUCK_AXLE_COUNT_3'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_AXLE_COUNT_3']

    @property
    def TRUCK_AXLE_COUNT_4(self):
        """Message constant 'TRUCK_AXLE_COUNT_4'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_AXLE_COUNT_4']

    @property
    def TRUCK_AXLE_COUNT_4_TRAILER(self):
        """Message constant 'TRUCK_AXLE_COUNT_4_TRAILER'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_AXLE_COUNT_4_TRAILER']

    @property
    def TRUCK_AXLE_COUNT_5_TRAILER(self):
        """Message constant 'TRUCK_AXLE_COUNT_5_TRAILER'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_AXLE_COUNT_5_TRAILER']

    @property
    def TRUCK_AXLE_COUNT_6_TRAILER(self):
        """Message constant 'TRUCK_AXLE_COUNT_6_TRAILER'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_AXLE_COUNT_6_TRAILER']

    @property
    def TRUCK_AXLE_COUNT_5_MULTI_TRAILER(self):
        """Message constant 'TRUCK_AXLE_COUNT_5_MULTI_TRAILER'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_AXLE_COUNT_5_MULTI_TRAILER']

    @property
    def TRUCK_AXLE_COUNT_6_MULTI_TRAILER(self):
        """Message constant 'TRUCK_AXLE_COUNT_6_MULTI_TRAILER'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_AXLE_COUNT_6_MULTI_TRAILER']

    @property
    def TRUCK_AXLE_COUNT_7_MULTI_TRAILER(self):
        """Message constant 'TRUCK_AXLE_COUNT_7_MULTI_TRAILER'."""
        return Metaclass_BasicVehicleClass.__constants['TRUCK_AXLE_COUNT_7_MULTI_TRAILER']

    @property
    def MOTORCYCLE_TYPE_UNKNOWN(self):
        """Message constant 'MOTORCYCLE_TYPE_UNKNOWN'."""
        return Metaclass_BasicVehicleClass.__constants['MOTORCYCLE_TYPE_UNKNOWN']

    @property
    def MOTORCYCLE_TYPE_OTHER(self):
        """Message constant 'MOTORCYCLE_TYPE_OTHER'."""
        return Metaclass_BasicVehicleClass.__constants['MOTORCYCLE_TYPE_OTHER']

    @property
    def MOTORCYCLE_CRUISER_STANDARD(self):
        """Message constant 'MOTORCYCLE_CRUISER_STANDARD'."""
        return Metaclass_BasicVehicleClass.__constants['MOTORCYCLE_CRUISER_STANDARD']

    @property
    def MOTORCYCLE_SPORT_UNCLAD(self):
        """Message constant 'MOTORCYCLE_SPORT_UNCLAD'."""
        return Metaclass_BasicVehicleClass.__constants['MOTORCYCLE_SPORT_UNCLAD']

    @property
    def MOTORCYCLE_SPORT_TOURING(self):
        """Message constant 'MOTORCYCLE_SPORT_TOURING'."""
        return Metaclass_BasicVehicleClass.__constants['MOTORCYCLE_SPORT_TOURING']

    @property
    def MOTORCYCLE_SUPORT_SPORT(self):
        """Message constant 'MOTORCYCLE_SUPORT_SPORT'."""
        return Metaclass_BasicVehicleClass.__constants['MOTORCYCLE_SUPORT_SPORT']

    @property
    def MOTORCYCLE_TOURING(self):
        """Message constant 'MOTORCYCLE_TOURING'."""
        return Metaclass_BasicVehicleClass.__constants['MOTORCYCLE_TOURING']

    @property
    def MOTORCYCLE_TRIKE(self):
        """Message constant 'MOTORCYCLE_TRIKE'."""
        return Metaclass_BasicVehicleClass.__constants['MOTORCYCLE_TRIKE']

    @property
    def MOTORCYCLE_WITH_PASSENGERS(self):
        """Message constant 'MOTORCYCLE_WITH_PASSENGERS'."""
        return Metaclass_BasicVehicleClass.__constants['MOTORCYCLE_WITH_PASSENGERS']

    @property
    def TRANSIT_TYPE_UNKNOWN(self):
        """Message constant 'TRANSIT_TYPE_UNKNOWN'."""
        return Metaclass_BasicVehicleClass.__constants['TRANSIT_TYPE_UNKNOWN']

    @property
    def TRANSIT_TYPE_OTHER(self):
        """Message constant 'TRANSIT_TYPE_OTHER'."""
        return Metaclass_BasicVehicleClass.__constants['TRANSIT_TYPE_OTHER']

    @property
    def TRANSIT_BRT(self):
        """Message constant 'TRANSIT_BRT'."""
        return Metaclass_BasicVehicleClass.__constants['TRANSIT_BRT']

    @property
    def TRANSIT_EXPRESS_BUS(self):
        """Message constant 'TRANSIT_EXPRESS_BUS'."""
        return Metaclass_BasicVehicleClass.__constants['TRANSIT_EXPRESS_BUS']

    @property
    def TRANSIT_LOCAL_BUS(self):
        """Message constant 'TRANSIT_LOCAL_BUS'."""
        return Metaclass_BasicVehicleClass.__constants['TRANSIT_LOCAL_BUS']

    @property
    def TRANSIT_SCHOOL_BUS(self):
        """Message constant 'TRANSIT_SCHOOL_BUS'."""
        return Metaclass_BasicVehicleClass.__constants['TRANSIT_SCHOOL_BUS']

    @property
    def TRANSIT_FIXED_GUIDEWAY(self):
        """Message constant 'TRANSIT_FIXED_GUIDEWAY'."""
        return Metaclass_BasicVehicleClass.__constants['TRANSIT_FIXED_GUIDEWAY']

    @property
    def TRANSIT_PARATRANSIT(self):
        """Message constant 'TRANSIT_PARATRANSIT'."""
        return Metaclass_BasicVehicleClass.__constants['TRANSIT_PARATRANSIT']

    @property
    def TRANSIT_PARATRANSIT_AMBULANCE(self):
        """Message constant 'TRANSIT_PARATRANSIT_AMBULANCE'."""
        return Metaclass_BasicVehicleClass.__constants['TRANSIT_PARATRANSIT_AMBULANCE']

    @property
    def EMERGENCY_TYPE_UNKNOWN(self):
        """Message constant 'EMERGENCY_TYPE_UNKNOWN'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_TYPE_UNKNOWN']

    @property
    def EMERGENCY_TYPE_OTHER(self):
        """Message constant 'EMERGENCY_TYPE_OTHER'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_TYPE_OTHER']

    @property
    def EMERGENCY_FIRE_LIGHT_VEHICLE(self):
        """Message constant 'EMERGENCY_FIRE_LIGHT_VEHICLE'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_FIRE_LIGHT_VEHICLE']

    @property
    def EMERGENCY_FIRE_HEAVY_VEHICLE(self):
        """Message constant 'EMERGENCY_FIRE_HEAVY_VEHICLE'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_FIRE_HEAVY_VEHICLE']

    @property
    def EMERGENCY_FIRE_PARAMEDIC_VEHICLE(self):
        """Message constant 'EMERGENCY_FIRE_PARAMEDIC_VEHICLE'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_FIRE_PARAMEDIC_VEHICLE']

    @property
    def EMERGENCY_FIRE_AMBULANCE_VEHICLE(self):
        """Message constant 'EMERGENCY_FIRE_AMBULANCE_VEHICLE'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_FIRE_AMBULANCE_VEHICLE']

    @property
    def EMERGENCY_POLICE_LIGHT_VEHICLE(self):
        """Message constant 'EMERGENCY_POLICE_LIGHT_VEHICLE'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_POLICE_LIGHT_VEHICLE']

    @property
    def EMERGENCY_POLICE_HEAVY_VEHICLE(self):
        """Message constant 'EMERGENCY_POLICE_HEAVY_VEHICLE'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_POLICE_HEAVY_VEHICLE']

    @property
    def EMERGENCY_OTHER_RESPONDER(self):
        """Message constant 'EMERGENCY_OTHER_RESPONDER'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_OTHER_RESPONDER']

    @property
    def EMERGENCY_OTHER_AMBULANCE(self):
        """Message constant 'EMERGENCY_OTHER_AMBULANCE'."""
        return Metaclass_BasicVehicleClass.__constants['EMERGENCY_OTHER_AMBULANCE']

    @property
    def OTHER_TRAVELER_TYPE_UNKNOWN(self):
        """Message constant 'OTHER_TRAVELER_TYPE_UNKNOWN'."""
        return Metaclass_BasicVehicleClass.__constants['OTHER_TRAVELER_TYPE_UNKNOWN']

    @property
    def OTHER_TRAVELER_TYPE_OTHER(self):
        """Message constant 'OTHER_TRAVELER_TYPE_OTHER'."""
        return Metaclass_BasicVehicleClass.__constants['OTHER_TRAVELER_TYPE_OTHER']

    @property
    def OTHER_TRAVELER_PEDESTRIAN(self):
        """Message constant 'OTHER_TRAVELER_PEDESTRIAN'."""
        return Metaclass_BasicVehicleClass.__constants['OTHER_TRAVELER_PEDESTRIAN']

    @property
    def OTHER_TRAVELER_VISUALLY_DISABLED(self):
        """Message constant 'OTHER_TRAVELER_VISUALLY_DISABLED'."""
        return Metaclass_BasicVehicleClass.__constants['OTHER_TRAVELER_VISUALLY_DISABLED']

    @property
    def OTHER_TRAVELER_PHYSICALLY_DISABLED(self):
        """Message constant 'OTHER_TRAVELER_PHYSICALLY_DISABLED'."""
        return Metaclass_BasicVehicleClass.__constants['OTHER_TRAVELER_PHYSICALLY_DISABLED']

    @property
    def OTHER_TRAVELER_BICYCLE(self):
        """Message constant 'OTHER_TRAVELER_BICYCLE'."""
        return Metaclass_BasicVehicleClass.__constants['OTHER_TRAVELER_BICYCLE']

    @property
    def OTHER_TRAVELER_VULNERABLE_ROADWORKER(self):
        """Message constant 'OTHER_TRAVELER_VULNERABLE_ROADWORKER'."""
        return Metaclass_BasicVehicleClass.__constants['OTHER_TRAVELER_VULNERABLE_ROADWORKER']

    @property
    def INFRASTRUCTURE_TYPE_UNKNOWN(self):
        """Message constant 'INFRASTRUCTURE_TYPE_UNKNOWN'."""
        return Metaclass_BasicVehicleClass.__constants['INFRASTRUCTURE_TYPE_UNKNOWN']

    @property
    def INFRASTRUCTURE_FIXED(self):
        """Message constant 'INFRASTRUCTURE_FIXED'."""
        return Metaclass_BasicVehicleClass.__constants['INFRASTRUCTURE_FIXED']

    @property
    def INFRASTRUCTURE_MOVABLE(self):
        """Message constant 'INFRASTRUCTURE_MOVABLE'."""
        return Metaclass_BasicVehicleClass.__constants['INFRASTRUCTURE_MOVABLE']

    @property
    def INFRASTRUCTURE_CARGO_TRAILER(self):
        """Message constant 'INFRASTRUCTURE_CARGO_TRAILER'."""
        return Metaclass_BasicVehicleClass.__constants['INFRASTRUCTURE_CARGO_TRAILER']


class BasicVehicleClass(metaclass=Metaclass_BasicVehicleClass):
    """
    Message class 'BasicVehicleClass'.

    Constants:
      UNKNOWN_VEHICLE_CLASS
      SPECIAL_VEHICLE_CLASS
      PASSENGER_VEHICLE_TYPE_UNKNOWN
      PASSENGER_VEHICLE_TYPE_OTHER
      LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN
      LIGHT_TRUCK_VEHICLE_TYPE_OTHER
      TRUCK_VEHICLE_TYPE_UNKNOWN
      TRUCK_VEHICLE_TYPE_OTHER
      TRUCK_AXLE_COUNT_2
      TRUCK_AXLE_COUNT_3
      TRUCK_AXLE_COUNT_4
      TRUCK_AXLE_COUNT_4_TRAILER
      TRUCK_AXLE_COUNT_5_TRAILER
      TRUCK_AXLE_COUNT_6_TRAILER
      TRUCK_AXLE_COUNT_5_MULTI_TRAILER
      TRUCK_AXLE_COUNT_6_MULTI_TRAILER
      TRUCK_AXLE_COUNT_7_MULTI_TRAILER
      MOTORCYCLE_TYPE_UNKNOWN
      MOTORCYCLE_TYPE_OTHER
      MOTORCYCLE_CRUISER_STANDARD
      MOTORCYCLE_SPORT_UNCLAD
      MOTORCYCLE_SPORT_TOURING
      MOTORCYCLE_SUPORT_SPORT
      MOTORCYCLE_TOURING
      MOTORCYCLE_TRIKE
      MOTORCYCLE_WITH_PASSENGERS
      TRANSIT_TYPE_UNKNOWN
      TRANSIT_TYPE_OTHER
      TRANSIT_BRT
      TRANSIT_EXPRESS_BUS
      TRANSIT_LOCAL_BUS
      TRANSIT_SCHOOL_BUS
      TRANSIT_FIXED_GUIDEWAY
      TRANSIT_PARATRANSIT
      TRANSIT_PARATRANSIT_AMBULANCE
      EMERGENCY_TYPE_UNKNOWN
      EMERGENCY_TYPE_OTHER
      EMERGENCY_FIRE_LIGHT_VEHICLE
      EMERGENCY_FIRE_HEAVY_VEHICLE
      EMERGENCY_FIRE_PARAMEDIC_VEHICLE
      EMERGENCY_FIRE_AMBULANCE_VEHICLE
      EMERGENCY_POLICE_LIGHT_VEHICLE
      EMERGENCY_POLICE_HEAVY_VEHICLE
      EMERGENCY_OTHER_RESPONDER
      EMERGENCY_OTHER_AMBULANCE
      OTHER_TRAVELER_TYPE_UNKNOWN
      OTHER_TRAVELER_TYPE_OTHER
      OTHER_TRAVELER_PEDESTRIAN
      OTHER_TRAVELER_VISUALLY_DISABLED
      OTHER_TRAVELER_PHYSICALLY_DISABLED
      OTHER_TRAVELER_BICYCLE
      OTHER_TRAVELER_VULNERABLE_ROADWORKER
      INFRASTRUCTURE_TYPE_UNKNOWN
      INFRASTRUCTURE_FIXED
      INFRASTRUCTURE_MOVABLE
      INFRASTRUCTURE_CARGO_TRAILER
    """

    __slots__ = [
        '_basic_vehicle_class',
    ]

    _fields_and_field_types = {
        'basic_vehicle_class': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.basic_vehicle_class = kwargs.get('basic_vehicle_class', int())

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
        if self.basic_vehicle_class != other.basic_vehicle_class:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def basic_vehicle_class(self):
        """Message field 'basic_vehicle_class'."""
        return self._basic_vehicle_class

    @basic_vehicle_class.setter
    def basic_vehicle_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'basic_vehicle_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'basic_vehicle_class' field must be an unsigned integer in [0, 255]"
        self._basic_vehicle_class = value
