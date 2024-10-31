# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/Route.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'shortest_path_lanelet_ids'
# Member 'route_path_lanelet_ids'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Route(type):
    """Metaclass of message 'Route'."""

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
                'carma_planning_msgs.msg.Route')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__route
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__route
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__route
            cls._TYPE_SUPPORT = module.type_support_msg__msg__route
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__route

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Route(metaclass=Metaclass_Route):
    """Message class 'Route'."""

    __slots__ = [
        '_header',
        '_route_id',
        '_route_version',
        '_map_version',
        '_route_name',
        '_is_rerouted',
        '_shortest_path_lanelet_ids',
        '_route_path_lanelet_ids',
        '_end_point',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'route_id': 'string',
        'route_version': 'uint32',
        'map_version': 'uint32',
        'route_name': 'string',
        'is_rerouted': 'boolean',
        'shortest_path_lanelet_ids': 'sequence<int64>',
        'route_path_lanelet_ids': 'sequence<int64>',
        'end_point': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.route_id = kwargs.get('route_id', str())
        self.route_version = kwargs.get('route_version', int())
        self.map_version = kwargs.get('map_version', int())
        self.route_name = kwargs.get('route_name', str())
        self.is_rerouted = kwargs.get('is_rerouted', bool())
        self.shortest_path_lanelet_ids = array.array('q', kwargs.get('shortest_path_lanelet_ids', []))
        self.route_path_lanelet_ids = array.array('q', kwargs.get('route_path_lanelet_ids', []))
        from geometry_msgs.msg import Point
        self.end_point = kwargs.get('end_point', Point())

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
        if self.route_version != other.route_version:
            return False
        if self.map_version != other.map_version:
            return False
        if self.route_name != other.route_name:
            return False
        if self.is_rerouted != other.is_rerouted:
            return False
        if self.shortest_path_lanelet_ids != other.shortest_path_lanelet_ids:
            return False
        if self.route_path_lanelet_ids != other.route_path_lanelet_ids:
            return False
        if self.end_point != other.end_point:
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
    def route_version(self):
        """Message field 'route_version'."""
        return self._route_version

    @route_version.setter
    def route_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'route_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'route_version' field must be an unsigned integer in [0, 4294967295]"
        self._route_version = value

    @property
    def map_version(self):
        """Message field 'map_version'."""
        return self._map_version

    @map_version.setter
    def map_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'map_version' field must be an unsigned integer in [0, 4294967295]"
        self._map_version = value

    @property
    def route_name(self):
        """Message field 'route_name'."""
        return self._route_name

    @route_name.setter
    def route_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'route_name' field must be of type 'str'"
        self._route_name = value

    @property
    def is_rerouted(self):
        """Message field 'is_rerouted'."""
        return self._is_rerouted

    @is_rerouted.setter
    def is_rerouted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_rerouted' field must be of type 'bool'"
        self._is_rerouted = value

    @property
    def shortest_path_lanelet_ids(self):
        """Message field 'shortest_path_lanelet_ids'."""
        return self._shortest_path_lanelet_ids

    @shortest_path_lanelet_ids.setter
    def shortest_path_lanelet_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'shortest_path_lanelet_ids' array.array() must have the type code of 'q'"
            self._shortest_path_lanelet_ids = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'shortest_path_lanelet_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._shortest_path_lanelet_ids = array.array('q', value)

    @property
    def route_path_lanelet_ids(self):
        """Message field 'route_path_lanelet_ids'."""
        return self._route_path_lanelet_ids

    @route_path_lanelet_ids.setter
    def route_path_lanelet_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'route_path_lanelet_ids' array.array() must have the type code of 'q'"
            self._route_path_lanelet_ids = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'route_path_lanelet_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._route_path_lanelet_ids = array.array('q', value)

    @property
    def end_point(self):
        """Message field 'end_point'."""
        return self._end_point

    @end_point.setter
    def end_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'end_point' field must be a sub message of type 'Point'"
        self._end_point = value
