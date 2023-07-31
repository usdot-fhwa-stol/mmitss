# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/NodeAttributeSetXY.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeAttributeSetXY(type):
    """Metaclass of message 'NodeAttributeSetXY'."""

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
                'carma_v2x_msgs.msg.NodeAttributeSetXY')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_attribute_set_xy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_attribute_set_xy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_attribute_set_xy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_attribute_set_xy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_attribute_set_xy

            from carma_v2x_msgs.msg import LaneDataAttribute
            if LaneDataAttribute.__class__._TYPE_SUPPORT is None:
                LaneDataAttribute.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeAttributeXY
            if NodeAttributeXY.__class__._TYPE_SUPPORT is None:
                NodeAttributeXY.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import SegmentAttributeXY
            if SegmentAttributeXY.__class__._TYPE_SUPPORT is None:
                SegmentAttributeXY.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeAttributeSetXY(metaclass=Metaclass_NodeAttributeSetXY):
    """Message class 'NodeAttributeSetXY'."""

    __slots__ = [
        '_local_node',
        '_local_node_exists',
        '_disabled',
        '_disabled_exists',
        '_enabled',
        '_enabled_exists',
        '_lane_attribute_list',
        '_data_exists',
        '_d_width',
        '_d_width_exists',
        '_d_elevation',
        '_d_elevation_exists',
    ]

    _fields_and_field_types = {
        'local_node': 'sequence<j2735_v2x_msgs/NodeAttributeXY>',
        'local_node_exists': 'boolean',
        'disabled': 'sequence<j2735_v2x_msgs/SegmentAttributeXY>',
        'disabled_exists': 'boolean',
        'enabled': 'sequence<j2735_v2x_msgs/SegmentAttributeXY>',
        'enabled_exists': 'boolean',
        'lane_attribute_list': 'sequence<carma_v2x_msgs/LaneDataAttribute>',
        'data_exists': 'boolean',
        'd_width': 'float',
        'd_width_exists': 'boolean',
        'd_elevation': 'float',
        'd_elevation_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeAttributeXY')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SegmentAttributeXY')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SegmentAttributeXY')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'LaneDataAttribute')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.local_node = kwargs.get('local_node', [])
        self.local_node_exists = kwargs.get('local_node_exists', bool())
        self.disabled = kwargs.get('disabled', [])
        self.disabled_exists = kwargs.get('disabled_exists', bool())
        self.enabled = kwargs.get('enabled', [])
        self.enabled_exists = kwargs.get('enabled_exists', bool())
        self.lane_attribute_list = kwargs.get('lane_attribute_list', [])
        self.data_exists = kwargs.get('data_exists', bool())
        self.d_width = kwargs.get('d_width', float())
        self.d_width_exists = kwargs.get('d_width_exists', bool())
        self.d_elevation = kwargs.get('d_elevation', float())
        self.d_elevation_exists = kwargs.get('d_elevation_exists', bool())

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
        if self.local_node != other.local_node:
            return False
        if self.local_node_exists != other.local_node_exists:
            return False
        if self.disabled != other.disabled:
            return False
        if self.disabled_exists != other.disabled_exists:
            return False
        if self.enabled != other.enabled:
            return False
        if self.enabled_exists != other.enabled_exists:
            return False
        if self.lane_attribute_list != other.lane_attribute_list:
            return False
        if self.data_exists != other.data_exists:
            return False
        if self.d_width != other.d_width:
            return False
        if self.d_width_exists != other.d_width_exists:
            return False
        if self.d_elevation != other.d_elevation:
            return False
        if self.d_elevation_exists != other.d_elevation_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def local_node(self):
        """Message field 'local_node'."""
        return self._local_node

    @local_node.setter
    def local_node(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeAttributeXY
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
                 all(isinstance(v, NodeAttributeXY) for v in value) and
                 True), \
                "The 'local_node' field must be a set or sequence and each value of type 'NodeAttributeXY'"
        self._local_node = value

    @property
    def local_node_exists(self):
        """Message field 'local_node_exists'."""
        return self._local_node_exists

    @local_node_exists.setter
    def local_node_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_node_exists' field must be of type 'bool'"
        self._local_node_exists = value

    @property
    def disabled(self):
        """Message field 'disabled'."""
        return self._disabled

    @disabled.setter
    def disabled(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import SegmentAttributeXY
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
                 all(isinstance(v, SegmentAttributeXY) for v in value) and
                 True), \
                "The 'disabled' field must be a set or sequence and each value of type 'SegmentAttributeXY'"
        self._disabled = value

    @property
    def disabled_exists(self):
        """Message field 'disabled_exists'."""
        return self._disabled_exists

    @disabled_exists.setter
    def disabled_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'disabled_exists' field must be of type 'bool'"
        self._disabled_exists = value

    @property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import SegmentAttributeXY
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
                 all(isinstance(v, SegmentAttributeXY) for v in value) and
                 True), \
                "The 'enabled' field must be a set or sequence and each value of type 'SegmentAttributeXY'"
        self._enabled = value

    @property
    def enabled_exists(self):
        """Message field 'enabled_exists'."""
        return self._enabled_exists

    @enabled_exists.setter
    def enabled_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled_exists' field must be of type 'bool'"
        self._enabled_exists = value

    @property
    def lane_attribute_list(self):
        """Message field 'lane_attribute_list'."""
        return self._lane_attribute_list

    @lane_attribute_list.setter
    def lane_attribute_list(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import LaneDataAttribute
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
                 all(isinstance(v, LaneDataAttribute) for v in value) and
                 True), \
                "The 'lane_attribute_list' field must be a set or sequence and each value of type 'LaneDataAttribute'"
        self._lane_attribute_list = value

    @property
    def data_exists(self):
        """Message field 'data_exists'."""
        return self._data_exists

    @data_exists.setter
    def data_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'data_exists' field must be of type 'bool'"
        self._data_exists = value

    @property
    def d_width(self):
        """Message field 'd_width'."""
        return self._d_width

    @d_width.setter
    def d_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd_width' field must be of type 'float'"
        self._d_width = value

    @property
    def d_width_exists(self):
        """Message field 'd_width_exists'."""
        return self._d_width_exists

    @d_width_exists.setter
    def d_width_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'd_width_exists' field must be of type 'bool'"
        self._d_width_exists = value

    @property
    def d_elevation(self):
        """Message field 'd_elevation'."""
        return self._d_elevation

    @d_elevation.setter
    def d_elevation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd_elevation' field must be of type 'float'"
        self._d_elevation = value

    @property
    def d_elevation_exists(self):
        """Message field 'd_elevation_exists'."""
        return self._d_elevation_exists

    @d_elevation_exists.setter
    def d_elevation_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'd_elevation_exists' field must be of type 'bool'"
        self._d_elevation_exists = value
