# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/RouteState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RouteState(type):
    """Metaclass of message 'RouteState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LOADING': 0,
        'SELECTION': 1,
        'ROUTING': 2,
        'FOLLOWING': 3,
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
                'carma_planning_msgs.msg.RouteState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__route_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__route_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__route_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__route_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__route_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LOADING': cls.__constants['LOADING'],
            'SELECTION': cls.__constants['SELECTION'],
            'ROUTING': cls.__constants['ROUTING'],
            'FOLLOWING': cls.__constants['FOLLOWING'],
        }

    @property
    def LOADING(self):
        """Message constant 'LOADING'."""
        return Metaclass_RouteState.__constants['LOADING']

    @property
    def SELECTION(self):
        """Message constant 'SELECTION'."""
        return Metaclass_RouteState.__constants['SELECTION']

    @property
    def ROUTING(self):
        """Message constant 'ROUTING'."""
        return Metaclass_RouteState.__constants['ROUTING']

    @property
    def FOLLOWING(self):
        """Message constant 'FOLLOWING'."""
        return Metaclass_RouteState.__constants['FOLLOWING']


class RouteState(metaclass=Metaclass_RouteState):
    """
    Message class 'RouteState'.

    Constants:
      LOADING
      SELECTION
      ROUTING
      FOLLOWING
    """

    __slots__ = [
        '_header',
        '_route_id',
        '_state',
        '_cross_track',
        '_down_track',
        '_lanelet_downtrack',
        '_lanelet_id',
        '_speed_limit',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'route_id': 'string',
        'state': 'uint8',
        'cross_track': 'double',
        'down_track': 'double',
        'lanelet_downtrack': 'double',
        'lanelet_id': 'int64',
        'speed_limit': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.route_id = kwargs.get('route_id', str())
        self.state = kwargs.get('state', int())
        self.cross_track = kwargs.get('cross_track', float())
        self.down_track = kwargs.get('down_track', float())
        self.lanelet_downtrack = kwargs.get('lanelet_downtrack', float())
        self.lanelet_id = kwargs.get('lanelet_id', int())
        self.speed_limit = kwargs.get('speed_limit', float())

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
        if self.header != other.header:
            return False
        if self.route_id != other.route_id:
            return False
        if self.state != other.state:
            return False
        if self.cross_track != other.cross_track:
            return False
        if self.down_track != other.down_track:
            return False
        if self.lanelet_downtrack != other.lanelet_downtrack:
            return False
        if self.lanelet_id != other.lanelet_id:
            return False
        if self.speed_limit != other.speed_limit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def route_id(self):
        """Message field 'route_id'."""
        return self._route_id

    @route_id.setter
    def route_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'route_id' field must be of type 'str'"
        self._route_id = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @property
    def cross_track(self):
        """Message field 'cross_track'."""
        return self._cross_track

    @cross_track.setter
    def cross_track(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cross_track' field must be of type 'float'"
        self._cross_track = value

    @property
    def down_track(self):
        """Message field 'down_track'."""
        return self._down_track

    @down_track.setter
    def down_track(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'down_track' field must be of type 'float'"
        self._down_track = value

    @property
    def lanelet_downtrack(self):
        """Message field 'lanelet_downtrack'."""
        return self._lanelet_downtrack

    @lanelet_downtrack.setter
    def lanelet_downtrack(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lanelet_downtrack' field must be of type 'float'"
        self._lanelet_downtrack = value

    @property
    def lanelet_id(self):
        """Message field 'lanelet_id'."""
        return self._lanelet_id

    @lanelet_id.setter
    def lanelet_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanelet_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lanelet_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lanelet_id = value

    @property
    def speed_limit(self):
        """Message field 'speed_limit'."""
        return self._speed_limit

    @speed_limit.setter
    def speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_limit' field must be of type 'float'"
        self._speed_limit = value
