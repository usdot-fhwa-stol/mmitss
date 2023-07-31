# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/Maneuver.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Maneuver(type):
    """Metaclass of message 'Maneuver'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LANE_FOLLOWING': 0,
        'LANE_CHANGE': 1,
        'INTERSECTION_TRANSIT_STRAIGHT': 2,
        'INTERSECTION_TRANSIT_LEFT_TURN': 3,
        'INTERSECTION_TRANSIT_RIGHT_TURN': 4,
        'STOP_AND_WAIT': 5,
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
                'carma_planning_msgs.msg.Maneuver')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__maneuver
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__maneuver
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__maneuver
            cls._TYPE_SUPPORT = module.type_support_msg__msg__maneuver
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__maneuver

            from carma_planning_msgs.msg import IntersectionTransitLeftTurnManeuver
            if IntersectionTransitLeftTurnManeuver.__class__._TYPE_SUPPORT is None:
                IntersectionTransitLeftTurnManeuver.__class__.__import_type_support__()

            from carma_planning_msgs.msg import IntersectionTransitRightTurnManeuver
            if IntersectionTransitRightTurnManeuver.__class__._TYPE_SUPPORT is None:
                IntersectionTransitRightTurnManeuver.__class__.__import_type_support__()

            from carma_planning_msgs.msg import IntersectionTransitStraightManeuver
            if IntersectionTransitStraightManeuver.__class__._TYPE_SUPPORT is None:
                IntersectionTransitStraightManeuver.__class__.__import_type_support__()

            from carma_planning_msgs.msg import LaneChangeManeuver
            if LaneChangeManeuver.__class__._TYPE_SUPPORT is None:
                LaneChangeManeuver.__class__.__import_type_support__()

            from carma_planning_msgs.msg import LaneFollowingManeuver
            if LaneFollowingManeuver.__class__._TYPE_SUPPORT is None:
                LaneFollowingManeuver.__class__.__import_type_support__()

            from carma_planning_msgs.msg import StopAndWaitManeuver
            if StopAndWaitManeuver.__class__._TYPE_SUPPORT is None:
                StopAndWaitManeuver.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LANE_FOLLOWING': cls.__constants['LANE_FOLLOWING'],
            'LANE_CHANGE': cls.__constants['LANE_CHANGE'],
            'INTERSECTION_TRANSIT_STRAIGHT': cls.__constants['INTERSECTION_TRANSIT_STRAIGHT'],
            'INTERSECTION_TRANSIT_LEFT_TURN': cls.__constants['INTERSECTION_TRANSIT_LEFT_TURN'],
            'INTERSECTION_TRANSIT_RIGHT_TURN': cls.__constants['INTERSECTION_TRANSIT_RIGHT_TURN'],
            'STOP_AND_WAIT': cls.__constants['STOP_AND_WAIT'],
        }

    @property
    def LANE_FOLLOWING(self):
        """Message constant 'LANE_FOLLOWING'."""
        return Metaclass_Maneuver.__constants['LANE_FOLLOWING']

    @property
    def LANE_CHANGE(self):
        """Message constant 'LANE_CHANGE'."""
        return Metaclass_Maneuver.__constants['LANE_CHANGE']

    @property
    def INTERSECTION_TRANSIT_STRAIGHT(self):
        """Message constant 'INTERSECTION_TRANSIT_STRAIGHT'."""
        return Metaclass_Maneuver.__constants['INTERSECTION_TRANSIT_STRAIGHT']

    @property
    def INTERSECTION_TRANSIT_LEFT_TURN(self):
        """Message constant 'INTERSECTION_TRANSIT_LEFT_TURN'."""
        return Metaclass_Maneuver.__constants['INTERSECTION_TRANSIT_LEFT_TURN']

    @property
    def INTERSECTION_TRANSIT_RIGHT_TURN(self):
        """Message constant 'INTERSECTION_TRANSIT_RIGHT_TURN'."""
        return Metaclass_Maneuver.__constants['INTERSECTION_TRANSIT_RIGHT_TURN']

    @property
    def STOP_AND_WAIT(self):
        """Message constant 'STOP_AND_WAIT'."""
        return Metaclass_Maneuver.__constants['STOP_AND_WAIT']


class Maneuver(metaclass=Metaclass_Maneuver):
    """
    Message class 'Maneuver'.

    Constants:
      LANE_FOLLOWING
      LANE_CHANGE
      INTERSECTION_TRANSIT_STRAIGHT
      INTERSECTION_TRANSIT_LEFT_TURN
      INTERSECTION_TRANSIT_RIGHT_TURN
      STOP_AND_WAIT
    """

    __slots__ = [
        '_type',
        '_lane_following_maneuver',
        '_lane_change_maneuver',
        '_intersection_transit_straight_maneuver',
        '_intersection_transit_left_turn_maneuver',
        '_intersection_transit_right_turn_maneuver',
        '_stop_and_wait_maneuver',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'lane_following_maneuver': 'carma_planning_msgs/LaneFollowingManeuver',
        'lane_change_maneuver': 'carma_planning_msgs/LaneChangeManeuver',
        'intersection_transit_straight_maneuver': 'carma_planning_msgs/IntersectionTransitStraightManeuver',
        'intersection_transit_left_turn_maneuver': 'carma_planning_msgs/IntersectionTransitLeftTurnManeuver',
        'intersection_transit_right_turn_maneuver': 'carma_planning_msgs/IntersectionTransitRightTurnManeuver',
        'stop_and_wait_maneuver': 'carma_planning_msgs/StopAndWaitManeuver',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'LaneFollowingManeuver'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'LaneChangeManeuver'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'IntersectionTransitStraightManeuver'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'IntersectionTransitLeftTurnManeuver'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'IntersectionTransitRightTurnManeuver'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'StopAndWaitManeuver'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        from carma_planning_msgs.msg import LaneFollowingManeuver
        self.lane_following_maneuver = kwargs.get('lane_following_maneuver', LaneFollowingManeuver())
        from carma_planning_msgs.msg import LaneChangeManeuver
        self.lane_change_maneuver = kwargs.get('lane_change_maneuver', LaneChangeManeuver())
        from carma_planning_msgs.msg import IntersectionTransitStraightManeuver
        self.intersection_transit_straight_maneuver = kwargs.get('intersection_transit_straight_maneuver', IntersectionTransitStraightManeuver())
        from carma_planning_msgs.msg import IntersectionTransitLeftTurnManeuver
        self.intersection_transit_left_turn_maneuver = kwargs.get('intersection_transit_left_turn_maneuver', IntersectionTransitLeftTurnManeuver())
        from carma_planning_msgs.msg import IntersectionTransitRightTurnManeuver
        self.intersection_transit_right_turn_maneuver = kwargs.get('intersection_transit_right_turn_maneuver', IntersectionTransitRightTurnManeuver())
        from carma_planning_msgs.msg import StopAndWaitManeuver
        self.stop_and_wait_maneuver = kwargs.get('stop_and_wait_maneuver', StopAndWaitManeuver())

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
        if self.type != other.type:
            return False
        if self.lane_following_maneuver != other.lane_following_maneuver:
            return False
        if self.lane_change_maneuver != other.lane_change_maneuver:
            return False
        if self.intersection_transit_straight_maneuver != other.intersection_transit_straight_maneuver:
            return False
        if self.intersection_transit_left_turn_maneuver != other.intersection_transit_left_turn_maneuver:
            return False
        if self.intersection_transit_right_turn_maneuver != other.intersection_transit_right_turn_maneuver:
            return False
        if self.stop_and_wait_maneuver != other.stop_and_wait_maneuver:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def lane_following_maneuver(self):
        """Message field 'lane_following_maneuver'."""
        return self._lane_following_maneuver

    @lane_following_maneuver.setter
    def lane_following_maneuver(self, value):
        if __debug__:
            from carma_planning_msgs.msg import LaneFollowingManeuver
            assert \
                isinstance(value, LaneFollowingManeuver), \
                "The 'lane_following_maneuver' field must be a sub message of type 'LaneFollowingManeuver'"
        self._lane_following_maneuver = value

    @property
    def lane_change_maneuver(self):
        """Message field 'lane_change_maneuver'."""
        return self._lane_change_maneuver

    @lane_change_maneuver.setter
    def lane_change_maneuver(self, value):
        if __debug__:
            from carma_planning_msgs.msg import LaneChangeManeuver
            assert \
                isinstance(value, LaneChangeManeuver), \
                "The 'lane_change_maneuver' field must be a sub message of type 'LaneChangeManeuver'"
        self._lane_change_maneuver = value

    @property
    def intersection_transit_straight_maneuver(self):
        """Message field 'intersection_transit_straight_maneuver'."""
        return self._intersection_transit_straight_maneuver

    @intersection_transit_straight_maneuver.setter
    def intersection_transit_straight_maneuver(self, value):
        if __debug__:
            from carma_planning_msgs.msg import IntersectionTransitStraightManeuver
            assert \
                isinstance(value, IntersectionTransitStraightManeuver), \
                "The 'intersection_transit_straight_maneuver' field must be a sub message of type 'IntersectionTransitStraightManeuver'"
        self._intersection_transit_straight_maneuver = value

    @property
    def intersection_transit_left_turn_maneuver(self):
        """Message field 'intersection_transit_left_turn_maneuver'."""
        return self._intersection_transit_left_turn_maneuver

    @intersection_transit_left_turn_maneuver.setter
    def intersection_transit_left_turn_maneuver(self, value):
        if __debug__:
            from carma_planning_msgs.msg import IntersectionTransitLeftTurnManeuver
            assert \
                isinstance(value, IntersectionTransitLeftTurnManeuver), \
                "The 'intersection_transit_left_turn_maneuver' field must be a sub message of type 'IntersectionTransitLeftTurnManeuver'"
        self._intersection_transit_left_turn_maneuver = value

    @property
    def intersection_transit_right_turn_maneuver(self):
        """Message field 'intersection_transit_right_turn_maneuver'."""
        return self._intersection_transit_right_turn_maneuver

    @intersection_transit_right_turn_maneuver.setter
    def intersection_transit_right_turn_maneuver(self, value):
        if __debug__:
            from carma_planning_msgs.msg import IntersectionTransitRightTurnManeuver
            assert \
                isinstance(value, IntersectionTransitRightTurnManeuver), \
                "The 'intersection_transit_right_turn_maneuver' field must be a sub message of type 'IntersectionTransitRightTurnManeuver'"
        self._intersection_transit_right_turn_maneuver = value

    @property
    def stop_and_wait_maneuver(self):
        """Message field 'stop_and_wait_maneuver'."""
        return self._stop_and_wait_maneuver

    @stop_and_wait_maneuver.setter
    def stop_and_wait_maneuver(self, value):
        if __debug__:
            from carma_planning_msgs.msg import StopAndWaitManeuver
            assert \
                isinstance(value, StopAndWaitManeuver), \
                "The 'stop_and_wait_maneuver' field must be a sub message of type 'StopAndWaitManeuver'"
        self._stop_and_wait_maneuver = value
