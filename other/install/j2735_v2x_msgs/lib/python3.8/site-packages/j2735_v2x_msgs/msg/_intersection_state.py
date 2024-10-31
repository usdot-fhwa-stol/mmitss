# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/IntersectionState.idl
# generated code does not contain a copyright notice


# Import statements for member types

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
        'TIME_STAMP_UNAVAILABLE': 65535,
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
                'j2735_v2x_msgs.msg.IntersectionState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__intersection_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__intersection_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__intersection_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__intersection_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__intersection_state

            from j2735_v2x_msgs.msg import EnabledLaneList
            if EnabledLaneList.__class__._TYPE_SUPPORT is None:
                EnabledLaneList.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import IntersectionReferenceID
            if IntersectionReferenceID.__class__._TYPE_SUPPORT is None:
                IntersectionReferenceID.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import IntersectionStatusObject
            if IntersectionStatusObject.__class__._TYPE_SUPPORT is None:
                IntersectionStatusObject.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ManeuverAssistList
            if ManeuverAssistList.__class__._TYPE_SUPPORT is None:
                ManeuverAssistList.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import MovementList
            if MovementList.__class__._TYPE_SUPPORT is None:
                MovementList.__class__.__import_type_support__()

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
        '_enabled_lanes',
        '_enabled_lanes_exists',
        '_states',
        '_maneuever_assist_list',
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
        'time_stamp': 'uint32',
        'time_stamp_exists': 'boolean',
        'enabled_lanes': 'j2735_v2x_msgs/EnabledLaneList',
        'enabled_lanes_exists': 'boolean',
        'states': 'j2735_v2x_msgs/MovementList',
        'maneuever_assist_list': 'j2735_v2x_msgs/ManeuverAssistList',
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
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'EnabledLaneList'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'MovementList'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ManeuverAssistList'),  # noqa: E501
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
        self.time_stamp = kwargs.get('time_stamp', int())
        self.time_stamp_exists = kwargs.get('time_stamp_exists', bool())
        from j2735_v2x_msgs.msg import EnabledLaneList
        self.enabled_lanes = kwargs.get('enabled_lanes', EnabledLaneList())
        self.enabled_lanes_exists = kwargs.get('enabled_lanes_exists', bool())
        from j2735_v2x_msgs.msg import MovementList
        self.states = kwargs.get('states', MovementList())
        from j2735_v2x_msgs.msg import ManeuverAssistList
        self.maneuever_assist_list = kwargs.get('maneuever_assist_list', ManeuverAssistList())
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
        if self.enabled_lanes != other.enabled_lanes:
            return False
        if self.enabled_lanes_exists != other.enabled_lanes_exists:
            return False
        if self.states != other.states:
            return False
        if self.maneuever_assist_list != other.maneuever_assist_list:
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
                isinstance(value, int), \
                "The 'time_stamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_stamp' field must be an unsigned integer in [0, 4294967295]"
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
    def enabled_lanes(self):
        """Message field 'enabled_lanes'."""
        return self._enabled_lanes

    @enabled_lanes.setter
    def enabled_lanes(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import EnabledLaneList
            assert \
                isinstance(value, EnabledLaneList), \
                "The 'enabled_lanes' field must be a sub message of type 'EnabledLaneList'"
        self._enabled_lanes = value

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
    def states(self):
        """Message field 'states'."""
        return self._states

    @states.setter
    def states(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import MovementList
            assert \
                isinstance(value, MovementList), \
                "The 'states' field must be a sub message of type 'MovementList'"
        self._states = value

    @property
    def maneuever_assist_list(self):
        """Message field 'maneuever_assist_list'."""
        return self._maneuever_assist_list

    @maneuever_assist_list.setter
    def maneuever_assist_list(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ManeuverAssistList
            assert \
                isinstance(value, ManeuverAssistList), \
                "The 'maneuever_assist_list' field must be a sub message of type 'ManeuverAssistList'"
        self._maneuever_assist_list = value

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
