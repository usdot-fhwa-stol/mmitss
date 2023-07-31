# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ITISVehicleGroupAffected.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ITISVehicleGroupAffected(type):
    """Metaclass of message 'ITISVehicleGroupAffected'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALL_VEHICLES': 9217,
        'BICYCLES': 9218,
        'MOTORCYCLES': 9219,
        'CARS': 9220,
        'LIGHT_VEHICLES': 9221,
        'CARS_AND_LIGHT_VEHICLES': 9222,
        'CARS_WITH_TRAILERS': 9223,
        'CARS_WITH_RECREATIONAL_TRAILERS': 9224,
        'VEHICLES_WITH_TRAILERS': 9225,
        'HEAVY_VEHICLES': 9226,
        'TRUCKS': 9227,
        'BUSES': 9228,
        'ARTICULATED_BUSES': 9229,
        'SCHOOL_BUSES': 9230,
        'VEHICLES_WITH_SEMI_TRAILERS': 9231,
        'VEHICLES_WITH_DOUBLE_TRAILERS': 9232,
        'HIGH_PROFILE_VEHICLES': 9233,
        'WIDE_VEHICLES': 9234,
        'LONG_VEHICLES': 9235,
        'HAZARDOUS_LOADS': 9236,
        'EXCEPTIONAL_LOADS': 9237,
        'ABNORMAL_LOADS': 9238,
        'CONVOYS': 9239,
        'MAINTENANCE_VEHICLES': 9240,
        'DELIVERY_VEHICLES': 9241,
        'VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES': 9242,
        'VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES': 9243,
        'VEHICLES_WITH_PARKING_PERMITS': 9244,
        'VEHICLES_WITH_CATALYTIC_CONVERTERS': 9245,
        'VEHICLES_WITHOUT_CATALYTIC_CONVERTERS': 9246,
        'GAS_POWERED_VEHICLES': 9248,
        'LPG_VEHICLES': 9249,
        'MILITARY_CONVOYS': 9250,
        'MILITARY_VEHICLES': 9251,
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
                'j2735_v2x_msgs.msg.ITISVehicleGroupAffected')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__itis_vehicle_group_affected
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__itis_vehicle_group_affected
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__itis_vehicle_group_affected
            cls._TYPE_SUPPORT = module.type_support_msg__msg__itis_vehicle_group_affected
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__itis_vehicle_group_affected

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALL_VEHICLES': cls.__constants['ALL_VEHICLES'],
            'BICYCLES': cls.__constants['BICYCLES'],
            'MOTORCYCLES': cls.__constants['MOTORCYCLES'],
            'CARS': cls.__constants['CARS'],
            'LIGHT_VEHICLES': cls.__constants['LIGHT_VEHICLES'],
            'CARS_AND_LIGHT_VEHICLES': cls.__constants['CARS_AND_LIGHT_VEHICLES'],
            'CARS_WITH_TRAILERS': cls.__constants['CARS_WITH_TRAILERS'],
            'CARS_WITH_RECREATIONAL_TRAILERS': cls.__constants['CARS_WITH_RECREATIONAL_TRAILERS'],
            'VEHICLES_WITH_TRAILERS': cls.__constants['VEHICLES_WITH_TRAILERS'],
            'HEAVY_VEHICLES': cls.__constants['HEAVY_VEHICLES'],
            'TRUCKS': cls.__constants['TRUCKS'],
            'BUSES': cls.__constants['BUSES'],
            'ARTICULATED_BUSES': cls.__constants['ARTICULATED_BUSES'],
            'SCHOOL_BUSES': cls.__constants['SCHOOL_BUSES'],
            'VEHICLES_WITH_SEMI_TRAILERS': cls.__constants['VEHICLES_WITH_SEMI_TRAILERS'],
            'VEHICLES_WITH_DOUBLE_TRAILERS': cls.__constants['VEHICLES_WITH_DOUBLE_TRAILERS'],
            'HIGH_PROFILE_VEHICLES': cls.__constants['HIGH_PROFILE_VEHICLES'],
            'WIDE_VEHICLES': cls.__constants['WIDE_VEHICLES'],
            'LONG_VEHICLES': cls.__constants['LONG_VEHICLES'],
            'HAZARDOUS_LOADS': cls.__constants['HAZARDOUS_LOADS'],
            'EXCEPTIONAL_LOADS': cls.__constants['EXCEPTIONAL_LOADS'],
            'ABNORMAL_LOADS': cls.__constants['ABNORMAL_LOADS'],
            'CONVOYS': cls.__constants['CONVOYS'],
            'MAINTENANCE_VEHICLES': cls.__constants['MAINTENANCE_VEHICLES'],
            'DELIVERY_VEHICLES': cls.__constants['DELIVERY_VEHICLES'],
            'VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES': cls.__constants['VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES'],
            'VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES': cls.__constants['VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES'],
            'VEHICLES_WITH_PARKING_PERMITS': cls.__constants['VEHICLES_WITH_PARKING_PERMITS'],
            'VEHICLES_WITH_CATALYTIC_CONVERTERS': cls.__constants['VEHICLES_WITH_CATALYTIC_CONVERTERS'],
            'VEHICLES_WITHOUT_CATALYTIC_CONVERTERS': cls.__constants['VEHICLES_WITHOUT_CATALYTIC_CONVERTERS'],
            'GAS_POWERED_VEHICLES': cls.__constants['GAS_POWERED_VEHICLES'],
            'LPG_VEHICLES': cls.__constants['LPG_VEHICLES'],
            'MILITARY_CONVOYS': cls.__constants['MILITARY_CONVOYS'],
            'MILITARY_VEHICLES': cls.__constants['MILITARY_VEHICLES'],
        }

    @property
    def ALL_VEHICLES(self):
        """Message constant 'ALL_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['ALL_VEHICLES']

    @property
    def BICYCLES(self):
        """Message constant 'BICYCLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['BICYCLES']

    @property
    def MOTORCYCLES(self):
        """Message constant 'MOTORCYCLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['MOTORCYCLES']

    @property
    def CARS(self):
        """Message constant 'CARS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['CARS']

    @property
    def LIGHT_VEHICLES(self):
        """Message constant 'LIGHT_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['LIGHT_VEHICLES']

    @property
    def CARS_AND_LIGHT_VEHICLES(self):
        """Message constant 'CARS_AND_LIGHT_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['CARS_AND_LIGHT_VEHICLES']

    @property
    def CARS_WITH_TRAILERS(self):
        """Message constant 'CARS_WITH_TRAILERS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['CARS_WITH_TRAILERS']

    @property
    def CARS_WITH_RECREATIONAL_TRAILERS(self):
        """Message constant 'CARS_WITH_RECREATIONAL_TRAILERS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['CARS_WITH_RECREATIONAL_TRAILERS']

    @property
    def VEHICLES_WITH_TRAILERS(self):
        """Message constant 'VEHICLES_WITH_TRAILERS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['VEHICLES_WITH_TRAILERS']

    @property
    def HEAVY_VEHICLES(self):
        """Message constant 'HEAVY_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['HEAVY_VEHICLES']

    @property
    def TRUCKS(self):
        """Message constant 'TRUCKS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['TRUCKS']

    @property
    def BUSES(self):
        """Message constant 'BUSES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['BUSES']

    @property
    def ARTICULATED_BUSES(self):
        """Message constant 'ARTICULATED_BUSES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['ARTICULATED_BUSES']

    @property
    def SCHOOL_BUSES(self):
        """Message constant 'SCHOOL_BUSES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['SCHOOL_BUSES']

    @property
    def VEHICLES_WITH_SEMI_TRAILERS(self):
        """Message constant 'VEHICLES_WITH_SEMI_TRAILERS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['VEHICLES_WITH_SEMI_TRAILERS']

    @property
    def VEHICLES_WITH_DOUBLE_TRAILERS(self):
        """Message constant 'VEHICLES_WITH_DOUBLE_TRAILERS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['VEHICLES_WITH_DOUBLE_TRAILERS']

    @property
    def HIGH_PROFILE_VEHICLES(self):
        """Message constant 'HIGH_PROFILE_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['HIGH_PROFILE_VEHICLES']

    @property
    def WIDE_VEHICLES(self):
        """Message constant 'WIDE_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['WIDE_VEHICLES']

    @property
    def LONG_VEHICLES(self):
        """Message constant 'LONG_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['LONG_VEHICLES']

    @property
    def HAZARDOUS_LOADS(self):
        """Message constant 'HAZARDOUS_LOADS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['HAZARDOUS_LOADS']

    @property
    def EXCEPTIONAL_LOADS(self):
        """Message constant 'EXCEPTIONAL_LOADS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['EXCEPTIONAL_LOADS']

    @property
    def ABNORMAL_LOADS(self):
        """Message constant 'ABNORMAL_LOADS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['ABNORMAL_LOADS']

    @property
    def CONVOYS(self):
        """Message constant 'CONVOYS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['CONVOYS']

    @property
    def MAINTENANCE_VEHICLES(self):
        """Message constant 'MAINTENANCE_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['MAINTENANCE_VEHICLES']

    @property
    def DELIVERY_VEHICLES(self):
        """Message constant 'DELIVERY_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['DELIVERY_VEHICLES']

    @property
    def VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES(self):
        """Message constant 'VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES']

    @property
    def VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES(self):
        """Message constant 'VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES']

    @property
    def VEHICLES_WITH_PARKING_PERMITS(self):
        """Message constant 'VEHICLES_WITH_PARKING_PERMITS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['VEHICLES_WITH_PARKING_PERMITS']

    @property
    def VEHICLES_WITH_CATALYTIC_CONVERTERS(self):
        """Message constant 'VEHICLES_WITH_CATALYTIC_CONVERTERS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['VEHICLES_WITH_CATALYTIC_CONVERTERS']

    @property
    def VEHICLES_WITHOUT_CATALYTIC_CONVERTERS(self):
        """Message constant 'VEHICLES_WITHOUT_CATALYTIC_CONVERTERS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['VEHICLES_WITHOUT_CATALYTIC_CONVERTERS']

    @property
    def GAS_POWERED_VEHICLES(self):
        """Message constant 'GAS_POWERED_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['GAS_POWERED_VEHICLES']

    @property
    def LPG_VEHICLES(self):
        """Message constant 'LPG_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['LPG_VEHICLES']

    @property
    def MILITARY_CONVOYS(self):
        """Message constant 'MILITARY_CONVOYS'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['MILITARY_CONVOYS']

    @property
    def MILITARY_VEHICLES(self):
        """Message constant 'MILITARY_VEHICLES'."""
        return Metaclass_ITISVehicleGroupAffected.__constants['MILITARY_VEHICLES']


class ITISVehicleGroupAffected(metaclass=Metaclass_ITISVehicleGroupAffected):
    """
    Message class 'ITISVehicleGroupAffected'.

    Constants:
      ALL_VEHICLES
      BICYCLES
      MOTORCYCLES
      CARS
      LIGHT_VEHICLES
      CARS_AND_LIGHT_VEHICLES
      CARS_WITH_TRAILERS
      CARS_WITH_RECREATIONAL_TRAILERS
      VEHICLES_WITH_TRAILERS
      HEAVY_VEHICLES
      TRUCKS
      BUSES
      ARTICULATED_BUSES
      SCHOOL_BUSES
      VEHICLES_WITH_SEMI_TRAILERS
      VEHICLES_WITH_DOUBLE_TRAILERS
      HIGH_PROFILE_VEHICLES
      WIDE_VEHICLES
      LONG_VEHICLES
      HAZARDOUS_LOADS
      EXCEPTIONAL_LOADS
      ABNORMAL_LOADS
      CONVOYS
      MAINTENANCE_VEHICLES
      DELIVERY_VEHICLES
      VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES
      VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES
      VEHICLES_WITH_PARKING_PERMITS
      VEHICLES_WITH_CATALYTIC_CONVERTERS
      VEHICLES_WITHOUT_CATALYTIC_CONVERTERS
      GAS_POWERED_VEHICLES
      LPG_VEHICLES
      MILITARY_CONVOYS
      MILITARY_VEHICLES
    """

    __slots__ = [
        '_vehicle_group_affected',
    ]

    _fields_and_field_types = {
        'vehicle_group_affected': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicle_group_affected = kwargs.get('vehicle_group_affected', int())

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
        if self.vehicle_group_affected != other.vehicle_group_affected:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def vehicle_group_affected(self):
        """Message field 'vehicle_group_affected'."""
        return self._vehicle_group_affected

    @vehicle_group_affected.setter
    def vehicle_group_affected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_group_affected' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'vehicle_group_affected' field must be an unsigned integer in [0, 65535]"
        self._vehicle_group_affected = value
