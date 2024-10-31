# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/PlatooningInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlatooningInfo(type):
    """Metaclass of message 'PlatooningInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DISABLED': 0,
        'SEARCHING': 1,
        'CONNECTING_TO_NEW_FOLLOWER': 2,
        'CONNECTING_TO_NEW_LEADER': 3,
        'LEADING': 4,
        'FOLLOWING': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_planning_msgs.msg.PlatooningInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__platooning_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__platooning_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__platooning_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__platooning_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__platooning_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DISABLED': cls.__constants['DISABLED'],
            'SEARCHING': cls.__constants['SEARCHING'],
            'CONNECTING_TO_NEW_FOLLOWER': cls.__constants['CONNECTING_TO_NEW_FOLLOWER'],
            'CONNECTING_TO_NEW_LEADER': cls.__constants['CONNECTING_TO_NEW_LEADER'],
            'LEADING': cls.__constants['LEADING'],
            'FOLLOWING': cls.__constants['FOLLOWING'],
        }

    @property
    def DISABLED(self):
        """Message constant 'DISABLED'."""
        return Metaclass_PlatooningInfo.__constants['DISABLED']

    @property
    def SEARCHING(self):
        """Message constant 'SEARCHING'."""
        return Metaclass_PlatooningInfo.__constants['SEARCHING']

    @property
    def CONNECTING_TO_NEW_FOLLOWER(self):
        """Message constant 'CONNECTING_TO_NEW_FOLLOWER'."""
        return Metaclass_PlatooningInfo.__constants['CONNECTING_TO_NEW_FOLLOWER']

    @property
    def CONNECTING_TO_NEW_LEADER(self):
        """Message constant 'CONNECTING_TO_NEW_LEADER'."""
        return Metaclass_PlatooningInfo.__constants['CONNECTING_TO_NEW_LEADER']

    @property
    def LEADING(self):
        """Message constant 'LEADING'."""
        return Metaclass_PlatooningInfo.__constants['LEADING']

    @property
    def FOLLOWING(self):
        """Message constant 'FOLLOWING'."""
        return Metaclass_PlatooningInfo.__constants['FOLLOWING']


class PlatooningInfo(metaclass=Metaclass_PlatooningInfo):
    """
    Message class 'PlatooningInfo'.

    Constants:
      DISABLED
      SEARCHING
      CONNECTING_TO_NEW_FOLLOWER
      CONNECTING_TO_NEW_LEADER
      LEADING
      FOLLOWING
    """

    __slots__ = [
        '_state',
        '_platoon_id',
        '_size',
        '_size_limit',
        '_leader_id',
        '_leader_downtrack_distance',
        '_leader_cmd_speed',
        '_host_platoon_position',
        '_host_cmd_speed',
        '_desired_gap',
        '_actual_gap',
        '_current_predecessor_time_headway_sum',
        '_predecessor_speed',
        '_predecessor_position',
        '_is_create_gap',
        '_create_gap_adjuster',
    ]

    _fields_and_field_types = {
        'state': 'uint8',
        'platoon_id': 'string',
        'size': 'uint8',
        'size_limit': 'uint8',
        'leader_id': 'string',
        'leader_downtrack_distance': 'float',
        'leader_cmd_speed': 'float',
        'host_platoon_position': 'uint8',
        'host_cmd_speed': 'float',
        'desired_gap': 'float',
        'actual_gap': 'float',
        'current_predecessor_time_headway_sum': 'float',
        'predecessor_speed': 'float',
        'predecessor_position': 'float',
        'is_create_gap': 'boolean',
        'create_gap_adjuster': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())
        self.platoon_id = kwargs.get('platoon_id', str())
        self.size = kwargs.get('size', int())
        self.size_limit = kwargs.get('size_limit', int())
        self.leader_id = kwargs.get('leader_id', str())
        self.leader_downtrack_distance = kwargs.get('leader_downtrack_distance', float())
        self.leader_cmd_speed = kwargs.get('leader_cmd_speed', float())
        self.host_platoon_position = kwargs.get('host_platoon_position', int())
        self.host_cmd_speed = kwargs.get('host_cmd_speed', float())
        self.desired_gap = kwargs.get('desired_gap', float())
        self.actual_gap = kwargs.get('actual_gap', float())
        self.current_predecessor_time_headway_sum = kwargs.get('current_predecessor_time_headway_sum', float())
        self.predecessor_speed = kwargs.get('predecessor_speed', float())
        self.predecessor_position = kwargs.get('predecessor_position', float())
        self.is_create_gap = kwargs.get('is_create_gap', bool())
        self.create_gap_adjuster = kwargs.get('create_gap_adjuster', float())

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
        if self.state != other.state:
            return False
        if self.platoon_id != other.platoon_id:
            return False
        if self.size != other.size:
            return False
        if self.size_limit != other.size_limit:
            return False
        if self.leader_id != other.leader_id:
            return False
        if self.leader_downtrack_distance != other.leader_downtrack_distance:
            return False
        if self.leader_cmd_speed != other.leader_cmd_speed:
            return False
        if self.host_platoon_position != other.host_platoon_position:
            return False
        if self.host_cmd_speed != other.host_cmd_speed:
            return False
        if self.desired_gap != other.desired_gap:
            return False
        if self.actual_gap != other.actual_gap:
            return False
        if self.current_predecessor_time_headway_sum != other.current_predecessor_time_headway_sum:
            return False
        if self.predecessor_speed != other.predecessor_speed:
            return False
        if self.predecessor_position != other.predecessor_position:
            return False
        if self.is_create_gap != other.is_create_gap:
            return False
        if self.create_gap_adjuster != other.create_gap_adjuster:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def platoon_id(self):
        """Message field 'platoon_id'."""
        return self._platoon_id

    @platoon_id.setter
    def platoon_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'platoon_id' field must be of type 'str'"
        self._platoon_id = value

    @property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'size' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'size' field must be an unsigned integer in [0, 255]"
        self._size = value

    @property
    def size_limit(self):
        """Message field 'size_limit'."""
        return self._size_limit

    @size_limit.setter
    def size_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'size_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'size_limit' field must be an unsigned integer in [0, 255]"
        self._size_limit = value

    @property
    def leader_id(self):
        """Message field 'leader_id'."""
        return self._leader_id

    @leader_id.setter
    def leader_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'leader_id' field must be of type 'str'"
        self._leader_id = value

    @property
    def leader_downtrack_distance(self):
        """Message field 'leader_downtrack_distance'."""
        return self._leader_downtrack_distance

    @leader_downtrack_distance.setter
    def leader_downtrack_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leader_downtrack_distance' field must be of type 'float'"
        self._leader_downtrack_distance = value

    @property
    def leader_cmd_speed(self):
        """Message field 'leader_cmd_speed'."""
        return self._leader_cmd_speed

    @leader_cmd_speed.setter
    def leader_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leader_cmd_speed' field must be of type 'float'"
        self._leader_cmd_speed = value

    @property
    def host_platoon_position(self):
        """Message field 'host_platoon_position'."""
        return self._host_platoon_position

    @host_platoon_position.setter
    def host_platoon_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'host_platoon_position' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'host_platoon_position' field must be an unsigned integer in [0, 255]"
        self._host_platoon_position = value

    @property
    def host_cmd_speed(self):
        """Message field 'host_cmd_speed'."""
        return self._host_cmd_speed

    @host_cmd_speed.setter
    def host_cmd_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'host_cmd_speed' field must be of type 'float'"
        self._host_cmd_speed = value

    @property
    def desired_gap(self):
        """Message field 'desired_gap'."""
        return self._desired_gap

    @desired_gap.setter
    def desired_gap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_gap' field must be of type 'float'"
        self._desired_gap = value

    @property
    def actual_gap(self):
        """Message field 'actual_gap'."""
        return self._actual_gap

    @actual_gap.setter
    def actual_gap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actual_gap' field must be of type 'float'"
        self._actual_gap = value

    @property
    def current_predecessor_time_headway_sum(self):
        """Message field 'current_predecessor_time_headway_sum'."""
        return self._current_predecessor_time_headway_sum

    @current_predecessor_time_headway_sum.setter
    def current_predecessor_time_headway_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_predecessor_time_headway_sum' field must be of type 'float'"
        self._current_predecessor_time_headway_sum = value

    @property
    def predecessor_speed(self):
        """Message field 'predecessor_speed'."""
        return self._predecessor_speed

    @predecessor_speed.setter
    def predecessor_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'predecessor_speed' field must be of type 'float'"
        self._predecessor_speed = value

    @property
    def predecessor_position(self):
        """Message field 'predecessor_position'."""
        return self._predecessor_position

    @predecessor_position.setter
    def predecessor_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'predecessor_position' field must be of type 'float'"
        self._predecessor_position = value

    @property
    def is_create_gap(self):
        """Message field 'is_create_gap'."""
        return self._is_create_gap

    @is_create_gap.setter
    def is_create_gap(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_create_gap' field must be of type 'bool'"
        self._is_create_gap = value

    @property
    def create_gap_adjuster(self):
        """Message field 'create_gap_adjuster'."""
        return self._create_gap_adjuster

    @create_gap_adjuster.setter
    def create_gap_adjuster(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'create_gap_adjuster' field must be of type 'float'"
        self._create_gap_adjuster = value
