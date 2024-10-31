# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/NodeOffsetPointXY.idl
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
        'LONGITUDE_UNAVAILABLE': 180.0000001,
        'LONGITUDE_MAX': 180.0,
        'LONGITUDE_MIN': -179.9999999,
        'LATITUDE_UNAVAILABLE': 90.0000001,
        'LATITUDE_MAX': 90.0,
        'LATITUDE_MIN': -90.0,
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
                'carma_v2x_msgs.msg.NodeOffsetPointXY')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_offset_point_xy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_offset_point_xy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_offset_point_xy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_offset_point_xy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_offset_point_xy

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
            'LONGITUDE_UNAVAILABLE': cls.__constants['LONGITUDE_UNAVAILABLE'],
            'LONGITUDE_MAX': cls.__constants['LONGITUDE_MAX'],
            'LONGITUDE_MIN': cls.__constants['LONGITUDE_MIN'],
            'LATITUDE_UNAVAILABLE': cls.__constants['LATITUDE_UNAVAILABLE'],
            'LATITUDE_MAX': cls.__constants['LATITUDE_MAX'],
            'LATITUDE_MIN': cls.__constants['LATITUDE_MIN'],
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

    @property
    def LONGITUDE_UNAVAILABLE(self):
        """Message constant 'LONGITUDE_UNAVAILABLE'."""
        return Metaclass_NodeOffsetPointXY.__constants['LONGITUDE_UNAVAILABLE']

    @property
    def LONGITUDE_MAX(self):
        """Message constant 'LONGITUDE_MAX'."""
        return Metaclass_NodeOffsetPointXY.__constants['LONGITUDE_MAX']

    @property
    def LONGITUDE_MIN(self):
        """Message constant 'LONGITUDE_MIN'."""
        return Metaclass_NodeOffsetPointXY.__constants['LONGITUDE_MIN']

    @property
    def LATITUDE_UNAVAILABLE(self):
        """Message constant 'LATITUDE_UNAVAILABLE'."""
        return Metaclass_NodeOffsetPointXY.__constants['LATITUDE_UNAVAILABLE']

    @property
    def LATITUDE_MAX(self):
        """Message constant 'LATITUDE_MAX'."""
        return Metaclass_NodeOffsetPointXY.__constants['LATITUDE_MAX']

    @property
    def LATITUDE_MIN(self):
        """Message constant 'LATITUDE_MIN'."""
        return Metaclass_NodeOffsetPointXY.__constants['LATITUDE_MIN']


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
      LONGITUDE_UNAVAILABLE
      LONGITUDE_MAX
      LONGITUDE_MIN
      LATITUDE_UNAVAILABLE
      LATITUDE_MAX
      LATITUDE_MIN
    """

    __slots__ = [
        '_choice',
        '_x',
        '_y',
        '_longitude',
        '_latitude',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'x': 'float',
        'y': 'float',
        'longitude': 'double',
        'latitude': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.longitude = kwargs.get('longitude', float())
        self.latitude = kwargs.get('latitude', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.longitude != other.longitude:
            return False
        if self.latitude != other.latitude:
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
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

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
