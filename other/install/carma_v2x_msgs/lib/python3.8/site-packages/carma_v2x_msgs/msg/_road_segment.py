# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/RoadSegment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoadSegment(type):
    """Metaclass of message 'RoadSegment'."""

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
            module = import_type_support('carma_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_v2x_msgs.msg.RoadSegment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__road_segment
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__road_segment
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__road_segment
            cls._TYPE_SUPPORT = module.type_support_msg__msg__road_segment
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__road_segment

            from carma_v2x_msgs.msg import GenericLane
            if GenericLane.__class__._TYPE_SUPPORT is None:
                GenericLane.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import RegulatorySpeedLimit
            if RegulatorySpeedLimit.__class__._TYPE_SUPPORT is None:
                RegulatorySpeedLimit.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import RoadSegmentReferenceID
            if RoadSegmentReferenceID.__class__._TYPE_SUPPORT is None:
                RoadSegmentReferenceID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoadSegment(metaclass=Metaclass_RoadSegment):
    """Message class 'RoadSegment'."""

    __slots__ = [
        '_name',
        '_name_exists',
        '_id',
        '_revision',
        '_ref_point',
        '_lane_width',
        '_lane_width_exists',
        '_speed_limits',
        '_speed_limits_exists',
        '_road_lane_set_list',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'name_exists': 'boolean',
        'id': 'j2735_v2x_msgs/RoadSegmentReferenceID',
        'revision': 'uint8',
        'ref_point': 'carma_v2x_msgs/Position3D',
        'lane_width': 'float',
        'lane_width_exists': 'boolean',
        'speed_limits': 'sequence<carma_v2x_msgs/RegulatorySpeedLimit>',
        'speed_limits_exists': 'boolean',
        'road_lane_set_list': 'sequence<carma_v2x_msgs/GenericLane>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'RoadSegmentReferenceID'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'Position3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'RegulatorySpeedLimit')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'GenericLane')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.name_exists = kwargs.get('name_exists', bool())
        from j2735_v2x_msgs.msg import RoadSegmentReferenceID
        self.id = kwargs.get('id', RoadSegmentReferenceID())
        self.revision = kwargs.get('revision', int())
        from carma_v2x_msgs.msg import Position3D
        self.ref_point = kwargs.get('ref_point', Position3D())
        self.lane_width = kwargs.get('lane_width', float())
        self.lane_width_exists = kwargs.get('lane_width_exists', bool())
        self.speed_limits = kwargs.get('speed_limits', [])
        self.speed_limits_exists = kwargs.get('speed_limits_exists', bool())
        self.road_lane_set_list = kwargs.get('road_lane_set_list', [])

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
        if self.name != other.name:
            return False
        if self.name_exists != other.name_exists:
            return False
        if self.id != other.id:
            return False
        if self.revision != other.revision:
            return False
        if self.ref_point != other.ref_point:
            return False
        if self.lane_width != other.lane_width:
            return False
        if self.lane_width_exists != other.lane_width_exists:
            return False
        if self.speed_limits != other.speed_limits:
            return False
        if self.speed_limits_exists != other.speed_limits_exists:
            return False
        if self.road_lane_set_list != other.road_lane_set_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def name_exists(self):
        """Message field 'name_exists'."""
        return self._name_exists

    @name_exists.setter
    def name_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'name_exists' field must be of type 'bool'"
        self._name_exists = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from j2735_v2x_msgs.msg import RoadSegmentReferenceID
            assert \
                isinstance(value, RoadSegmentReferenceID), \
                "The 'id' field must be a sub message of type 'RoadSegmentReferenceID'"
        self._id = value

    @property
    def revision(self):
        """Message field 'revision'."""
        return self._revision

    @revision.setter
    def revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'revision' field must be an unsigned integer in [0, 255]"
        self._revision = value

    @property
    def ref_point(self):
        """Message field 'ref_point'."""
        return self._ref_point

    @ref_point.setter
    def ref_point(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import Position3D
            assert \
                isinstance(value, Position3D), \
                "The 'ref_point' field must be a sub message of type 'Position3D'"
        self._ref_point = value

    @property
    def lane_width(self):
        """Message field 'lane_width'."""
        return self._lane_width

    @lane_width.setter
    def lane_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_width' field must be of type 'float'"
        self._lane_width = value

    @property
    def lane_width_exists(self):
        """Message field 'lane_width_exists'."""
        return self._lane_width_exists

    @lane_width_exists.setter
    def lane_width_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lane_width_exists' field must be of type 'bool'"
        self._lane_width_exists = value

    @property
    def speed_limits(self):
        """Message field 'speed_limits'."""
        return self._speed_limits

    @speed_limits.setter
    def speed_limits(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import RegulatorySpeedLimit
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, RegulatorySpeedLimit) for v in value) and
                 True), \
                "The 'speed_limits' field must be a set or sequence and each value of type 'RegulatorySpeedLimit'"
        self._speed_limits = value

    @property
    def speed_limits_exists(self):
        """Message field 'speed_limits_exists'."""
        return self._speed_limits_exists

    @speed_limits_exists.setter
    def speed_limits_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'speed_limits_exists' field must be of type 'bool'"
        self._speed_limits_exists = value

    @property
    def road_lane_set_list(self):
        """Message field 'road_lane_set_list'."""
        return self._road_lane_set_list

    @road_lane_set_list.setter
    def road_lane_set_list(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import GenericLane
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, GenericLane) for v in value) and
                 True), \
                "The 'road_lane_set_list' field must be a set or sequence and each value of type 'GenericLane'"
        self._road_lane_set_list = value
