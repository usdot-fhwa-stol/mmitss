# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/WeatherReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WeatherReport(type):
    """Metaclass of message 'WeatherReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_RAIN_RATE': 1,
        'HAS_PRECIP_SITUATION': 2,
        'HAS_SOLAR_RADIATION': 4,
        'HAS_FRICTION': 8,
        'HAS_ROAD_FRICTION': 16,
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
                'carma_v2x_msgs.msg.WeatherReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__weather_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__weather_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__weather_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__weather_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__weather_report

            from carma_v2x_msgs.msg import CoefficientOfFriction
            if CoefficientOfFriction.__class__._TYPE_SUPPORT is None:
                CoefficientOfFriction.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import NTCIPEssPrecipRate
            if NTCIPEssPrecipRate.__class__._TYPE_SUPPORT is None:
                NTCIPEssPrecipRate.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NTCIPEssMobileFriction
            if NTCIPEssMobileFriction.__class__._TYPE_SUPPORT is None:
                NTCIPEssMobileFriction.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NTCIPEssPrecipSituation
            if NTCIPEssPrecipSituation.__class__._TYPE_SUPPORT is None:
                NTCIPEssPrecipSituation.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NTCIPEssPrecipYesNo
            if NTCIPEssPrecipYesNo.__class__._TYPE_SUPPORT is None:
                NTCIPEssPrecipYesNo.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NTCIPEssSolarRadiation
            if NTCIPEssSolarRadiation.__class__._TYPE_SUPPORT is None:
                NTCIPEssSolarRadiation.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_RAIN_RATE': cls.__constants['HAS_RAIN_RATE'],
            'HAS_PRECIP_SITUATION': cls.__constants['HAS_PRECIP_SITUATION'],
            'HAS_SOLAR_RADIATION': cls.__constants['HAS_SOLAR_RADIATION'],
            'HAS_FRICTION': cls.__constants['HAS_FRICTION'],
            'HAS_ROAD_FRICTION': cls.__constants['HAS_ROAD_FRICTION'],
        }

    @property
    def HAS_RAIN_RATE(self):
        """Message constant 'HAS_RAIN_RATE'."""
        return Metaclass_WeatherReport.__constants['HAS_RAIN_RATE']

    @property
    def HAS_PRECIP_SITUATION(self):
        """Message constant 'HAS_PRECIP_SITUATION'."""
        return Metaclass_WeatherReport.__constants['HAS_PRECIP_SITUATION']

    @property
    def HAS_SOLAR_RADIATION(self):
        """Message constant 'HAS_SOLAR_RADIATION'."""
        return Metaclass_WeatherReport.__constants['HAS_SOLAR_RADIATION']

    @property
    def HAS_FRICTION(self):
        """Message constant 'HAS_FRICTION'."""
        return Metaclass_WeatherReport.__constants['HAS_FRICTION']

    @property
    def HAS_ROAD_FRICTION(self):
        """Message constant 'HAS_ROAD_FRICTION'."""
        return Metaclass_WeatherReport.__constants['HAS_ROAD_FRICTION']


class WeatherReport(metaclass=Metaclass_WeatherReport):
    """
    Message class 'WeatherReport'.

    Constants:
      HAS_RAIN_RATE
      HAS_PRECIP_SITUATION
      HAS_SOLAR_RADIATION
      HAS_FRICTION
      HAS_ROAD_FRICTION
    """

    __slots__ = [
        '_presence_vector',
        '_is_raining',
        '_rain_rate',
        '_precip_situation',
        '_solar_radiation',
        '_friction',
        '_road_friction',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'is_raining': 'j2735_v2x_msgs/NTCIPEssPrecipYesNo',
        'rain_rate': 'carma_v2x_msgs/NTCIPEssPrecipRate',
        'precip_situation': 'j2735_v2x_msgs/NTCIPEssPrecipSituation',
        'solar_radiation': 'j2735_v2x_msgs/NTCIPEssSolarRadiation',
        'friction': 'j2735_v2x_msgs/NTCIPEssMobileFriction',
        'road_friction': 'carma_v2x_msgs/CoefficientOfFriction',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NTCIPEssPrecipYesNo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'NTCIPEssPrecipRate'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NTCIPEssPrecipSituation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NTCIPEssSolarRadiation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NTCIPEssMobileFriction'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'CoefficientOfFriction'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import NTCIPEssPrecipYesNo
        self.is_raining = kwargs.get('is_raining', NTCIPEssPrecipYesNo())
        from carma_v2x_msgs.msg import NTCIPEssPrecipRate
        self.rain_rate = kwargs.get('rain_rate', NTCIPEssPrecipRate())
        from j2735_v2x_msgs.msg import NTCIPEssPrecipSituation
        self.precip_situation = kwargs.get('precip_situation', NTCIPEssPrecipSituation())
        from j2735_v2x_msgs.msg import NTCIPEssSolarRadiation
        self.solar_radiation = kwargs.get('solar_radiation', NTCIPEssSolarRadiation())
        from j2735_v2x_msgs.msg import NTCIPEssMobileFriction
        self.friction = kwargs.get('friction', NTCIPEssMobileFriction())
        from carma_v2x_msgs.msg import CoefficientOfFriction
        self.road_friction = kwargs.get('road_friction', CoefficientOfFriction())

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
        if self.is_raining != other.is_raining:
            return False
        if self.rain_rate != other.rain_rate:
            return False
        if self.precip_situation != other.precip_situation:
            return False
        if self.solar_radiation != other.solar_radiation:
            return False
        if self.friction != other.friction:
            return False
        if self.road_friction != other.road_friction:
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
    def is_raining(self):
        """Message field 'is_raining'."""
        return self._is_raining

    @is_raining.setter
    def is_raining(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NTCIPEssPrecipYesNo
            assert \
                isinstance(value, NTCIPEssPrecipYesNo), \
                "The 'is_raining' field must be a sub message of type 'NTCIPEssPrecipYesNo'"
        self._is_raining = value

    @property
    def rain_rate(self):
        """Message field 'rain_rate'."""
        return self._rain_rate

    @rain_rate.setter
    def rain_rate(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import NTCIPEssPrecipRate
            assert \
                isinstance(value, NTCIPEssPrecipRate), \
                "The 'rain_rate' field must be a sub message of type 'NTCIPEssPrecipRate'"
        self._rain_rate = value

    @property
    def precip_situation(self):
        """Message field 'precip_situation'."""
        return self._precip_situation

    @precip_situation.setter
    def precip_situation(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NTCIPEssPrecipSituation
            assert \
                isinstance(value, NTCIPEssPrecipSituation), \
                "The 'precip_situation' field must be a sub message of type 'NTCIPEssPrecipSituation'"
        self._precip_situation = value

    @property
    def solar_radiation(self):
        """Message field 'solar_radiation'."""
        return self._solar_radiation

    @solar_radiation.setter
    def solar_radiation(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NTCIPEssSolarRadiation
            assert \
                isinstance(value, NTCIPEssSolarRadiation), \
                "The 'solar_radiation' field must be a sub message of type 'NTCIPEssSolarRadiation'"
        self._solar_radiation = value

    @property
    def friction(self):
        """Message field 'friction'."""
        return self._friction

    @friction.setter
    def friction(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NTCIPEssMobileFriction
            assert \
                isinstance(value, NTCIPEssMobileFriction), \
                "The 'friction' field must be a sub message of type 'NTCIPEssMobileFriction'"
        self._friction = value

    @property
    def road_friction(self):
        """Message field 'road_friction'."""
        return self._road_friction

    @road_friction.setter
    def road_friction(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import CoefficientOfFriction
            assert \
                isinstance(value, CoefficientOfFriction), \
                "The 'road_friction' field must be a sub message of type 'CoefficientOfFriction'"
        self._road_friction = value
