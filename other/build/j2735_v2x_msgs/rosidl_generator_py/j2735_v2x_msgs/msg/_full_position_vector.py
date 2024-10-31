# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/FullPositionVector.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FullPositionVector(type):
    """Metaclass of message 'FullPositionVector'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_UTC_TIME': 1,
        'HAS_ELEVATION': 2,
        'HAS_HEADING': 4,
        'HAS_SPEED': 8,
        'HAS_POS_ACCURACY': 16,
        'HAS_TIME_CONFIDENCE': 32,
        'HAS_POS_CONFIDENCE': 64,
        'HAS_SPEED_CONFIDENCE': 128,
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
                'j2735_v2x_msgs.msg.FullPositionVector')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__full_position_vector
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__full_position_vector
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__full_position_vector
            cls._TYPE_SUPPORT = module.type_support_msg__msg__full_position_vector
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__full_position_vector

            from j2735_v2x_msgs.msg import DDateTime
            if DDateTime.__class__._TYPE_SUPPORT is None:
                DDateTime.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Elevation
            if Elevation.__class__._TYPE_SUPPORT is None:
                Elevation.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Heading
            if Heading.__class__._TYPE_SUPPORT is None:
                Heading.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Latitude
            if Latitude.__class__._TYPE_SUPPORT is None:
                Latitude.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Longitude
            if Longitude.__class__._TYPE_SUPPORT is None:
                Longitude.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PositionConfidenceSet
            if PositionConfidenceSet.__class__._TYPE_SUPPORT is None:
                PositionConfidenceSet.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PositionalAccuracy
            if PositionalAccuracy.__class__._TYPE_SUPPORT is None:
                PositionalAccuracy.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import SpeedandHeadingandThrottleConfidence
            if SpeedandHeadingandThrottleConfidence.__class__._TYPE_SUPPORT is None:
                SpeedandHeadingandThrottleConfidence.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TimeConfidence
            if TimeConfidence.__class__._TYPE_SUPPORT is None:
                TimeConfidence.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TransmissionAndSpeed
            if TransmissionAndSpeed.__class__._TYPE_SUPPORT is None:
                TransmissionAndSpeed.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_UTC_TIME': cls.__constants['HAS_UTC_TIME'],
            'HAS_ELEVATION': cls.__constants['HAS_ELEVATION'],
            'HAS_HEADING': cls.__constants['HAS_HEADING'],
            'HAS_SPEED': cls.__constants['HAS_SPEED'],
            'HAS_POS_ACCURACY': cls.__constants['HAS_POS_ACCURACY'],
            'HAS_TIME_CONFIDENCE': cls.__constants['HAS_TIME_CONFIDENCE'],
            'HAS_POS_CONFIDENCE': cls.__constants['HAS_POS_CONFIDENCE'],
            'HAS_SPEED_CONFIDENCE': cls.__constants['HAS_SPEED_CONFIDENCE'],
        }

    @property
    def HAS_UTC_TIME(self):
        """Message constant 'HAS_UTC_TIME'."""
        return Metaclass_FullPositionVector.__constants['HAS_UTC_TIME']

    @property
    def HAS_ELEVATION(self):
        """Message constant 'HAS_ELEVATION'."""
        return Metaclass_FullPositionVector.__constants['HAS_ELEVATION']

    @property
    def HAS_HEADING(self):
        """Message constant 'HAS_HEADING'."""
        return Metaclass_FullPositionVector.__constants['HAS_HEADING']

    @property
    def HAS_SPEED(self):
        """Message constant 'HAS_SPEED'."""
        return Metaclass_FullPositionVector.__constants['HAS_SPEED']

    @property
    def HAS_POS_ACCURACY(self):
        """Message constant 'HAS_POS_ACCURACY'."""
        return Metaclass_FullPositionVector.__constants['HAS_POS_ACCURACY']

    @property
    def HAS_TIME_CONFIDENCE(self):
        """Message constant 'HAS_TIME_CONFIDENCE'."""
        return Metaclass_FullPositionVector.__constants['HAS_TIME_CONFIDENCE']

    @property
    def HAS_POS_CONFIDENCE(self):
        """Message constant 'HAS_POS_CONFIDENCE'."""
        return Metaclass_FullPositionVector.__constants['HAS_POS_CONFIDENCE']

    @property
    def HAS_SPEED_CONFIDENCE(self):
        """Message constant 'HAS_SPEED_CONFIDENCE'."""
        return Metaclass_FullPositionVector.__constants['HAS_SPEED_CONFIDENCE']


class FullPositionVector(metaclass=Metaclass_FullPositionVector):
    """
    Message class 'FullPositionVector'.

    Constants:
      HAS_UTC_TIME
      HAS_ELEVATION
      HAS_HEADING
      HAS_SPEED
      HAS_POS_ACCURACY
      HAS_TIME_CONFIDENCE
      HAS_POS_CONFIDENCE
      HAS_SPEED_CONFIDENCE
    """

    __slots__ = [
        '_presence_vector',
        '_utc_time',
        '_lon',
        '_lat',
        '_elevation',
        '_heading',
        '_speed',
        '_pos_accuracy',
        '_time_confidence',
        '_pos_confidence',
        '_speed_confidence',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'utc_time': 'j2735_v2x_msgs/DDateTime',
        'lon': 'j2735_v2x_msgs/Longitude',
        'lat': 'j2735_v2x_msgs/Latitude',
        'elevation': 'j2735_v2x_msgs/Elevation',
        'heading': 'j2735_v2x_msgs/Heading',
        'speed': 'j2735_v2x_msgs/TransmissionAndSpeed',
        'pos_accuracy': 'j2735_v2x_msgs/PositionalAccuracy',
        'time_confidence': 'j2735_v2x_msgs/TimeConfidence',
        'pos_confidence': 'j2735_v2x_msgs/PositionConfidenceSet',
        'speed_confidence': 'j2735_v2x_msgs/SpeedandHeadingandThrottleConfidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DDateTime'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Longitude'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Latitude'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Elevation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Heading'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TransmissionAndSpeed'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PositionalAccuracy'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TimeConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PositionConfidenceSet'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SpeedandHeadingandThrottleConfidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import DDateTime
        self.utc_time = kwargs.get('utc_time', DDateTime())
        from j2735_v2x_msgs.msg import Longitude
        self.lon = kwargs.get('lon', Longitude())
        from j2735_v2x_msgs.msg import Latitude
        self.lat = kwargs.get('lat', Latitude())
        from j2735_v2x_msgs.msg import Elevation
        self.elevation = kwargs.get('elevation', Elevation())
        from j2735_v2x_msgs.msg import Heading
        self.heading = kwargs.get('heading', Heading())
        from j2735_v2x_msgs.msg import TransmissionAndSpeed
        self.speed = kwargs.get('speed', TransmissionAndSpeed())
        from j2735_v2x_msgs.msg import PositionalAccuracy
        self.pos_accuracy = kwargs.get('pos_accuracy', PositionalAccuracy())
        from j2735_v2x_msgs.msg import TimeConfidence
        self.time_confidence = kwargs.get('time_confidence', TimeConfidence())
        from j2735_v2x_msgs.msg import PositionConfidenceSet
        self.pos_confidence = kwargs.get('pos_confidence', PositionConfidenceSet())
        from j2735_v2x_msgs.msg import SpeedandHeadingandThrottleConfidence
        self.speed_confidence = kwargs.get('speed_confidence', SpeedandHeadingandThrottleConfidence())

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
        if self.utc_time != other.utc_time:
            return False
        if self.lon != other.lon:
            return False
        if self.lat != other.lat:
            return False
        if self.elevation != other.elevation:
            return False
        if self.heading != other.heading:
            return False
        if self.speed != other.speed:
            return False
        if self.pos_accuracy != other.pos_accuracy:
            return False
        if self.time_confidence != other.time_confidence:
            return False
        if self.pos_confidence != other.pos_confidence:
            return False
        if self.speed_confidence != other.speed_confidence:
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
    def utc_time(self):
        """Message field 'utc_time'."""
        return self._utc_time

    @utc_time.setter
    def utc_time(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DDateTime
            assert \
                isinstance(value, DDateTime), \
                "The 'utc_time' field must be a sub message of type 'DDateTime'"
        self._utc_time = value

    @property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Longitude
            assert \
                isinstance(value, Longitude), \
                "The 'lon' field must be a sub message of type 'Longitude'"
        self._lon = value

    @property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Latitude
            assert \
                isinstance(value, Latitude), \
                "The 'lat' field must be a sub message of type 'Latitude'"
        self._lat = value

    @property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Elevation
            assert \
                isinstance(value, Elevation), \
                "The 'elevation' field must be a sub message of type 'Elevation'"
        self._elevation = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Heading
            assert \
                isinstance(value, Heading), \
                "The 'heading' field must be a sub message of type 'Heading'"
        self._heading = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TransmissionAndSpeed
            assert \
                isinstance(value, TransmissionAndSpeed), \
                "The 'speed' field must be a sub message of type 'TransmissionAndSpeed'"
        self._speed = value

    @property
    def pos_accuracy(self):
        """Message field 'pos_accuracy'."""
        return self._pos_accuracy

    @pos_accuracy.setter
    def pos_accuracy(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PositionalAccuracy
            assert \
                isinstance(value, PositionalAccuracy), \
                "The 'pos_accuracy' field must be a sub message of type 'PositionalAccuracy'"
        self._pos_accuracy = value

    @property
    def time_confidence(self):
        """Message field 'time_confidence'."""
        return self._time_confidence

    @time_confidence.setter
    def time_confidence(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TimeConfidence
            assert \
                isinstance(value, TimeConfidence), \
                "The 'time_confidence' field must be a sub message of type 'TimeConfidence'"
        self._time_confidence = value

    @property
    def pos_confidence(self):
        """Message field 'pos_confidence'."""
        return self._pos_confidence

    @pos_confidence.setter
    def pos_confidence(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PositionConfidenceSet
            assert \
                isinstance(value, PositionConfidenceSet), \
                "The 'pos_confidence' field must be a sub message of type 'PositionConfidenceSet'"
        self._pos_confidence = value

    @property
    def speed_confidence(self):
        """Message field 'speed_confidence'."""
        return self._speed_confidence

    @speed_confidence.setter
    def speed_confidence(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import SpeedandHeadingandThrottleConfidence
            assert \
                isinstance(value, SpeedandHeadingandThrottleConfidence), \
                "The 'speed_confidence' field must be a sub message of type 'SpeedandHeadingandThrottleConfidence'"
        self._speed_confidence = value
