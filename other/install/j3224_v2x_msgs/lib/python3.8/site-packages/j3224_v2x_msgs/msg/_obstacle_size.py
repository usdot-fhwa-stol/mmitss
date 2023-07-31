# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/ObstacleSize.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleSize(type):
    """Metaclass of message 'ObstacleSize'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_HEIGHT': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j3224_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j3224_v2x_msgs.msg.ObstacleSize')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_size
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_size
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_size
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_size
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_size

            from j3224_v2x_msgs.msg import SizeValue
            if SizeValue.__class__._TYPE_SUPPORT is None:
                SizeValue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_HEIGHT': cls.__constants['HAS_HEIGHT'],
        }

    @property
    def HAS_HEIGHT(self):
        """Message constant 'HAS_HEIGHT'."""
        return Metaclass_ObstacleSize.__constants['HAS_HEIGHT']


class ObstacleSize(metaclass=Metaclass_ObstacleSize):
    """
    Message class 'ObstacleSize'.

    Constants:
      HAS_HEIGHT
    """

    __slots__ = [
        '_width',
        '_length',
        '_presence_vector',
        '_height',
    ]

    _fields_and_field_types = {
        'width': 'j3224_v2x_msgs/SizeValue',
        'length': 'j3224_v2x_msgs/SizeValue',
        'presence_vector': 'uint8',
        'height': 'j3224_v2x_msgs/SizeValue',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'SizeValue'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'SizeValue'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'SizeValue'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j3224_v2x_msgs.msg import SizeValue
        self.width = kwargs.get('width', SizeValue())
        from j3224_v2x_msgs.msg import SizeValue
        self.length = kwargs.get('length', SizeValue())
        self.presence_vector = kwargs.get('presence_vector', int())
        from j3224_v2x_msgs.msg import SizeValue
        self.height = kwargs.get('height', SizeValue())

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
        if self.width != other.width:
            return False
        if self.length != other.length:
            return False
        if self.presence_vector != other.presence_vector:
            return False
        if self.height != other.height:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import SizeValue
            assert \
                isinstance(value, SizeValue), \
                "The 'width' field must be a sub message of type 'SizeValue'"
        self._width = value

    @property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import SizeValue
            assert \
                isinstance(value, SizeValue), \
                "The 'length' field must be a sub message of type 'SizeValue'"
        self._length = value

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
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import SizeValue
            assert \
                isinstance(value, SizeValue), \
                "The 'height' field must be a sub message of type 'SizeValue'"
        self._height = value
