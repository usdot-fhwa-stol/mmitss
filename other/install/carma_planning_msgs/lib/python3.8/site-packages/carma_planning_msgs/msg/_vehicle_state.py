# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/VehicleState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleState(type):
    """Metaclass of message 'VehicleState'."""

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
            module = import_type_support('carma_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_planning_msgs.msg.VehicleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleState(metaclass=Metaclass_VehicleState):
    """Message class 'VehicleState'."""

    __slots__ = [
        '_x_pos_global',
        '_y_pos_global',
        '_orientation',
        '_longitudinal_vel',
        '_lateral_vel',
        '_yaw_rate',
        '_front_wheel_rotation_rate',
        '_rear_wheel_rotation_rate',
        '_steering_angle',
        '_trailer_angle',
        '_prev_vel_cmd',
        '_prev_steering_cmd',
    ]

    _fields_and_field_types = {
        'x_pos_global': 'double',
        'y_pos_global': 'double',
        'orientation': 'double',
        'longitudinal_vel': 'double',
        'lateral_vel': 'double',
        'yaw_rate': 'double',
        'front_wheel_rotation_rate': 'double',
        'rear_wheel_rotation_rate': 'double',
        'steering_angle': 'double',
        'trailer_angle': 'double',
        'prev_vel_cmd': 'double',
        'prev_steering_cmd': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_pos_global = kwargs.get('x_pos_global', float())
        self.y_pos_global = kwargs.get('y_pos_global', float())
        self.orientation = kwargs.get('orientation', float())
        self.longitudinal_vel = kwargs.get('longitudinal_vel', float())
        self.lateral_vel = kwargs.get('lateral_vel', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.front_wheel_rotation_rate = kwargs.get('front_wheel_rotation_rate', float())
        self.rear_wheel_rotation_rate = kwargs.get('rear_wheel_rotation_rate', float())
        self.steering_angle = kwargs.get('steering_angle', float())
        self.trailer_angle = kwargs.get('trailer_angle', float())
        self.prev_vel_cmd = kwargs.get('prev_vel_cmd', float())
        self.prev_steering_cmd = kwargs.get('prev_steering_cmd', float())

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
        if self.x_pos_global != other.x_pos_global:
            return False
        if self.y_pos_global != other.y_pos_global:
            return False
        if self.orientation != other.orientation:
            return False
        if self.longitudinal_vel != other.longitudinal_vel:
            return False
        if self.lateral_vel != other.lateral_vel:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.front_wheel_rotation_rate != other.front_wheel_rotation_rate:
            return False
        if self.rear_wheel_rotation_rate != other.rear_wheel_rotation_rate:
            return False
        if self.steering_angle != other.steering_angle:
            return False
        if self.trailer_angle != other.trailer_angle:
            return False
        if self.prev_vel_cmd != other.prev_vel_cmd:
            return False
        if self.prev_steering_cmd != other.prev_steering_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x_pos_global(self):
        """Message field 'x_pos_global'."""
        return self._x_pos_global

    @x_pos_global.setter
    def x_pos_global(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_pos_global' field must be of type 'float'"
        self._x_pos_global = value

    @property
    def y_pos_global(self):
        """Message field 'y_pos_global'."""
        return self._y_pos_global

    @y_pos_global.setter
    def y_pos_global(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_pos_global' field must be of type 'float'"
        self._y_pos_global = value

    @property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation' field must be of type 'float'"
        self._orientation = value

    @property
    def longitudinal_vel(self):
        """Message field 'longitudinal_vel'."""
        return self._longitudinal_vel

    @longitudinal_vel.setter
    def longitudinal_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_vel' field must be of type 'float'"
        self._longitudinal_vel = value

    @property
    def lateral_vel(self):
        """Message field 'lateral_vel'."""
        return self._lateral_vel

    @lateral_vel.setter
    def lateral_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_vel' field must be of type 'float'"
        self._lateral_vel = value

    @property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
        self._yaw_rate = value

    @property
    def front_wheel_rotation_rate(self):
        """Message field 'front_wheel_rotation_rate'."""
        return self._front_wheel_rotation_rate

    @front_wheel_rotation_rate.setter
    def front_wheel_rotation_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_wheel_rotation_rate' field must be of type 'float'"
        self._front_wheel_rotation_rate = value

    @property
    def rear_wheel_rotation_rate(self):
        """Message field 'rear_wheel_rotation_rate'."""
        return self._rear_wheel_rotation_rate

    @rear_wheel_rotation_rate.setter
    def rear_wheel_rotation_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_wheel_rotation_rate' field must be of type 'float'"
        self._rear_wheel_rotation_rate = value

    @property
    def steering_angle(self):
        """Message field 'steering_angle'."""
        return self._steering_angle

    @steering_angle.setter
    def steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle' field must be of type 'float'"
        self._steering_angle = value

    @property
    def trailer_angle(self):
        """Message field 'trailer_angle'."""
        return self._trailer_angle

    @trailer_angle.setter
    def trailer_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trailer_angle' field must be of type 'float'"
        self._trailer_angle = value

    @property
    def prev_vel_cmd(self):
        """Message field 'prev_vel_cmd'."""
        return self._prev_vel_cmd

    @prev_vel_cmd.setter
    def prev_vel_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'prev_vel_cmd' field must be of type 'float'"
        self._prev_vel_cmd = value

    @property
    def prev_steering_cmd(self):
        """Message field 'prev_steering_cmd'."""
        return self._prev_steering_cmd

    @prev_steering_cmd.setter
    def prev_steering_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'prev_steering_cmd' field must be of type 'float'"
        self._prev_steering_cmd = value
