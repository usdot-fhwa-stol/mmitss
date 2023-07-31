# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/DetectedVRUData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedVRUData(type):
    """Metaclass of message 'DetectedVRUData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_BASIC_TYPE': 1,
        'HAS_PROPULSION': 2,
        'HAS_ATTACHMENT': 4,
        'HAS_RADIUS': 8,
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
                'j3224_v2x_msgs.msg.DetectedVRUData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_vru_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_vru_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_vru_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_vru_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_vru_data

            from j2735_v2x_msgs.msg import Attachment
            if Attachment.__class__._TYPE_SUPPORT is None:
                Attachment.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import AttachmentRadius
            if AttachmentRadius.__class__._TYPE_SUPPORT is None:
                AttachmentRadius.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PersonalDeviceUserType
            if PersonalDeviceUserType.__class__._TYPE_SUPPORT is None:
                PersonalDeviceUserType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PropelledInformation
            if PropelledInformation.__class__._TYPE_SUPPORT is None:
                PropelledInformation.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_BASIC_TYPE': cls.__constants['HAS_BASIC_TYPE'],
            'HAS_PROPULSION': cls.__constants['HAS_PROPULSION'],
            'HAS_ATTACHMENT': cls.__constants['HAS_ATTACHMENT'],
            'HAS_RADIUS': cls.__constants['HAS_RADIUS'],
        }

    @property
    def HAS_BASIC_TYPE(self):
        """Message constant 'HAS_BASIC_TYPE'."""
        return Metaclass_DetectedVRUData.__constants['HAS_BASIC_TYPE']

    @property
    def HAS_PROPULSION(self):
        """Message constant 'HAS_PROPULSION'."""
        return Metaclass_DetectedVRUData.__constants['HAS_PROPULSION']

    @property
    def HAS_ATTACHMENT(self):
        """Message constant 'HAS_ATTACHMENT'."""
        return Metaclass_DetectedVRUData.__constants['HAS_ATTACHMENT']

    @property
    def HAS_RADIUS(self):
        """Message constant 'HAS_RADIUS'."""
        return Metaclass_DetectedVRUData.__constants['HAS_RADIUS']


class DetectedVRUData(metaclass=Metaclass_DetectedVRUData):
    """
    Message class 'DetectedVRUData'.

    Constants:
      HAS_BASIC_TYPE
      HAS_PROPULSION
      HAS_ATTACHMENT
      HAS_RADIUS
    """

    __slots__ = [
        '_presence_vector',
        '_basic_type',
        '_propulsion',
        '_attachment',
        '_radius',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint8',
        'basic_type': 'j2735_v2x_msgs/PersonalDeviceUserType',
        'propulsion': 'j2735_v2x_msgs/PropelledInformation',
        'attachment': 'j2735_v2x_msgs/Attachment',
        'radius': 'j2735_v2x_msgs/AttachmentRadius',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PersonalDeviceUserType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PropelledInformation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Attachment'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AttachmentRadius'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import PersonalDeviceUserType
        self.basic_type = kwargs.get('basic_type', PersonalDeviceUserType())
        from j2735_v2x_msgs.msg import PropelledInformation
        self.propulsion = kwargs.get('propulsion', PropelledInformation())
        from j2735_v2x_msgs.msg import Attachment
        self.attachment = kwargs.get('attachment', Attachment())
        from j2735_v2x_msgs.msg import AttachmentRadius
        self.radius = kwargs.get('radius', AttachmentRadius())

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
        if self.basic_type != other.basic_type:
            return False
        if self.propulsion != other.propulsion:
            return False
        if self.attachment != other.attachment:
            return False
        if self.radius != other.radius:
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
            assert value >= 0 and value < 256, \
                "The 'presence_vector' field must be an unsigned integer in [0, 255]"
        self._presence_vector = value

    @property
    def basic_type(self):
        """Message field 'basic_type'."""
        return self._basic_type

    @basic_type.setter
    def basic_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PersonalDeviceUserType
            assert \
                isinstance(value, PersonalDeviceUserType), \
                "The 'basic_type' field must be a sub message of type 'PersonalDeviceUserType'"
        self._basic_type = value

    @property
    def propulsion(self):
        """Message field 'propulsion'."""
        return self._propulsion

    @propulsion.setter
    def propulsion(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PropelledInformation
            assert \
                isinstance(value, PropelledInformation), \
                "The 'propulsion' field must be a sub message of type 'PropelledInformation'"
        self._propulsion = value

    @property
    def attachment(self):
        """Message field 'attachment'."""
        return self._attachment

    @attachment.setter
    def attachment(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Attachment
            assert \
                isinstance(value, Attachment), \
                "The 'attachment' field must be a sub message of type 'Attachment'"
        self._attachment = value

    @property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AttachmentRadius
            assert \
                isinstance(value, AttachmentRadius), \
                "The 'radius' field must be a sub message of type 'AttachmentRadius'"
        self._radius = value
