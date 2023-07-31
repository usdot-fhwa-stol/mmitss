# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/TrafficControlGeometry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficControlGeometry(type):
    """Metaclass of message 'TrafficControlGeometry'."""

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
                'carma_v2x_msgs.msg.TrafficControlGeometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_control_geometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_control_geometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_control_geometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_control_geometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_control_geometry

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import PathNode
            if PathNode.__class__._TYPE_SUPPORT is None:
                PathNode.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficControlGeometry(metaclass=Metaclass_TrafficControlGeometry):
    """Message class 'TrafficControlGeometry'."""

    __slots__ = [
        '_proj',
        '_datum',
        '_reftime',
        '_reflon',
        '_reflat',
        '_refelv',
        '_heading',
        '_nodes',
    ]

    _fields_and_field_types = {
        'proj': 'string',
        'datum': 'string',
        'reftime': 'builtin_interfaces/Time',
        'reflon': 'double',
        'reflat': 'double',
        'refelv': 'float',
        'heading': 'float',
        'nodes': 'sequence<carma_v2x_msgs/PathNode>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'PathNode')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.proj = kwargs.get('proj', str())
        self.datum = kwargs.get('datum', str())
        from builtin_interfaces.msg import Time
        self.reftime = kwargs.get('reftime', Time())
        self.reflon = kwargs.get('reflon', float())
        self.reflat = kwargs.get('reflat', float())
        self.refelv = kwargs.get('refelv', float())
        self.heading = kwargs.get('heading', float())
        self.nodes = kwargs.get('nodes', [])

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
        if self.proj != other.proj:
            return False
        if self.datum != other.datum:
            return False
        if self.reftime != other.reftime:
            return False
        if self.reflon != other.reflon:
            return False
        if self.reflat != other.reflat:
            return False
        if self.refelv != other.refelv:
            return False
        if self.heading != other.heading:
            return False
        if self.nodes != other.nodes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def proj(self):
        """Message field 'proj'."""
        return self._proj

    @proj.setter
    def proj(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'proj' field must be of type 'str'"
        self._proj = value

    @property
    def datum(self):
        """Message field 'datum'."""
        return self._datum

    @datum.setter
    def datum(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'datum' field must be of type 'str'"
        self._datum = value

    @property
    def reftime(self):
        """Message field 'reftime'."""
        return self._reftime

    @reftime.setter
    def reftime(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'reftime' field must be a sub message of type 'Time'"
        self._reftime = value

    @property
    def reflon(self):
        """Message field 'reflon'."""
        return self._reflon

    @reflon.setter
    def reflon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reflon' field must be of type 'float'"
        self._reflon = value

    @property
    def reflat(self):
        """Message field 'reflat'."""
        return self._reflat

    @reflat.setter
    def reflat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reflat' field must be of type 'float'"
        self._reflat = value

    @property
    def refelv(self):
        """Message field 'refelv'."""
        return self._refelv

    @refelv.setter
    def refelv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'refelv' field must be of type 'float'"
        self._refelv = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
        self._heading = value

    @property
    def nodes(self):
        """Message field 'nodes'."""
        return self._nodes

    @nodes.setter
    def nodes(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import PathNode
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
                 all(isinstance(v, PathNode) for v in value) and
                 True), \
                "The 'nodes' field must be a set or sequence and each value of type 'PathNode'"
        self._nodes = value
