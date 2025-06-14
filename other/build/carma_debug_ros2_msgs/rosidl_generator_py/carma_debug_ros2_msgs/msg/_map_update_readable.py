# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapUpdateReadable(type):
    """Metaclass of message 'MapUpdateReadable'."""

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
            module = import_type_support('carma_debug_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_debug_ros2_msgs.msg.MapUpdateReadable')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_update_readable
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_update_readable
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_update_readable
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_update_readable
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_update_readable

            from carma_debug_ros2_msgs.msg import LaneletIdRegulatoryElementPair
            if LaneletIdRegulatoryElementPair.__class__._TYPE_SUPPORT is None:
                LaneletIdRegulatoryElementPair.__class__.__import_type_support__()

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


class MapUpdateReadable(metaclass=Metaclass_MapUpdateReadable):
    """Message class 'MapUpdateReadable'."""

    __slots__ = [
        '_header',
        '_format_version',
        '_map_version',
        '_route_id',
        '_route_version',
        '_invalidates_route',
        '_traffic_control_id',
        '_update_list',
        '_remove_list',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'format_version': 'string',
        'map_version': 'string',
        'route_id': 'string',
        'route_version': 'uint32',
        'invalidates_route': 'boolean',
        'traffic_control_id': 'string',
        'update_list': 'sequence<carma_debug_ros2_msgs/LaneletIdRegulatoryElementPair>',
        'remove_list': 'sequence<carma_debug_ros2_msgs/LaneletIdRegulatoryElementPair>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_debug_ros2_msgs', 'msg'], 'LaneletIdRegulatoryElementPair')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_debug_ros2_msgs', 'msg'], 'LaneletIdRegulatoryElementPair')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.format_version = kwargs.get('format_version', str())
        self.map_version = kwargs.get('map_version', str())
        self.route_id = kwargs.get('route_id', str())
        self.route_version = kwargs.get('route_version', int())
        self.invalidates_route = kwargs.get('invalidates_route', bool())
        self.traffic_control_id = kwargs.get('traffic_control_id', str())
        self.update_list = kwargs.get('update_list', [])
        self.remove_list = kwargs.get('remove_list', [])

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
        if self.format_version != other.format_version:
            return False
        if self.map_version != other.map_version:
            return False
        if self.route_id != other.route_id:
            return False
        if self.route_version != other.route_version:
            return False
        if self.invalidates_route != other.invalidates_route:
            return False
        if self.traffic_control_id != other.traffic_control_id:
            return False
        if self.update_list != other.update_list:
            return False
        if self.remove_list != other.remove_list:
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
    def format_version(self):
        """Message field 'format_version'."""
        return self._format_version

    @format_version.setter
    def format_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'format_version' field must be of type 'str'"
        self._format_version = value

    @property
    def map_version(self):
        """Message field 'map_version'."""
        return self._map_version

    @map_version.setter
    def map_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_version' field must be of type 'str'"
        self._map_version = value

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
    def invalidates_route(self):
        """Message field 'invalidates_route'."""
        return self._invalidates_route

    @invalidates_route.setter
    def invalidates_route(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'invalidates_route' field must be of type 'bool'"
        self._invalidates_route = value

    @property
    def traffic_control_id(self):
        """Message field 'traffic_control_id'."""
        return self._traffic_control_id

    @traffic_control_id.setter
    def traffic_control_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'traffic_control_id' field must be of type 'str'"
        self._traffic_control_id = value

    @property
    def update_list(self):
        """Message field 'update_list'."""
        return self._update_list

    @update_list.setter
    def update_list(self, value):
        if __debug__:
            from carma_debug_ros2_msgs.msg import LaneletIdRegulatoryElementPair
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
                 all(isinstance(v, LaneletIdRegulatoryElementPair) for v in value) and
                 True), \
                "The 'update_list' field must be a set or sequence and each value of type 'LaneletIdRegulatoryElementPair'"
        self._update_list = value

    @property
    def remove_list(self):
        """Message field 'remove_list'."""
        return self._remove_list

    @remove_list.setter
    def remove_list(self, value):
        if __debug__:
            from carma_debug_ros2_msgs.msg import LaneletIdRegulatoryElementPair
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
                 all(isinstance(v, LaneletIdRegulatoryElementPair) for v in value) and
                 True), \
                "The 'remove_list' field must be a set or sequence and each value of type 'LaneletIdRegulatoryElementPair'"
        self._remove_list = value
