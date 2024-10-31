# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_driver_msgs:msg/RobotEnabled.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotEnabled(type):
    """Metaclass of message 'RobotEnabled'."""

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
            module = import_type_support('carma_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_driver_msgs.msg.RobotEnabled')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_enabled
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_enabled
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_enabled
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_enabled
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_enabled

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotEnabled(metaclass=Metaclass_RobotEnabled):
    """Message class 'RobotEnabled'."""

    __slots__ = [
        '_robot_active',
        '_robot_enabled',
        '_torque',
        '_torque_validity',
        '_brake_decel',
        '_brake_decel_validity',
        '_throttle_effort',
        '_throttle_effort_validity',
        '_braking_effort',
        '_braking_effort_validity',
    ]

    _fields_and_field_types = {
        'robot_active': 'boolean',
        'robot_enabled': 'boolean',
        'torque': 'double',
        'torque_validity': 'boolean',
        'brake_decel': 'double',
        'brake_decel_validity': 'boolean',
        'throttle_effort': 'double',
        'throttle_effort_validity': 'boolean',
        'braking_effort': 'double',
        'braking_effort_validity': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_active = kwargs.get('robot_active', bool())
        self.robot_enabled = kwargs.get('robot_enabled', bool())
        self.torque = kwargs.get('torque', float())
        self.torque_validity = kwargs.get('torque_validity', bool())
        self.brake_decel = kwargs.get('brake_decel', float())
        self.brake_decel_validity = kwargs.get('brake_decel_validity', bool())
        self.throttle_effort = kwargs.get('throttle_effort', float())
        self.throttle_effort_validity = kwargs.get('throttle_effort_validity', bool())
        self.braking_effort = kwargs.get('braking_effort', float())
        self.braking_effort_validity = kwargs.get('braking_effort_validity', bool())

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
        if self.robot_active != other.robot_active:
            return False
        if self.robot_enabled != other.robot_enabled:
            return False
        if self.torque != other.torque:
            return False
        if self.torque_validity != other.torque_validity:
            return False
        if self.brake_decel != other.brake_decel:
            return False
        if self.brake_decel_validity != other.brake_decel_validity:
            return False
        if self.throttle_effort != other.throttle_effort:
            return False
        if self.throttle_effort_validity != other.throttle_effort_validity:
            return False
        if self.braking_effort != other.braking_effort:
            return False
        if self.braking_effort_validity != other.braking_effort_validity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robot_active(self):
        """Message field 'robot_active'."""
        return self._robot_active

    @robot_active.setter
    def robot_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robot_active' field must be of type 'bool'"
        self._robot_active = value

    @property
    def robot_enabled(self):
        """Message field 'robot_enabled'."""
        return self._robot_enabled

    @robot_enabled.setter
    def robot_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robot_enabled' field must be of type 'bool'"
        self._robot_enabled = value

    @property
    def torque(self):
        """Message field 'torque'."""
        return self._torque

    @torque.setter
    def torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque' field must be of type 'float'"
        self._torque = value

    @property
    def torque_validity(self):
        """Message field 'torque_validity'."""
        return self._torque_validity

    @torque_validity.setter
    def torque_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'torque_validity' field must be of type 'bool'"
        self._torque_validity = value

    @property
    def brake_decel(self):
        """Message field 'brake_decel'."""
        return self._brake_decel

    @brake_decel.setter
    def brake_decel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_decel' field must be of type 'float'"
        self._brake_decel = value

    @property
    def brake_decel_validity(self):
        """Message field 'brake_decel_validity'."""
        return self._brake_decel_validity

    @brake_decel_validity.setter
    def brake_decel_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_decel_validity' field must be of type 'bool'"
        self._brake_decel_validity = value

    @property
    def throttle_effort(self):
        """Message field 'throttle_effort'."""
        return self._throttle_effort

    @throttle_effort.setter
    def throttle_effort(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_effort' field must be of type 'float'"
        self._throttle_effort = value

    @property
    def throttle_effort_validity(self):
        """Message field 'throttle_effort_validity'."""
        return self._throttle_effort_validity

    @throttle_effort_validity.setter
    def throttle_effort_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'throttle_effort_validity' field must be of type 'bool'"
        self._throttle_effort_validity = value

    @property
    def braking_effort(self):
        """Message field 'braking_effort'."""
        return self._braking_effort

    @braking_effort.setter
    def braking_effort(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'braking_effort' field must be of type 'float'"
        self._braking_effort = value

    @property
    def braking_effort_validity(self):
        """Message field 'braking_effort_validity'."""
        return self._braking_effort_validity

    @braking_effort_validity.setter
    def braking_effort_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'braking_effort_validity' field must be of type 'bool'"
        self._braking_effort_validity = value
