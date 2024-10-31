# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ComputedLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputedLane(type):
    """Metaclass of message 'ComputedLane'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROTATEXY_INVALID': 255,
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
                'j2735_v2x_msgs.msg.ComputedLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__computed_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__computed_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__computed_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__computed_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__computed_lane

            from j2735_v2x_msgs.msg import OffsetXaxis
            if OffsetXaxis.__class__._TYPE_SUPPORT is None:
                OffsetXaxis.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import OffsetYaxis
            if OffsetYaxis.__class__._TYPE_SUPPORT is None:
                OffsetYaxis.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROTATEXY_INVALID': cls.__constants['ROTATEXY_INVALID'],
        }

    @property
    def ROTATEXY_INVALID(self):
        """Message constant 'ROTATEXY_INVALID'."""
        return Metaclass_ComputedLane.__constants['ROTATEXY_INVALID']


class ComputedLane(metaclass=Metaclass_ComputedLane):
    """
    Message class 'ComputedLane'.

    Constants:
      ROTATEXY_INVALID
    """

    __slots__ = [
        '_reference_lane_id',
        '_offset_x_axis',
        '_offset_y_axis',
        '_rotate_xy',
        '_rotatexy_exists',
        '_scale_x_axis',
        '_scale_x_axis_exists',
        '_scale_y_axis',
        '_scale_y_axis_exists',
    ]

    _fields_and_field_types = {
        'reference_lane_id': 'uint16',
        'offset_x_axis': 'j2735_v2x_msgs/OffsetXaxis',
        'offset_y_axis': 'j2735_v2x_msgs/OffsetYaxis',
        'rotate_xy': 'uint16',
        'rotatexy_exists': 'boolean',
        'scale_x_axis': 'int16',
        'scale_x_axis_exists': 'boolean',
        'scale_y_axis': 'int16',
        'scale_y_axis_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'OffsetXaxis'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'OffsetYaxis'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reference_lane_id = kwargs.get('reference_lane_id', int())
        from j2735_v2x_msgs.msg import OffsetXaxis
        self.offset_x_axis = kwargs.get('offset_x_axis', OffsetXaxis())
        from j2735_v2x_msgs.msg import OffsetYaxis
        self.offset_y_axis = kwargs.get('offset_y_axis', OffsetYaxis())
        self.rotate_xy = kwargs.get('rotate_xy', int())
        self.rotatexy_exists = kwargs.get('rotatexy_exists', bool())
        self.scale_x_axis = kwargs.get('scale_x_axis', int())
        self.scale_x_axis_exists = kwargs.get('scale_x_axis_exists', bool())
        self.scale_y_axis = kwargs.get('scale_y_axis', int())
        self.scale_y_axis_exists = kwargs.get('scale_y_axis_exists', bool())

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
        if self.reference_lane_id != other.reference_lane_id:
            return False
        if self.offset_x_axis != other.offset_x_axis:
            return False
        if self.offset_y_axis != other.offset_y_axis:
            return False
        if self.rotate_xy != other.rotate_xy:
            return False
        if self.rotatexy_exists != other.rotatexy_exists:
            return False
        if self.scale_x_axis != other.scale_x_axis:
            return False
        if self.scale_x_axis_exists != other.scale_x_axis_exists:
            return False
        if self.scale_y_axis != other.scale_y_axis:
            return False
        if self.scale_y_axis_exists != other.scale_y_axis_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def reference_lane_id(self):
        """Message field 'reference_lane_id'."""
        return self._reference_lane_id

    @reference_lane_id.setter
    def reference_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reference_lane_id' field must be an unsigned integer in [0, 65535]"
        self._reference_lane_id = value

    @property
    def offset_x_axis(self):
        """Message field 'offset_x_axis'."""
        return self._offset_x_axis

    @offset_x_axis.setter
    def offset_x_axis(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import OffsetXaxis
            assert \
                isinstance(value, OffsetXaxis), \
                "The 'offset_x_axis' field must be a sub message of type 'OffsetXaxis'"
        self._offset_x_axis = value

    @property
    def offset_y_axis(self):
        """Message field 'offset_y_axis'."""
        return self._offset_y_axis

    @offset_y_axis.setter
    def offset_y_axis(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import OffsetYaxis
            assert \
                isinstance(value, OffsetYaxis), \
                "The 'offset_y_axis' field must be a sub message of type 'OffsetYaxis'"
        self._offset_y_axis = value

    @property
    def rotate_xy(self):
        """Message field 'rotate_xy'."""
        return self._rotate_xy

    @rotate_xy.setter
    def rotate_xy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rotate_xy' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rotate_xy' field must be an unsigned integer in [0, 65535]"
        self._rotate_xy = value

    @property
    def rotatexy_exists(self):
        """Message field 'rotatexy_exists'."""
        return self._rotatexy_exists

    @rotatexy_exists.setter
    def rotatexy_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rotatexy_exists' field must be of type 'bool'"
        self._rotatexy_exists = value

    @property
    def scale_x_axis(self):
        """Message field 'scale_x_axis'."""
        return self._scale_x_axis

    @scale_x_axis.setter
    def scale_x_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scale_x_axis' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'scale_x_axis' field must be an integer in [-32768, 32767]"
        self._scale_x_axis = value

    @property
    def scale_x_axis_exists(self):
        """Message field 'scale_x_axis_exists'."""
        return self._scale_x_axis_exists

    @scale_x_axis_exists.setter
    def scale_x_axis_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'scale_x_axis_exists' field must be of type 'bool'"
        self._scale_x_axis_exists = value

    @property
    def scale_y_axis(self):
        """Message field 'scale_y_axis'."""
        return self._scale_y_axis

    @scale_y_axis.setter
    def scale_y_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scale_y_axis' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'scale_y_axis' field must be an integer in [-32768, 32767]"
        self._scale_y_axis = value

    @property
    def scale_y_axis_exists(self):
        """Message field 'scale_y_axis_exists'."""
        return self._scale_y_axis_exists

    @scale_y_axis_exists.setter
    def scale_y_axis_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'scale_y_axis_exists' field must be of type 'bool'"
        self._scale_y_axis_exists = value
