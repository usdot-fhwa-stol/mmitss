# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/DetectedObjectCommonData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedObjectCommonData(type):
    """Metaclass of message 'DetectedObjectCommonData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_SPEED_Z': 1,
        'HAS_SPEED_CONFIDENCE_Z': 2,
        'HAS_ACCEL_4_WAY': 4,
        'HAS_ACC_CFD_X': 8,
        'HAS_ACC_CFD_Y': 16,
        'HAS_ACC_CFD_Z': 32,
        'HAS_ACC_CFD_YAW': 64,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j3224_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j3224_v2x_msgs.msg.DetectedObjectCommonData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_object_common_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_object_common_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_object_common_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_object_common_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_object_common_data

            from j2735_v2x_msgs.msg import AccelerationConfidence
            if AccelerationConfidence.__class__._TYPE_SUPPORT is None:
                AccelerationConfidence.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import AccelerationSet4Way
            if AccelerationSet4Way.__class__._TYPE_SUPPORT is None:
                AccelerationSet4Way.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Heading
            if Heading.__class__._TYPE_SUPPORT is None:
                Heading.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import HeadingConfidence
            if HeadingConfidence.__class__._TYPE_SUPPORT is None:
                HeadingConfidence.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PositionConfidenceSet
            if PositionConfidenceSet.__class__._TYPE_SUPPORT is None:
                PositionConfidenceSet.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Speed
            if Speed.__class__._TYPE_SUPPORT is None:
                Speed.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import SpeedConfidence
            if SpeedConfidence.__class__._TYPE_SUPPORT is None:
                SpeedConfidence.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TimeConfidence
            if TimeConfidence.__class__._TYPE_SUPPORT is None:
                TimeConfidence.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import YawRateConfidence
            if YawRateConfidence.__class__._TYPE_SUPPORT is None:
                YawRateConfidence.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import ClassificationConfidence
            if ClassificationConfidence.__class__._TYPE_SUPPORT is None:
                ClassificationConfidence.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import MeasurementTimeOffset
            if MeasurementTimeOffset.__class__._TYPE_SUPPORT is None:
                MeasurementTimeOffset.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import ObjectID
            if ObjectID.__class__._TYPE_SUPPORT is None:
                ObjectID.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import ObjectType
            if ObjectType.__class__._TYPE_SUPPORT is None:
                ObjectType.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import PositionOffsetXYZ
            if PositionOffsetXYZ.__class__._TYPE_SUPPORT is None:
                PositionOffsetXYZ.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_SPEED_Z': cls.__constants['HAS_SPEED_Z'],
            'HAS_SPEED_CONFIDENCE_Z': cls.__constants['HAS_SPEED_CONFIDENCE_Z'],
            'HAS_ACCEL_4_WAY': cls.__constants['HAS_ACCEL_4_WAY'],
            'HAS_ACC_CFD_X': cls.__constants['HAS_ACC_CFD_X'],
            'HAS_ACC_CFD_Y': cls.__constants['HAS_ACC_CFD_Y'],
            'HAS_ACC_CFD_Z': cls.__constants['HAS_ACC_CFD_Z'],
            'HAS_ACC_CFD_YAW': cls.__constants['HAS_ACC_CFD_YAW'],
        }

    @property
    def HAS_SPEED_Z(self):
        """Message constant 'HAS_SPEED_Z'."""
        return Metaclass_DetectedObjectCommonData.__constants['HAS_SPEED_Z']

    @property
    def HAS_SPEED_CONFIDENCE_Z(self):
        """Message constant 'HAS_SPEED_CONFIDENCE_Z'."""
        return Metaclass_DetectedObjectCommonData.__constants['HAS_SPEED_CONFIDENCE_Z']

    @property
    def HAS_ACCEL_4_WAY(self):
        """Message constant 'HAS_ACCEL_4_WAY'."""
        return Metaclass_DetectedObjectCommonData.__constants['HAS_ACCEL_4_WAY']

    @property
    def HAS_ACC_CFD_X(self):
        """Message constant 'HAS_ACC_CFD_X'."""
        return Metaclass_DetectedObjectCommonData.__constants['HAS_ACC_CFD_X']

    @property
    def HAS_ACC_CFD_Y(self):
        """Message constant 'HAS_ACC_CFD_Y'."""
        return Metaclass_DetectedObjectCommonData.__constants['HAS_ACC_CFD_Y']

    @property
    def HAS_ACC_CFD_Z(self):
        """Message constant 'HAS_ACC_CFD_Z'."""
        return Metaclass_DetectedObjectCommonData.__constants['HAS_ACC_CFD_Z']

    @property
    def HAS_ACC_CFD_YAW(self):
        """Message constant 'HAS_ACC_CFD_YAW'."""
        return Metaclass_DetectedObjectCommonData.__constants['HAS_ACC_CFD_YAW']


class DetectedObjectCommonData(metaclass=Metaclass_DetectedObjectCommonData):
    """
    Message class 'DetectedObjectCommonData'.

    Constants:
      HAS_SPEED_Z
      HAS_SPEED_CONFIDENCE_Z
      HAS_ACCEL_4_WAY
      HAS_ACC_CFD_X
      HAS_ACC_CFD_Y
      HAS_ACC_CFD_Z
      HAS_ACC_CFD_YAW
    """

    __slots__ = [
        '_obj_type',
        '_obj_type_cfd',
        '_detected_id',
        '_measurement_time',
        '_time_confidence',
        '_pos',
        '_pos_confidence',
        '_speed',
        '_speed_confidence',
        '_heading',
        '_heading_conf',
        '_presence_vector',
        '_speed_z',
        '_speed_confidence_z',
        '_accel_4_way',
        '_acc_cfd_x',
        '_acc_cfd_y',
        '_acc_cfd_z',
        '_acc_cfd_yaw',
    ]

    _fields_and_field_types = {
        'obj_type': 'j3224_v2x_msgs/ObjectType',
        'obj_type_cfd': 'j3224_v2x_msgs/ClassificationConfidence',
        'detected_id': 'j3224_v2x_msgs/ObjectID',
        'measurement_time': 'j3224_v2x_msgs/MeasurementTimeOffset',
        'time_confidence': 'j2735_v2x_msgs/TimeConfidence',
        'pos': 'j3224_v2x_msgs/PositionOffsetXYZ',
        'pos_confidence': 'j2735_v2x_msgs/PositionConfidenceSet',
        'speed': 'j2735_v2x_msgs/Speed',
        'speed_confidence': 'j2735_v2x_msgs/SpeedConfidence',
        'heading': 'j2735_v2x_msgs/Heading',
        'heading_conf': 'j2735_v2x_msgs/HeadingConfidence',
        'presence_vector': 'uint8',
        'speed_z': 'j2735_v2x_msgs/Speed',
        'speed_confidence_z': 'j2735_v2x_msgs/SpeedConfidence',
        'accel_4_way': 'j2735_v2x_msgs/AccelerationSet4Way',
        'acc_cfd_x': 'j2735_v2x_msgs/AccelerationConfidence',
        'acc_cfd_y': 'j2735_v2x_msgs/AccelerationConfidence',
        'acc_cfd_z': 'j2735_v2x_msgs/AccelerationConfidence',
        'acc_cfd_yaw': 'j2735_v2x_msgs/YawRateConfidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'ObjectType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'ClassificationConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'ObjectID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'MeasurementTimeOffset'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TimeConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'PositionOffsetXYZ'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PositionConfidenceSet'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Speed'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SpeedConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Heading'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'HeadingConfidence'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Speed'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SpeedConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AccelerationSet4Way'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AccelerationConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AccelerationConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AccelerationConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'YawRateConfidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j3224_v2x_msgs.msg import ObjectType
        self.obj_type = kwargs.get('obj_type', ObjectType())
        from j3224_v2x_msgs.msg import ClassificationConfidence
        self.obj_type_cfd = kwargs.get('obj_type_cfd', ClassificationConfidence())
        from j3224_v2x_msgs.msg import ObjectID
        self.detected_id = kwargs.get('detected_id', ObjectID())
        from j3224_v2x_msgs.msg import MeasurementTimeOffset
        self.measurement_time = kwargs.get('measurement_time', MeasurementTimeOffset())
        from j2735_v2x_msgs.msg import TimeConfidence
        self.time_confidence = kwargs.get('time_confidence', TimeConfidence())
        from j3224_v2x_msgs.msg import PositionOffsetXYZ
        self.pos = kwargs.get('pos', PositionOffsetXYZ())
        from j2735_v2x_msgs.msg import PositionConfidenceSet
        self.pos_confidence = kwargs.get('pos_confidence', PositionConfidenceSet())
        from j2735_v2x_msgs.msg import Speed
        self.speed = kwargs.get('speed', Speed())
        from j2735_v2x_msgs.msg import SpeedConfidence
        self.speed_confidence = kwargs.get('speed_confidence', SpeedConfidence())
        from j2735_v2x_msgs.msg import Heading
        self.heading = kwargs.get('heading', Heading())
        from j2735_v2x_msgs.msg import HeadingConfidence
        self.heading_conf = kwargs.get('heading_conf', HeadingConfidence())
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import Speed
        self.speed_z = kwargs.get('speed_z', Speed())
        from j2735_v2x_msgs.msg import SpeedConfidence
        self.speed_confidence_z = kwargs.get('speed_confidence_z', SpeedConfidence())
        from j2735_v2x_msgs.msg import AccelerationSet4Way
        self.accel_4_way = kwargs.get('accel_4_way', AccelerationSet4Way())
        from j2735_v2x_msgs.msg import AccelerationConfidence
        self.acc_cfd_x = kwargs.get('acc_cfd_x', AccelerationConfidence())
        from j2735_v2x_msgs.msg import AccelerationConfidence
        self.acc_cfd_y = kwargs.get('acc_cfd_y', AccelerationConfidence())
        from j2735_v2x_msgs.msg import AccelerationConfidence
        self.acc_cfd_z = kwargs.get('acc_cfd_z', AccelerationConfidence())
        from j2735_v2x_msgs.msg import YawRateConfidence
        self.acc_cfd_yaw = kwargs.get('acc_cfd_yaw', YawRateConfidence())

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
        if self.obj_type != other.obj_type:
            return False
        if self.obj_type_cfd != other.obj_type_cfd:
            return False
        if self.detected_id != other.detected_id:
            return False
        if self.measurement_time != other.measurement_time:
            return False
        if self.time_confidence != other.time_confidence:
            return False
        if self.pos != other.pos:
            return False
        if self.pos_confidence != other.pos_confidence:
            return False
        if self.speed != other.speed:
            return False
        if self.speed_confidence != other.speed_confidence:
            return False
        if self.heading != other.heading:
            return False
        if self.heading_conf != other.heading_conf:
            return False
        if self.presence_vector != other.presence_vector:
            return False
        if self.speed_z != other.speed_z:
            return False
        if self.speed_confidence_z != other.speed_confidence_z:
            return False
        if self.accel_4_way != other.accel_4_way:
            return False
        if self.acc_cfd_x != other.acc_cfd_x:
            return False
        if self.acc_cfd_y != other.acc_cfd_y:
            return False
        if self.acc_cfd_z != other.acc_cfd_z:
            return False
        if self.acc_cfd_yaw != other.acc_cfd_yaw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def obj_type(self):
        """Message field 'obj_type'."""
        return self._obj_type

    @obj_type.setter
    def obj_type(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import ObjectType
            assert \
                isinstance(value, ObjectType), \
                "The 'obj_type' field must be a sub message of type 'ObjectType'"
        self._obj_type = value

    @property
    def obj_type_cfd(self):
        """Message field 'obj_type_cfd'."""
        return self._obj_type_cfd

    @obj_type_cfd.setter
    def obj_type_cfd(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import ClassificationConfidence
            assert \
                isinstance(value, ClassificationConfidence), \
                "The 'obj_type_cfd' field must be a sub message of type 'ClassificationConfidence'"
        self._obj_type_cfd = value

    @property
    def detected_id(self):
        """Message field 'detected_id'."""
        return self._detected_id

    @detected_id.setter
    def detected_id(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import ObjectID
            assert \
                isinstance(value, ObjectID), \
                "The 'detected_id' field must be a sub message of type 'ObjectID'"
        self._detected_id = value

    @property
    def measurement_time(self):
        """Message field 'measurement_time'."""
        return self._measurement_time

    @measurement_time.setter
    def measurement_time(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import MeasurementTimeOffset
            assert \
                isinstance(value, MeasurementTimeOffset), \
                "The 'measurement_time' field must be a sub message of type 'MeasurementTimeOffset'"
        self._measurement_time = value

    @property
    def time_confidence(self):
        """Message field 'time_confidence'."""
        return self._time_confidence

    @time_confidence.setter
    def time_confidence(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TimeConfidence
            assert \
                isinstance(value, TimeConfidence), \
                "The 'time_confidence' field must be a sub message of type 'TimeConfidence'"
        self._time_confidence = value

    @property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import PositionOffsetXYZ
            assert \
                isinstance(value, PositionOffsetXYZ), \
                "The 'pos' field must be a sub message of type 'PositionOffsetXYZ'"
        self._pos = value

    @property
    def pos_confidence(self):
        """Message field 'pos_confidence'."""
        return self._pos_confidence

    @pos_confidence.setter
    def pos_confidence(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PositionConfidenceSet
            assert \
                isinstance(value, PositionConfidenceSet), \
                "The 'pos_confidence' field must be a sub message of type 'PositionConfidenceSet'"
        self._pos_confidence = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Speed
            assert \
                isinstance(value, Speed), \
                "The 'speed' field must be a sub message of type 'Speed'"
        self._speed = value

    @property
    def speed_confidence(self):
        """Message field 'speed_confidence'."""
        return self._speed_confidence

    @speed_confidence.setter
    def speed_confidence(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import SpeedConfidence
            assert \
                isinstance(value, SpeedConfidence), \
                "The 'speed_confidence' field must be a sub message of type 'SpeedConfidence'"
        self._speed_confidence = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Heading
            assert \
                isinstance(value, Heading), \
                "The 'heading' field must be a sub message of type 'Heading'"
        self._heading = value

    @property
    def heading_conf(self):
        """Message field 'heading_conf'."""
        return self._heading_conf

    @heading_conf.setter
    def heading_conf(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import HeadingConfidence
            assert \
                isinstance(value, HeadingConfidence), \
                "The 'heading_conf' field must be a sub message of type 'HeadingConfidence'"
        self._heading_conf = value

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
            assert value >= 0 and value < 256, \
                "The 'presence_vector' field must be an unsigned integer in [0, 255]"
        self._presence_vector = value

    @property
    def speed_z(self):
        """Message field 'speed_z'."""
        return self._speed_z

    @speed_z.setter
    def speed_z(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Speed
            assert \
                isinstance(value, Speed), \
                "The 'speed_z' field must be a sub message of type 'Speed'"
        self._speed_z = value

    @property
    def speed_confidence_z(self):
        """Message field 'speed_confidence_z'."""
        return self._speed_confidence_z

    @speed_confidence_z.setter
    def speed_confidence_z(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import SpeedConfidence
            assert \
                isinstance(value, SpeedConfidence), \
                "The 'speed_confidence_z' field must be a sub message of type 'SpeedConfidence'"
        self._speed_confidence_z = value

    @property
    def accel_4_way(self):
        """Message field 'accel_4_way'."""
        return self._accel_4_way

    @accel_4_way.setter
    def accel_4_way(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AccelerationSet4Way
            assert \
                isinstance(value, AccelerationSet4Way), \
                "The 'accel_4_way' field must be a sub message of type 'AccelerationSet4Way'"
        self._accel_4_way = value

    @property
    def acc_cfd_x(self):
        """Message field 'acc_cfd_x'."""
        return self._acc_cfd_x

    @acc_cfd_x.setter
    def acc_cfd_x(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AccelerationConfidence
            assert \
                isinstance(value, AccelerationConfidence), \
                "The 'acc_cfd_x' field must be a sub message of type 'AccelerationConfidence'"
        self._acc_cfd_x = value

    @property
    def acc_cfd_y(self):
        """Message field 'acc_cfd_y'."""
        return self._acc_cfd_y

    @acc_cfd_y.setter
    def acc_cfd_y(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AccelerationConfidence
            assert \
                isinstance(value, AccelerationConfidence), \
                "The 'acc_cfd_y' field must be a sub message of type 'AccelerationConfidence'"
        self._acc_cfd_y = value

    @property
    def acc_cfd_z(self):
        """Message field 'acc_cfd_z'."""
        return self._acc_cfd_z

    @acc_cfd_z.setter
    def acc_cfd_z(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AccelerationConfidence
            assert \
                isinstance(value, AccelerationConfidence), \
                "The 'acc_cfd_z' field must be a sub message of type 'AccelerationConfidence'"
        self._acc_cfd_z = value

    @property
    def acc_cfd_yaw(self):
        """Message field 'acc_cfd_yaw'."""
        return self._acc_cfd_yaw

    @acc_cfd_yaw.setter
    def acc_cfd_yaw(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import YawRateConfidence
            assert \
                isinstance(value, YawRateConfidence), \
                "The 'acc_cfd_yaw' field must be a sub message of type 'YawRateConfidence'"
        self._acc_cfd_yaw = value
