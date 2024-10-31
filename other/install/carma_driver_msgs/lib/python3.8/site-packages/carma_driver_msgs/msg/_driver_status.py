# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_driver_msgs:msg/DriverStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DriverStatus(type):
    """Metaclass of message 'DriverStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OFF': 0,
        'OPERATIONAL': 1,
        'DEGRADED': 2,
        'FAULT': 3,
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
                'carma_driver_msgs.msg.DriverStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__driver_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__driver_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__driver_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__driver_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__driver_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OFF': cls.__constants['OFF'],
            'OPERATIONAL': cls.__constants['OPERATIONAL'],
            'DEGRADED': cls.__constants['DEGRADED'],
            'FAULT': cls.__constants['FAULT'],
        }

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_DriverStatus.__constants['OFF']

    @property
    def OPERATIONAL(self):
        """Message constant 'OPERATIONAL'."""
        return Metaclass_DriverStatus.__constants['OPERATIONAL']

    @property
    def DEGRADED(self):
        """Message constant 'DEGRADED'."""
        return Metaclass_DriverStatus.__constants['DEGRADED']

    @property
    def FAULT(self):
        """Message constant 'FAULT'."""
        return Metaclass_DriverStatus.__constants['FAULT']


class DriverStatus(metaclass=Metaclass_DriverStatus):
    """
    Message class 'DriverStatus'.

    Constants:
      OFF
      OPERATIONAL
      DEGRADED
      FAULT
    """

    __slots__ = [
        '_name',
        '_status',
        '_can',
        '_radar',
        '_gnss',
        '_lidar',
        '_roadway_sensor',
        '_comms',
        '_controller',
        '_camera',
        '_imu',
        '_trailer_angle_sensor',
        '_lightbar',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'status': 'uint8',
        'can': 'boolean',
        'radar': 'boolean',
        'gnss': 'boolean',
        'lidar': 'boolean',
        'roadway_sensor': 'boolean',
        'comms': 'boolean',
        'controller': 'boolean',
        'camera': 'boolean',
        'imu': 'boolean',
        'trailer_angle_sensor': 'boolean',
        'lightbar': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.status = kwargs.get('status', int())
        self.can = kwargs.get('can', bool())
        self.radar = kwargs.get('radar', bool())
        self.gnss = kwargs.get('gnss', bool())
        self.lidar = kwargs.get('lidar', bool())
        self.roadway_sensor = kwargs.get('roadway_sensor', bool())
        self.comms = kwargs.get('comms', bool())
        self.controller = kwargs.get('controller', bool())
        self.camera = kwargs.get('camera', bool())
        self.imu = kwargs.get('imu', bool())
        self.trailer_angle_sensor = kwargs.get('trailer_angle_sensor', bool())
        self.lightbar = kwargs.get('lightbar', bool())

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
        if self.status != other.status:
            return False
        if self.can != other.can:
            return False
        if self.radar != other.radar:
            return False
        if self.gnss != other.gnss:
            return False
        if self.lidar != other.lidar:
            return False
        if self.roadway_sensor != other.roadway_sensor:
            return False
        if self.comms != other.comms:
            return False
        if self.controller != other.controller:
            return False
        if self.camera != other.camera:
            return False
        if self.imu != other.imu:
            return False
        if self.trailer_angle_sensor != other.trailer_angle_sensor:
            return False
        if self.lightbar != other.lightbar:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @property
    def can(self):
        """Message field 'can'."""
        return self._can

    @can.setter
    def can(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can' field must be of type 'bool'"
        self._can = value

    @property
    def radar(self):
        """Message field 'radar'."""
        return self._radar

    @radar.setter
    def radar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radar' field must be of type 'bool'"
        self._radar = value

    @property
    def gnss(self):
        """Message field 'gnss'."""
        return self._gnss

    @gnss.setter
    def gnss(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gnss' field must be of type 'bool'"
        self._gnss = value

    @property
    def lidar(self):
        """Message field 'lidar'."""
        return self._lidar

    @lidar.setter
    def lidar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lidar' field must be of type 'bool'"
        self._lidar = value

    @property
    def roadway_sensor(self):
        """Message field 'roadway_sensor'."""
        return self._roadway_sensor

    @roadway_sensor.setter
    def roadway_sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'roadway_sensor' field must be of type 'bool'"
        self._roadway_sensor = value

    @property
    def comms(self):
        """Message field 'comms'."""
        return self._comms

    @comms.setter
    def comms(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'comms' field must be of type 'bool'"
        self._comms = value

    @property
    def controller(self):
        """Message field 'controller'."""
        return self._controller

    @controller.setter
    def controller(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'controller' field must be of type 'bool'"
        self._controller = value

    @property
    def camera(self):
        """Message field 'camera'."""
        return self._camera

    @camera.setter
    def camera(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'camera' field must be of type 'bool'"
        self._camera = value

    @property
    def imu(self):
        """Message field 'imu'."""
        return self._imu

    @imu.setter
    def imu(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu' field must be of type 'bool'"
        self._imu = value

    @property
    def trailer_angle_sensor(self):
        """Message field 'trailer_angle_sensor'."""
        return self._trailer_angle_sensor

    @trailer_angle_sensor.setter
    def trailer_angle_sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trailer_angle_sensor' field must be of type 'bool'"
        self._trailer_angle_sensor = value

    @property
    def lightbar(self):
        """Message field 'lightbar'."""
        return self._lightbar

    @lightbar.setter
    def lightbar(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lightbar' field must be of type 'bool'"
        self._lightbar = value
