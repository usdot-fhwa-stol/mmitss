# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/SpeedLimitType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeedLimitType(type):
    """Metaclass of message 'SpeedLimitType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'MAXSPEEDINSCHOOLZONE': 1,
        'MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT': 2,
        'MAXSPEEDINCONSTRUCTIONZONE': 3,
        'VEHICLEMINSPEED': 4,
        'VEHICLEMAXSPEED': 5,
        'VEHICLENIGHTMAXSPEED': 6,
        'TRUCKMINSPEED': 7,
        'TRUCKMAXSPEED': 8,
        'TRUCKNIGHTMAXSPEED': 9,
        'VEHICLESWITHTRAILERSMINSPEED': 10,
        'VEHICLESWITHTRAILERSMAXSPEED': 11,
        'VEHICLESWITHTRAILERSNIGHTMAXSPEED': 12,
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
                'j2735_v2x_msgs.msg.SpeedLimitType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__speed_limit_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__speed_limit_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__speed_limit_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__speed_limit_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__speed_limit_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'MAXSPEEDINSCHOOLZONE': cls.__constants['MAXSPEEDINSCHOOLZONE'],
            'MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT': cls.__constants['MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT'],
            'MAXSPEEDINCONSTRUCTIONZONE': cls.__constants['MAXSPEEDINCONSTRUCTIONZONE'],
            'VEHICLEMINSPEED': cls.__constants['VEHICLEMINSPEED'],
            'VEHICLEMAXSPEED': cls.__constants['VEHICLEMAXSPEED'],
            'VEHICLENIGHTMAXSPEED': cls.__constants['VEHICLENIGHTMAXSPEED'],
            'TRUCKMINSPEED': cls.__constants['TRUCKMINSPEED'],
            'TRUCKMAXSPEED': cls.__constants['TRUCKMAXSPEED'],
            'TRUCKNIGHTMAXSPEED': cls.__constants['TRUCKNIGHTMAXSPEED'],
            'VEHICLESWITHTRAILERSMINSPEED': cls.__constants['VEHICLESWITHTRAILERSMINSPEED'],
            'VEHICLESWITHTRAILERSMAXSPEED': cls.__constants['VEHICLESWITHTRAILERSMAXSPEED'],
            'VEHICLESWITHTRAILERSNIGHTMAXSPEED': cls.__constants['VEHICLESWITHTRAILERSNIGHTMAXSPEED'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_SpeedLimitType.__constants['UNKNOWN']

    @property
    def MAXSPEEDINSCHOOLZONE(self):
        """Message constant 'MAXSPEEDINSCHOOLZONE'."""
        return Metaclass_SpeedLimitType.__constants['MAXSPEEDINSCHOOLZONE']

    @property
    def MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT(self):
        """Message constant 'MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT'."""
        return Metaclass_SpeedLimitType.__constants['MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT']

    @property
    def MAXSPEEDINCONSTRUCTIONZONE(self):
        """Message constant 'MAXSPEEDINCONSTRUCTIONZONE'."""
        return Metaclass_SpeedLimitType.__constants['MAXSPEEDINCONSTRUCTIONZONE']

    @property
    def VEHICLEMINSPEED(self):
        """Message constant 'VEHICLEMINSPEED'."""
        return Metaclass_SpeedLimitType.__constants['VEHICLEMINSPEED']

    @property
    def VEHICLEMAXSPEED(self):
        """Message constant 'VEHICLEMAXSPEED'."""
        return Metaclass_SpeedLimitType.__constants['VEHICLEMAXSPEED']

    @property
    def VEHICLENIGHTMAXSPEED(self):
        """Message constant 'VEHICLENIGHTMAXSPEED'."""
        return Metaclass_SpeedLimitType.__constants['VEHICLENIGHTMAXSPEED']

    @property
    def TRUCKMINSPEED(self):
        """Message constant 'TRUCKMINSPEED'."""
        return Metaclass_SpeedLimitType.__constants['TRUCKMINSPEED']

    @property
    def TRUCKMAXSPEED(self):
        """Message constant 'TRUCKMAXSPEED'."""
        return Metaclass_SpeedLimitType.__constants['TRUCKMAXSPEED']

    @property
    def TRUCKNIGHTMAXSPEED(self):
        """Message constant 'TRUCKNIGHTMAXSPEED'."""
        return Metaclass_SpeedLimitType.__constants['TRUCKNIGHTMAXSPEED']

    @property
    def VEHICLESWITHTRAILERSMINSPEED(self):
        """Message constant 'VEHICLESWITHTRAILERSMINSPEED'."""
        return Metaclass_SpeedLimitType.__constants['VEHICLESWITHTRAILERSMINSPEED']

    @property
    def VEHICLESWITHTRAILERSMAXSPEED(self):
        """Message constant 'VEHICLESWITHTRAILERSMAXSPEED'."""
        return Metaclass_SpeedLimitType.__constants['VEHICLESWITHTRAILERSMAXSPEED']

    @property
    def VEHICLESWITHTRAILERSNIGHTMAXSPEED(self):
        """Message constant 'VEHICLESWITHTRAILERSNIGHTMAXSPEED'."""
        return Metaclass_SpeedLimitType.__constants['VEHICLESWITHTRAILERSNIGHTMAXSPEED']


class SpeedLimitType(metaclass=Metaclass_SpeedLimitType):
    """
    Message class 'SpeedLimitType'.

    Constants:
      UNKNOWN
      MAXSPEEDINSCHOOLZONE
      MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT
      MAXSPEEDINCONSTRUCTIONZONE
      VEHICLEMINSPEED
      VEHICLEMAXSPEED
      VEHICLENIGHTMAXSPEED
      TRUCKMINSPEED
      TRUCKMAXSPEED
      TRUCKNIGHTMAXSPEED
      VEHICLESWITHTRAILERSMINSPEED
      VEHICLESWITHTRAILERSMAXSPEED
      VEHICLESWITHTRAILERSNIGHTMAXSPEED
    """

    __slots__ = [
        '_speed_limit_type',
    ]

    _fields_and_field_types = {
        'speed_limit_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed_limit_type = kwargs.get('speed_limit_type', int())

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
        if self.speed_limit_type != other.speed_limit_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def speed_limit_type(self):
        """Message field 'speed_limit_type'."""
        return self._speed_limit_type

    @speed_limit_type.setter
    def speed_limit_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_limit_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed_limit_type' field must be an unsigned integer in [0, 255]"
        self._speed_limit_type = value
