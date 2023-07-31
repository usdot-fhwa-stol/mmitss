# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/Position3D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Position3D(type):
    """Metaclass of message 'Position3D'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LATITUDE_UNAVAILABLE': 90.0000001,
        'LATITUDE_MAX': 90.0,
        'LATITUDE_MIN': -90.0,
        'LONGITUDE_UNAVAILABLE': 180.0000001,
        'LONGITUDE_MAX': 180.0,
        'LONGITUDE_MIN': -179.9999999,
        'ELEVATION_UNAVAILABLE': -409.6,
        'ELEVATION_MAX': 6143.9,
        'ELEVATION_MIN': -409.5,
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
                'carma_v2x_msgs.msg.Position3D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position3_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position3_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position3_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position3_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position3_d

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LATITUDE_UNAVAILABLE': cls.__constants['LATITUDE_UNAVAILABLE'],
            'LATITUDE_MAX': cls.__constants['LATITUDE_MAX'],
            'LATITUDE_MIN': cls.__constants['LATITUDE_MIN'],
            'LONGITUDE_UNAVAILABLE': cls.__constants['LONGITUDE_UNAVAILABLE'],
            'LONGITUDE_MAX': cls.__constants['LONGITUDE_MAX'],
            'LONGITUDE_MIN': cls.__constants['LONGITUDE_MIN'],
            'ELEVATION_UNAVAILABLE': cls.__constants['ELEVATION_UNAVAILABLE'],
            'ELEVATION_MAX': cls.__constants['ELEVATION_MAX'],
            'ELEVATION_MIN': cls.__constants['ELEVATION_MIN'],
        }

    @property
    def LATITUDE_UNAVAILABLE(self):
        """Message constant 'LATITUDE_UNAVAILABLE'."""
        return Metaclass_Position3D.__constants['LATITUDE_UNAVAILABLE']

    @property
    def LATITUDE_MAX(self):
        """Message constant 'LATITUDE_MAX'."""
        return Metaclass_Position3D.__constants['LATITUDE_MAX']

    @property
    def LATITUDE_MIN(self):
        """Message constant 'LATITUDE_MIN'."""
        return Metaclass_Position3D.__constants['LATITUDE_MIN']

    @property
    def LONGITUDE_UNAVAILABLE(self):
        """Message constant 'LONGITUDE_UNAVAILABLE'."""
        return Metaclass_Position3D.__constants['LONGITUDE_UNAVAILABLE']

    @property
    def LONGITUDE_MAX(self):
        """Message constant 'LONGITUDE_MAX'."""
        return Metaclass_Position3D.__constants['LONGITUDE_MAX']

    @property
    def LONGITUDE_MIN(self):
        """Message constant 'LONGITUDE_MIN'."""
        return Metaclass_Position3D.__constants['LONGITUDE_MIN']

    @property
    def ELEVATION_UNAVAILABLE(self):
        """Message constant 'ELEVATION_UNAVAILABLE'."""
        return Metaclass_Position3D.__constants['ELEVATION_UNAVAILABLE']

    @property
    def ELEVATION_MAX(self):
        """Message constant 'ELEVATION_MAX'."""
        return Metaclass_Position3D.__constants['ELEVATION_MAX']

    @property
    def ELEVATION_MIN(self):
        """Message constant 'ELEVATION_MIN'."""
        return Metaclass_Position3D.__constants['ELEVATION_MIN']


class Position3D(metaclass=Metaclass_Position3D):
    """
    Message class 'Position3D'.

    Constants:
      LATITUDE_UNAVAILABLE
      LATITUDE_MAX
      LATITUDE_MIN
      LONGITUDE_UNAVAILABLE
      LONGITUDE_MAX
      LONGITUDE_MIN
      ELEVATION_UNAVAILABLE
      ELEVATION_MAX
      ELEVATION_MIN
    """

    __slots__ = [
        '_latitude',
        '_longitude',
        '_elevation',
        '_elevation_exists',
    ]

    _fields_and_field_types = {
        'latitude': 'double',
        'longitude': 'double',
        'elevation': 'float',
        'elevation_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.elevation = kwargs.get('elevation', float())
        self.elevation_exists = kwargs.get('elevation_exists', bool())

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
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.elevation != other.elevation:
            return False
        if self.elevation_exists != other.elevation_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
        self._latitude = value

    @property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
        self._longitude = value

    @property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elevation' field must be of type 'float'"
        self._elevation = value

    @property
    def elevation_exists(self):
        """Message field 'elevation_exists'."""
        return self._elevation_exists

    @elevation_exists.setter
    def elevation_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'elevation_exists' field must be of type 'bool'"
        self._elevation_exists = value
