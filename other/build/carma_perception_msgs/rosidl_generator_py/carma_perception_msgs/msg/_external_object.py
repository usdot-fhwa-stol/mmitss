# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_perception_msgs:msg/ExternalObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'bsm_id'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExternalObject(type):
    """Metaclass of message 'ExternalObject'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ID_PRESENCE_VECTOR': 1,
        'POSE_PRESENCE_VECTOR': 2,
        'VELOCITY_PRESENCE_VECTOR': 4,
        'VELOCITY_INST_PRESENCE_VECTOR': 8,
        'SIZE_PRESENCE_VECTOR': 16,
        'CONFIDENCE_PRESENCE_VECTOR': 32,
        'OBJECT_TYPE_PRESENCE_VECTOR': 64,
        'BSM_ID_PRESENCE_VECTOR': 128,
        'DYNAMIC_OBJ_PRESENCE': 256,
        'PREDICTION_PRESENCE_VECTOR': 512,
        'UNKNOWN': 0,
        'SMALL_VEHICLE': 1,
        'LARGE_VEHICLE': 2,
        'MOTORCYCLE': 3,
        'PEDESTRIAN': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_perception_msgs.msg.ExternalObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__external_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__external_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__external_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__external_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__external_object

            from carma_perception_msgs.msg import PredictedState
            if PredictedState.__class__._TYPE_SUPPORT is None:
                PredictedState.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ID_PRESENCE_VECTOR': cls.__constants['ID_PRESENCE_VECTOR'],
            'POSE_PRESENCE_VECTOR': cls.__constants['POSE_PRESENCE_VECTOR'],
            'VELOCITY_PRESENCE_VECTOR': cls.__constants['VELOCITY_PRESENCE_VECTOR'],
            'VELOCITY_INST_PRESENCE_VECTOR': cls.__constants['VELOCITY_INST_PRESENCE_VECTOR'],
            'SIZE_PRESENCE_VECTOR': cls.__constants['SIZE_PRESENCE_VECTOR'],
            'CONFIDENCE_PRESENCE_VECTOR': cls.__constants['CONFIDENCE_PRESENCE_VECTOR'],
            'OBJECT_TYPE_PRESENCE_VECTOR': cls.__constants['OBJECT_TYPE_PRESENCE_VECTOR'],
            'BSM_ID_PRESENCE_VECTOR': cls.__constants['BSM_ID_PRESENCE_VECTOR'],
            'DYNAMIC_OBJ_PRESENCE': cls.__constants['DYNAMIC_OBJ_PRESENCE'],
            'PREDICTION_PRESENCE_VECTOR': cls.__constants['PREDICTION_PRESENCE_VECTOR'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'SMALL_VEHICLE': cls.__constants['SMALL_VEHICLE'],
            'LARGE_VEHICLE': cls.__constants['LARGE_VEHICLE'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
        }

    @property
    def ID_PRESENCE_VECTOR(self):
        """Message constant 'ID_PRESENCE_VECTOR'."""
        return Metaclass_ExternalObject.__constants['ID_PRESENCE_VECTOR']

    @property
    def POSE_PRESENCE_VECTOR(self):
        """Message constant 'POSE_PRESENCE_VECTOR'."""
        return Metaclass_ExternalObject.__constants['POSE_PRESENCE_VECTOR']

    @property
    def VELOCITY_PRESENCE_VECTOR(self):
        """Message constant 'VELOCITY_PRESENCE_VECTOR'."""
        return Metaclass_ExternalObject.__constants['VELOCITY_PRESENCE_VECTOR']

    @property
    def VELOCITY_INST_PRESENCE_VECTOR(self):
        """Message constant 'VELOCITY_INST_PRESENCE_VECTOR'."""
        return Metaclass_ExternalObject.__constants['VELOCITY_INST_PRESENCE_VECTOR']

    @property
    def SIZE_PRESENCE_VECTOR(self):
        """Message constant 'SIZE_PRESENCE_VECTOR'."""
        return Metaclass_ExternalObject.__constants['SIZE_PRESENCE_VECTOR']

    @property
    def CONFIDENCE_PRESENCE_VECTOR(self):
        """Message constant 'CONFIDENCE_PRESENCE_VECTOR'."""
        return Metaclass_ExternalObject.__constants['CONFIDENCE_PRESENCE_VECTOR']

    @property
    def OBJECT_TYPE_PRESENCE_VECTOR(self):
        """Message constant 'OBJECT_TYPE_PRESENCE_VECTOR'."""
        return Metaclass_ExternalObject.__constants['OBJECT_TYPE_PRESENCE_VECTOR']

    @property
    def BSM_ID_PRESENCE_VECTOR(self):
        """Message constant 'BSM_ID_PRESENCE_VECTOR'."""
        return Metaclass_ExternalObject.__constants['BSM_ID_PRESENCE_VECTOR']

    @property
    def DYNAMIC_OBJ_PRESENCE(self):
        """Message constant 'DYNAMIC_OBJ_PRESENCE'."""
        return Metaclass_ExternalObject.__constants['DYNAMIC_OBJ_PRESENCE']

    @property
    def PREDICTION_PRESENCE_VECTOR(self):
        """Message constant 'PREDICTION_PRESENCE_VECTOR'."""
        return Metaclass_ExternalObject.__constants['PREDICTION_PRESENCE_VECTOR']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_ExternalObject.__constants['UNKNOWN']

    @property
    def SMALL_VEHICLE(self):
        """Message constant 'SMALL_VEHICLE'."""
        return Metaclass_ExternalObject.__constants['SMALL_VEHICLE']

    @property
    def LARGE_VEHICLE(self):
        """Message constant 'LARGE_VEHICLE'."""
        return Metaclass_ExternalObject.__constants['LARGE_VEHICLE']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_ExternalObject.__constants['MOTORCYCLE']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_ExternalObject.__constants['PEDESTRIAN']


class ExternalObject(metaclass=Metaclass_ExternalObject):
    """
    Message class 'ExternalObject'.

    Constants:
      ID_PRESENCE_VECTOR
      POSE_PRESENCE_VECTOR
      VELOCITY_PRESENCE_VECTOR
      VELOCITY_INST_PRESENCE_VECTOR
      SIZE_PRESENCE_VECTOR
      CONFIDENCE_PRESENCE_VECTOR
      OBJECT_TYPE_PRESENCE_VECTOR
      BSM_ID_PRESENCE_VECTOR
      DYNAMIC_OBJ_PRESENCE
      PREDICTION_PRESENCE_VECTOR
      UNKNOWN
      SMALL_VEHICLE
      LARGE_VEHICLE
      MOTORCYCLE
      PEDESTRIAN
    """

    __slots__ = [
        '_header',
        '_presence_vector',
        '_id',
        '_bsm_id',
        '_pose',
        '_velocity',
        '_velocity_inst',
        '_size',
        '_confidence',
        '_object_type',
        '_dynamic_obj',
        '_predictions',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'presence_vector': 'uint16',
        'id': 'uint32',
        'bsm_id': 'sequence<uint8>',
        'pose': 'geometry_msgs/PoseWithCovariance',
        'velocity': 'geometry_msgs/TwistWithCovariance',
        'velocity_inst': 'geometry_msgs/TwistWithCovariance',
        'size': 'geometry_msgs/Vector3',
        'confidence': 'double',
        'object_type': 'uint8',
        'dynamic_obj': 'boolean',
        'predictions': 'sequence<carma_perception_msgs/PredictedState>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_perception_msgs', 'msg'], 'PredictedState')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.presence_vector = kwargs.get('presence_vector', int())
        self.id = kwargs.get('id', int())
        self.bsm_id = array.array('B', kwargs.get('bsm_id', []))
        from geometry_msgs.msg import PoseWithCovariance
        self.pose = kwargs.get('pose', PoseWithCovariance())
        from geometry_msgs.msg import TwistWithCovariance
        self.velocity = kwargs.get('velocity', TwistWithCovariance())
        from geometry_msgs.msg import TwistWithCovariance
        self.velocity_inst = kwargs.get('velocity_inst', TwistWithCovariance())
        from geometry_msgs.msg import Vector3
        self.size = kwargs.get('size', Vector3())
        self.confidence = kwargs.get('confidence', float())
        self.object_type = kwargs.get('object_type', int())
        self.dynamic_obj = kwargs.get('dynamic_obj', bool())
        self.predictions = kwargs.get('predictions', [])

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
        if self.header != other.header:
            return False
        if self.presence_vector != other.presence_vector:
            return False
        if self.id != other.id:
            return False
        if self.bsm_id != other.bsm_id:
            return False
        if self.pose != other.pose:
            return False
        if self.velocity != other.velocity:
            return False
        if self.velocity_inst != other.velocity_inst:
            return False
        if self.size != other.size:
            return False
        if self.confidence != other.confidence:
            return False
        if self.object_type != other.object_type:
            return False
        if self.dynamic_obj != other.dynamic_obj:
            return False
        if self.predictions != other.predictions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

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

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @property
    def bsm_id(self):
        """Message field 'bsm_id'."""
        return self._bsm_id

    @bsm_id.setter
    def bsm_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'bsm_id' array.array() must have the type code of 'B'"
            self._bsm_id = value
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
                "The 'bsm_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._bsm_id = array.array('B', value)

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'pose' field must be a sub message of type 'PoseWithCovariance'"
        self._pose = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'velocity' field must be a sub message of type 'TwistWithCovariance'"
        self._velocity = value

    @property
    def velocity_inst(self):
        """Message field 'velocity_inst'."""
        return self._velocity_inst

    @velocity_inst.setter
    def velocity_inst(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'velocity_inst' field must be a sub message of type 'TwistWithCovariance'"
        self._velocity_inst = value

    @property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'size' field must be a sub message of type 'Vector3'"
        self._size = value

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
        self._confidence = value

    @property
    def object_type(self):
        """Message field 'object_type'."""
        return self._object_type

    @object_type.setter
    def object_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_type' field must be an unsigned integer in [0, 255]"
        self._object_type = value

    @property
    def dynamic_obj(self):
        """Message field 'dynamic_obj'."""
        return self._dynamic_obj

    @dynamic_obj.setter
    def dynamic_obj(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dynamic_obj' field must be of type 'bool'"
        self._dynamic_obj = value

    @property
    def predictions(self):
        """Message field 'predictions'."""
        return self._predictions

    @predictions.setter
    def predictions(self, value):
        if __debug__:
            from carma_perception_msgs.msg import PredictedState
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
                 all(isinstance(v, PredictedState) for v in value) and
                 True), \
                "The 'predictions' field must be a set or sequence and each value of type 'PredictedState'"
        self._predictions = value
