# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TrailerHistoryPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrailerHistoryPoint(type):
    """Metaclass of message 'TrailerHistoryPoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_ELEVATION_OFFSET': 1,
        'HAS_HEADING': 2,
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
                'j2735_v2x_msgs.msg.TrailerHistoryPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trailer_history_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trailer_history_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trailer_history_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trailer_history_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trailer_history_point

            from j2735_v2x_msgs.msg import Angle
            if Angle.__class__._TYPE_SUPPORT is None:
                Angle.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import CoarseHeading
            if CoarseHeading.__class__._TYPE_SUPPORT is None:
                CoarseHeading.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeXY24b
            if NodeXY24b.__class__._TYPE_SUPPORT is None:
                NodeXY24b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TimeOffset
            if TimeOffset.__class__._TYPE_SUPPORT is None:
                TimeOffset.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VertOffsetB07
            if VertOffsetB07.__class__._TYPE_SUPPORT is None:
                VertOffsetB07.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_ELEVATION_OFFSET': cls.__constants['HAS_ELEVATION_OFFSET'],
            'HAS_HEADING': cls.__constants['HAS_HEADING'],
        }

    @property
    def HAS_ELEVATION_OFFSET(self):
        """Message constant 'HAS_ELEVATION_OFFSET'."""
        return Metaclass_TrailerHistoryPoint.__constants['HAS_ELEVATION_OFFSET']

    @property
    def HAS_HEADING(self):
        """Message constant 'HAS_HEADING'."""
        return Metaclass_TrailerHistoryPoint.__constants['HAS_HEADING']


class TrailerHistoryPoint(metaclass=Metaclass_TrailerHistoryPoint):
    """
    Message class 'TrailerHistoryPoint'.

    Constants:
      HAS_ELEVATION_OFFSET
      HAS_HEADING
    """

    __slots__ = [
        '_presence_vector',
        '_pivot_angle',
        '_time_offset',
        '_position_offset',
        '_elevation_offset',
        '_heading',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'pivot_angle': 'j2735_v2x_msgs/Angle',
        'time_offset': 'j2735_v2x_msgs/TimeOffset',
        'position_offset': 'j2735_v2x_msgs/NodeXY24b',
        'elevation_offset': 'j2735_v2x_msgs/VertOffsetB07',
        'heading': 'j2735_v2x_msgs/CoarseHeading',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Angle'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TimeOffset'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeXY24b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VertOffsetB07'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'CoarseHeading'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import Angle
        self.pivot_angle = kwargs.get('pivot_angle', Angle())
        from j2735_v2x_msgs.msg import TimeOffset
        self.time_offset = kwargs.get('time_offset', TimeOffset())
        from j2735_v2x_msgs.msg import NodeXY24b
        self.position_offset = kwargs.get('position_offset', NodeXY24b())
        from j2735_v2x_msgs.msg import VertOffsetB07
        self.elevation_offset = kwargs.get('elevation_offset', VertOffsetB07())
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
        if self.presence_vector != other.presence_vector:
            return False
        if self.pivot_angle != other.pivot_angle:
            return False
        if self.time_offset != other.time_offset:
            return False
        if self.position_offset != other.position_offset:
            return False
        if self.elevation_offset != other.elevation_offset:
            return False
        if self.heading != other.heading:
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
            assert value >= 0 and value < 65536, \
                "The 'presence_vector' field must be an unsigned integer in [0, 65535]"
        self._presence_vector = value

    @property
    def pivot_angle(self):
        """Message field 'pivot_angle'."""
        return self._pivot_angle

    @pivot_angle.setter
    def pivot_angle(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Angle
            assert \
                isinstance(value, Angle), \
                "The 'pivot_angle' field must be a sub message of type 'Angle'"
        self._pivot_angle = value

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
    def position_offset(self):
        """Message field 'position_offset'."""
        return self._position_offset

    @position_offset.setter
    def position_offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeXY24b
            assert \
                isinstance(value, NodeXY24b), \
                "The 'position_offset' field must be a sub message of type 'NodeXY24b'"
        self._position_offset = value

    @property
    def elevation_offset(self):
        """Message field 'elevation_offset'."""
        return self._elevation_offset

    @elevation_offset.setter
    def elevation_offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VertOffsetB07
            assert \
                isinstance(value, VertOffsetB07), \
                "The 'elevation_offset' field must be a sub message of type 'VertOffsetB07'"
        self._elevation_offset = value

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
