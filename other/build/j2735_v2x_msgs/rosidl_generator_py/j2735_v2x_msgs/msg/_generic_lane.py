# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/GenericLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenericLane(type):
    """Metaclass of message 'GenericLane'."""

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
                'j2735_v2x_msgs.msg.GenericLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__generic_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__generic_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__generic_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__generic_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__generic_lane

            from j2735_v2x_msgs.msg import AllowedManeuvers
            if AllowedManeuvers.__class__._TYPE_SUPPORT is None:
                AllowedManeuvers.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ConnectsToList
            if ConnectsToList.__class__._TYPE_SUPPORT is None:
                ConnectsToList.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LaneAttributes
            if LaneAttributes.__class__._TYPE_SUPPORT is None:
                LaneAttributes.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeListXY
            if NodeListXY.__class__._TYPE_SUPPORT is None:
                NodeListXY.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import OverlayLaneList
            if OverlayLaneList.__class__._TYPE_SUPPORT is None:
                OverlayLaneList.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenericLane(metaclass=Metaclass_GenericLane):
    """Message class 'GenericLane'."""

    __slots__ = [
        '_lane_id',
        '_name',
        '_name_exists',
        '_ingress_approach',
        '_ingress_approach_exists',
        '_egress_approach',
        '_egress_approach_exists',
        '_lane_attributes',
        '_maneuvers',
        '_maneuvers_exists',
        '_node_list',
        '_connects_to',
        '_connects_to_exists',
        '_overlay_lane_list',
        '_overlay_lane_list_exists',
    ]

    _fields_and_field_types = {
        'lane_id': 'uint8',
        'name': 'string',
        'name_exists': 'boolean',
        'ingress_approach': 'uint8',
        'ingress_approach_exists': 'boolean',
        'egress_approach': 'uint8',
        'egress_approach_exists': 'boolean',
        'lane_attributes': 'j2735_v2x_msgs/LaneAttributes',
        'maneuvers': 'j2735_v2x_msgs/AllowedManeuvers',
        'maneuvers_exists': 'boolean',
        'node_list': 'j2735_v2x_msgs/NodeListXY',
        'connects_to': 'j2735_v2x_msgs/ConnectsToList',
        'connects_to_exists': 'boolean',
        'overlay_lane_list': 'j2735_v2x_msgs/OverlayLaneList',
        'overlay_lane_list_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneAttributes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AllowedManeuvers'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeListXY'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ConnectsToList'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'OverlayLaneList'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane_id = kwargs.get('lane_id', int())
        self.name = kwargs.get('name', str())
        self.name_exists = kwargs.get('name_exists', bool())
        self.ingress_approach = kwargs.get('ingress_approach', int())
        self.ingress_approach_exists = kwargs.get('ingress_approach_exists', bool())
        self.egress_approach = kwargs.get('egress_approach', int())
        self.egress_approach_exists = kwargs.get('egress_approach_exists', bool())
        from j2735_v2x_msgs.msg import LaneAttributes
        self.lane_attributes = kwargs.get('lane_attributes', LaneAttributes())
        from j2735_v2x_msgs.msg import AllowedManeuvers
        self.maneuvers = kwargs.get('maneuvers', AllowedManeuvers())
        self.maneuvers_exists = kwargs.get('maneuvers_exists', bool())
        from j2735_v2x_msgs.msg import NodeListXY
        self.node_list = kwargs.get('node_list', NodeListXY())
        from j2735_v2x_msgs.msg import ConnectsToList
        self.connects_to = kwargs.get('connects_to', ConnectsToList())
        self.connects_to_exists = kwargs.get('connects_to_exists', bool())
        from j2735_v2x_msgs.msg import OverlayLaneList
        self.overlay_lane_list = kwargs.get('overlay_lane_list', OverlayLaneList())
        self.overlay_lane_list_exists = kwargs.get('overlay_lane_list_exists', bool())

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
        if self.lane_id != other.lane_id:
            return False
        if self.name != other.name:
            return False
        if self.name_exists != other.name_exists:
            return False
        if self.ingress_approach != other.ingress_approach:
            return False
        if self.ingress_approach_exists != other.ingress_approach_exists:
            return False
        if self.egress_approach != other.egress_approach:
            return False
        if self.egress_approach_exists != other.egress_approach_exists:
            return False
        if self.lane_attributes != other.lane_attributes:
            return False
        if self.maneuvers != other.maneuvers:
            return False
        if self.maneuvers_exists != other.maneuvers_exists:
            return False
        if self.node_list != other.node_list:
            return False
        if self.connects_to != other.connects_to:
            return False
        if self.connects_to_exists != other.connects_to_exists:
            return False
        if self.overlay_lane_list != other.overlay_lane_list:
            return False
        if self.overlay_lane_list_exists != other.overlay_lane_list_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= 0 and value < 256, \
                "The 'lane_id' field must be an unsigned integer in [0, 255]"
        self._lane_id = value

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

    @property
    def ingress_approach(self):
        """Message field 'ingress_approach'."""
        return self._ingress_approach

    @ingress_approach.setter
    def ingress_approach(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ingress_approach' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ingress_approach' field must be an unsigned integer in [0, 255]"
        self._ingress_approach = value

    @property
    def ingress_approach_exists(self):
        """Message field 'ingress_approach_exists'."""
        return self._ingress_approach_exists

    @ingress_approach_exists.setter
    def ingress_approach_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ingress_approach_exists' field must be of type 'bool'"
        self._ingress_approach_exists = value

    @property
    def egress_approach(self):
        """Message field 'egress_approach'."""
        return self._egress_approach

    @egress_approach.setter
    def egress_approach(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'egress_approach' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'egress_approach' field must be an unsigned integer in [0, 255]"
        self._egress_approach = value

    @property
    def egress_approach_exists(self):
        """Message field 'egress_approach_exists'."""
        return self._egress_approach_exists

    @egress_approach_exists.setter
    def egress_approach_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'egress_approach_exists' field must be of type 'bool'"
        self._egress_approach_exists = value

    @property
    def lane_attributes(self):
        """Message field 'lane_attributes'."""
        return self._lane_attributes

    @lane_attributes.setter
    def lane_attributes(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneAttributes
            assert \
                isinstance(value, LaneAttributes), \
                "The 'lane_attributes' field must be a sub message of type 'LaneAttributes'"
        self._lane_attributes = value

    @property
    def maneuvers(self):
        """Message field 'maneuvers'."""
        return self._maneuvers

    @maneuvers.setter
    def maneuvers(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AllowedManeuvers
            assert \
                isinstance(value, AllowedManeuvers), \
                "The 'maneuvers' field must be a sub message of type 'AllowedManeuvers'"
        self._maneuvers = value

    @property
    def maneuvers_exists(self):
        """Message field 'maneuvers_exists'."""
        return self._maneuvers_exists

    @maneuvers_exists.setter
    def maneuvers_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'maneuvers_exists' field must be of type 'bool'"
        self._maneuvers_exists = value

    @property
    def node_list(self):
        """Message field 'node_list'."""
        return self._node_list

    @node_list.setter
    def node_list(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeListXY
            assert \
                isinstance(value, NodeListXY), \
                "The 'node_list' field must be a sub message of type 'NodeListXY'"
        self._node_list = value

    @property
    def connects_to(self):
        """Message field 'connects_to'."""
        return self._connects_to

    @connects_to.setter
    def connects_to(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ConnectsToList
            assert \
                isinstance(value, ConnectsToList), \
                "The 'connects_to' field must be a sub message of type 'ConnectsToList'"
        self._connects_to = value

    @property
    def connects_to_exists(self):
        """Message field 'connects_to_exists'."""
        return self._connects_to_exists

    @connects_to_exists.setter
    def connects_to_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connects_to_exists' field must be of type 'bool'"
        self._connects_to_exists = value

    @property
    def overlay_lane_list(self):
        """Message field 'overlay_lane_list'."""
        return self._overlay_lane_list

    @overlay_lane_list.setter
    def overlay_lane_list(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import OverlayLaneList
            assert \
                isinstance(value, OverlayLaneList), \
                "The 'overlay_lane_list' field must be a sub message of type 'OverlayLaneList'"
        self._overlay_lane_list = value

    @property
    def overlay_lane_list_exists(self):
        """Message field 'overlay_lane_list_exists'."""
        return self._overlay_lane_list_exists

    @overlay_lane_list_exists.setter
    def overlay_lane_list_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'overlay_lane_list_exists' field must be of type 'bool'"
        self._overlay_lane_list_exists = value
