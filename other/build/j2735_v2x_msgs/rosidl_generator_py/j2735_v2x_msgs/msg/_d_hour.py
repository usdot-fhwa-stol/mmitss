# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/DHour.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DHour(type):
    """Metaclass of message 'DHour'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HOUR_OF_DAY_MIN': 0,
        'HOUR_OF_DAY_MAX': 31,
        'TRANSITE_SCHEDULE_ADHERENCE_START': 24,
        'TRANSITE_SCHEDULE_ADHERENCE_END': 30,
        'UNAVAILABLE': 31,
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
                'j2735_v2x_msgs.msg.DHour')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__d_hour
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__d_hour
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__d_hour
            cls._TYPE_SUPPORT = module.type_support_msg__msg__d_hour
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__d_hour

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HOUR_OF_DAY_MIN': cls.__constants['HOUR_OF_DAY_MIN'],
            'HOUR_OF_DAY_MAX': cls.__constants['HOUR_OF_DAY_MAX'],
            'TRANSITE_SCHEDULE_ADHERENCE_START': cls.__constants['TRANSITE_SCHEDULE_ADHERENCE_START'],
            'TRANSITE_SCHEDULE_ADHERENCE_END': cls.__constants['TRANSITE_SCHEDULE_ADHERENCE_END'],
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
        }

    @property
    def HOUR_OF_DAY_MIN(self):
        """Message constant 'HOUR_OF_DAY_MIN'."""
        return Metaclass_DHour.__constants['HOUR_OF_DAY_MIN']

    @property
    def HOUR_OF_DAY_MAX(self):
        """Message constant 'HOUR_OF_DAY_MAX'."""
        return Metaclass_DHour.__constants['HOUR_OF_DAY_MAX']

    @property
    def TRANSITE_SCHEDULE_ADHERENCE_START(self):
        """Message constant 'TRANSITE_SCHEDULE_ADHERENCE_START'."""
        return Metaclass_DHour.__constants['TRANSITE_SCHEDULE_ADHERENCE_START']

    @property
    def TRANSITE_SCHEDULE_ADHERENCE_END(self):
        """Message constant 'TRANSITE_SCHEDULE_ADHERENCE_END'."""
        return Metaclass_DHour.__constants['TRANSITE_SCHEDULE_ADHERENCE_END']

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_DHour.__constants['UNAVAILABLE']


class DHour(metaclass=Metaclass_DHour):
    """
    Message class 'DHour'.

    Constants:
      HOUR_OF_DAY_MIN
      HOUR_OF_DAY_MAX
      TRANSITE_SCHEDULE_ADHERENCE_START
      TRANSITE_SCHEDULE_ADHERENCE_END
      UNAVAILABLE
    """

    __slots__ = [
        '_hour',
    ]

    _fields_and_field_types = {
        'hour': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hour = kwargs.get('hour', int())

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
        if self.hour != other.hour:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def hour(self):
        """Message field 'hour'."""
        return self._hour

    @hour.setter
    def hour(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hour' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hour' field must be an unsigned integer in [0, 255]"
        self._hour = value
