# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/TrafficControlSchedule.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficControlSchedule(type):
    """Metaclass of message 'TrafficControlSchedule'."""

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
            module = import_type_support('carma_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_v2x_msgs.msg.TrafficControlSchedule')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_control_schedule
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_control_schedule
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_control_schedule
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_control_schedule
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_control_schedule

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import DailySchedule
            if DailySchedule.__class__._TYPE_SUPPORT is None:
                DailySchedule.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import RepeatParams
            if RepeatParams.__class__._TYPE_SUPPORT is None:
                RepeatParams.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DayOfWeek
            if DayOfWeek.__class__._TYPE_SUPPORT is None:
                DayOfWeek.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficControlSchedule(metaclass=Metaclass_TrafficControlSchedule):
    """Message class 'TrafficControlSchedule'."""

    __slots__ = [
        '_start',
        '_end',
        '_end_exists',
        '_dow',
        '_dow_exists',
        '_between',
        '_between_exists',
        '_repeat',
        '_repeat_exists',
    ]

    _fields_and_field_types = {
        'start': 'builtin_interfaces/Time',
        'end': 'builtin_interfaces/Time',
        'end_exists': 'boolean',
        'dow': 'j2735_v2x_msgs/DayOfWeek',
        'dow_exists': 'boolean',
        'between': 'sequence<carma_v2x_msgs/DailySchedule>',
        'between_exists': 'boolean',
        'repeat': 'carma_v2x_msgs/RepeatParams',
        'repeat_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DayOfWeek'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'DailySchedule')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'RepeatParams'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.start = kwargs.get('start', Time())
        from builtin_interfaces.msg import Time
        self.end = kwargs.get('end', Time())
        self.end_exists = kwargs.get('end_exists', bool())
        from j2735_v2x_msgs.msg import DayOfWeek
        self.dow = kwargs.get('dow', DayOfWeek())
        self.dow_exists = kwargs.get('dow_exists', bool())
        self.between = kwargs.get('between', [])
        self.between_exists = kwargs.get('between_exists', bool())
        from carma_v2x_msgs.msg import RepeatParams
        self.repeat = kwargs.get('repeat', RepeatParams())
        self.repeat_exists = kwargs.get('repeat_exists', bool())

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
        if self.start != other.start:
            return False
        if self.end != other.end:
            return False
        if self.end_exists != other.end_exists:
            return False
        if self.dow != other.dow:
            return False
        if self.dow_exists != other.dow_exists:
            return False
        if self.between != other.between:
            return False
        if self.between_exists != other.between_exists:
            return False
        if self.repeat != other.repeat:
            return False
        if self.repeat_exists != other.repeat_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'start' field must be a sub message of type 'Time'"
        self._start = value

    @property
    def end(self):
        """Message field 'end'."""
        return self._end

    @end.setter
    def end(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'end' field must be a sub message of type 'Time'"
        self._end = value

    @property
    def end_exists(self):
        """Message field 'end_exists'."""
        return self._end_exists

    @end_exists.setter
    def end_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'end_exists' field must be of type 'bool'"
        self._end_exists = value

    @property
    def dow(self):
        """Message field 'dow'."""
        return self._dow

    @dow.setter
    def dow(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DayOfWeek
            assert \
                isinstance(value, DayOfWeek), \
                "The 'dow' field must be a sub message of type 'DayOfWeek'"
        self._dow = value

    @property
    def dow_exists(self):
        """Message field 'dow_exists'."""
        return self._dow_exists

    @dow_exists.setter
    def dow_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dow_exists' field must be of type 'bool'"
        self._dow_exists = value

    @property
    def between(self):
        """Message field 'between'."""
        return self._between

    @between.setter
    def between(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import DailySchedule
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, DailySchedule) for v in value) and
                 True), \
                "The 'between' field must be a set or sequence and each value of type 'DailySchedule'"
        self._between = value

    @property
    def between_exists(self):
        """Message field 'between_exists'."""
        return self._between_exists

    @between_exists.setter
    def between_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'between_exists' field must be of type 'bool'"
        self._between_exists = value

    @property
    def repeat(self):
        """Message field 'repeat'."""
        return self._repeat

    @repeat.setter
    def repeat(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import RepeatParams
            assert \
                isinstance(value, RepeatParams), \
                "The 'repeat' field must be a sub message of type 'RepeatParams'"
        self._repeat = value

    @property
    def repeat_exists(self):
        """Message field 'repeat_exists'."""
        return self._repeat_exists

    @repeat_exists.setter
    def repeat_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'repeat_exists' field must be of type 'bool'"
        self._repeat_exists = value
