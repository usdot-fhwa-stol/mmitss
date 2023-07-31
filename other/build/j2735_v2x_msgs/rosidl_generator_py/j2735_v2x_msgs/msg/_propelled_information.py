# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PropelledInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PropelledInformation(type):
    """Metaclass of message 'PropelledInformation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CHOICE_HUMAN': 0,
        'CHOICE_ANIMAL': 1,
        'CHOICE_MOTOR': 2,
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
                'j2735_v2x_msgs.msg.PropelledInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__propelled_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__propelled_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__propelled_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__propelled_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__propelled_information

            from j2735_v2x_msgs.msg import AnimalPropelledType
            if AnimalPropelledType.__class__._TYPE_SUPPORT is None:
                AnimalPropelledType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import HumanPropelledType
            if HumanPropelledType.__class__._TYPE_SUPPORT is None:
                HumanPropelledType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import MotorizedPropelledType
            if MotorizedPropelledType.__class__._TYPE_SUPPORT is None:
                MotorizedPropelledType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CHOICE_HUMAN': cls.__constants['CHOICE_HUMAN'],
            'CHOICE_ANIMAL': cls.__constants['CHOICE_ANIMAL'],
            'CHOICE_MOTOR': cls.__constants['CHOICE_MOTOR'],
        }

    @property
    def CHOICE_HUMAN(self):
        """Message constant 'CHOICE_HUMAN'."""
        return Metaclass_PropelledInformation.__constants['CHOICE_HUMAN']

    @property
    def CHOICE_ANIMAL(self):
        """Message constant 'CHOICE_ANIMAL'."""
        return Metaclass_PropelledInformation.__constants['CHOICE_ANIMAL']

    @property
    def CHOICE_MOTOR(self):
        """Message constant 'CHOICE_MOTOR'."""
        return Metaclass_PropelledInformation.__constants['CHOICE_MOTOR']


class PropelledInformation(metaclass=Metaclass_PropelledInformation):
    """
    Message class 'PropelledInformation'.

    Constants:
      CHOICE_HUMAN
      CHOICE_ANIMAL
      CHOICE_MOTOR
    """

    __slots__ = [
        '_choice',
        '_human',
        '_animal',
        '_motor',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'human': 'j2735_v2x_msgs/HumanPropelledType',
        'animal': 'j2735_v2x_msgs/AnimalPropelledType',
        'motor': 'j2735_v2x_msgs/MotorizedPropelledType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'HumanPropelledType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AnimalPropelledType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'MotorizedPropelledType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        from j2735_v2x_msgs.msg import HumanPropelledType
        self.human = kwargs.get('human', HumanPropelledType())
        from j2735_v2x_msgs.msg import AnimalPropelledType
        self.animal = kwargs.get('animal', AnimalPropelledType())
        from j2735_v2x_msgs.msg import MotorizedPropelledType
        self.motor = kwargs.get('motor', MotorizedPropelledType())

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
        if self.human != other.human:
            return False
        if self.animal != other.animal:
            return False
        if self.motor != other.motor:
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
    def human(self):
        """Message field 'human'."""
        return self._human

    @human.setter
    def human(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import HumanPropelledType
            assert \
                isinstance(value, HumanPropelledType), \
                "The 'human' field must be a sub message of type 'HumanPropelledType'"
        self._human = value

    @property
    def animal(self):
        """Message field 'animal'."""
        return self._animal

    @animal.setter
    def animal(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AnimalPropelledType
            assert \
                isinstance(value, AnimalPropelledType), \
                "The 'animal' field must be a sub message of type 'AnimalPropelledType'"
        self._animal = value

    @property
    def motor(self):
        """Message field 'motor'."""
        return self._motor

    @motor.setter
    def motor(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import MotorizedPropelledType
            assert \
                isinstance(value, MotorizedPropelledType), \
                "The 'motor' field must be a sub message of type 'MotorizedPropelledType'"
        self._motor = value
