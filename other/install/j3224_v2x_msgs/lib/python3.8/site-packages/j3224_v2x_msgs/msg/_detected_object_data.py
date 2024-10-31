# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/DetectedObjectData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedObjectData(type):
    """Metaclass of message 'DetectedObjectData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_DETECTED_OBJECT_OPTIONAL_DATA': 1,
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
                'j3224_v2x_msgs.msg.DetectedObjectData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_object_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_object_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_object_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_object_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_object_data

            from j3224_v2x_msgs.msg import DetectedObjectCommonData
            if DetectedObjectCommonData.__class__._TYPE_SUPPORT is None:
                DetectedObjectCommonData.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import DetectedObjectOptionalData
            if DetectedObjectOptionalData.__class__._TYPE_SUPPORT is None:
                DetectedObjectOptionalData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_DETECTED_OBJECT_OPTIONAL_DATA': cls.__constants['HAS_DETECTED_OBJECT_OPTIONAL_DATA'],
        }

    @property
    def HAS_DETECTED_OBJECT_OPTIONAL_DATA(self):
        """Message constant 'HAS_DETECTED_OBJECT_OPTIONAL_DATA'."""
        return Metaclass_DetectedObjectData.__constants['HAS_DETECTED_OBJECT_OPTIONAL_DATA']


class DetectedObjectData(metaclass=Metaclass_DetectedObjectData):
    """
    Message class 'DetectedObjectData'.

    Constants:
      HAS_DETECTED_OBJECT_OPTIONAL_DATA
    """

    __slots__ = [
        '_detected_object_common_data',
        '_presence_vector',
        '_detected_object_optional_data',
    ]

    _fields_and_field_types = {
        'detected_object_common_data': 'j3224_v2x_msgs/DetectedObjectCommonData',
        'presence_vector': 'uint8',
        'detected_object_optional_data': 'j3224_v2x_msgs/DetectedObjectOptionalData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'DetectedObjectCommonData'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'DetectedObjectOptionalData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j3224_v2x_msgs.msg import DetectedObjectCommonData
        self.detected_object_common_data = kwargs.get('detected_object_common_data', DetectedObjectCommonData())
        self.presence_vector = kwargs.get('presence_vector', int())
        from j3224_v2x_msgs.msg import DetectedObjectOptionalData
        self.detected_object_optional_data = kwargs.get('detected_object_optional_data', DetectedObjectOptionalData())

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
        if self.detected_object_common_data != other.detected_object_common_data:
            return False
        if self.presence_vector != other.presence_vector:
            return False
        if self.detected_object_optional_data != other.detected_object_optional_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def detected_object_common_data(self):
        """Message field 'detected_object_common_data'."""
        return self._detected_object_common_data

    @detected_object_common_data.setter
    def detected_object_common_data(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import DetectedObjectCommonData
            assert \
                isinstance(value, DetectedObjectCommonData), \
                "The 'detected_object_common_data' field must be a sub message of type 'DetectedObjectCommonData'"
        self._detected_object_common_data = value

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
    def detected_object_optional_data(self):
        """Message field 'detected_object_optional_data'."""
        return self._detected_object_optional_data

    @detected_object_optional_data.setter
    def detected_object_optional_data(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import DetectedObjectOptionalData
            assert \
                isinstance(value, DetectedObjectOptionalData), \
                "The 'detected_object_optional_data' field must be a sub message of type 'DetectedObjectOptionalData'"
        self._detected_object_optional_data = value
