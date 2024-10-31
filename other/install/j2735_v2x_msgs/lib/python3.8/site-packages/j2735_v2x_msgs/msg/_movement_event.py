# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/MovementEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MovementEvent(type):
    """Metaclass of message 'MovementEvent'."""

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
                'j2735_v2x_msgs.msg.MovementEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__movement_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__movement_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__movement_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__movement_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__movement_event

            from j2735_v2x_msgs.msg import AdvisorySpeedList
            if AdvisorySpeedList.__class__._TYPE_SUPPORT is None:
                AdvisorySpeedList.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import MovementPhaseState
            if MovementPhaseState.__class__._TYPE_SUPPORT is None:
                MovementPhaseState.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TimeChangeDetails
            if TimeChangeDetails.__class__._TYPE_SUPPORT is None:
                TimeChangeDetails.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MovementEvent(metaclass=Metaclass_MovementEvent):
    """Message class 'MovementEvent'."""

    __slots__ = [
        '_event_state',
        '_timing',
        '_timing_exists',
        '_speeds',
        '_speeds_exists',
    ]

    _fields_and_field_types = {
        'event_state': 'j2735_v2x_msgs/MovementPhaseState',
        'timing': 'j2735_v2x_msgs/TimeChangeDetails',
        'timing_exists': 'boolean',
        'speeds': 'j2735_v2x_msgs/AdvisorySpeedList',
        'speeds_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'MovementPhaseState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TimeChangeDetails'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AdvisorySpeedList'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import MovementPhaseState
        self.event_state = kwargs.get('event_state', MovementPhaseState())
        from j2735_v2x_msgs.msg import TimeChangeDetails
        self.timing = kwargs.get('timing', TimeChangeDetails())
        self.timing_exists = kwargs.get('timing_exists', bool())
        from j2735_v2x_msgs.msg import AdvisorySpeedList
        self.speeds = kwargs.get('speeds', AdvisorySpeedList())
        self.speeds_exists = kwargs.get('speeds_exists', bool())

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
        if self.event_state != other.event_state:
            return False
        if self.timing != other.timing:
            return False
        if self.timing_exists != other.timing_exists:
            return False
        if self.speeds != other.speeds:
            return False
        if self.speeds_exists != other.speeds_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def event_state(self):
        """Message field 'event_state'."""
        return self._event_state

    @event_state.setter
    def event_state(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import MovementPhaseState
            assert \
                isinstance(value, MovementPhaseState), \
                "The 'event_state' field must be a sub message of type 'MovementPhaseState'"
        self._event_state = value

    @property
    def timing(self):
        """Message field 'timing'."""
        return self._timing

    @timing.setter
    def timing(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TimeChangeDetails
            assert \
                isinstance(value, TimeChangeDetails), \
                "The 'timing' field must be a sub message of type 'TimeChangeDetails'"
        self._timing = value

    @property
    def timing_exists(self):
        """Message field 'timing_exists'."""
        return self._timing_exists

    @timing_exists.setter
    def timing_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'timing_exists' field must be of type 'bool'"
        self._timing_exists = value

    @property
    def speeds(self):
        """Message field 'speeds'."""
        return self._speeds

    @speeds.setter
    def speeds(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AdvisorySpeedList
            assert \
                isinstance(value, AdvisorySpeedList), \
                "The 'speeds' field must be a sub message of type 'AdvisorySpeedList'"
        self._speeds = value

    @property
    def speeds_exists(self):
        """Message field 'speeds_exists'."""
        return self._speeds_exists

    @speeds_exists.setter
    def speeds_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'speeds_exists' field must be of type 'bool'"
        self._speeds_exists = value
