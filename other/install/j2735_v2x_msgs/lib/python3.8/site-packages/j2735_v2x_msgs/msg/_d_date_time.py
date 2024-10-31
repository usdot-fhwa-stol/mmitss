# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/DDateTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DDateTime(type):
    """Metaclass of message 'DDateTime'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNSET': 0,
        'YEAR': 1,
        'MONTH': 2,
        'DAY': 4,
        'HOUR': 8,
        'MINUTE': 16,
        'SECOND': 32,
        'OFFSET': 64,
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
                'j2735_v2x_msgs.msg.DDateTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__d_date_time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__d_date_time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__d_date_time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__d_date_time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__d_date_time

            from j2735_v2x_msgs.msg import DDay
            if DDay.__class__._TYPE_SUPPORT is None:
                DDay.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DHour
            if DHour.__class__._TYPE_SUPPORT is None:
                DHour.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DMinute
            if DMinute.__class__._TYPE_SUPPORT is None:
                DMinute.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DMonth
            if DMonth.__class__._TYPE_SUPPORT is None:
                DMonth.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DOffset
            if DOffset.__class__._TYPE_SUPPORT is None:
                DOffset.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DSecond
            if DSecond.__class__._TYPE_SUPPORT is None:
                DSecond.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DYear
            if DYear.__class__._TYPE_SUPPORT is None:
                DYear.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNSET': cls.__constants['UNSET'],
            'YEAR': cls.__constants['YEAR'],
            'MONTH': cls.__constants['MONTH'],
            'DAY': cls.__constants['DAY'],
            'HOUR': cls.__constants['HOUR'],
            'MINUTE': cls.__constants['MINUTE'],
            'SECOND': cls.__constants['SECOND'],
            'OFFSET': cls.__constants['OFFSET'],
        }

    @property
    def UNSET(self):
        """Message constant 'UNSET'."""
        return Metaclass_DDateTime.__constants['UNSET']

    @property
    def YEAR(self):
        """Message constant 'YEAR'."""
        return Metaclass_DDateTime.__constants['YEAR']

    @property
    def MONTH(self):
        """Message constant 'MONTH'."""
        return Metaclass_DDateTime.__constants['MONTH']

    @property
    def DAY(self):
        """Message constant 'DAY'."""
        return Metaclass_DDateTime.__constants['DAY']

    @property
    def HOUR(self):
        """Message constant 'HOUR'."""
        return Metaclass_DDateTime.__constants['HOUR']

    @property
    def MINUTE(self):
        """Message constant 'MINUTE'."""
        return Metaclass_DDateTime.__constants['MINUTE']

    @property
    def SECOND(self):
        """Message constant 'SECOND'."""
        return Metaclass_DDateTime.__constants['SECOND']

    @property
    def OFFSET(self):
        """Message constant 'OFFSET'."""
        return Metaclass_DDateTime.__constants['OFFSET']


class DDateTime(metaclass=Metaclass_DDateTime):
    """
    Message class 'DDateTime'.

    Constants:
      UNSET
      YEAR
      MONTH
      DAY
      HOUR
      MINUTE
      SECOND
      OFFSET
    """

    __slots__ = [
        '_presence_vector',
        '_year',
        '_month',
        '_day',
        '_hour',
        '_minute',
        '_second',
        '_offset',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint8',
        'year': 'j2735_v2x_msgs/DYear',
        'month': 'j2735_v2x_msgs/DMonth',
        'day': 'j2735_v2x_msgs/DDay',
        'hour': 'j2735_v2x_msgs/DHour',
        'minute': 'j2735_v2x_msgs/DMinute',
        'second': 'j2735_v2x_msgs/DSecond',
        'offset': 'j2735_v2x_msgs/DOffset',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DYear'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DMonth'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DDay'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DHour'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DMinute'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DSecond'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DOffset'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import DYear
        self.year = kwargs.get('year', DYear())
        from j2735_v2x_msgs.msg import DMonth
        self.month = kwargs.get('month', DMonth())
        from j2735_v2x_msgs.msg import DDay
        self.day = kwargs.get('day', DDay())
        from j2735_v2x_msgs.msg import DHour
        self.hour = kwargs.get('hour', DHour())
        from j2735_v2x_msgs.msg import DMinute
        self.minute = kwargs.get('minute', DMinute())
        from j2735_v2x_msgs.msg import DSecond
        self.second = kwargs.get('second', DSecond())
        from j2735_v2x_msgs.msg import DOffset
        self.offset = kwargs.get('offset', DOffset())

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
        if self.presence_vector != other.presence_vector:
            return False
        if self.year != other.year:
            return False
        if self.month != other.month:
            return False
        if self.day != other.day:
            return False
        if self.hour != other.hour:
            return False
        if self.minute != other.minute:
            return False
        if self.second != other.second:
            return False
        if self.offset != other.offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def presence_vector(self):
        """Message field 'presence_vector'."""
        return self._presence_vector

    @presence_vector.setter
    def presence_vector(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'presence_vector' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'presence_vector' field must be an unsigned integer in [0, 255]"
        self._presence_vector = value

    @property
    def year(self):
        """Message field 'year'."""
        return self._year

    @year.setter
    def year(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DYear
            assert \
                isinstance(value, DYear), \
                "The 'year' field must be a sub message of type 'DYear'"
        self._year = value

    @property
    def month(self):
        """Message field 'month'."""
        return self._month

    @month.setter
    def month(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DMonth
            assert \
                isinstance(value, DMonth), \
                "The 'month' field must be a sub message of type 'DMonth'"
        self._month = value

    @property
    def day(self):
        """Message field 'day'."""
        return self._day

    @day.setter
    def day(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DDay
            assert \
                isinstance(value, DDay), \
                "The 'day' field must be a sub message of type 'DDay'"
        self._day = value

    @property
    def hour(self):
        """Message field 'hour'."""
        return self._hour

    @hour.setter
    def hour(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DHour
            assert \
                isinstance(value, DHour), \
                "The 'hour' field must be a sub message of type 'DHour'"
        self._hour = value

    @property
    def minute(self):
        """Message field 'minute'."""
        return self._minute

    @minute.setter
    def minute(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DMinute
            assert \
                isinstance(value, DMinute), \
                "The 'minute' field must be a sub message of type 'DMinute'"
        self._minute = value

    @property
    def second(self):
        """Message field 'second'."""
        return self._second

    @second.setter
    def second(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DSecond
            assert \
                isinstance(value, DSecond), \
                "The 'second' field must be a sub message of type 'DSecond'"
        self._second = value

    @property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DOffset
            assert \
                isinstance(value, DOffset), \
                "The 'offset' field must be a sub message of type 'DOffset'"
        self._offset = value
