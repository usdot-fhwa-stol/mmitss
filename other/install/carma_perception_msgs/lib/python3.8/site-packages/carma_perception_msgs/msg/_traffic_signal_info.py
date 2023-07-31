# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_perception_msgs:msg/TrafficSignalInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficSignalInfo(type):
    """Metaclass of message 'TrafficSignalInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNLIT': 0,
        'GREEN': 1,
        'YELLOW': 2,
        'RED': 3,
        'FLASHING_GREEN': 4,
        'FLASHING_YELLOW': 5,
        'FLASHING_RED': 6,
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
                'carma_perception_msgs.msg.TrafficSignalInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_signal_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_signal_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_signal_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_signal_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_signal_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNLIT': cls.__constants['UNLIT'],
            'GREEN': cls.__constants['GREEN'],
            'YELLOW': cls.__constants['YELLOW'],
            'RED': cls.__constants['RED'],
            'FLASHING_GREEN': cls.__constants['FLASHING_GREEN'],
            'FLASHING_YELLOW': cls.__constants['FLASHING_YELLOW'],
            'FLASHING_RED': cls.__constants['FLASHING_RED'],
        }

    @property
    def UNLIT(self):
        """Message constant 'UNLIT'."""
        return Metaclass_TrafficSignalInfo.__constants['UNLIT']

    @property
    def GREEN(self):
        """Message constant 'GREEN'."""
        return Metaclass_TrafficSignalInfo.__constants['GREEN']

    @property
    def YELLOW(self):
        """Message constant 'YELLOW'."""
        return Metaclass_TrafficSignalInfo.__constants['YELLOW']

    @property
    def RED(self):
        """Message constant 'RED'."""
        return Metaclass_TrafficSignalInfo.__constants['RED']

    @property
    def FLASHING_GREEN(self):
        """Message constant 'FLASHING_GREEN'."""
        return Metaclass_TrafficSignalInfo.__constants['FLASHING_GREEN']

    @property
    def FLASHING_YELLOW(self):
        """Message constant 'FLASHING_YELLOW'."""
        return Metaclass_TrafficSignalInfo.__constants['FLASHING_YELLOW']

    @property
    def FLASHING_RED(self):
        """Message constant 'FLASHING_RED'."""
        return Metaclass_TrafficSignalInfo.__constants['FLASHING_RED']


class TrafficSignalInfo(metaclass=Metaclass_TrafficSignalInfo):
    """
    Message class 'TrafficSignalInfo'.

    Constants:
      UNLIT
      GREEN
      YELLOW
      RED
      FLASHING_GREEN
      FLASHING_YELLOW
      FLASHING_RED
    """

    __slots__ = [
        '_intersection_id',
        '_state',
        '_remaining_time',
        '_lane_id',
        '_remaining_distance',
    ]

    _fields_and_field_types = {
        'intersection_id': 'uint16',
        'state': 'uint8',
        'remaining_time': 'uint16',
        'lane_id': 'uint16',
        'remaining_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.intersection_id = kwargs.get('intersection_id', int())
        self.state = kwargs.get('state', int())
        self.remaining_time = kwargs.get('remaining_time', int())
        self.lane_id = kwargs.get('lane_id', int())
        self.remaining_distance = kwargs.get('remaining_distance', float())

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
        if self.intersection_id != other.intersection_id:
            return False
        if self.state != other.state:
            return False
        if self.remaining_time != other.remaining_time:
            return False
        if self.lane_id != other.lane_id:
            return False
        if self.remaining_distance != other.remaining_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def intersection_id(self):
        """Message field 'intersection_id'."""
        return self._intersection_id

    @intersection_id.setter
    def intersection_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'intersection_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'intersection_id' field must be an unsigned integer in [0, 65535]"
        self._intersection_id = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @property
    def remaining_time(self):
        """Message field 'remaining_time'."""
        return self._remaining_time

    @remaining_time.setter
    def remaining_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remaining_time' field must be an unsigned integer in [0, 65535]"
        self._remaining_time = value

    @property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lane_id' field must be an unsigned integer in [0, 65535]"
        self._lane_id = value

    @property
    def remaining_distance(self):
        """Message field 'remaining_distance'."""
        return self._remaining_distance

    @remaining_distance.setter
    def remaining_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_distance' field must be of type 'float'"
        self._remaining_distance = value
