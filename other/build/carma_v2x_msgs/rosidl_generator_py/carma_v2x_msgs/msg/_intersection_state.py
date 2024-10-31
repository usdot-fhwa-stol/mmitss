# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/IntersectionState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'lane_id_list'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IntersectionState(type):
    """Metaclass of message 'IntersectionState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MOY_INVALID': 527040,
        'TIME_STAMP_UNAVAILABLE': 65.535,
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
                'carma_v2x_msgs.msg.IntersectionState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__intersection_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__intersection_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__intersection_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__intersection_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__intersection_state

            from carma_v2x_msgs.msg import MovementState
            if MovementState.__class__._TYPE_SUPPORT is None:
                MovementState.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ConnectionManeuverAssist
            if ConnectionManeuverAssist.__class__._TYPE_SUPPORT is None:
                ConnectionManeuverAssist.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import IntersectionReferenceID
            if IntersectionReferenceID.__class__._TYPE_SUPPORT is None:
                IntersectionReferenceID.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import IntersectionStatusObject
            if IntersectionStatusObject.__class__._TYPE_SUPPORT is None:
                IntersectionStatusObject.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MOY_INVALID': cls.__constants['MOY_INVALID'],
            'TIME_STAMP_UNAVAILABLE': cls.__constants['TIME_STAMP_UNAVAILABLE'],
        }

    @property
    def MOY_INVALID(self):
        """Message constant 'MOY_INVALID'."""
        return Metaclass_IntersectionState.__constants['MOY_INVALID']

    @property
    def TIME_STAMP_UNAVAILABLE(self):
        """Message constant 'TIME_STAMP_UNAVAILABLE'."""
        return Metaclass_IntersectionState.__constants['TIME_STAMP_UNAVAILABLE']


class IntersectionState(metaclass=Metaclass_IntersectionState):
    """
    Message class 'IntersectionState'.

    Constants:
      MOY_INVALID
      TIME_STAMP_UNAVAILABLE
    """

    __slots__ = [
        '_name',
        '_name_exists',
        '_id',
        '_revision',
        '_status',
        '_moy',
        '_moy_exists',
        '_time_stamp',
        '_time_stamp_exists',
        '_lane_id_list',
        '_enabled_lanes_exists',
        '_movement_list',
        '_connection_maneuver_assist_list',
        '_maneuever_assist_list_exists',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'name_exists': 'boolean',
        'id': 'j2735_v2x_msgs/IntersectionReferenceID',
        'revision': 'uint8',
        'status': 'j2735_v2x_msgs/IntersectionStatusObject',
        'moy': 'uint32',
        'moy_exists': 'boolean',
        'time_stamp': 'float',
        'time_stamp_exists': 'boolean',
        'lane_id_list': 'sequence<uint16>',
        'enabled_lanes_exists': 'boolean',
        'movement_list': 'sequence<carma_v2x_msgs/MovementState>',
        'connection_maneuver_assist_list': 'sequence<j2735_v2x_msgs/ConnectionManeuverAssist>',
        'maneuever_assist_list_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'IntersectionReferenceID'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'IntersectionStatusObject'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'MovementState')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ConnectionManeuverAssist')),  # noqa: E501
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
        from j2735_v2x_msgs.msg import IntersectionStatusObject
        self.status = kwargs.get('status', IntersectionStatusObject())
        self.moy = kwargs.get('moy', int())
        self.moy_exists = kwargs.get('moy_exists', bool())
        self.time_stamp = kwargs.get('time_stamp', float())
        self.time_stamp_exists = kwargs.get('time_stamp_exists', bool())
        self.lane_id_list = array.array('H', kwargs.get('lane_id_list', []))
        self.enabled_lanes_exists = kwargs.get('enabled_lanes_exists', bool())
        self.movement_list = kwargs.get('movement_list', [])
        self.connection_maneuver_assist_list = kwargs.get('connection_maneuver_assist_list', [])
        self.maneuever_assist_list_exists = kwargs.get('maneuever_assist_list_exists', bool())

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
        if self.status != other.status:
            return False
        if self.moy != other.moy:
            return False
        if self.moy_exists != other.moy_exists:
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.time_stamp_exists != other.time_stamp_exists:
            return False
        if self.lane_id_list != other.lane_id_list:
            return False
        if self.enabled_lanes_exists != other.enabled_lanes_exists:
            return False
        if self.movement_list != other.movement_list:
            return False
        if self.connection_maneuver_assist_list != other.connection_maneuver_assist_list:
            return False
        if self.maneuever_assist_list_exists != other.maneuever_assist_list_exists:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import IntersectionStatusObject
            assert \
                isinstance(value, IntersectionStatusObject), \
                "The 'status' field must be a sub message of type 'IntersectionStatusObject'"
        self._status = value

    @property
    def moy(self):
        """Message field 'moy'."""
        return self._moy

    @moy.setter
    def moy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moy' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'moy' field must be an unsigned integer in [0, 4294967295]"
        self._moy = value

    @property
    def moy_exists(self):
        """Message field 'moy_exists'."""
        return self._moy_exists

    @moy_exists.setter
    def moy_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'moy_exists' field must be of type 'bool'"
        self._moy_exists = value

    @property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_stamp' field must be of type 'float'"
        self._time_stamp = value

    @property
    def time_stamp_exists(self):
        """Message field 'time_stamp_exists'."""
        return self._time_stamp_exists

    @time_stamp_exists.setter
    def time_stamp_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'time_stamp_exists' field must be of type 'bool'"
        self._time_stamp_exists = value

    @property
    def lane_id_list(self):
        """Message field 'lane_id_list'."""
        return self._lane_id_list

    @lane_id_list.setter
    def lane_id_list(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'lane_id_list' array.array() must have the type code of 'H'"
            self._lane_id_list = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'lane_id_list' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._lane_id_list = array.array('H', value)

    @property
    def enabled_lanes_exists(self):
        """Message field 'enabled_lanes_exists'."""
        return self._enabled_lanes_exists

    @enabled_lanes_exists.setter
    def enabled_lanes_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled_lanes_exists' field must be of type 'bool'"
        self._enabled_lanes_exists = value

    @property
    def movement_list(self):
        """Message field 'movement_list'."""
        return self._movement_list

    @movement_list.setter
    def movement_list(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import MovementState
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
                 all(isinstance(v, MovementState) for v in value) and
                 True), \
                "The 'movement_list' field must be a set or sequence and each value of type 'MovementState'"
        self._movement_list = value

    @property
    def connection_maneuver_assist_list(self):
        """Message field 'connection_maneuver_assist_list'."""
        return self._connection_maneuver_assist_list

    @connection_maneuver_assist_list.setter
    def connection_maneuver_assist_list(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ConnectionManeuverAssist
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
                 all(isinstance(v, ConnectionManeuverAssist) for v in value) and
                 True), \
                "The 'connection_maneuver_assist_list' field must be a set or sequence and each value of type 'ConnectionManeuverAssist'"
        self._connection_maneuver_assist_list = value

    @property
    def maneuever_assist_list_exists(self):
        """Message field 'maneuever_assist_list_exists'."""
        return self._maneuever_assist_list_exists

    @maneuever_assist_list_exists.setter
    def maneuever_assist_list_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'maneuever_assist_list_exists' field must be of type 'bool'"
        self._maneuever_assist_list_exists = value
