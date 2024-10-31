# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PositionConfidenceSet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionConfidenceSet(type):
    """Metaclass of message 'PositionConfidenceSet'."""

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
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.PositionConfidenceSet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_confidence_set
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_confidence_set
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_confidence_set
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_confidence_set
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_confidence_set

            from j2735_v2x_msgs.msg import ElevationConfidence
            if ElevationConfidence.__class__._TYPE_SUPPORT is None:
                ElevationConfidence.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PositionConfidence
            if PositionConfidence.__class__._TYPE_SUPPORT is None:
                PositionConfidence.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PositionConfidenceSet(metaclass=Metaclass_PositionConfidenceSet):
    """Message class 'PositionConfidenceSet'."""

    __slots__ = [
        '_pos',
        '_elevation',
    ]

    _fields_and_field_types = {
        'pos': 'j2735_v2x_msgs/PositionConfidence',
        'elevation': 'j2735_v2x_msgs/ElevationConfidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PositionConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ElevationConfidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import PositionConfidence
        self.pos = kwargs.get('pos', PositionConfidence())
        from j2735_v2x_msgs.msg import ElevationConfidence
        self.elevation = kwargs.get('elevation', ElevationConfidence())

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
        if self.pos != other.pos:
            return False
        if self.elevation != other.elevation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PositionConfidence
            assert \
                isinstance(value, PositionConfidence), \
                "The 'pos' field must be a sub message of type 'PositionConfidence'"
        self._pos = value

    @property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ElevationConfidence
            assert \
                isinstance(value, ElevationConfidence), \
                "The 'elevation' field must be a sub message of type 'ElevationConfidence'"
        self._elevation = value
