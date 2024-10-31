# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PathHistoryPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathHistoryPoint(type):
    """Metaclass of message 'PathHistoryPoint'."""

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
                'j2735_v2x_msgs.msg.PathHistoryPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_history_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_history_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_history_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_history_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_history_point

            from j2735_v2x_msgs.msg import CoarseHeading
            if CoarseHeading.__class__._TYPE_SUPPORT is None:
                CoarseHeading.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import OffsetLLB18
            if OffsetLLB18.__class__._TYPE_SUPPORT is None:
                OffsetLLB18.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PositionalAccuracy
            if PositionalAccuracy.__class__._TYPE_SUPPORT is None:
                PositionalAccuracy.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Speed
            if Speed.__class__._TYPE_SUPPORT is None:
                Speed.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TimeOffset
            if TimeOffset.__class__._TYPE_SUPPORT is None:
                TimeOffset.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VertOffsetB12
            if VertOffsetB12.__class__._TYPE_SUPPORT is None:
                VertOffsetB12.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathHistoryPoint(metaclass=Metaclass_PathHistoryPoint):
    """Message class 'PathHistoryPoint'."""

    __slots__ = [
        '_lat_offset',
        '_lon_offset',
        '_elevation_offset',
        '_time_offset',
        '_speed',
        '_pos_accuracy',
        '_heading',
    ]

    _fields_and_field_types = {
        'lat_offset': 'j2735_v2x_msgs/OffsetLLB18',
        'lon_offset': 'j2735_v2x_msgs/OffsetLLB18',
        'elevation_offset': 'j2735_v2x_msgs/VertOffsetB12',
        'time_offset': 'j2735_v2x_msgs/TimeOffset',
        'speed': 'j2735_v2x_msgs/Speed',
        'pos_accuracy': 'j2735_v2x_msgs/PositionalAccuracy',
        'heading': 'j2735_v2x_msgs/CoarseHeading',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'OffsetLLB18'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'OffsetLLB18'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VertOffsetB12'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TimeOffset'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Speed'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PositionalAccuracy'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'CoarseHeading'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import OffsetLLB18
        self.lat_offset = kwargs.get('lat_offset', OffsetLLB18())
        from j2735_v2x_msgs.msg import OffsetLLB18
        self.lon_offset = kwargs.get('lon_offset', OffsetLLB18())
        from j2735_v2x_msgs.msg import VertOffsetB12
        self.elevation_offset = kwargs.get('elevation_offset', VertOffsetB12())
        from j2735_v2x_msgs.msg import TimeOffset
        self.time_offset = kwargs.get('time_offset', TimeOffset())
        from j2735_v2x_msgs.msg import Speed
        self.speed = kwargs.get('speed', Speed())
        from j2735_v2x_msgs.msg import PositionalAccuracy
        self.pos_accuracy = kwargs.get('pos_accuracy', PositionalAccuracy())
        from j2735_v2x_msgs.msg import CoarseHeading
        self.heading = kwargs.get('heading', CoarseHeading())

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
        if self.lat_offset != other.lat_offset:
            return False
        if self.lon_offset != other.lon_offset:
            return False
        if self.elevation_offset != other.elevation_offset:
            return False
        if self.time_offset != other.time_offset:
            return False
        if self.speed != other.speed:
            return False
        if self.pos_accuracy != other.pos_accuracy:
            return False
        if self.heading != other.heading:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lat_offset(self):
        """Message field 'lat_offset'."""
        return self._lat_offset

    @lat_offset.setter
    def lat_offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import OffsetLLB18
            assert \
                isinstance(value, OffsetLLB18), \
                "The 'lat_offset' field must be a sub message of type 'OffsetLLB18'"
        self._lat_offset = value

    @property
    def lon_offset(self):
        """Message field 'lon_offset'."""
        return self._lon_offset

    @lon_offset.setter
    def lon_offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import OffsetLLB18
            assert \
                isinstance(value, OffsetLLB18), \
                "The 'lon_offset' field must be a sub message of type 'OffsetLLB18'"
        self._lon_offset = value

    @property
    def elevation_offset(self):
        """Message field 'elevation_offset'."""
        return self._elevation_offset

    @elevation_offset.setter
    def elevation_offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VertOffsetB12
            assert \
                isinstance(value, VertOffsetB12), \
                "The 'elevation_offset' field must be a sub message of type 'VertOffsetB12'"
        self._elevation_offset = value

    @property
    def time_offset(self):
        """Message field 'time_offset'."""
        return self._time_offset

    @time_offset.setter
    def time_offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TimeOffset
            assert \
                isinstance(value, TimeOffset), \
                "The 'time_offset' field must be a sub message of type 'TimeOffset'"
        self._time_offset = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Speed
            assert \
                isinstance(value, Speed), \
                "The 'speed' field must be a sub message of type 'Speed'"
        self._speed = value

    @property
    def pos_accuracy(self):
        """Message field 'pos_accuracy'."""
        return self._pos_accuracy

    @pos_accuracy.setter
    def pos_accuracy(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PositionalAccuracy
            assert \
                isinstance(value, PositionalAccuracy), \
                "The 'pos_accuracy' field must be a sub message of type 'PositionalAccuracy'"
        self._pos_accuracy = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import CoarseHeading
            assert \
                isinstance(value, CoarseHeading), \
                "The 'heading' field must be a sub message of type 'CoarseHeading'"
        self._heading = value
