# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PublicSafetyDirectingTrafficSubType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PublicSafetyDirectingTrafficSubType(type):
    """Metaclass of message 'PublicSafetyDirectingTrafficSubType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'POLICE_AND_TRAFFIC_OFFICERS': 1,
        'TRAFFIC_CONTROL_PERSONS': 2,
        'RAILROAD_CROSSING_GURADS': 4,
        'CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE': 8,
        'EMERGENCY_ORGANIZATION_PERSONNEL': 16,
        'HIGHWAY_SERVICE_VEHICLE_PERSONNEL': 32,
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
                'j2735_v2x_msgs.msg.PublicSafetyDirectingTrafficSubType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__public_safety_directing_traffic_sub_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__public_safety_directing_traffic_sub_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__public_safety_directing_traffic_sub_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__public_safety_directing_traffic_sub_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__public_safety_directing_traffic_sub_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'POLICE_AND_TRAFFIC_OFFICERS': cls.__constants['POLICE_AND_TRAFFIC_OFFICERS'],
            'TRAFFIC_CONTROL_PERSONS': cls.__constants['TRAFFIC_CONTROL_PERSONS'],
            'RAILROAD_CROSSING_GURADS': cls.__constants['RAILROAD_CROSSING_GURADS'],
            'CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE': cls.__constants['CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE'],
            'EMERGENCY_ORGANIZATION_PERSONNEL': cls.__constants['EMERGENCY_ORGANIZATION_PERSONNEL'],
            'HIGHWAY_SERVICE_VEHICLE_PERSONNEL': cls.__constants['HIGHWAY_SERVICE_VEHICLE_PERSONNEL'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_PublicSafetyDirectingTrafficSubType.__constants['UNAVAILABLE']

    @property
    def POLICE_AND_TRAFFIC_OFFICERS(self):
        """Message constant 'POLICE_AND_TRAFFIC_OFFICERS'."""
        return Metaclass_PublicSafetyDirectingTrafficSubType.__constants['POLICE_AND_TRAFFIC_OFFICERS']

    @property
    def TRAFFIC_CONTROL_PERSONS(self):
        """Message constant 'TRAFFIC_CONTROL_PERSONS'."""
        return Metaclass_PublicSafetyDirectingTrafficSubType.__constants['TRAFFIC_CONTROL_PERSONS']

    @property
    def RAILROAD_CROSSING_GURADS(self):
        """Message constant 'RAILROAD_CROSSING_GURADS'."""
        return Metaclass_PublicSafetyDirectingTrafficSubType.__constants['RAILROAD_CROSSING_GURADS']

    @property
    def CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE(self):
        """Message constant 'CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE'."""
        return Metaclass_PublicSafetyDirectingTrafficSubType.__constants['CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE']

    @property
    def EMERGENCY_ORGANIZATION_PERSONNEL(self):
        """Message constant 'EMERGENCY_ORGANIZATION_PERSONNEL'."""
        return Metaclass_PublicSafetyDirectingTrafficSubType.__constants['EMERGENCY_ORGANIZATION_PERSONNEL']

    @property
    def HIGHWAY_SERVICE_VEHICLE_PERSONNEL(self):
        """Message constant 'HIGHWAY_SERVICE_VEHICLE_PERSONNEL'."""
        return Metaclass_PublicSafetyDirectingTrafficSubType.__constants['HIGHWAY_SERVICE_VEHICLE_PERSONNEL']


class PublicSafetyDirectingTrafficSubType(metaclass=Metaclass_PublicSafetyDirectingTrafficSubType):
    """
    Message class 'PublicSafetyDirectingTrafficSubType'.

    Constants:
      UNAVAILABLE
      POLICE_AND_TRAFFIC_OFFICERS
      TRAFFIC_CONTROL_PERSONS
      RAILROAD_CROSSING_GURADS
      CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE
      EMERGENCY_ORGANIZATION_PERSONNEL
      HIGHWAY_SERVICE_VEHICLE_PERSONNEL
    """

    __slots__ = [
        '_sub_types',
    ]

    _fields_and_field_types = {
        'sub_types': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sub_types = kwargs.get('sub_types', int())

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
        if self.sub_types != other.sub_types:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sub_types(self):
        """Message field 'sub_types'."""
        return self._sub_types

    @sub_types.setter
    def sub_types(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_types' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sub_types' field must be an unsigned integer in [0, 255]"
        self._sub_types = value
