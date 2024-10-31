# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/PositionOffsetXYZ.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionOffsetXYZ(type):
    """Metaclass of message 'PositionOffsetXYZ'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_OFFSET_Z': 1,
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
                'carma_v2x_msgs.msg.PositionOffsetXYZ')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_offset_xyz
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_offset_xyz
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_offset_xyz
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_offset_xyz
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_offset_xyz

            from carma_v2x_msgs.msg import ObjectDistance
            if ObjectDistance.__class__._TYPE_SUPPORT is None:
                ObjectDistance.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_OFFSET_Z': cls.__constants['HAS_OFFSET_Z'],
        }

    @property
    def HAS_OFFSET_Z(self):
        """Message constant 'HAS_OFFSET_Z'."""
        return Metaclass_PositionOffsetXYZ.__constants['HAS_OFFSET_Z']


class PositionOffsetXYZ(metaclass=Metaclass_PositionOffsetXYZ):
    """
    Message class 'PositionOffsetXYZ'.

    Constants:
      HAS_OFFSET_Z
    """

    __slots__ = [
        '_offset_x',
        '_offset_y',
        '_presence_vector',
        '_offset_z',
    ]

    _fields_and_field_types = {
        'offset_x': 'carma_v2x_msgs/ObjectDistance',
        'offset_y': 'carma_v2x_msgs/ObjectDistance',
        'presence_vector': 'uint8',
        'offset_z': 'carma_v2x_msgs/ObjectDistance',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'ObjectDistance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'ObjectDistance'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'ObjectDistance'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_v2x_msgs.msg import ObjectDistance
        self.offset_x = kwargs.get('offset_x', ObjectDistance())
        from carma_v2x_msgs.msg import ObjectDistance
        self.offset_y = kwargs.get('offset_y', ObjectDistance())
        self.presence_vector = kwargs.get('presence_vector', int())
        from carma_v2x_msgs.msg import ObjectDistance
        self.offset_z = kwargs.get('offset_z', ObjectDistance())

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
        if self.offset_x != other.offset_x:
            return False
        if self.offset_y != other.offset_y:
            return False
        if self.presence_vector != other.presence_vector:
            return False
        if self.offset_z != other.offset_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def offset_x(self):
        """Message field 'offset_x'."""
        return self._offset_x

    @offset_x.setter
    def offset_x(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import ObjectDistance
            assert \
                isinstance(value, ObjectDistance), \
                "The 'offset_x' field must be a sub message of type 'ObjectDistance'"
        self._offset_x = value

    @property
    def offset_y(self):
        """Message field 'offset_y'."""
        return self._offset_y

    @offset_y.setter
    def offset_y(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import ObjectDistance
            assert \
                isinstance(value, ObjectDistance), \
                "The 'offset_y' field must be a sub message of type 'ObjectDistance'"
        self._offset_y = value

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
            assert value >= 0 and value < 256, \
                "The 'presence_vector' field must be an unsigned integer in [0, 255]"
        self._presence_vector = value

    @property
    def offset_z(self):
        """Message field 'offset_z'."""
        return self._offset_z

    @offset_z.setter
    def offset_z(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import ObjectDistance
            assert \
                isinstance(value, ObjectDistance), \
                "The 'offset_z' field must be a sub message of type 'ObjectDistance'"
        self._offset_z = value
