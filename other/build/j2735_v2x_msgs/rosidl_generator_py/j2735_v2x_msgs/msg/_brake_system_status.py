# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BrakeSystemStatus(type):
    """Metaclass of message 'BrakeSystemStatus'."""

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
                'j2735_v2x_msgs.msg.BrakeSystemStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__brake_system_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__brake_system_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__brake_system_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__brake_system_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__brake_system_status

            from j2735_v2x_msgs.msg import AntiLockBrakeStatus
            if AntiLockBrakeStatus.__class__._TYPE_SUPPORT is None:
                AntiLockBrakeStatus.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import AuxiliaryBrakeStatus
            if AuxiliaryBrakeStatus.__class__._TYPE_SUPPORT is None:
                AuxiliaryBrakeStatus.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import BrakeAppliedStatus
            if BrakeAppliedStatus.__class__._TYPE_SUPPORT is None:
                BrakeAppliedStatus.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import BrakeBoostApplied
            if BrakeBoostApplied.__class__._TYPE_SUPPORT is None:
                BrakeBoostApplied.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import StabilityControlStatus
            if StabilityControlStatus.__class__._TYPE_SUPPORT is None:
                StabilityControlStatus.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TractionControlStatus
            if TractionControlStatus.__class__._TYPE_SUPPORT is None:
                TractionControlStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BrakeSystemStatus(metaclass=Metaclass_BrakeSystemStatus):
    """Message class 'BrakeSystemStatus'."""

    __slots__ = [
        '_wheel_brakes',
        '_traction',
        '_abs',
        '_scs',
        '_brake_boost',
        '_aux_brakes',
    ]

    _fields_and_field_types = {
        'wheel_brakes': 'j2735_v2x_msgs/BrakeAppliedStatus',
        'traction': 'j2735_v2x_msgs/TractionControlStatus',
        'abs': 'j2735_v2x_msgs/AntiLockBrakeStatus',
        'scs': 'j2735_v2x_msgs/StabilityControlStatus',
        'brake_boost': 'j2735_v2x_msgs/BrakeBoostApplied',
        'aux_brakes': 'j2735_v2x_msgs/AuxiliaryBrakeStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'BrakeAppliedStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TractionControlStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AntiLockBrakeStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'StabilityControlStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'BrakeBoostApplied'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AuxiliaryBrakeStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import BrakeAppliedStatus
        self.wheel_brakes = kwargs.get('wheel_brakes', BrakeAppliedStatus())
        from j2735_v2x_msgs.msg import TractionControlStatus
        self.traction = kwargs.get('traction', TractionControlStatus())
        from j2735_v2x_msgs.msg import AntiLockBrakeStatus
        self.abs = kwargs.get('abs', AntiLockBrakeStatus())
        from j2735_v2x_msgs.msg import StabilityControlStatus
        self.scs = kwargs.get('scs', StabilityControlStatus())
        from j2735_v2x_msgs.msg import BrakeBoostApplied
        self.brake_boost = kwargs.get('brake_boost', BrakeBoostApplied())
        from j2735_v2x_msgs.msg import AuxiliaryBrakeStatus
        self.aux_brakes = kwargs.get('aux_brakes', AuxiliaryBrakeStatus())

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
        if self.wheel_brakes != other.wheel_brakes:
            return False
        if self.traction != other.traction:
            return False
        if self.abs != other.abs:
            return False
        if self.scs != other.scs:
            return False
        if self.brake_boost != other.brake_boost:
            return False
        if self.aux_brakes != other.aux_brakes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def wheel_brakes(self):
        """Message field 'wheel_brakes'."""
        return self._wheel_brakes

    @wheel_brakes.setter
    def wheel_brakes(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import BrakeAppliedStatus
            assert \
                isinstance(value, BrakeAppliedStatus), \
                "The 'wheel_brakes' field must be a sub message of type 'BrakeAppliedStatus'"
        self._wheel_brakes = value

    @property
    def traction(self):
        """Message field 'traction'."""
        return self._traction

    @traction.setter
    def traction(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TractionControlStatus
            assert \
                isinstance(value, TractionControlStatus), \
                "The 'traction' field must be a sub message of type 'TractionControlStatus'"
        self._traction = value

    @property  # noqa: A003
    def abs(self):  # noqa: A003
        """Message field 'abs'."""
        return self._abs

    @abs.setter  # noqa: A003
    def abs(self, value):  # noqa: A003
        if __debug__:
            from j2735_v2x_msgs.msg import AntiLockBrakeStatus
            assert \
                isinstance(value, AntiLockBrakeStatus), \
                "The 'abs' field must be a sub message of type 'AntiLockBrakeStatus'"
        self._abs = value

    @property
    def scs(self):
        """Message field 'scs'."""
        return self._scs

    @scs.setter
    def scs(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import StabilityControlStatus
            assert \
                isinstance(value, StabilityControlStatus), \
                "The 'scs' field must be a sub message of type 'StabilityControlStatus'"
        self._scs = value

    @property
    def brake_boost(self):
        """Message field 'brake_boost'."""
        return self._brake_boost

    @brake_boost.setter
    def brake_boost(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import BrakeBoostApplied
            assert \
                isinstance(value, BrakeBoostApplied), \
                "The 'brake_boost' field must be a sub message of type 'BrakeBoostApplied'"
        self._brake_boost = value

    @property
    def aux_brakes(self):
        """Message field 'aux_brakes'."""
        return self._aux_brakes

    @aux_brakes.setter
    def aux_brakes(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AuxiliaryBrakeStatus
            assert \
                isinstance(value, AuxiliaryBrakeStatus), \
                "The 'aux_brakes' field must be a sub message of type 'AuxiliaryBrakeStatus'"
        self._aux_brakes = value
