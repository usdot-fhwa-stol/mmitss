# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/DetectedObjectOptionalData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedObjectOptionalData(type):
    """Metaclass of message 'DetectedObjectOptionalData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DET_VEH': 0,
        'DET_VRU': 1,
        'DET_OBST': 2,
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
                'carma_v2x_msgs.msg.DetectedObjectOptionalData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_object_optional_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_object_optional_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_object_optional_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_object_optional_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_object_optional_data

            from carma_v2x_msgs.msg import DetectedObstacleData
            if DetectedObstacleData.__class__._TYPE_SUPPORT is None:
                DetectedObstacleData.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import DetectedVRUData
            if DetectedVRUData.__class__._TYPE_SUPPORT is None:
                DetectedVRUData.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import DetectedVehicleData
            if DetectedVehicleData.__class__._TYPE_SUPPORT is None:
                DetectedVehicleData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DET_VEH': cls.__constants['DET_VEH'],
            'DET_VRU': cls.__constants['DET_VRU'],
            'DET_OBST': cls.__constants['DET_OBST'],
        }

    @property
    def DET_VEH(self):
        """Message constant 'DET_VEH'."""
        return Metaclass_DetectedObjectOptionalData.__constants['DET_VEH']

    @property
    def DET_VRU(self):
        """Message constant 'DET_VRU'."""
        return Metaclass_DetectedObjectOptionalData.__constants['DET_VRU']

    @property
    def DET_OBST(self):
        """Message constant 'DET_OBST'."""
        return Metaclass_DetectedObjectOptionalData.__constants['DET_OBST']


class DetectedObjectOptionalData(metaclass=Metaclass_DetectedObjectOptionalData):
    """
    Message class 'DetectedObjectOptionalData'.

    Constants:
      DET_VEH
      DET_VRU
      DET_OBST
    """

    __slots__ = [
        '_choice',
        '_det_veh',
        '_det_vru',
        '_det_obst',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'det_veh': 'carma_v2x_msgs/DetectedVehicleData',
        'det_vru': 'carma_v2x_msgs/DetectedVRUData',
        'det_obst': 'carma_v2x_msgs/DetectedObstacleData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'DetectedVehicleData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'DetectedVRUData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'DetectedObstacleData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        from carma_v2x_msgs.msg import DetectedVehicleData
        self.det_veh = kwargs.get('det_veh', DetectedVehicleData())
        from carma_v2x_msgs.msg import DetectedVRUData
        self.det_vru = kwargs.get('det_vru', DetectedVRUData())
        from carma_v2x_msgs.msg import DetectedObstacleData
        self.det_obst = kwargs.get('det_obst', DetectedObstacleData())

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
        if self.choice != other.choice:
            return False
        if self.det_veh != other.det_veh:
            return False
        if self.det_vru != other.det_vru:
            return False
        if self.det_obst != other.det_obst:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def choice(self):
        """Message field 'choice'."""
        return self._choice

    @choice.setter
    def choice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'choice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'choice' field must be an unsigned integer in [0, 255]"
        self._choice = value

    @property
    def det_veh(self):
        """Message field 'det_veh'."""
        return self._det_veh

    @det_veh.setter
    def det_veh(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import DetectedVehicleData
            assert \
                isinstance(value, DetectedVehicleData), \
                "The 'det_veh' field must be a sub message of type 'DetectedVehicleData'"
        self._det_veh = value

    @property
    def det_vru(self):
        """Message field 'det_vru'."""
        return self._det_vru

    @det_vru.setter
    def det_vru(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import DetectedVRUData
            assert \
                isinstance(value, DetectedVRUData), \
                "The 'det_vru' field must be a sub message of type 'DetectedVRUData'"
        self._det_vru = value

    @property
    def det_obst(self):
        """Message field 'det_obst'."""
        return self._det_obst

    @det_obst.setter
    def det_obst(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import DetectedObstacleData
            assert \
                isinstance(value, DetectedObstacleData), \
                "The 'det_obst' field must be a sub message of type 'DetectedObstacleData'"
        self._det_obst = value
