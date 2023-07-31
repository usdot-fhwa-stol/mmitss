# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CheckActiveGeofence(type):
    """Metaclass of message 'CheckActiveGeofence'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SPEED_LIMIT': 1,
        'LANE_CLOSED': 2,
        'LANE_OPEN': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_perception_msgs.msg.CheckActiveGeofence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__check_active_geofence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__check_active_geofence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__check_active_geofence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__check_active_geofence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__check_active_geofence

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SPEED_LIMIT': cls.__constants['SPEED_LIMIT'],
            'LANE_CLOSED': cls.__constants['LANE_CLOSED'],
            'LANE_OPEN': cls.__constants['LANE_OPEN'],
        }

    @property
    def SPEED_LIMIT(self):
        """Message constant 'SPEED_LIMIT'."""
        return Metaclass_CheckActiveGeofence.__constants['SPEED_LIMIT']

    @property
    def LANE_CLOSED(self):
        """Message constant 'LANE_CLOSED'."""
        return Metaclass_CheckActiveGeofence.__constants['LANE_CLOSED']

    @property
    def LANE_OPEN(self):
        """Message constant 'LANE_OPEN'."""
        return Metaclass_CheckActiveGeofence.__constants['LANE_OPEN']


class CheckActiveGeofence(metaclass=Metaclass_CheckActiveGeofence):
    """
    Message class 'CheckActiveGeofence'.

    Constants:
      SPEED_LIMIT
      LANE_CLOSED
      LANE_OPEN
    """

    __slots__ = [
        '_is_on_active_geofence',
        '_type',
        '_reason',
        '_value',
        '_distance_to_next_geofence',
        '_minimum_gap',
        '_advisory_speed',
    ]

    _fields_and_field_types = {
        'is_on_active_geofence': 'boolean',
        'type': 'uint8',
        'reason': 'string',
        'value': 'double',
        'distance_to_next_geofence': 'double',
        'minimum_gap': 'double',
        'advisory_speed': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_on_active_geofence = kwargs.get('is_on_active_geofence', bool())
        self.type = kwargs.get('type', int())
        self.reason = kwargs.get('reason', str())
        self.value = kwargs.get('value', float())
        self.distance_to_next_geofence = kwargs.get('distance_to_next_geofence', float())
        self.minimum_gap = kwargs.get('minimum_gap', float())
        self.advisory_speed = kwargs.get('advisory_speed', float())

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
        if self.is_on_active_geofence != other.is_on_active_geofence:
            return False
        if self.type != other.type:
            return False
        if self.reason != other.reason:
            return False
        if self.value != other.value:
            return False
        if self.distance_to_next_geofence != other.distance_to_next_geofence:
            return False
        if self.minimum_gap != other.minimum_gap:
            return False
        if self.advisory_speed != other.advisory_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def is_on_active_geofence(self):
        """Message field 'is_on_active_geofence'."""
        return self._is_on_active_geofence

    @is_on_active_geofence.setter
    def is_on_active_geofence(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_on_active_geofence' field must be of type 'bool'"
        self._is_on_active_geofence = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value

    @property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
        self._value = value

    @property
    def distance_to_next_geofence(self):
        """Message field 'distance_to_next_geofence'."""
        return self._distance_to_next_geofence

    @distance_to_next_geofence.setter
    def distance_to_next_geofence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_next_geofence' field must be of type 'float'"
        self._distance_to_next_geofence = value

    @property
    def minimum_gap(self):
        """Message field 'minimum_gap'."""
        return self._minimum_gap

    @minimum_gap.setter
    def minimum_gap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'minimum_gap' field must be of type 'float'"
        self._minimum_gap = value

    @property
    def advisory_speed(self):
        """Message field 'advisory_speed'."""
        return self._advisory_speed

    @advisory_speed.setter
    def advisory_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'advisory_speed' field must be of type 'float'"
        self._advisory_speed = value
