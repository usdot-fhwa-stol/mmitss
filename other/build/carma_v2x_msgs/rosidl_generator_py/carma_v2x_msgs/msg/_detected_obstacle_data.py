# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/DetectedObstacleData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedObstacleData(type):
    """Metaclass of message 'DetectedObstacleData'."""

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
            module = import_type_support('carma_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_v2x_msgs.msg.DetectedObstacleData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_obstacle_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_obstacle_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_obstacle_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_obstacle_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_obstacle_data

            from carma_v2x_msgs.msg import ObstacleSize
            if ObstacleSize.__class__._TYPE_SUPPORT is None:
                ObstacleSize.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import ObstacleSizeConfidence
            if ObstacleSizeConfidence.__class__._TYPE_SUPPORT is None:
                ObstacleSizeConfidence.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectedObstacleData(metaclass=Metaclass_DetectedObstacleData):
    """Message class 'DetectedObstacleData'."""

    __slots__ = [
        '_obst_size',
        '_obst_size_confidence',
    ]

    _fields_and_field_types = {
        'obst_size': 'carma_v2x_msgs/ObstacleSize',
        'obst_size_confidence': 'j3224_v2x_msgs/ObstacleSizeConfidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'ObstacleSize'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'ObstacleSizeConfidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_v2x_msgs.msg import ObstacleSize
        self.obst_size = kwargs.get('obst_size', ObstacleSize())
        from j3224_v2x_msgs.msg import ObstacleSizeConfidence
        self.obst_size_confidence = kwargs.get('obst_size_confidence', ObstacleSizeConfidence())

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
        if self.obst_size != other.obst_size:
            return False
        if self.obst_size_confidence != other.obst_size_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def obst_size(self):
        """Message field 'obst_size'."""
        return self._obst_size

    @obst_size.setter
    def obst_size(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import ObstacleSize
            assert \
                isinstance(value, ObstacleSize), \
                "The 'obst_size' field must be a sub message of type 'ObstacleSize'"
        self._obst_size = value

    @property
    def obst_size_confidence(self):
        """Message field 'obst_size_confidence'."""
        return self._obst_size_confidence

    @obst_size_confidence.setter
    def obst_size_confidence(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import ObstacleSizeConfidence
            assert \
                isinstance(value, ObstacleSizeConfidence), \
                "The 'obst_size_confidence' field must be a sub message of type 'ObstacleSizeConfidence'"
        self._obst_size_confidence = value
