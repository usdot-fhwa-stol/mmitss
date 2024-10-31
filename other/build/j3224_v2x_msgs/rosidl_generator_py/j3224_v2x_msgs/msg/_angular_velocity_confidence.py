# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/AngularVelocityConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AngularVelocityConfidence(type):
    """Metaclass of message 'AngularVelocityConfidence'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_PITCH_RATE_CONFIDENCE': 1,
        'HAS_ROLL_RATE_CONFIDENCE': 2,
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
                'j3224_v2x_msgs.msg.AngularVelocityConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__angular_velocity_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__angular_velocity_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__angular_velocity_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__angular_velocity_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__angular_velocity_confidence

            from j3224_v2x_msgs.msg import PitchRateConfidence
            if PitchRateConfidence.__class__._TYPE_SUPPORT is None:
                PitchRateConfidence.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import RollRateConfidence
            if RollRateConfidence.__class__._TYPE_SUPPORT is None:
                RollRateConfidence.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_PITCH_RATE_CONFIDENCE': cls.__constants['HAS_PITCH_RATE_CONFIDENCE'],
            'HAS_ROLL_RATE_CONFIDENCE': cls.__constants['HAS_ROLL_RATE_CONFIDENCE'],
        }

    @property
    def HAS_PITCH_RATE_CONFIDENCE(self):
        """Message constant 'HAS_PITCH_RATE_CONFIDENCE'."""
        return Metaclass_AngularVelocityConfidence.__constants['HAS_PITCH_RATE_CONFIDENCE']

    @property
    def HAS_ROLL_RATE_CONFIDENCE(self):
        """Message constant 'HAS_ROLL_RATE_CONFIDENCE'."""
        return Metaclass_AngularVelocityConfidence.__constants['HAS_ROLL_RATE_CONFIDENCE']


class AngularVelocityConfidence(metaclass=Metaclass_AngularVelocityConfidence):
    """
    Message class 'AngularVelocityConfidence'.

    Constants:
      HAS_PITCH_RATE_CONFIDENCE
      HAS_ROLL_RATE_CONFIDENCE
    """

    __slots__ = [
        '_presence_vector',
        '_pitch_rate_confidence',
        '_roll_rate_confidence',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint8',
        'pitch_rate_confidence': 'j3224_v2x_msgs/PitchRateConfidence',
        'roll_rate_confidence': 'j3224_v2x_msgs/RollRateConfidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'PitchRateConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'RollRateConfidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j3224_v2x_msgs.msg import PitchRateConfidence
        self.pitch_rate_confidence = kwargs.get('pitch_rate_confidence', PitchRateConfidence())
        from j3224_v2x_msgs.msg import RollRateConfidence
        self.roll_rate_confidence = kwargs.get('roll_rate_confidence', RollRateConfidence())

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
        if self.pitch_rate_confidence != other.pitch_rate_confidence:
            return False
        if self.roll_rate_confidence != other.roll_rate_confidence:
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
            assert value >= 0 and value < 256, \
                "The 'presence_vector' field must be an unsigned integer in [0, 255]"
        self._presence_vector = value

    @property
    def pitch_rate_confidence(self):
        """Message field 'pitch_rate_confidence'."""
        return self._pitch_rate_confidence

    @pitch_rate_confidence.setter
    def pitch_rate_confidence(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import PitchRateConfidence
            assert \
                isinstance(value, PitchRateConfidence), \
                "The 'pitch_rate_confidence' field must be a sub message of type 'PitchRateConfidence'"
        self._pitch_rate_confidence = value

    @property
    def roll_rate_confidence(self):
        """Message field 'roll_rate_confidence'."""
        return self._roll_rate_confidence

    @roll_rate_confidence.setter
    def roll_rate_confidence(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import RollRateConfidence
            assert \
                isinstance(value, RollRateConfidence), \
                "The 'roll_rate_confidence' field must be a sub message of type 'RollRateConfidence'"
        self._roll_rate_confidence = value
