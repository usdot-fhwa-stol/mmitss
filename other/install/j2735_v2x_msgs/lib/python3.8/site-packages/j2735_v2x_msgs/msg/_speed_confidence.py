# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/SpeedConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeedConfidence(type):
    """Metaclass of message 'SpeedConfidence'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'PREC100MS': 1,
        'PREC10MS': 2,
        'PREC5MS': 3,
        'PREC1MS': 4,
        'PREC0_1MS': 5,
        'PREC0_05MS': 6,
        'PREC0_01MS': 7,
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
                'j2735_v2x_msgs.msg.SpeedConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__speed_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__speed_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__speed_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__speed_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__speed_confidence

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'PREC100MS': cls.__constants['PREC100MS'],
            'PREC10MS': cls.__constants['PREC10MS'],
            'PREC5MS': cls.__constants['PREC5MS'],
            'PREC1MS': cls.__constants['PREC1MS'],
            'PREC0_1MS': cls.__constants['PREC0_1MS'],
            'PREC0_05MS': cls.__constants['PREC0_05MS'],
            'PREC0_01MS': cls.__constants['PREC0_01MS'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_SpeedConfidence.__constants['UNAVAILABLE']

    @property
    def PREC100MS(self):
        """Message constant 'PREC100MS'."""
        return Metaclass_SpeedConfidence.__constants['PREC100MS']

    @property
    def PREC10MS(self):
        """Message constant 'PREC10MS'."""
        return Metaclass_SpeedConfidence.__constants['PREC10MS']

    @property
    def PREC5MS(self):
        """Message constant 'PREC5MS'."""
        return Metaclass_SpeedConfidence.__constants['PREC5MS']

    @property
    def PREC1MS(self):
        """Message constant 'PREC1MS'."""
        return Metaclass_SpeedConfidence.__constants['PREC1MS']

    @property
    def PREC0_1MS(self):
        """Message constant 'PREC0_1MS'."""
        return Metaclass_SpeedConfidence.__constants['PREC0_1MS']

    @property
    def PREC0_05MS(self):
        """Message constant 'PREC0_05MS'."""
        return Metaclass_SpeedConfidence.__constants['PREC0_05MS']

    @property
    def PREC0_01MS(self):
        """Message constant 'PREC0_01MS'."""
        return Metaclass_SpeedConfidence.__constants['PREC0_01MS']


class SpeedConfidence(metaclass=Metaclass_SpeedConfidence):
    """
    Message class 'SpeedConfidence'.

    Constants:
      UNAVAILABLE
      PREC100MS
      PREC10MS
      PREC5MS
      PREC1MS
      PREC0_1MS
      PREC0_05MS
      PREC0_01MS
    """

    __slots__ = [
        '_speed_confidence',
    ]

    _fields_and_field_types = {
        'speed_confidence': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed_confidence = kwargs.get('speed_confidence', int())

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
        if self.speed_confidence != other.speed_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def speed_confidence(self):
        """Message field 'speed_confidence'."""
        return self._speed_confidence

    @speed_confidence.setter
    def speed_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed_confidence' field must be an unsigned integer in [0, 255]"
        self._speed_confidence = value
