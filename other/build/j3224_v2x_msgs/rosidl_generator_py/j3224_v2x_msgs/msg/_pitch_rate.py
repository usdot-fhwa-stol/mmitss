# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/PitchRate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PitchRate(type):
    """Metaclass of message 'PitchRate'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MIN_PITCH_RATE': -32767,
        'MAX_PITCH_RATE': 32766,
        'UNAVAILABLE': 32767,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j3224_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j3224_v2x_msgs.msg.PitchRate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pitch_rate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pitch_rate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pitch_rate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pitch_rate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pitch_rate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MIN_PITCH_RATE': cls.__constants['MIN_PITCH_RATE'],
            'MAX_PITCH_RATE': cls.__constants['MAX_PITCH_RATE'],
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
        }

    @property
    def MIN_PITCH_RATE(self):
        """Message constant 'MIN_PITCH_RATE'."""
        return Metaclass_PitchRate.__constants['MIN_PITCH_RATE']

    @property
    def MAX_PITCH_RATE(self):
        """Message constant 'MAX_PITCH_RATE'."""
        return Metaclass_PitchRate.__constants['MAX_PITCH_RATE']

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_PitchRate.__constants['UNAVAILABLE']


class PitchRate(metaclass=Metaclass_PitchRate):
    """
    Message class 'PitchRate'.

    Constants:
      MIN_PITCH_RATE
      MAX_PITCH_RATE
      UNAVAILABLE
    """

    __slots__ = [
        '_pitch_rate',
    ]

    _fields_and_field_types = {
        'pitch_rate': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pitch_rate = kwargs.get('pitch_rate', int())

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
        if self.pitch_rate != other.pitch_rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pitch_rate' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pitch_rate' field must be an integer in [-32768, 32767]"
        self._pitch_rate = value
