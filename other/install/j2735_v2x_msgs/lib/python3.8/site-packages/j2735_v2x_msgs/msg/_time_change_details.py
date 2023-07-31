# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TimeChangeDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TimeChangeDetails(type):
    """Metaclass of message 'TimeChangeDetails'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'j2735_v2x_msgs.msg.TimeChangeDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__time_change_details
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__time_change_details
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__time_change_details
            cls._TYPE_SUPPORT = module.type_support_msg__msg__time_change_details
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__time_change_details

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TimeChangeDetails(metaclass=Metaclass_TimeChangeDetails):
    """Message class 'TimeChangeDetails'."""

    __slots__ = [
        '_start_time',
        '_start_time_exists',
        '_min_end_time',
        '_max_end_time',
        '_max_end_time_exists',
        '_likely_time',
        '_likely_time_exists',
        '_confidence',
        '_confidence_exists',
        '_next_time',
        '_next_time_exists',
    ]

    _fields_and_field_types = {
        'start_time': 'uint16',
        'start_time_exists': 'boolean',
        'min_end_time': 'uint16',
        'max_end_time': 'uint16',
        'max_end_time_exists': 'boolean',
        'likely_time': 'uint16',
        'likely_time_exists': 'boolean',
        'confidence': 'uint8',
        'confidence_exists': 'boolean',
        'next_time': 'uint16',
        'next_time_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_time = kwargs.get('start_time', int())
        self.start_time_exists = kwargs.get('start_time_exists', bool())
        self.min_end_time = kwargs.get('min_end_time', int())
        self.max_end_time = kwargs.get('max_end_time', int())
        self.max_end_time_exists = kwargs.get('max_end_time_exists', bool())
        self.likely_time = kwargs.get('likely_time', int())
        self.likely_time_exists = kwargs.get('likely_time_exists', bool())
        self.confidence = kwargs.get('confidence', int())
        self.confidence_exists = kwargs.get('confidence_exists', bool())
        self.next_time = kwargs.get('next_time', int())
        self.next_time_exists = kwargs.get('next_time_exists', bool())

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
        if self.start_time != other.start_time:
            return False
        if self.start_time_exists != other.start_time_exists:
            return False
        if self.min_end_time != other.min_end_time:
            return False
        if self.max_end_time != other.max_end_time:
            return False
        if self.max_end_time_exists != other.max_end_time_exists:
            return False
        if self.likely_time != other.likely_time:
            return False
        if self.likely_time_exists != other.likely_time_exists:
            return False
        if self.confidence != other.confidence:
            return False
        if self.confidence_exists != other.confidence_exists:
            return False
        if self.next_time != other.next_time:
            return False
        if self.next_time_exists != other.next_time_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'start_time' field must be an unsigned integer in [0, 65535]"
        self._start_time = value

    @property
    def start_time_exists(self):
        """Message field 'start_time_exists'."""
        return self._start_time_exists

    @start_time_exists.setter
    def start_time_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'start_time_exists' field must be of type 'bool'"
        self._start_time_exists = value

    @property
    def min_end_time(self):
        """Message field 'min_end_time'."""
        return self._min_end_time

    @min_end_time.setter
    def min_end_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_end_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'min_end_time' field must be an unsigned integer in [0, 65535]"
        self._min_end_time = value

    @property
    def max_end_time(self):
        """Message field 'max_end_time'."""
        return self._max_end_time

    @max_end_time.setter
    def max_end_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_end_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_end_time' field must be an unsigned integer in [0, 65535]"
        self._max_end_time = value

    @property
    def max_end_time_exists(self):
        """Message field 'max_end_time_exists'."""
        return self._max_end_time_exists

    @max_end_time_exists.setter
    def max_end_time_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'max_end_time_exists' field must be of type 'bool'"
        self._max_end_time_exists = value

    @property
    def likely_time(self):
        """Message field 'likely_time'."""
        return self._likely_time

    @likely_time.setter
    def likely_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'likely_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'likely_time' field must be an unsigned integer in [0, 65535]"
        self._likely_time = value

    @property
    def likely_time_exists(self):
        """Message field 'likely_time_exists'."""
        return self._likely_time_exists

    @likely_time_exists.setter
    def likely_time_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'likely_time_exists' field must be of type 'bool'"
        self._likely_time_exists = value

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confidence' field must be an unsigned integer in [0, 255]"
        self._confidence = value

    @property
    def confidence_exists(self):
        """Message field 'confidence_exists'."""
        return self._confidence_exists

    @confidence_exists.setter
    def confidence_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'confidence_exists' field must be of type 'bool'"
        self._confidence_exists = value

    @property
    def next_time(self):
        """Message field 'next_time'."""
        return self._next_time

    @next_time.setter
    def next_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'next_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'next_time' field must be an unsigned integer in [0, 65535]"
        self._next_time = value

    @property
    def next_time_exists(self):
        """Message field 'next_time_exists'."""
        return self._next_time_exists

    @next_time_exists.setter
    def next_time_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'next_time_exists' field must be of type 'bool'"
        self._next_time_exists = value
