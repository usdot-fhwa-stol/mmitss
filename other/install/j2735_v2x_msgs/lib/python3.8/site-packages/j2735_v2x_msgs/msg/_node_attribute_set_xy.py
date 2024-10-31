# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
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
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.NodeAttributeSetXY')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_attribute_set_xy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_attribute_set_xy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_attribute_set_xy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_attribute_set_xy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_attribute_set_xy

            from j2735_v2x_msgs.msg import LaneDataAttributeList
            if LaneDataAttributeList.__class__._TYPE_SUPPORT is None:
                LaneDataAttributeList.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeAttributeXYList
            if NodeAttributeXYList.__class__._TYPE_SUPPORT is None:
                NodeAttributeXYList.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import SegmentAttributeXYList
            if SegmentAttributeXYList.__class__._TYPE_SUPPORT is None:
                SegmentAttributeXYList.__class__.__import_type_support__()

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
        '_data',
        '_data_exists',
        '_d_width',
        '_d_width_exists',
        '_d_elevation',
        '_d_elevation_exists',
    ]

    _fields_and_field_types = {
        'local_node': 'j2735_v2x_msgs/NodeAttributeXYList',
        'local_node_exists': 'boolean',
        'disabled': 'j2735_v2x_msgs/SegmentAttributeXYList',
        'disabled_exists': 'boolean',
        'enabled': 'j2735_v2x_msgs/SegmentAttributeXYList',
        'enabled_exists': 'boolean',
        'data': 'j2735_v2x_msgs/LaneDataAttributeList',
        'data_exists': 'boolean',
        'd_width': 'float',
        'd_width_exists': 'boolean',
        'd_elevation': 'float',
        'd_elevation_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeAttributeXYList'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SegmentAttributeXYList'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SegmentAttributeXYList'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneDataAttributeList'),  # noqa: E501
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
        from j2735_v2x_msgs.msg import NodeAttributeXYList
        self.local_node = kwargs.get('local_node', NodeAttributeXYList())
        self.local_node_exists = kwargs.get('local_node_exists', bool())
        from j2735_v2x_msgs.msg import SegmentAttributeXYList
        self.disabled = kwargs.get('disabled', SegmentAttributeXYList())
        self.disabled_exists = kwargs.get('disabled_exists', bool())
        from j2735_v2x_msgs.msg import SegmentAttributeXYList
        self.enabled = kwargs.get('enabled', SegmentAttributeXYList())
        self.enabled_exists = kwargs.get('enabled_exists', bool())
        from j2735_v2x_msgs.msg import LaneDataAttributeList
        self.data = kwargs.get('data', LaneDataAttributeList())
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
        if self.data != other.data:
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
            from j2735_v2x_msgs.msg import NodeAttributeXYList
            assert \
                isinstance(value, NodeAttributeXYList), \
                "The 'local_node' field must be a sub message of type 'NodeAttributeXYList'"
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
            from j2735_v2x_msgs.msg import SegmentAttributeXYList
            assert \
                isinstance(value, SegmentAttributeXYList), \
                "The 'disabled' field must be a sub message of type 'SegmentAttributeXYList'"
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
            from j2735_v2x_msgs.msg import SegmentAttributeXYList
            assert \
                isinstance(value, SegmentAttributeXYList), \
                "The 'enabled' field must be a sub message of type 'SegmentAttributeXYList'"
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
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneDataAttributeList
            assert \
                isinstance(value, LaneDataAttributeList), \
                "The 'data' field must be a sub message of type 'LaneDataAttributeList'"
        self._data = value

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
