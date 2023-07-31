# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/PositionalAccuracy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionalAccuracy(type):
    """Metaclass of message 'PositionalAccuracy'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACCURACY_AVAILABLE': 1,
        'ACCURACY_ORIENTATION_AVAILABLE': 2,
        'ACCURACY_MAX': 12.7,
        'ACCURACY_MIN': 0.0,
        'ACCURACY_ORIENTATION_MAX': 359.9945078786,
        'ACCURACY_ORIENTATION_MIN': 0.0,
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
                'carma_v2x_msgs.msg.PositionalAccuracy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__positional_accuracy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__positional_accuracy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__positional_accuracy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__positional_accuracy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__positional_accuracy

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACCURACY_AVAILABLE': cls.__constants['ACCURACY_AVAILABLE'],
            'ACCURACY_ORIENTATION_AVAILABLE': cls.__constants['ACCURACY_ORIENTATION_AVAILABLE'],
            'ACCURACY_MAX': cls.__constants['ACCURACY_MAX'],
            'ACCURACY_MIN': cls.__constants['ACCURACY_MIN'],
            'ACCURACY_ORIENTATION_MAX': cls.__constants['ACCURACY_ORIENTATION_MAX'],
            'ACCURACY_ORIENTATION_MIN': cls.__constants['ACCURACY_ORIENTATION_MIN'],
        }

    @property
    def ACCURACY_AVAILABLE(self):
        """Message constant 'ACCURACY_AVAILABLE'."""
        return Metaclass_PositionalAccuracy.__constants['ACCURACY_AVAILABLE']

    @property
    def ACCURACY_ORIENTATION_AVAILABLE(self):
        """Message constant 'ACCURACY_ORIENTATION_AVAILABLE'."""
        return Metaclass_PositionalAccuracy.__constants['ACCURACY_ORIENTATION_AVAILABLE']

    @property
    def ACCURACY_MAX(self):
        """Message constant 'ACCURACY_MAX'."""
        return Metaclass_PositionalAccuracy.__constants['ACCURACY_MAX']

    @property
    def ACCURACY_MIN(self):
        """Message constant 'ACCURACY_MIN'."""
        return Metaclass_PositionalAccuracy.__constants['ACCURACY_MIN']

    @property
    def ACCURACY_ORIENTATION_MAX(self):
        """Message constant 'ACCURACY_ORIENTATION_MAX'."""
        return Metaclass_PositionalAccuracy.__constants['ACCURACY_ORIENTATION_MAX']

    @property
    def ACCURACY_ORIENTATION_MIN(self):
        """Message constant 'ACCURACY_ORIENTATION_MIN'."""
        return Metaclass_PositionalAccuracy.__constants['ACCURACY_ORIENTATION_MIN']


class PositionalAccuracy(metaclass=Metaclass_PositionalAccuracy):
    """
    Message class 'PositionalAccuracy'.

    Constants:
      ACCURACY_AVAILABLE
      ACCURACY_ORIENTATION_AVAILABLE
      ACCURACY_MAX
      ACCURACY_MIN
      ACCURACY_ORIENTATION_MAX
      ACCURACY_ORIENTATION_MIN
    """

    __slots__ = [
        '_presence_vector',
        '_semi_major',
        '_semi_minor',
        '_orientation',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'semi_major': 'float',
        'semi_minor': 'float',
        'orientation': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        self.semi_major = kwargs.get('semi_major', float())
        self.semi_minor = kwargs.get('semi_minor', float())
        self.orientation = kwargs.get('orientation', float())

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
        if self.presence_vector != other.presence_vector:
            return False
        if self.semi_major != other.semi_major:
            return False
        if self.semi_minor != other.semi_minor:
            return False
        if self.orientation != other.orientation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= 0 and value < 65536, \
                "The 'presence_vector' field must be an unsigned integer in [0, 65535]"
        self._presence_vector = value

    @property
    def semi_major(self):
        """Message field 'semi_major'."""
        return self._semi_major

    @semi_major.setter
    def semi_major(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'semi_major' field must be of type 'float'"
        self._semi_major = value

    @property
    def semi_minor(self):
        """Message field 'semi_minor'."""
        return self._semi_minor

    @semi_minor.setter
    def semi_minor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'semi_minor' field must be of type 'float'"
        self._semi_minor = value

    @property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation' field must be of type 'float'"
        self._orientation = value
