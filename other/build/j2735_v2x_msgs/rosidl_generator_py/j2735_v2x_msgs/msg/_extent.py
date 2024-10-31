# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/Extent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Extent(type):
    """Metaclass of message 'Extent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'USE_INSTANTLY_ONLY': 0,
        'USE_FOR_3_METERS': 1,
        'USE_FOR_10_METERS': 2,
        'USE_FOR_50_METERS': 3,
        'USE_FOR_100_METERS': 4,
        'USE_FOR_500_METERS': 5,
        'USE_FOR_1000_METERS': 6,
        'USE_FOR_5000_METERS': 7,
        'USE_FOR_10000_METERS': 8,
        'USE_FOR_50000_METERS': 9,
        'USE_FOR_100000_METERS': 10,
        'USE_FOR_500000_METERS': 11,
        'USE_FOR_1000000_METERS': 12,
        'USE_FOR_5000000_METERS': 13,
        'USE_FOR_10000000_METERS': 14,
        'FOREVER': 15,
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
                'j2735_v2x_msgs.msg.Extent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__extent
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__extent
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__extent
            cls._TYPE_SUPPORT = module.type_support_msg__msg__extent
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__extent

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'USE_INSTANTLY_ONLY': cls.__constants['USE_INSTANTLY_ONLY'],
            'USE_FOR_3_METERS': cls.__constants['USE_FOR_3_METERS'],
            'USE_FOR_10_METERS': cls.__constants['USE_FOR_10_METERS'],
            'USE_FOR_50_METERS': cls.__constants['USE_FOR_50_METERS'],
            'USE_FOR_100_METERS': cls.__constants['USE_FOR_100_METERS'],
            'USE_FOR_500_METERS': cls.__constants['USE_FOR_500_METERS'],
            'USE_FOR_1000_METERS': cls.__constants['USE_FOR_1000_METERS'],
            'USE_FOR_5000_METERS': cls.__constants['USE_FOR_5000_METERS'],
            'USE_FOR_10000_METERS': cls.__constants['USE_FOR_10000_METERS'],
            'USE_FOR_50000_METERS': cls.__constants['USE_FOR_50000_METERS'],
            'USE_FOR_100000_METERS': cls.__constants['USE_FOR_100000_METERS'],
            'USE_FOR_500000_METERS': cls.__constants['USE_FOR_500000_METERS'],
            'USE_FOR_1000000_METERS': cls.__constants['USE_FOR_1000000_METERS'],
            'USE_FOR_5000000_METERS': cls.__constants['USE_FOR_5000000_METERS'],
            'USE_FOR_10000000_METERS': cls.__constants['USE_FOR_10000000_METERS'],
            'FOREVER': cls.__constants['FOREVER'],
        }

    @property
    def USE_INSTANTLY_ONLY(self):
        """Message constant 'USE_INSTANTLY_ONLY'."""
        return Metaclass_Extent.__constants['USE_INSTANTLY_ONLY']

    @property
    def USE_FOR_3_METERS(self):
        """Message constant 'USE_FOR_3_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_3_METERS']

    @property
    def USE_FOR_10_METERS(self):
        """Message constant 'USE_FOR_10_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_10_METERS']

    @property
    def USE_FOR_50_METERS(self):
        """Message constant 'USE_FOR_50_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_50_METERS']

    @property
    def USE_FOR_100_METERS(self):
        """Message constant 'USE_FOR_100_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_100_METERS']

    @property
    def USE_FOR_500_METERS(self):
        """Message constant 'USE_FOR_500_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_500_METERS']

    @property
    def USE_FOR_1000_METERS(self):
        """Message constant 'USE_FOR_1000_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_1000_METERS']

    @property
    def USE_FOR_5000_METERS(self):
        """Message constant 'USE_FOR_5000_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_5000_METERS']

    @property
    def USE_FOR_10000_METERS(self):
        """Message constant 'USE_FOR_10000_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_10000_METERS']

    @property
    def USE_FOR_50000_METERS(self):
        """Message constant 'USE_FOR_50000_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_50000_METERS']

    @property
    def USE_FOR_100000_METERS(self):
        """Message constant 'USE_FOR_100000_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_100000_METERS']

    @property
    def USE_FOR_500000_METERS(self):
        """Message constant 'USE_FOR_500000_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_500000_METERS']

    @property
    def USE_FOR_1000000_METERS(self):
        """Message constant 'USE_FOR_1000000_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_1000000_METERS']

    @property
    def USE_FOR_5000000_METERS(self):
        """Message constant 'USE_FOR_5000000_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_5000000_METERS']

    @property
    def USE_FOR_10000000_METERS(self):
        """Message constant 'USE_FOR_10000000_METERS'."""
        return Metaclass_Extent.__constants['USE_FOR_10000000_METERS']

    @property
    def FOREVER(self):
        """Message constant 'FOREVER'."""
        return Metaclass_Extent.__constants['FOREVER']


class Extent(metaclass=Metaclass_Extent):
    """
    Message class 'Extent'.

    Constants:
      USE_INSTANTLY_ONLY
      USE_FOR_3_METERS
      USE_FOR_10_METERS
      USE_FOR_50_METERS
      USE_FOR_100_METERS
      USE_FOR_500_METERS
      USE_FOR_1000_METERS
      USE_FOR_5000_METERS
      USE_FOR_10000_METERS
      USE_FOR_50000_METERS
      USE_FOR_100000_METERS
      USE_FOR_500000_METERS
      USE_FOR_1000000_METERS
      USE_FOR_5000000_METERS
      USE_FOR_10000000_METERS
      FOREVER
    """

    __slots__ = [
        '_extent_value',
    ]

    _fields_and_field_types = {
        'extent_value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.extent_value = kwargs.get('extent_value', int())

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
        if self.extent_value != other.extent_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def extent_value(self):
        """Message field 'extent_value'."""
        return self._extent_value

    @extent_value.setter
    def extent_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extent_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'extent_value' field must be an unsigned integer in [0, 255]"
        self._extent_value = value
