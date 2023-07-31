# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/BSMCoreData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'id'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BSMCoreData(type):
    """Metaclass of message 'BSMCoreData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MSG_COUNT_MAX': 127,
        'ID_TIME_MAX': 3000,
        'SEC_MARK_AVAILABLE': 1,
        'LATITUDE_AVAILABLE': 2,
        'LONGITUDE_AVAILABLE': 4,
        'ELEVATION_AVAILABLE': 8,
        'SPEED_AVAILABLE': 16,
        'HEADING_AVAILABLE': 32,
        'STEER_WHEEL_ANGLE_AVAILABLE': 64,
        'SEC_MARK_MOD': 60000,
        'LATITUDE_MAX': 90.0,
        'LATITUDE_MIN': -90.0,
        'LONGITUDE_MAX': 180.0,
        'LONGITUDE_MIN': -179.9999999,
        'ELEVATION_MAX': 6143.9,
        'ELEVATION_MIN': -409.5,
        'SPEED_MAX': 163.8,
        'SPEED_MIN': 0.0,
        'HEADING_MAX': 359.9875,
        'HEADING_MIN': 0.0,
        'STEER_WHEEL_ANGLE_MAX': 189.0,
        'STEER_WHEEL_ANGLE_MIN': -189.0,
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
                'carma_v2x_msgs.msg.BSMCoreData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bsm_core_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bsm_core_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bsm_core_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bsm_core_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bsm_core_data

            from carma_v2x_msgs.msg import AccelerationSet4Way
            if AccelerationSet4Way.__class__._TYPE_SUPPORT is None:
                AccelerationSet4Way.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import PositionalAccuracy
            if PositionalAccuracy.__class__._TYPE_SUPPORT is None:
                PositionalAccuracy.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import VehicleSize
            if VehicleSize.__class__._TYPE_SUPPORT is None:
                VehicleSize.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import BrakeSystemStatus
            if BrakeSystemStatus.__class__._TYPE_SUPPORT is None:
                BrakeSystemStatus.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TransmissionState
            if TransmissionState.__class__._TYPE_SUPPORT is None:
                TransmissionState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MSG_COUNT_MAX': cls.__constants['MSG_COUNT_MAX'],
            'ID_TIME_MAX': cls.__constants['ID_TIME_MAX'],
            'SEC_MARK_AVAILABLE': cls.__constants['SEC_MARK_AVAILABLE'],
            'LATITUDE_AVAILABLE': cls.__constants['LATITUDE_AVAILABLE'],
            'LONGITUDE_AVAILABLE': cls.__constants['LONGITUDE_AVAILABLE'],
            'ELEVATION_AVAILABLE': cls.__constants['ELEVATION_AVAILABLE'],
            'SPEED_AVAILABLE': cls.__constants['SPEED_AVAILABLE'],
            'HEADING_AVAILABLE': cls.__constants['HEADING_AVAILABLE'],
            'STEER_WHEEL_ANGLE_AVAILABLE': cls.__constants['STEER_WHEEL_ANGLE_AVAILABLE'],
            'SEC_MARK_MOD': cls.__constants['SEC_MARK_MOD'],
            'LATITUDE_MAX': cls.__constants['LATITUDE_MAX'],
            'LATITUDE_MIN': cls.__constants['LATITUDE_MIN'],
            'LONGITUDE_MAX': cls.__constants['LONGITUDE_MAX'],
            'LONGITUDE_MIN': cls.__constants['LONGITUDE_MIN'],
            'ELEVATION_MAX': cls.__constants['ELEVATION_MAX'],
            'ELEVATION_MIN': cls.__constants['ELEVATION_MIN'],
            'SPEED_MAX': cls.__constants['SPEED_MAX'],
            'SPEED_MIN': cls.__constants['SPEED_MIN'],
            'HEADING_MAX': cls.__constants['HEADING_MAX'],
            'HEADING_MIN': cls.__constants['HEADING_MIN'],
            'STEER_WHEEL_ANGLE_MAX': cls.__constants['STEER_WHEEL_ANGLE_MAX'],
            'STEER_WHEEL_ANGLE_MIN': cls.__constants['STEER_WHEEL_ANGLE_MIN'],
        }

    @property
    def MSG_COUNT_MAX(self):
        """Message constant 'MSG_COUNT_MAX'."""
        return Metaclass_BSMCoreData.__constants['MSG_COUNT_MAX']

    @property
    def ID_TIME_MAX(self):
        """Message constant 'ID_TIME_MAX'."""
        return Metaclass_BSMCoreData.__constants['ID_TIME_MAX']

    @property
    def SEC_MARK_AVAILABLE(self):
        """Message constant 'SEC_MARK_AVAILABLE'."""
        return Metaclass_BSMCoreData.__constants['SEC_MARK_AVAILABLE']

    @property
    def LATITUDE_AVAILABLE(self):
        """Message constant 'LATITUDE_AVAILABLE'."""
        return Metaclass_BSMCoreData.__constants['LATITUDE_AVAILABLE']

    @property
    def LONGITUDE_AVAILABLE(self):
        """Message constant 'LONGITUDE_AVAILABLE'."""
        return Metaclass_BSMCoreData.__constants['LONGITUDE_AVAILABLE']

    @property
    def ELEVATION_AVAILABLE(self):
        """Message constant 'ELEVATION_AVAILABLE'."""
        return Metaclass_BSMCoreData.__constants['ELEVATION_AVAILABLE']

    @property
    def SPEED_AVAILABLE(self):
        """Message constant 'SPEED_AVAILABLE'."""
        return Metaclass_BSMCoreData.__constants['SPEED_AVAILABLE']

    @property
    def HEADING_AVAILABLE(self):
        """Message constant 'HEADING_AVAILABLE'."""
        return Metaclass_BSMCoreData.__constants['HEADING_AVAILABLE']

    @property
    def STEER_WHEEL_ANGLE_AVAILABLE(self):
        """Message constant 'STEER_WHEEL_ANGLE_AVAILABLE'."""
        return Metaclass_BSMCoreData.__constants['STEER_WHEEL_ANGLE_AVAILABLE']

    @property
    def SEC_MARK_MOD(self):
        """Message constant 'SEC_MARK_MOD'."""
        return Metaclass_BSMCoreData.__constants['SEC_MARK_MOD']

    @property
    def LATITUDE_MAX(self):
        """Message constant 'LATITUDE_MAX'."""
        return Metaclass_BSMCoreData.__constants['LATITUDE_MAX']

    @property
    def LATITUDE_MIN(self):
        """Message constant 'LATITUDE_MIN'."""
        return Metaclass_BSMCoreData.__constants['LATITUDE_MIN']

    @property
    def LONGITUDE_MAX(self):
        """Message constant 'LONGITUDE_MAX'."""
        return Metaclass_BSMCoreData.__constants['LONGITUDE_MAX']

    @property
    def LONGITUDE_MIN(self):
        """Message constant 'LONGITUDE_MIN'."""
        return Metaclass_BSMCoreData.__constants['LONGITUDE_MIN']

    @property
    def ELEVATION_MAX(self):
        """Message constant 'ELEVATION_MAX'."""
        return Metaclass_BSMCoreData.__constants['ELEVATION_MAX']

    @property
    def ELEVATION_MIN(self):
        """Message constant 'ELEVATION_MIN'."""
        return Metaclass_BSMCoreData.__constants['ELEVATION_MIN']

    @property
    def SPEED_MAX(self):
        """Message constant 'SPEED_MAX'."""
        return Metaclass_BSMCoreData.__constants['SPEED_MAX']

    @property
    def SPEED_MIN(self):
        """Message constant 'SPEED_MIN'."""
        return Metaclass_BSMCoreData.__constants['SPEED_MIN']

    @property
    def HEADING_MAX(self):
        """Message constant 'HEADING_MAX'."""
        return Metaclass_BSMCoreData.__constants['HEADING_MAX']

    @property
    def HEADING_MIN(self):
        """Message constant 'HEADING_MIN'."""
        return Metaclass_BSMCoreData.__constants['HEADING_MIN']

    @property
    def STEER_WHEEL_ANGLE_MAX(self):
        """Message constant 'STEER_WHEEL_ANGLE_MAX'."""
        return Metaclass_BSMCoreData.__constants['STEER_WHEEL_ANGLE_MAX']

    @property
    def STEER_WHEEL_ANGLE_MIN(self):
        """Message constant 'STEER_WHEEL_ANGLE_MIN'."""
        return Metaclass_BSMCoreData.__constants['STEER_WHEEL_ANGLE_MIN']


class BSMCoreData(metaclass=Metaclass_BSMCoreData):
    """
    Message class 'BSMCoreData'.

    Constants:
      MSG_COUNT_MAX
      ID_TIME_MAX
      SEC_MARK_AVAILABLE
      LATITUDE_AVAILABLE
      LONGITUDE_AVAILABLE
      ELEVATION_AVAILABLE
      SPEED_AVAILABLE
      HEADING_AVAILABLE
      STEER_WHEEL_ANGLE_AVAILABLE
      SEC_MARK_MOD
      LATITUDE_MAX
      LATITUDE_MIN
      LONGITUDE_MAX
      LONGITUDE_MIN
      ELEVATION_MAX
      ELEVATION_MIN
      SPEED_MAX
      SPEED_MIN
      HEADING_MAX
      HEADING_MIN
      STEER_WHEEL_ANGLE_MAX
      STEER_WHEEL_ANGLE_MIN
    """

    __slots__ = [
        '_msg_count',
        '_id',
        '_presence_vector',
        '_sec_mark',
        '_latitude',
        '_longitude',
        '_elev',
        '_accuracy',
        '_transmission',
        '_speed',
        '_heading',
        '_angle',
        '_accel_set',
        '_brakes',
        '_size',
    ]

    _fields_and_field_types = {
        'msg_count': 'uint8',
        'id': 'sequence<uint8>',
        'presence_vector': 'uint16',
        'sec_mark': 'uint16',
        'latitude': 'double',
        'longitude': 'double',
        'elev': 'float',
        'accuracy': 'carma_v2x_msgs/PositionalAccuracy',
        'transmission': 'j2735_v2x_msgs/TransmissionState',
        'speed': 'float',
        'heading': 'float',
        'angle': 'float',
        'accel_set': 'carma_v2x_msgs/AccelerationSet4Way',
        'brakes': 'j2735_v2x_msgs/BrakeSystemStatus',
        'size': 'carma_v2x_msgs/VehicleSize',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'PositionalAccuracy'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TransmissionState'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'AccelerationSet4Way'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'BrakeSystemStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'VehicleSize'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msg_count = kwargs.get('msg_count', int())
        self.id = array.array('B', kwargs.get('id', []))
        self.presence_vector = kwargs.get('presence_vector', int())
        self.sec_mark = kwargs.get('sec_mark', int())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.elev = kwargs.get('elev', float())
        from carma_v2x_msgs.msg import PositionalAccuracy
        self.accuracy = kwargs.get('accuracy', PositionalAccuracy())
        from j2735_v2x_msgs.msg import TransmissionState
        self.transmission = kwargs.get('transmission', TransmissionState())
        self.speed = kwargs.get('speed', float())
        self.heading = kwargs.get('heading', float())
        self.angle = kwargs.get('angle', float())
        from carma_v2x_msgs.msg import AccelerationSet4Way
        self.accel_set = kwargs.get('accel_set', AccelerationSet4Way())
        from j2735_v2x_msgs.msg import BrakeSystemStatus
        self.brakes = kwargs.get('brakes', BrakeSystemStatus())
        from carma_v2x_msgs.msg import VehicleSize
        self.size = kwargs.get('size', VehicleSize())

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
        if self.msg_count != other.msg_count:
            return False
        if self.id != other.id:
            return False
        if self.presence_vector != other.presence_vector:
            return False
        if self.sec_mark != other.sec_mark:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.elev != other.elev:
            return False
        if self.accuracy != other.accuracy:
            return False
        if self.transmission != other.transmission:
            return False
        if self.speed != other.speed:
            return False
        if self.heading != other.heading:
            return False
        if self.angle != other.angle:
            return False
        if self.accel_set != other.accel_set:
            return False
        if self.brakes != other.brakes:
            return False
        if self.size != other.size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def msg_count(self):
        """Message field 'msg_count'."""
        return self._msg_count

    @msg_count.setter
    def msg_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'msg_count' field must be an unsigned integer in [0, 255]"
        self._msg_count = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'id' array.array() must have the type code of 'B'"
            self._id = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._id = array.array('B', value)

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
    def sec_mark(self):
        """Message field 'sec_mark'."""
        return self._sec_mark

    @sec_mark.setter
    def sec_mark(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sec_mark' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sec_mark' field must be an unsigned integer in [0, 65535]"
        self._sec_mark = value

    @property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
        self._latitude = value

    @property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
        self._longitude = value

    @property
    def elev(self):
        """Message field 'elev'."""
        return self._elev

    @elev.setter
    def elev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elev' field must be of type 'float'"
        self._elev = value

    @property
    def accuracy(self):
        """Message field 'accuracy'."""
        return self._accuracy

    @accuracy.setter
    def accuracy(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import PositionalAccuracy
            assert \
                isinstance(value, PositionalAccuracy), \
                "The 'accuracy' field must be a sub message of type 'PositionalAccuracy'"
        self._accuracy = value

    @property
    def transmission(self):
        """Message field 'transmission'."""
        return self._transmission

    @transmission.setter
    def transmission(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TransmissionState
            assert \
                isinstance(value, TransmissionState), \
                "The 'transmission' field must be a sub message of type 'TransmissionState'"
        self._transmission = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
        self._heading = value

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
        self._angle = value

    @property
    def accel_set(self):
        """Message field 'accel_set'."""
        return self._accel_set

    @accel_set.setter
    def accel_set(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import AccelerationSet4Way
            assert \
                isinstance(value, AccelerationSet4Way), \
                "The 'accel_set' field must be a sub message of type 'AccelerationSet4Way'"
        self._accel_set = value

    @property
    def brakes(self):
        """Message field 'brakes'."""
        return self._brakes

    @brakes.setter
    def brakes(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import BrakeSystemStatus
            assert \
                isinstance(value, BrakeSystemStatus), \
                "The 'brakes' field must be a sub message of type 'BrakeSystemStatus'"
        self._brakes = value

    @property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import VehicleSize
            assert \
                isinstance(value, VehicleSize), \
                "The 'size' field must be a sub message of type 'VehicleSize'"
        self._size = value
