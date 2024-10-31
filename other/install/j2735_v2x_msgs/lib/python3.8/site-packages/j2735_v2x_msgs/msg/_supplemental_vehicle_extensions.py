# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/SupplementalVehicleExtensions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SupplementalVehicleExtensions(type):
    """Metaclass of message 'SupplementalVehicleExtensions'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_CLASSIFICATION': 1,
        'HAS_CLASS_DETAILS': 2,
        'HAS_VEHICLE_DATA': 4,
        'HAS_WEATHER_REPORT': 8,
        'HAS_WEATHER_PROBE': 16,
        'HAS_OBSTACLE': 32,
        'HAS_STATUS': 64,
        'HAS_SPEED_PROFILE': 128,
        'HAS_THE_RTCM': 256,
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
                'j2735_v2x_msgs.msg.SupplementalVehicleExtensions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__supplemental_vehicle_extensions
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__supplemental_vehicle_extensions
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__supplemental_vehicle_extensions
            cls._TYPE_SUPPORT = module.type_support_msg__msg__supplemental_vehicle_extensions
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__supplemental_vehicle_extensions

            from j2735_v2x_msgs.msg import BasicVehicleClass
            if BasicVehicleClass.__class__._TYPE_SUPPORT is None:
                BasicVehicleClass.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DisabledVehicle
            if DisabledVehicle.__class__._TYPE_SUPPORT is None:
                DisabledVehicle.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import GrossSpeed
            if GrossSpeed.__class__._TYPE_SUPPORT is None:
                GrossSpeed.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ObstacleDetection
            if ObstacleDetection.__class__._TYPE_SUPPORT is None:
                ObstacleDetection.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import RTCMPackage
            if RTCMPackage.__class__._TYPE_SUPPORT is None:
                RTCMPackage.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleClassification
            if VehicleClassification.__class__._TYPE_SUPPORT is None:
                VehicleClassification.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleData
            if VehicleData.__class__._TYPE_SUPPORT is None:
                VehicleData.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import WeatherProbe
            if WeatherProbe.__class__._TYPE_SUPPORT is None:
                WeatherProbe.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import WeatherReport
            if WeatherReport.__class__._TYPE_SUPPORT is None:
                WeatherReport.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_CLASSIFICATION': cls.__constants['HAS_CLASSIFICATION'],
            'HAS_CLASS_DETAILS': cls.__constants['HAS_CLASS_DETAILS'],
            'HAS_VEHICLE_DATA': cls.__constants['HAS_VEHICLE_DATA'],
            'HAS_WEATHER_REPORT': cls.__constants['HAS_WEATHER_REPORT'],
            'HAS_WEATHER_PROBE': cls.__constants['HAS_WEATHER_PROBE'],
            'HAS_OBSTACLE': cls.__constants['HAS_OBSTACLE'],
            'HAS_STATUS': cls.__constants['HAS_STATUS'],
            'HAS_SPEED_PROFILE': cls.__constants['HAS_SPEED_PROFILE'],
            'HAS_THE_RTCM': cls.__constants['HAS_THE_RTCM'],
        }

    @property
    def HAS_CLASSIFICATION(self):
        """Message constant 'HAS_CLASSIFICATION'."""
        return Metaclass_SupplementalVehicleExtensions.__constants['HAS_CLASSIFICATION']

    @property
    def HAS_CLASS_DETAILS(self):
        """Message constant 'HAS_CLASS_DETAILS'."""
        return Metaclass_SupplementalVehicleExtensions.__constants['HAS_CLASS_DETAILS']

    @property
    def HAS_VEHICLE_DATA(self):
        """Message constant 'HAS_VEHICLE_DATA'."""
        return Metaclass_SupplementalVehicleExtensions.__constants['HAS_VEHICLE_DATA']

    @property
    def HAS_WEATHER_REPORT(self):
        """Message constant 'HAS_WEATHER_REPORT'."""
        return Metaclass_SupplementalVehicleExtensions.__constants['HAS_WEATHER_REPORT']

    @property
    def HAS_WEATHER_PROBE(self):
        """Message constant 'HAS_WEATHER_PROBE'."""
        return Metaclass_SupplementalVehicleExtensions.__constants['HAS_WEATHER_PROBE']

    @property
    def HAS_OBSTACLE(self):
        """Message constant 'HAS_OBSTACLE'."""
        return Metaclass_SupplementalVehicleExtensions.__constants['HAS_OBSTACLE']

    @property
    def HAS_STATUS(self):
        """Message constant 'HAS_STATUS'."""
        return Metaclass_SupplementalVehicleExtensions.__constants['HAS_STATUS']

    @property
    def HAS_SPEED_PROFILE(self):
        """Message constant 'HAS_SPEED_PROFILE'."""
        return Metaclass_SupplementalVehicleExtensions.__constants['HAS_SPEED_PROFILE']

    @property
    def HAS_THE_RTCM(self):
        """Message constant 'HAS_THE_RTCM'."""
        return Metaclass_SupplementalVehicleExtensions.__constants['HAS_THE_RTCM']


class SupplementalVehicleExtensions(metaclass=Metaclass_SupplementalVehicleExtensions):
    """
    Message class 'SupplementalVehicleExtensions'.

    Constants:
      HAS_CLASSIFICATION
      HAS_CLASS_DETAILS
      HAS_VEHICLE_DATA
      HAS_WEATHER_REPORT
      HAS_WEATHER_PROBE
      HAS_OBSTACLE
      HAS_STATUS
      HAS_SPEED_PROFILE
      HAS_THE_RTCM
    """

    __slots__ = [
        '_presence_vector',
        '_classification',
        '_class_details',
        '_vehicle_data',
        '_weather_report',
        '_weather_probe',
        '_obstacle',
        '_status',
        '_speed_profile',
        '_the_rtcm',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'classification': 'j2735_v2x_msgs/BasicVehicleClass',
        'class_details': 'j2735_v2x_msgs/VehicleClassification',
        'vehicle_data': 'j2735_v2x_msgs/VehicleData',
        'weather_report': 'j2735_v2x_msgs/WeatherReport',
        'weather_probe': 'j2735_v2x_msgs/WeatherProbe',
        'obstacle': 'j2735_v2x_msgs/ObstacleDetection',
        'status': 'j2735_v2x_msgs/DisabledVehicle',
        'speed_profile': 'sequence<j2735_v2x_msgs/GrossSpeed>',
        'the_rtcm': 'j2735_v2x_msgs/RTCMPackage',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'BasicVehicleClass'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleClassification'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'WeatherReport'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'WeatherProbe'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ObstacleDetection'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DisabledVehicle'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'GrossSpeed')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'RTCMPackage'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import BasicVehicleClass
        self.classification = kwargs.get('classification', BasicVehicleClass())
        from j2735_v2x_msgs.msg import VehicleClassification
        self.class_details = kwargs.get('class_details', VehicleClassification())
        from j2735_v2x_msgs.msg import VehicleData
        self.vehicle_data = kwargs.get('vehicle_data', VehicleData())
        from j2735_v2x_msgs.msg import WeatherReport
        self.weather_report = kwargs.get('weather_report', WeatherReport())
        from j2735_v2x_msgs.msg import WeatherProbe
        self.weather_probe = kwargs.get('weather_probe', WeatherProbe())
        from j2735_v2x_msgs.msg import ObstacleDetection
        self.obstacle = kwargs.get('obstacle', ObstacleDetection())
        from j2735_v2x_msgs.msg import DisabledVehicle
        self.status = kwargs.get('status', DisabledVehicle())
        self.speed_profile = kwargs.get('speed_profile', [])
        from j2735_v2x_msgs.msg import RTCMPackage
        self.the_rtcm = kwargs.get('the_rtcm', RTCMPackage())

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
        if self.presence_vector != other.presence_vector:
            return False
        if self.classification != other.classification:
            return False
        if self.class_details != other.class_details:
            return False
        if self.vehicle_data != other.vehicle_data:
            return False
        if self.weather_report != other.weather_report:
            return False
        if self.weather_probe != other.weather_probe:
            return False
        if self.obstacle != other.obstacle:
            return False
        if self.status != other.status:
            return False
        if self.speed_profile != other.speed_profile:
            return False
        if self.the_rtcm != other.the_rtcm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def presence_vector(self):
        """Message field 'presence_vector'."""
        return self._presence_vector

    @presence_vector.setter
    def presence_vector(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'presence_vector' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'presence_vector' field must be an unsigned integer in [0, 65535]"
        self._presence_vector = value

    @property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import BasicVehicleClass
            assert \
                isinstance(value, BasicVehicleClass), \
                "The 'classification' field must be a sub message of type 'BasicVehicleClass'"
        self._classification = value

    @property
    def class_details(self):
        """Message field 'class_details'."""
        return self._class_details

    @class_details.setter
    def class_details(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleClassification
            assert \
                isinstance(value, VehicleClassification), \
                "The 'class_details' field must be a sub message of type 'VehicleClassification'"
        self._class_details = value

    @property
    def vehicle_data(self):
        """Message field 'vehicle_data'."""
        return self._vehicle_data

    @vehicle_data.setter
    def vehicle_data(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleData
            assert \
                isinstance(value, VehicleData), \
                "The 'vehicle_data' field must be a sub message of type 'VehicleData'"
        self._vehicle_data = value

    @property
    def weather_report(self):
        """Message field 'weather_report'."""
        return self._weather_report

    @weather_report.setter
    def weather_report(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import WeatherReport
            assert \
                isinstance(value, WeatherReport), \
                "The 'weather_report' field must be a sub message of type 'WeatherReport'"
        self._weather_report = value

    @property
    def weather_probe(self):
        """Message field 'weather_probe'."""
        return self._weather_probe

    @weather_probe.setter
    def weather_probe(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import WeatherProbe
            assert \
                isinstance(value, WeatherProbe), \
                "The 'weather_probe' field must be a sub message of type 'WeatherProbe'"
        self._weather_probe = value

    @property
    def obstacle(self):
        """Message field 'obstacle'."""
        return self._obstacle

    @obstacle.setter
    def obstacle(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ObstacleDetection
            assert \
                isinstance(value, ObstacleDetection), \
                "The 'obstacle' field must be a sub message of type 'ObstacleDetection'"
        self._obstacle = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DisabledVehicle
            assert \
                isinstance(value, DisabledVehicle), \
                "The 'status' field must be a sub message of type 'DisabledVehicle'"
        self._status = value

    @property
    def speed_profile(self):
        """Message field 'speed_profile'."""
        return self._speed_profile

    @speed_profile.setter
    def speed_profile(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import GrossSpeed
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
                 all(isinstance(v, GrossSpeed) for v in value) and
                 True), \
                "The 'speed_profile' field must be a set or sequence and each value of type 'GrossSpeed'"
        self._speed_profile = value

    @property
    def the_rtcm(self):
        """Message field 'the_rtcm'."""
        return self._the_rtcm

    @the_rtcm.setter
    def the_rtcm(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import RTCMPackage
            assert \
                isinstance(value, RTCMPackage), \
                "The 'the_rtcm' field must be a sub message of type 'RTCMPackage'"
        self._the_rtcm = value
