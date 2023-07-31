# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/AttitudeConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AttitudeConfidence(type):
    """Metaclass of message 'AttitudeConfidence'."""

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
            module = import_type_support('j3224_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j3224_v2x_msgs.msg.AttitudeConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__attitude_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__attitude_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__attitude_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__attitude_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__attitude_confidence

            from j2735_v2x_msgs.msg import HeadingConfidence
            if HeadingConfidence.__class__._TYPE_SUPPORT is None:
                HeadingConfidence.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AttitudeConfidence(metaclass=Metaclass_AttitudeConfidence):
    """Message class 'AttitudeConfidence'."""

    __slots__ = [
        '_pitch_confidence',
        '_roll_confidence',
        '_yaw_confidence',
    ]

    _fields_and_field_types = {
        'pitch_confidence': 'j2735_v2x_msgs/HeadingConfidence',
        'roll_confidence': 'j2735_v2x_msgs/HeadingConfidence',
        'yaw_confidence': 'j2735_v2x_msgs/HeadingConfidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'HeadingConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'HeadingConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'HeadingConfidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import HeadingConfidence
        self.pitch_confidence = kwargs.get('pitch_confidence', HeadingConfidence())
        from j2735_v2x_msgs.msg import HeadingConfidence
        self.roll_confidence = kwargs.get('roll_confidence', HeadingConfidence())
        from j2735_v2x_msgs.msg import HeadingConfidence
        self.yaw_confidence = kwargs.get('yaw_confidence', HeadingConfidence())

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
        if self.pitch_confidence != other.pitch_confidence:
            return False
        if self.roll_confidence != other.roll_confidence:
            return False
        if self.yaw_confidence != other.yaw_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pitch_confidence(self):
        """Message field 'pitch_confidence'."""
        return self._pitch_confidence

    @pitch_confidence.setter
    def pitch_confidence(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import HeadingConfidence
            assert \
                isinstance(value, HeadingConfidence), \
                "The 'pitch_confidence' field must be a sub message of type 'HeadingConfidence'"
        self._pitch_confidence = value

    @property
    def roll_confidence(self):
        """Message field 'roll_confidence'."""
        return self._roll_confidence

    @roll_confidence.setter
    def roll_confidence(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import HeadingConfidence
            assert \
                isinstance(value, HeadingConfidence), \
                "The 'roll_confidence' field must be a sub message of type 'HeadingConfidence'"
        self._roll_confidence = value

    @property
    def yaw_confidence(self):
        """Message field 'yaw_confidence'."""
        return self._yaw_confidence

    @yaw_confidence.setter
    def yaw_confidence(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import HeadingConfidence
            assert \
                isinstance(value, HeadingConfidence), \
                "The 'yaw_confidence' field must be a sub message of type 'HeadingConfidence'"
        self._yaw_confidence = value
