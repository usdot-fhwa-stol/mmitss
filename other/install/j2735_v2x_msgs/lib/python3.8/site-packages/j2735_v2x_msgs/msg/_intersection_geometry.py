# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/IntersectionGeometry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IntersectionGeometry(type):
    """Metaclass of message 'IntersectionGeometry'."""

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
                'j2735_v2x_msgs.msg.IntersectionGeometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__intersection_geometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__intersection_geometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__intersection_geometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__intersection_geometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__intersection_geometry

            from j2735_v2x_msgs.msg import IntersectionReferenceID
            if IntersectionReferenceID.__class__._TYPE_SUPPORT is None:
                IntersectionReferenceID.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LaneList
            if LaneList.__class__._TYPE_SUPPORT is None:
                LaneList.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PreemptPriorityList
            if PreemptPriorityList.__class__._TYPE_SUPPORT is None:
                PreemptPriorityList.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import SpeedLimitList
            if SpeedLimitList.__class__._TYPE_SUPPORT is None:
                SpeedLimitList.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IntersectionGeometry(metaclass=Metaclass_IntersectionGeometry):
    """Message class 'IntersectionGeometry'."""

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
        '_lane_set',
        '_preempt_priority_data',
        '_preempt_priority_data_exists',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'name_exists': 'boolean',
        'id': 'j2735_v2x_msgs/IntersectionReferenceID',
        'revision': 'uint8',
        'ref_point': 'j2735_v2x_msgs/Position3D',
        'lane_width': 'uint16',
        'lane_width_exists': 'boolean',
        'speed_limits': 'j2735_v2x_msgs/SpeedLimitList',
        'speed_limits_exists': 'boolean',
        'lane_set': 'j2735_v2x_msgs/LaneList',
        'preempt_priority_data': 'j2735_v2x_msgs/PreemptPriorityList',
        'preempt_priority_data_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'IntersectionReferenceID'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Position3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SpeedLimitList'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneList'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PreemptPriorityList'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.name_exists = kwargs.get('name_exists', bool())
        from j2735_v2x_msgs.msg import IntersectionReferenceID
        self.id = kwargs.get('id', IntersectionReferenceID())
        self.revision = kwargs.get('revision', int())
        from j2735_v2x_msgs.msg import Position3D
        self.ref_point = kwargs.get('ref_point', Position3D())
        self.lane_width = kwargs.get('lane_width', int())
        self.lane_width_exists = kwargs.get('lane_width_exists', bool())
        from j2735_v2x_msgs.msg import SpeedLimitList
        self.speed_limits = kwargs.get('speed_limits', SpeedLimitList())
        self.speed_limits_exists = kwargs.get('speed_limits_exists', bool())
        from j2735_v2x_msgs.msg import LaneList
        self.lane_set = kwargs.get('lane_set', LaneList())
        from j2735_v2x_msgs.msg import PreemptPriorityList
        self.preempt_priority_data = kwargs.get('preempt_priority_data', PreemptPriorityList())
        self.preempt_priority_data_exists = kwargs.get('preempt_priority_data_exists', bool())

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
        if self.lane_set != other.lane_set:
            return False
        if self.preempt_priority_data != other.preempt_priority_data:
            return False
        if self.preempt_priority_data_exists != other.preempt_priority_data_exists:
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
            from j2735_v2x_msgs.msg import IntersectionReferenceID
            assert \
                isinstance(value, IntersectionReferenceID), \
                "The 'id' field must be a sub message of type 'IntersectionReferenceID'"
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
            from j2735_v2x_msgs.msg import Position3D
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
                isinstance(value, int), \
                "The 'lane_width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lane_width' field must be an unsigned integer in [0, 65535]"
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
            from j2735_v2x_msgs.msg import SpeedLimitList
            assert \
                isinstance(value, SpeedLimitList), \
                "The 'speed_limits' field must be a sub message of type 'SpeedLimitList'"
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
    def lane_set(self):
        """Message field 'lane_set'."""
        return self._lane_set

    @lane_set.setter
    def lane_set(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneList
            assert \
                isinstance(value, LaneList), \
                "The 'lane_set' field must be a sub message of type 'LaneList'"
        self._lane_set = value

    @property
    def preempt_priority_data(self):
        """Message field 'preempt_priority_data'."""
        return self._preempt_priority_data

    @preempt_priority_data.setter
    def preempt_priority_data(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PreemptPriorityList
            assert \
                isinstance(value, PreemptPriorityList), \
                "The 'preempt_priority_data' field must be a sub message of type 'PreemptPriorityList'"
        self._preempt_priority_data = value

    @property
    def preempt_priority_data_exists(self):
        """Message field 'preempt_priority_data_exists'."""
        return self._preempt_priority_data_exists

    @preempt_priority_data_exists.setter
    def preempt_priority_data_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'preempt_priority_data_exists' field must be of type 'bool'"
        self._preempt_priority_data_exists = value
