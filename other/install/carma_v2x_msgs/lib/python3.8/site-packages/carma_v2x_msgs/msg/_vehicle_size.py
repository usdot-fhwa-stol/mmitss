# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/VehicleSize.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleSize(type):
    """Metaclass of message 'VehicleSize'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE_WIDTH_AVAILABLE': 1,
        'VEHICLE_LENGTH_AVAILABLE': 2,
        'VEHICLE_WIDTH_MAX': 10.23,
        'VEHICLE_WIDTH_MIN': 0.01,
        'VEHICLE_LENGTH_MAX': 40.95,
        'VEHICLE_LENGTH_MIN': 0.01,
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
                'carma_v2x_msgs.msg.VehicleSize')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_size
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_size
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_size
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_size
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_size

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VEHICLE_WIDTH_AVAILABLE': cls.__constants['VEHICLE_WIDTH_AVAILABLE'],
            'VEHICLE_LENGTH_AVAILABLE': cls.__constants['VEHICLE_LENGTH_AVAILABLE'],
            'VEHICLE_WIDTH_MAX': cls.__constants['VEHICLE_WIDTH_MAX'],
            'VEHICLE_WIDTH_MIN': cls.__constants['VEHICLE_WIDTH_MIN'],
            'VEHICLE_LENGTH_MAX': cls.__constants['VEHICLE_LENGTH_MAX'],
            'VEHICLE_LENGTH_MIN': cls.__constants['VEHICLE_LENGTH_MIN'],
        }

    @property
    def VEHICLE_WIDTH_AVAILABLE(self):
        """Message constant 'VEHICLE_WIDTH_AVAILABLE'."""
        return Metaclass_VehicleSize.__constants['VEHICLE_WIDTH_AVAILABLE']

    @property
    def VEHICLE_LENGTH_AVAILABLE(self):
        """Message constant 'VEHICLE_LENGTH_AVAILABLE'."""
        return Metaclass_VehicleSize.__constants['VEHICLE_LENGTH_AVAILABLE']

    @property
    def VEHICLE_WIDTH_MAX(self):
        """Message constant 'VEHICLE_WIDTH_MAX'."""
        return Metaclass_VehicleSize.__constants['VEHICLE_WIDTH_MAX']

    @property
    def VEHICLE_WIDTH_MIN(self):
        """Message constant 'VEHICLE_WIDTH_MIN'."""
        return Metaclass_VehicleSize.__constants['VEHICLE_WIDTH_MIN']

    @property
    def VEHICLE_LENGTH_MAX(self):
        """Message constant 'VEHICLE_LENGTH_MAX'."""
        return Metaclass_VehicleSize.__constants['VEHICLE_LENGTH_MAX']

    @property
    def VEHICLE_LENGTH_MIN(self):
        """Message constant 'VEHICLE_LENGTH_MIN'."""
        return Metaclass_VehicleSize.__constants['VEHICLE_LENGTH_MIN']


class VehicleSize(metaclass=Metaclass_VehicleSize):
    """
    Message class 'VehicleSize'.

    Constants:
      VEHICLE_WIDTH_AVAILABLE
      VEHICLE_LENGTH_AVAILABLE
      VEHICLE_WIDTH_MAX
      VEHICLE_WIDTH_MIN
      VEHICLE_LENGTH_MAX
      VEHICLE_LENGTH_MIN
    """

    __slots__ = [
        '_presence_vector',
        '_vehicle_width',
        '_vehicle_length',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'vehicle_width': 'float',
        'vehicle_length': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        self.vehicle_width = kwargs.get('vehicle_width', float())
        self.vehicle_length = kwargs.get('vehicle_length', float())

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
        if self.vehicle_width != other.vehicle_width:
            return False
        if self.vehicle_length != other.vehicle_length:
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
    def vehicle_width(self):
        """Message field 'vehicle_width'."""
        return self._vehicle_width

    @vehicle_width.setter
    def vehicle_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_width' field must be of type 'float'"
        self._vehicle_width = value

    @property
    def vehicle_length(self):
        """Message field 'vehicle_length'."""
        return self._vehicle_length

    @vehicle_length.setter
    def vehicle_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_length' field must be of type 'float'"
        self._vehicle_length = value
