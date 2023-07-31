# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PersonalDeviceUserType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PersonalDeviceUserType(type):
    """Metaclass of message 'PersonalDeviceUserType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'A_PEDESTRIAN': 1,
        'A_PEDALCYCLIST': 2,
        'A_PUBLIC_SAFETY_WORKER': 3,
        'AN_ANIMAL': 4,
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
                'j2735_v2x_msgs.msg.PersonalDeviceUserType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__personal_device_user_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__personal_device_user_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__personal_device_user_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__personal_device_user_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__personal_device_user_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'A_PEDESTRIAN': cls.__constants['A_PEDESTRIAN'],
            'A_PEDALCYCLIST': cls.__constants['A_PEDALCYCLIST'],
            'A_PUBLIC_SAFETY_WORKER': cls.__constants['A_PUBLIC_SAFETY_WORKER'],
            'AN_ANIMAL': cls.__constants['AN_ANIMAL'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_PersonalDeviceUserType.__constants['UNAVAILABLE']

    @property
    def A_PEDESTRIAN(self):
        """Message constant 'A_PEDESTRIAN'."""
        return Metaclass_PersonalDeviceUserType.__constants['A_PEDESTRIAN']

    @property
    def A_PEDALCYCLIST(self):
        """Message constant 'A_PEDALCYCLIST'."""
        return Metaclass_PersonalDeviceUserType.__constants['A_PEDALCYCLIST']

    @property
    def A_PUBLIC_SAFETY_WORKER(self):
        """Message constant 'A_PUBLIC_SAFETY_WORKER'."""
        return Metaclass_PersonalDeviceUserType.__constants['A_PUBLIC_SAFETY_WORKER']

    @property
    def AN_ANIMAL(self):
        """Message constant 'AN_ANIMAL'."""
        return Metaclass_PersonalDeviceUserType.__constants['AN_ANIMAL']


class PersonalDeviceUserType(metaclass=Metaclass_PersonalDeviceUserType):
    """
    Message class 'PersonalDeviceUserType'.

    Constants:
      UNAVAILABLE
      A_PEDESTRIAN
      A_PEDALCYCLIST
      A_PUBLIC_SAFETY_WORKER
      AN_ANIMAL
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
