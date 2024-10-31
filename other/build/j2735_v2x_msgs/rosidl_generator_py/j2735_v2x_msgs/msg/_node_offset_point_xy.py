# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeOffsetPointXY(type):
    """Metaclass of message 'NodeOffsetPointXY'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NODE_XY1': 0,
        'NODE_XY2': 1,
        'NODE_XY3': 2,
        'NODE_XY4': 3,
        'NODE_XY5': 4,
        'NODE_XY6': 5,
        'NODE_LATLON': 6,
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
                'j2735_v2x_msgs.msg.NodeOffsetPointXY')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_offset_point_xy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_offset_point_xy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_offset_point_xy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_offset_point_xy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_offset_point_xy

            from j2735_v2x_msgs.msg import NodeLLmD64b
            if NodeLLmD64b.__class__._TYPE_SUPPORT is None:
                NodeLLmD64b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeXY20b
            if NodeXY20b.__class__._TYPE_SUPPORT is None:
                NodeXY20b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeXY22b
            if NodeXY22b.__class__._TYPE_SUPPORT is None:
                NodeXY22b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeXY24b
            if NodeXY24b.__class__._TYPE_SUPPORT is None:
                NodeXY24b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeXY26b
            if NodeXY26b.__class__._TYPE_SUPPORT is None:
                NodeXY26b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeXY28b
            if NodeXY28b.__class__._TYPE_SUPPORT is None:
                NodeXY28b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeXY32b
            if NodeXY32b.__class__._TYPE_SUPPORT is None:
                NodeXY32b.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NODE_XY1': cls.__constants['NODE_XY1'],
            'NODE_XY2': cls.__constants['NODE_XY2'],
            'NODE_XY3': cls.__constants['NODE_XY3'],
            'NODE_XY4': cls.__constants['NODE_XY4'],
            'NODE_XY5': cls.__constants['NODE_XY5'],
            'NODE_XY6': cls.__constants['NODE_XY6'],
            'NODE_LATLON': cls.__constants['NODE_LATLON'],
        }

    @property
    def NODE_XY1(self):
        """Message constant 'NODE_XY1'."""
        return Metaclass_NodeOffsetPointXY.__constants['NODE_XY1']

    @property
    def NODE_XY2(self):
        """Message constant 'NODE_XY2'."""
        return Metaclass_NodeOffsetPointXY.__constants['NODE_XY2']

    @property
    def NODE_XY3(self):
        """Message constant 'NODE_XY3'."""
        return Metaclass_NodeOffsetPointXY.__constants['NODE_XY3']

    @property
    def NODE_XY4(self):
        """Message constant 'NODE_XY4'."""
        return Metaclass_NodeOffsetPointXY.__constants['NODE_XY4']

    @property
    def NODE_XY5(self):
        """Message constant 'NODE_XY5'."""
        return Metaclass_NodeOffsetPointXY.__constants['NODE_XY5']

    @property
    def NODE_XY6(self):
        """Message constant 'NODE_XY6'."""
        return Metaclass_NodeOffsetPointXY.__constants['NODE_XY6']

    @property
    def NODE_LATLON(self):
        """Message constant 'NODE_LATLON'."""
        return Metaclass_NodeOffsetPointXY.__constants['NODE_LATLON']


class NodeOffsetPointXY(metaclass=Metaclass_NodeOffsetPointXY):
    """
    Message class 'NodeOffsetPointXY'.

    Constants:
      NODE_XY1
      NODE_XY2
      NODE_XY3
      NODE_XY4
      NODE_XY5
      NODE_XY6
      NODE_LATLON
    """

    __slots__ = [
        '_choice',
        '_node_xy1',
        '_node_xy2',
        '_node_xy3',
        '_node_xy4',
        '_node_xy5',
        '_node_xy6',
        '_node_latlon',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'node_xy1': 'j2735_v2x_msgs/NodeXY20b',
        'node_xy2': 'j2735_v2x_msgs/NodeXY22b',
        'node_xy3': 'j2735_v2x_msgs/NodeXY24b',
        'node_xy4': 'j2735_v2x_msgs/NodeXY26b',
        'node_xy5': 'j2735_v2x_msgs/NodeXY28b',
        'node_xy6': 'j2735_v2x_msgs/NodeXY32b',
        'node_latlon': 'j2735_v2x_msgs/NodeLLmD64b',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeXY20b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeXY22b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeXY24b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeXY26b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeXY28b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeXY32b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeLLmD64b'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        from j2735_v2x_msgs.msg import NodeXY20b
        self.node_xy1 = kwargs.get('node_xy1', NodeXY20b())
        from j2735_v2x_msgs.msg import NodeXY22b
        self.node_xy2 = kwargs.get('node_xy2', NodeXY22b())
        from j2735_v2x_msgs.msg import NodeXY24b
        self.node_xy3 = kwargs.get('node_xy3', NodeXY24b())
        from j2735_v2x_msgs.msg import NodeXY26b
        self.node_xy4 = kwargs.get('node_xy4', NodeXY26b())
        from j2735_v2x_msgs.msg import NodeXY28b
        self.node_xy5 = kwargs.get('node_xy5', NodeXY28b())
        from j2735_v2x_msgs.msg import NodeXY32b
        self.node_xy6 = kwargs.get('node_xy6', NodeXY32b())
        from j2735_v2x_msgs.msg import NodeLLmD64b
        self.node_latlon = kwargs.get('node_latlon', NodeLLmD64b())

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
        if self.choice != other.choice:
            return False
        if self.node_xy1 != other.node_xy1:
            return False
        if self.node_xy2 != other.node_xy2:
            return False
        if self.node_xy3 != other.node_xy3:
            return False
        if self.node_xy4 != other.node_xy4:
            return False
        if self.node_xy5 != other.node_xy5:
            return False
        if self.node_xy6 != other.node_xy6:
            return False
        if self.node_latlon != other.node_latlon:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def choice(self):
        """Message field 'choice'."""
        return self._choice

    @choice.setter
    def choice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'choice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'choice' field must be an unsigned integer in [0, 255]"
        self._choice = value

    @property
    def node_xy1(self):
        """Message field 'node_xy1'."""
        return self._node_xy1

    @node_xy1.setter
    def node_xy1(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeXY20b
            assert \
                isinstance(value, NodeXY20b), \
                "The 'node_xy1' field must be a sub message of type 'NodeXY20b'"
        self._node_xy1 = value

    @property
    def node_xy2(self):
        """Message field 'node_xy2'."""
        return self._node_xy2

    @node_xy2.setter
    def node_xy2(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeXY22b
            assert \
                isinstance(value, NodeXY22b), \
                "The 'node_xy2' field must be a sub message of type 'NodeXY22b'"
        self._node_xy2 = value

    @property
    def node_xy3(self):
        """Message field 'node_xy3'."""
        return self._node_xy3

    @node_xy3.setter
    def node_xy3(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeXY24b
            assert \
                isinstance(value, NodeXY24b), \
                "The 'node_xy3' field must be a sub message of type 'NodeXY24b'"
        self._node_xy3 = value

    @property
    def node_xy4(self):
        """Message field 'node_xy4'."""
        return self._node_xy4

    @node_xy4.setter
    def node_xy4(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeXY26b
            assert \
                isinstance(value, NodeXY26b), \
                "The 'node_xy4' field must be a sub message of type 'NodeXY26b'"
        self._node_xy4 = value

    @property
    def node_xy5(self):
        """Message field 'node_xy5'."""
        return self._node_xy5

    @node_xy5.setter
    def node_xy5(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeXY28b
            assert \
                isinstance(value, NodeXY28b), \
                "The 'node_xy5' field must be a sub message of type 'NodeXY28b'"
        self._node_xy5 = value

    @property
    def node_xy6(self):
        """Message field 'node_xy6'."""
        return self._node_xy6

    @node_xy6.setter
    def node_xy6(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeXY32b
            assert \
                isinstance(value, NodeXY32b), \
                "The 'node_xy6' field must be a sub message of type 'NodeXY32b'"
        self._node_xy6 = value

    @property
    def node_latlon(self):
        """Message field 'node_latlon'."""
        return self._node_latlon

    @node_latlon.setter
    def node_latlon(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeLLmD64b
            assert \
                isinstance(value, NodeLLmD64b), \
                "The 'node_latlon' field must be a sub message of type 'NodeLLmD64b'"
        self._node_latlon = value
