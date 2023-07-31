# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/LaneDataAttribute.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneDataAttribute(type):
    """Metaclass of message 'LaneDataAttribute'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PATH_END_POINT_ANGLE': 0,
        'LANE_CROWN_POINT_CENTER': 1,
        'LANE_CROWN_POINT_LEFT': 2,
        'LANE_CROWN_POINT_RIGHT': 3,
        'LANE_ANGLE': 4,
        'SPEED_LIMITS': 5,
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
                'j2735_v2x_msgs.msg.LaneDataAttribute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_data_attribute
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_data_attribute
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_data_attribute
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_data_attribute
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_data_attribute

            from j2735_v2x_msgs.msg import SpeedLimitList
            if SpeedLimitList.__class__._TYPE_SUPPORT is None:
                SpeedLimitList.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PATH_END_POINT_ANGLE': cls.__constants['PATH_END_POINT_ANGLE'],
            'LANE_CROWN_POINT_CENTER': cls.__constants['LANE_CROWN_POINT_CENTER'],
            'LANE_CROWN_POINT_LEFT': cls.__constants['LANE_CROWN_POINT_LEFT'],
            'LANE_CROWN_POINT_RIGHT': cls.__constants['LANE_CROWN_POINT_RIGHT'],
            'LANE_ANGLE': cls.__constants['LANE_ANGLE'],
            'SPEED_LIMITS': cls.__constants['SPEED_LIMITS'],
        }

    @property
    def PATH_END_POINT_ANGLE(self):
        """Message constant 'PATH_END_POINT_ANGLE'."""
        return Metaclass_LaneDataAttribute.__constants['PATH_END_POINT_ANGLE']

    @property
    def LANE_CROWN_POINT_CENTER(self):
        """Message constant 'LANE_CROWN_POINT_CENTER'."""
        return Metaclass_LaneDataAttribute.__constants['LANE_CROWN_POINT_CENTER']

    @property
    def LANE_CROWN_POINT_LEFT(self):
        """Message constant 'LANE_CROWN_POINT_LEFT'."""
        return Metaclass_LaneDataAttribute.__constants['LANE_CROWN_POINT_LEFT']

    @property
    def LANE_CROWN_POINT_RIGHT(self):
        """Message constant 'LANE_CROWN_POINT_RIGHT'."""
        return Metaclass_LaneDataAttribute.__constants['LANE_CROWN_POINT_RIGHT']

    @property
    def LANE_ANGLE(self):
        """Message constant 'LANE_ANGLE'."""
        return Metaclass_LaneDataAttribute.__constants['LANE_ANGLE']

    @property
    def SPEED_LIMITS(self):
        """Message constant 'SPEED_LIMITS'."""
        return Metaclass_LaneDataAttribute.__constants['SPEED_LIMITS']


class LaneDataAttribute(metaclass=Metaclass_LaneDataAttribute):
    """
    Message class 'LaneDataAttribute'.

    Constants:
      PATH_END_POINT_ANGLE
      LANE_CROWN_POINT_CENTER
      LANE_CROWN_POINT_LEFT
      LANE_CROWN_POINT_RIGHT
      LANE_ANGLE
      SPEED_LIMITS
    """

    __slots__ = [
        '_choice',
        '_path_end_point_angle',
        '_lane_crown_point_center',
        '_lane_crown_point_right',
        '_lane_crown_point_left',
        '_lane_angle',
        '_speed_limits',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'path_end_point_angle': 'int16',
        'lane_crown_point_center': 'int8',
        'lane_crown_point_right': 'int8',
        'lane_crown_point_left': 'int8',
        'lane_angle': 'int16',
        'speed_limits': 'j2735_v2x_msgs/SpeedLimitList',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SpeedLimitList'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        self.path_end_point_angle = kwargs.get('path_end_point_angle', int())
        self.lane_crown_point_center = kwargs.get('lane_crown_point_center', int())
        self.lane_crown_point_right = kwargs.get('lane_crown_point_right', int())
        self.lane_crown_point_left = kwargs.get('lane_crown_point_left', int())
        self.lane_angle = kwargs.get('lane_angle', int())
        from j2735_v2x_msgs.msg import SpeedLimitList
        self.speed_limits = kwargs.get('speed_limits', SpeedLimitList())

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
        if self.path_end_point_angle != other.path_end_point_angle:
            return False
        if self.lane_crown_point_center != other.lane_crown_point_center:
            return False
        if self.lane_crown_point_right != other.lane_crown_point_right:
            return False
        if self.lane_crown_point_left != other.lane_crown_point_left:
            return False
        if self.lane_angle != other.lane_angle:
            return False
        if self.speed_limits != other.speed_limits:
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
    def path_end_point_angle(self):
        """Message field 'path_end_point_angle'."""
        return self._path_end_point_angle

    @path_end_point_angle.setter
    def path_end_point_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_end_point_angle' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'path_end_point_angle' field must be an integer in [-32768, 32767]"
        self._path_end_point_angle = value

    @property
    def lane_crown_point_center(self):
        """Message field 'lane_crown_point_center'."""
        return self._lane_crown_point_center

    @lane_crown_point_center.setter
    def lane_crown_point_center(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_crown_point_center' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'lane_crown_point_center' field must be an integer in [-128, 127]"
        self._lane_crown_point_center = value

    @property
    def lane_crown_point_right(self):
        """Message field 'lane_crown_point_right'."""
        return self._lane_crown_point_right

    @lane_crown_point_right.setter
    def lane_crown_point_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_crown_point_right' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'lane_crown_point_right' field must be an integer in [-128, 127]"
        self._lane_crown_point_right = value

    @property
    def lane_crown_point_left(self):
        """Message field 'lane_crown_point_left'."""
        return self._lane_crown_point_left

    @lane_crown_point_left.setter
    def lane_crown_point_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_crown_point_left' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'lane_crown_point_left' field must be an integer in [-128, 127]"
        self._lane_crown_point_left = value

    @property
    def lane_angle(self):
        """Message field 'lane_angle'."""
        return self._lane_angle

    @lane_angle.setter
    def lane_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_angle' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'lane_angle' field must be an integer in [-32768, 32767]"
        self._lane_angle = value

    @property
    def speed_limits(self):
        """Message field 'speed_limits'."""
        return self._speed_limits

    @speed_limits.setter
    def speed_limits(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import SpeedLimitList
            assert \
                isinstance(value, SpeedLimitList), \
                "The 'speed_limits' field must be a sub message of type 'SpeedLimitList'"
        self._speed_limits = value
