# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ConnectingLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConnectingLane(type):
    """Metaclass of message 'ConnectingLane'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LANE_UNAVAILABLE': 0,
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
                'j2735_v2x_msgs.msg.ConnectingLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__connecting_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__connecting_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__connecting_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__connecting_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__connecting_lane

            from j2735_v2x_msgs.msg import AllowedManeuvers
            if AllowedManeuvers.__class__._TYPE_SUPPORT is None:
                AllowedManeuvers.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LANE_UNAVAILABLE': cls.__constants['LANE_UNAVAILABLE'],
        }

    @property
    def LANE_UNAVAILABLE(self):
        """Message constant 'LANE_UNAVAILABLE'."""
        return Metaclass_ConnectingLane.__constants['LANE_UNAVAILABLE']


class ConnectingLane(metaclass=Metaclass_ConnectingLane):
    """
    Message class 'ConnectingLane'.

    Constants:
      LANE_UNAVAILABLE
    """

    __slots__ = [
        '_lane',
        '_maneuver',
        '_maneuver_exists',
    ]

    _fields_and_field_types = {
        'lane': 'uint16',
        'maneuver': 'j2735_v2x_msgs/AllowedManeuvers',
        'maneuver_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AllowedManeuvers'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane = kwargs.get('lane', int())
        from j2735_v2x_msgs.msg import AllowedManeuvers
        self.maneuver = kwargs.get('maneuver', AllowedManeuvers())
        self.maneuver_exists = kwargs.get('maneuver_exists', bool())

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
        if self.lane != other.lane:
            return False
        if self.maneuver != other.maneuver:
            return False
        if self.maneuver_exists != other.maneuver_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lane(self):
        """Message field 'lane'."""
        return self._lane

    @lane.setter
    def lane(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lane' field must be an unsigned integer in [0, 65535]"
        self._lane = value

    @property
    def maneuver(self):
        """Message field 'maneuver'."""
        return self._maneuver

    @maneuver.setter
    def maneuver(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AllowedManeuvers
            assert \
                isinstance(value, AllowedManeuvers), \
                "The 'maneuver' field must be a sub message of type 'AllowedManeuvers'"
        self._maneuver = value

    @property
    def maneuver_exists(self):
        """Message field 'maneuver_exists'."""
        return self._maneuver_exists

    @maneuver_exists.setter
    def maneuver_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'maneuver_exists' field must be of type 'bool'"
        self._maneuver_exists = value
