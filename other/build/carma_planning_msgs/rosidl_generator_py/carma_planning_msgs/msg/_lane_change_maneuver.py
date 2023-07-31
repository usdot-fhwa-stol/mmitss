# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/LaneChangeManeuver.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneChangeManeuver(type):
    """Metaclass of message 'LaneChangeManeuver'."""

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
            module = import_type_support('carma_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_planning_msgs.msg.LaneChangeManeuver')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_change_maneuver
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_change_maneuver
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_change_maneuver
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_change_maneuver
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_change_maneuver

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from carma_planning_msgs.msg import ManeuverParameters
            if ManeuverParameters.__class__._TYPE_SUPPORT is None:
                ManeuverParameters.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneChangeManeuver(metaclass=Metaclass_LaneChangeManeuver):
    """Message class 'LaneChangeManeuver'."""

    __slots__ = [
        '_parameters',
        '_start_dist',
        '_start_speed',
        '_start_time',
        '_end_dist',
        '_end_speed',
        '_end_time',
        '_starting_lane_id',
        '_ending_lane_id',
    ]

    _fields_and_field_types = {
        'parameters': 'carma_planning_msgs/ManeuverParameters',
        'start_dist': 'double',
        'start_speed': 'double',
        'start_time': 'builtin_interfaces/Time',
        'end_dist': 'double',
        'end_speed': 'double',
        'end_time': 'builtin_interfaces/Time',
        'starting_lane_id': 'string',
        'ending_lane_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'ManeuverParameters'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_planning_msgs.msg import ManeuverParameters
        self.parameters = kwargs.get('parameters', ManeuverParameters())
        self.start_dist = kwargs.get('start_dist', float())
        self.start_speed = kwargs.get('start_speed', float())
        from builtin_interfaces.msg import Time
        self.start_time = kwargs.get('start_time', Time())
        self.end_dist = kwargs.get('end_dist', float())
        self.end_speed = kwargs.get('end_speed', float())
        from builtin_interfaces.msg import Time
        self.end_time = kwargs.get('end_time', Time())
        self.starting_lane_id = kwargs.get('starting_lane_id', str())
        self.ending_lane_id = kwargs.get('ending_lane_id', str())

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
        if self.parameters != other.parameters:
            return False
        if self.start_dist != other.start_dist:
            return False
        if self.start_speed != other.start_speed:
            return False
        if self.start_time != other.start_time:
            return False
        if self.end_dist != other.end_dist:
            return False
        if self.end_speed != other.end_speed:
            return False
        if self.end_time != other.end_time:
            return False
        if self.starting_lane_id != other.starting_lane_id:
            return False
        if self.ending_lane_id != other.ending_lane_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def parameters(self):
        """Message field 'parameters'."""
        return self._parameters

    @parameters.setter
    def parameters(self, value):
        if __debug__:
            from carma_planning_msgs.msg import ManeuverParameters
            assert \
                isinstance(value, ManeuverParameters), \
                "The 'parameters' field must be a sub message of type 'ManeuverParameters'"
        self._parameters = value

    @property
    def start_dist(self):
        """Message field 'start_dist'."""
        return self._start_dist

    @start_dist.setter
    def start_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_dist' field must be of type 'float'"
        self._start_dist = value

    @property
    def start_speed(self):
        """Message field 'start_speed'."""
        return self._start_speed

    @start_speed.setter
    def start_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_speed' field must be of type 'float'"
        self._start_speed = value

    @property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'start_time' field must be a sub message of type 'Time'"
        self._start_time = value

    @property
    def end_dist(self):
        """Message field 'end_dist'."""
        return self._end_dist

    @end_dist.setter
    def end_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_dist' field must be of type 'float'"
        self._end_dist = value

    @property
    def end_speed(self):
        """Message field 'end_speed'."""
        return self._end_speed

    @end_speed.setter
    def end_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_speed' field must be of type 'float'"
        self._end_speed = value

    @property
    def end_time(self):
        """Message field 'end_time'."""
        return self._end_time

    @end_time.setter
    def end_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'end_time' field must be a sub message of type 'Time'"
        self._end_time = value

    @property
    def starting_lane_id(self):
        """Message field 'starting_lane_id'."""
        return self._starting_lane_id

    @starting_lane_id.setter
    def starting_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'starting_lane_id' field must be of type 'str'"
        self._starting_lane_id = value

    @property
    def ending_lane_id(self):
        """Message field 'ending_lane_id'."""
        return self._ending_lane_id

    @ending_lane_id.setter
    def ending_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ending_lane_id' field must be of type 'str'"
        self._ending_lane_id = value
