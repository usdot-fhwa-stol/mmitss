# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/NodeXY.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeXY(type):
    """Metaclass of message 'NodeXY'."""

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
                'carma_v2x_msgs.msg.NodeXY')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_xy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_xy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_xy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_xy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_xy

            from carma_v2x_msgs.msg import NodeAttributeSetXY
            if NodeAttributeSetXY.__class__._TYPE_SUPPORT is None:
                NodeAttributeSetXY.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import NodeOffsetPointXY
            if NodeOffsetPointXY.__class__._TYPE_SUPPORT is None:
                NodeOffsetPointXY.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeXY(metaclass=Metaclass_NodeXY):
    """Message class 'NodeXY'."""

    __slots__ = [
        '_delta',
        '_attributes',
        '_attributes_exists',
    ]

    _fields_and_field_types = {
        'delta': 'carma_v2x_msgs/NodeOffsetPointXY',
        'attributes': 'carma_v2x_msgs/NodeAttributeSetXY',
        'attributes_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'NodeOffsetPointXY'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'NodeAttributeSetXY'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_v2x_msgs.msg import NodeOffsetPointXY
        self.delta = kwargs.get('delta', NodeOffsetPointXY())
        from carma_v2x_msgs.msg import NodeAttributeSetXY
        self.attributes = kwargs.get('attributes', NodeAttributeSetXY())
        self.attributes_exists = kwargs.get('attributes_exists', bool())

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
        if self.delta != other.delta:
            return False
        if self.attributes != other.attributes:
            return False
        if self.attributes_exists != other.attributes_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def delta(self):
        """Message field 'delta'."""
        return self._delta

    @delta.setter
    def delta(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import NodeOffsetPointXY
            assert \
                isinstance(value, NodeOffsetPointXY), \
                "The 'delta' field must be a sub message of type 'NodeOffsetPointXY'"
        self._delta = value

    @property
    def attributes(self):
        """Message field 'attributes'."""
        return self._attributes

    @attributes.setter
    def attributes(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import NodeAttributeSetXY
            assert \
                isinstance(value, NodeAttributeSetXY), \
                "The 'attributes' field must be a sub message of type 'NodeAttributeSetXY'"
        self._attributes = value

    @property
    def attributes_exists(self):
        """Message field 'attributes_exists'."""
        return self._attributes_exists

    @attributes_exists.setter
    def attributes_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'attributes_exists' field must be of type 'bool'"
        self._attributes_exists = value
