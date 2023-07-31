# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/DSecond.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DSecond(type):
    """Metaclass of message 'DSecond'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN': 0,
        'MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX': 59999,
        'MILLISEC_WITHIN_MINUTE_LEAP_MIN': 60000,
        'MILLISEC_WITHIN_MINUTE_LEAP_MAX': 60999,
        'RESERVED_MIN': 61000,
        'RESERVED_MAX': 65534,
        'UNAVAILABLE': 65535,
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
                'j2735_v2x_msgs.msg.DSecond')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__d_second
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__d_second
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__d_second
            cls._TYPE_SUPPORT = module.type_support_msg__msg__d_second
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__d_second

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN': cls.__constants['MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN'],
            'MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX': cls.__constants['MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX'],
            'MILLISEC_WITHIN_MINUTE_LEAP_MIN': cls.__constants['MILLISEC_WITHIN_MINUTE_LEAP_MIN'],
            'MILLISEC_WITHIN_MINUTE_LEAP_MAX': cls.__constants['MILLISEC_WITHIN_MINUTE_LEAP_MAX'],
            'RESERVED_MIN': cls.__constants['RESERVED_MIN'],
            'RESERVED_MAX': cls.__constants['RESERVED_MAX'],
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
        }

    @property
    def MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN(self):
        """Message constant 'MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN'."""
        return Metaclass_DSecond.__constants['MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN']

    @property
    def MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX(self):
        """Message constant 'MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX'."""
        return Metaclass_DSecond.__constants['MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX']

    @property
    def MILLISEC_WITHIN_MINUTE_LEAP_MIN(self):
        """Message constant 'MILLISEC_WITHIN_MINUTE_LEAP_MIN'."""
        return Metaclass_DSecond.__constants['MILLISEC_WITHIN_MINUTE_LEAP_MIN']

    @property
    def MILLISEC_WITHIN_MINUTE_LEAP_MAX(self):
        """Message constant 'MILLISEC_WITHIN_MINUTE_LEAP_MAX'."""
        return Metaclass_DSecond.__constants['MILLISEC_WITHIN_MINUTE_LEAP_MAX']

    @property
    def RESERVED_MIN(self):
        """Message constant 'RESERVED_MIN'."""
        return Metaclass_DSecond.__constants['RESERVED_MIN']

    @property
    def RESERVED_MAX(self):
        """Message constant 'RESERVED_MAX'."""
        return Metaclass_DSecond.__constants['RESERVED_MAX']

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_DSecond.__constants['UNAVAILABLE']


class DSecond(metaclass=Metaclass_DSecond):
    """
    Message class 'DSecond'.

    Constants:
      MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN
      MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX
      MILLISEC_WITHIN_MINUTE_LEAP_MIN
      MILLISEC_WITHIN_MINUTE_LEAP_MAX
      RESERVED_MIN
      RESERVED_MAX
      UNAVAILABLE
    """

    __slots__ = [
        '_millisecond',
    ]

    _fields_and_field_types = {
        'millisecond': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.millisecond = kwargs.get('millisecond', int())

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
        if self.millisecond != other.millisecond:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def millisecond(self):
        """Message field 'millisecond'."""
        return self._millisecond

    @millisecond.setter
    def millisecond(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'millisecond' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'millisecond' field must be an unsigned integer in [0, 65535]"
        self._millisecond = value
