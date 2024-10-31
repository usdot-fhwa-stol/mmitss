# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/LocationECEF.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocationECEF(type):
    """Metaclass of message 'LocationECEF'."""

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
                'carma_v2x_msgs.msg.LocationECEF')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__location_ecef
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__location_ecef
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__location_ecef
            cls._TYPE_SUPPORT = module.type_support_msg__msg__location_ecef
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__location_ecef

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LocationECEF(metaclass=Metaclass_LocationECEF):
    """Message class 'LocationECEF'."""

    __slots__ = [
        '_ecef_x',
        '_ecef_y',
        '_ecef_z',
        '_timestamp',
    ]

    _fields_and_field_types = {
        'ecef_x': 'int32',
        'ecef_y': 'int32',
        'ecef_z': 'int32',
        'timestamp': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ecef_x = kwargs.get('ecef_x', int())
        self.ecef_y = kwargs.get('ecef_y', int())
        self.ecef_z = kwargs.get('ecef_z', int())
        self.timestamp = kwargs.get('timestamp', int())

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
        if self.ecef_x != other.ecef_x:
            return False
        if self.ecef_y != other.ecef_y:
            return False
        if self.ecef_z != other.ecef_z:
            return False
        if self.timestamp != other.timestamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ecef_x(self):
        """Message field 'ecef_x'."""
        return self._ecef_x

    @ecef_x.setter
    def ecef_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ecef_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ecef_x' field must be an integer in [-2147483648, 2147483647]"
        self._ecef_x = value

    @property
    def ecef_y(self):
        """Message field 'ecef_y'."""
        return self._ecef_y

    @ecef_y.setter
    def ecef_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ecef_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ecef_y' field must be an integer in [-2147483648, 2147483647]"
        self._ecef_y = value

    @property
    def ecef_z(self):
        """Message field 'ecef_z'."""
        return self._ecef_z

    @ecef_z.setter
    def ecef_z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ecef_z' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ecef_z' field must be an integer in [-2147483648, 2147483647]"
        self._ecef_z = value

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value
