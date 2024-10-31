# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/DetectedVehicleData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedVehicleData(type):
    """Metaclass of message 'DetectedVehicleData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_LIGHTS': 1,
        'HAS_VEH_ATTITUDE': 2,
        'HAS_VEH_ATTITUDE_CONFIDENCE': 4,
        'HAS_ANG_VEL': 8,
        'HAS_ANG_VEL_CONFIDENCE': 16,
        'HAS_SIZE': 32,
        'HAS_HEIGHT': 64,
        'HAS_VEHICLE_SIZE_CONFIDENCE': 128,
        'HAS_VEHICLE_CLASS': 256,
        'HAS_CLASS_CONF': 512,
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
                'j3224_v2x_msgs.msg.DetectedVehicleData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_vehicle_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_vehicle_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_vehicle_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_vehicle_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_vehicle_data

            from j2735_v2x_msgs.msg import BasicVehicleClass
            if BasicVehicleClass.__class__._TYPE_SUPPORT is None:
                BasicVehicleClass.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ExteriorLights
            if ExteriorLights.__class__._TYPE_SUPPORT is None:
                ExteriorLights.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleHeight
            if VehicleHeight.__class__._TYPE_SUPPORT is None:
                VehicleHeight.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleSize
            if VehicleSize.__class__._TYPE_SUPPORT is None:
                VehicleSize.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import AngularVelocity
            if AngularVelocity.__class__._TYPE_SUPPORT is None:
                AngularVelocity.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import AngularVelocityConfidence
            if AngularVelocityConfidence.__class__._TYPE_SUPPORT is None:
                AngularVelocityConfidence.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import Attitude
            if Attitude.__class__._TYPE_SUPPORT is None:
                Attitude.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import AttitudeConfidence
            if AttitudeConfidence.__class__._TYPE_SUPPORT is None:
                AttitudeConfidence.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import ClassificationConfidence
            if ClassificationConfidence.__class__._TYPE_SUPPORT is None:
                ClassificationConfidence.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import VehicleSizeConfidence
            if VehicleSizeConfidence.__class__._TYPE_SUPPORT is None:
                VehicleSizeConfidence.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_LIGHTS': cls.__constants['HAS_LIGHTS'],
            'HAS_VEH_ATTITUDE': cls.__constants['HAS_VEH_ATTITUDE'],
            'HAS_VEH_ATTITUDE_CONFIDENCE': cls.__constants['HAS_VEH_ATTITUDE_CONFIDENCE'],
            'HAS_ANG_VEL': cls.__constants['HAS_ANG_VEL'],
            'HAS_ANG_VEL_CONFIDENCE': cls.__constants['HAS_ANG_VEL_CONFIDENCE'],
            'HAS_SIZE': cls.__constants['HAS_SIZE'],
            'HAS_HEIGHT': cls.__constants['HAS_HEIGHT'],
            'HAS_VEHICLE_SIZE_CONFIDENCE': cls.__constants['HAS_VEHICLE_SIZE_CONFIDENCE'],
            'HAS_VEHICLE_CLASS': cls.__constants['HAS_VEHICLE_CLASS'],
            'HAS_CLASS_CONF': cls.__constants['HAS_CLASS_CONF'],
        }

    @property
    def HAS_LIGHTS(self):
        """Message constant 'HAS_LIGHTS'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_LIGHTS']

    @property
    def HAS_VEH_ATTITUDE(self):
        """Message constant 'HAS_VEH_ATTITUDE'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_VEH_ATTITUDE']

    @property
    def HAS_VEH_ATTITUDE_CONFIDENCE(self):
        """Message constant 'HAS_VEH_ATTITUDE_CONFIDENCE'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_VEH_ATTITUDE_CONFIDENCE']

    @property
    def HAS_ANG_VEL(self):
        """Message constant 'HAS_ANG_VEL'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_ANG_VEL']

    @property
    def HAS_ANG_VEL_CONFIDENCE(self):
        """Message constant 'HAS_ANG_VEL_CONFIDENCE'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_ANG_VEL_CONFIDENCE']

    @property
    def HAS_SIZE(self):
        """Message constant 'HAS_SIZE'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_SIZE']

    @property
    def HAS_HEIGHT(self):
        """Message constant 'HAS_HEIGHT'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_HEIGHT']

    @property
    def HAS_VEHICLE_SIZE_CONFIDENCE(self):
        """Message constant 'HAS_VEHICLE_SIZE_CONFIDENCE'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_VEHICLE_SIZE_CONFIDENCE']

    @property
    def HAS_VEHICLE_CLASS(self):
        """Message constant 'HAS_VEHICLE_CLASS'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_VEHICLE_CLASS']

    @property
    def HAS_CLASS_CONF(self):
        """Message constant 'HAS_CLASS_CONF'."""
        return Metaclass_DetectedVehicleData.__constants['HAS_CLASS_CONF']


class DetectedVehicleData(metaclass=Metaclass_DetectedVehicleData):
    """
    Message class 'DetectedVehicleData'.

    Constants:
      HAS_LIGHTS
      HAS_VEH_ATTITUDE
      HAS_VEH_ATTITUDE_CONFIDENCE
      HAS_ANG_VEL
      HAS_ANG_VEL_CONFIDENCE
      HAS_SIZE
      HAS_HEIGHT
      HAS_VEHICLE_SIZE_CONFIDENCE
      HAS_VEHICLE_CLASS
      HAS_CLASS_CONF
    """

    __slots__ = [
        '_presence_vector',
        '_lights',
        '_veh_attitude',
        '_veh_attitude_confidence',
        '_veh_ang_vel',
        '_veh_ang_vel_confidence',
        '_size',
        '_height',
        '_vehicle_size_confidence',
        '_vehicle_class',
        '_class_conf',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'lights': 'j2735_v2x_msgs/ExteriorLights',
        'veh_attitude': 'j3224_v2x_msgs/Attitude',
        'veh_attitude_confidence': 'j3224_v2x_msgs/AttitudeConfidence',
        'veh_ang_vel': 'j3224_v2x_msgs/AngularVelocity',
        'veh_ang_vel_confidence': 'j3224_v2x_msgs/AngularVelocityConfidence',
        'size': 'j2735_v2x_msgs/VehicleSize',
        'height': 'j2735_v2x_msgs/VehicleHeight',
        'vehicle_size_confidence': 'j3224_v2x_msgs/VehicleSizeConfidence',
        'vehicle_class': 'j2735_v2x_msgs/BasicVehicleClass',
        'class_conf': 'j3224_v2x_msgs/ClassificationConfidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ExteriorLights'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'Attitude'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'AttitudeConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'AngularVelocity'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'AngularVelocityConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleSize'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleHeight'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'VehicleSizeConfidence'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'BasicVehicleClass'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'ClassificationConfidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import ExteriorLights
        self.lights = kwargs.get('lights', ExteriorLights())
        from j3224_v2x_msgs.msg import Attitude
        self.veh_attitude = kwargs.get('veh_attitude', Attitude())
        from j3224_v2x_msgs.msg import AttitudeConfidence
        self.veh_attitude_confidence = kwargs.get('veh_attitude_confidence', AttitudeConfidence())
        from j3224_v2x_msgs.msg import AngularVelocity
        self.veh_ang_vel = kwargs.get('veh_ang_vel', AngularVelocity())
        from j3224_v2x_msgs.msg import AngularVelocityConfidence
        self.veh_ang_vel_confidence = kwargs.get('veh_ang_vel_confidence', AngularVelocityConfidence())
        from j2735_v2x_msgs.msg import VehicleSize
        self.size = kwargs.get('size', VehicleSize())
        from j2735_v2x_msgs.msg import VehicleHeight
        self.height = kwargs.get('height', VehicleHeight())
        from j3224_v2x_msgs.msg import VehicleSizeConfidence
        self.vehicle_size_confidence = kwargs.get('vehicle_size_confidence', VehicleSizeConfidence())
        from j2735_v2x_msgs.msg import BasicVehicleClass
        self.vehicle_class = kwargs.get('vehicle_class', BasicVehicleClass())
        from j3224_v2x_msgs.msg import ClassificationConfidence
        self.class_conf = kwargs.get('class_conf', ClassificationConfidence())

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
        if self.lights != other.lights:
            return False
        if self.veh_attitude != other.veh_attitude:
            return False
        if self.veh_attitude_confidence != other.veh_attitude_confidence:
            return False
        if self.veh_ang_vel != other.veh_ang_vel:
            return False
        if self.veh_ang_vel_confidence != other.veh_ang_vel_confidence:
            return False
        if self.size != other.size:
            return False
        if self.height != other.height:
            return False
        if self.vehicle_size_confidence != other.vehicle_size_confidence:
            return False
        if self.vehicle_class != other.vehicle_class:
            return False
        if self.class_conf != other.class_conf:
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
    def lights(self):
        """Message field 'lights'."""
        return self._lights

    @lights.setter
    def lights(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ExteriorLights
            assert \
                isinstance(value, ExteriorLights), \
                "The 'lights' field must be a sub message of type 'ExteriorLights'"
        self._lights = value

    @property
    def veh_attitude(self):
        """Message field 'veh_attitude'."""
        return self._veh_attitude

    @veh_attitude.setter
    def veh_attitude(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import Attitude
            assert \
                isinstance(value, Attitude), \
                "The 'veh_attitude' field must be a sub message of type 'Attitude'"
        self._veh_attitude = value

    @property
    def veh_attitude_confidence(self):
        """Message field 'veh_attitude_confidence'."""
        return self._veh_attitude_confidence

    @veh_attitude_confidence.setter
    def veh_attitude_confidence(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import AttitudeConfidence
            assert \
                isinstance(value, AttitudeConfidence), \
                "The 'veh_attitude_confidence' field must be a sub message of type 'AttitudeConfidence'"
        self._veh_attitude_confidence = value

    @property
    def veh_ang_vel(self):
        """Message field 'veh_ang_vel'."""
        return self._veh_ang_vel

    @veh_ang_vel.setter
    def veh_ang_vel(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import AngularVelocity
            assert \
                isinstance(value, AngularVelocity), \
                "The 'veh_ang_vel' field must be a sub message of type 'AngularVelocity'"
        self._veh_ang_vel = value

    @property
    def veh_ang_vel_confidence(self):
        """Message field 'veh_ang_vel_confidence'."""
        return self._veh_ang_vel_confidence

    @veh_ang_vel_confidence.setter
    def veh_ang_vel_confidence(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import AngularVelocityConfidence
            assert \
                isinstance(value, AngularVelocityConfidence), \
                "The 'veh_ang_vel_confidence' field must be a sub message of type 'AngularVelocityConfidence'"
        self._veh_ang_vel_confidence = value

    @property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleSize
            assert \
                isinstance(value, VehicleSize), \
                "The 'size' field must be a sub message of type 'VehicleSize'"
        self._size = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleHeight
            assert \
                isinstance(value, VehicleHeight), \
                "The 'height' field must be a sub message of type 'VehicleHeight'"
        self._height = value

    @property
    def vehicle_size_confidence(self):
        """Message field 'vehicle_size_confidence'."""
        return self._vehicle_size_confidence

    @vehicle_size_confidence.setter
    def vehicle_size_confidence(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import VehicleSizeConfidence
            assert \
                isinstance(value, VehicleSizeConfidence), \
                "The 'vehicle_size_confidence' field must be a sub message of type 'VehicleSizeConfidence'"
        self._vehicle_size_confidence = value

    @property
    def vehicle_class(self):
        """Message field 'vehicle_class'."""
        return self._vehicle_class

    @vehicle_class.setter
    def vehicle_class(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import BasicVehicleClass
            assert \
                isinstance(value, BasicVehicleClass), \
                "The 'vehicle_class' field must be a sub message of type 'BasicVehicleClass'"
        self._vehicle_class = value

    @property
    def class_conf(self):
        """Message field 'class_conf'."""
        return self._class_conf

    @class_conf.setter
    def class_conf(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import ClassificationConfidence
            assert \
                isinstance(value, ClassificationConfidence), \
                "The 'class_conf' field must be a sub message of type 'ClassificationConfidence'"
        self._class_conf = value
