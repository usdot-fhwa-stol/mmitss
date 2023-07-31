# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/LaneChangeStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneChangeStatus(type):
    """Metaclass of message 'LaneChangeStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PLAN_SENT': 1,
        'REQUEST_RECEIVED': 2,
        'REQUEST_ACCEPTED': 3,
        'REQUEST_REJECTED': 4,
        'RESPONSE_SENT': 5,
        'ACCEPTANCE_RECEIVED': 6,
        'REJECTION_RECEIVED': 7,
        'OTHER_RECEIVED': 8,
        'PLANNING_SUCCESS': 9,
        'TIMED_OUT': 10,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_planning_msgs.msg.LaneChangeStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_change_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_change_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_change_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_change_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_change_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PLAN_SENT': cls.__constants['PLAN_SENT'],
            'REQUEST_RECEIVED': cls.__constants['REQUEST_RECEIVED'],
            'REQUEST_ACCEPTED': cls.__constants['REQUEST_ACCEPTED'],
            'REQUEST_REJECTED': cls.__constants['REQUEST_REJECTED'],
            'RESPONSE_SENT': cls.__constants['RESPONSE_SENT'],
            'ACCEPTANCE_RECEIVED': cls.__constants['ACCEPTANCE_RECEIVED'],
            'REJECTION_RECEIVED': cls.__constants['REJECTION_RECEIVED'],
            'OTHER_RECEIVED': cls.__constants['OTHER_RECEIVED'],
            'PLANNING_SUCCESS': cls.__constants['PLANNING_SUCCESS'],
            'TIMED_OUT': cls.__constants['TIMED_OUT'],
        }

    @property
    def PLAN_SENT(self):
        """Message constant 'PLAN_SENT'."""
        return Metaclass_LaneChangeStatus.__constants['PLAN_SENT']

    @property
    def REQUEST_RECEIVED(self):
        """Message constant 'REQUEST_RECEIVED'."""
        return Metaclass_LaneChangeStatus.__constants['REQUEST_RECEIVED']

    @property
    def REQUEST_ACCEPTED(self):
        """Message constant 'REQUEST_ACCEPTED'."""
        return Metaclass_LaneChangeStatus.__constants['REQUEST_ACCEPTED']

    @property
    def REQUEST_REJECTED(self):
        """Message constant 'REQUEST_REJECTED'."""
        return Metaclass_LaneChangeStatus.__constants['REQUEST_REJECTED']

    @property
    def RESPONSE_SENT(self):
        """Message constant 'RESPONSE_SENT'."""
        return Metaclass_LaneChangeStatus.__constants['RESPONSE_SENT']

    @property
    def ACCEPTANCE_RECEIVED(self):
        """Message constant 'ACCEPTANCE_RECEIVED'."""
        return Metaclass_LaneChangeStatus.__constants['ACCEPTANCE_RECEIVED']

    @property
    def REJECTION_RECEIVED(self):
        """Message constant 'REJECTION_RECEIVED'."""
        return Metaclass_LaneChangeStatus.__constants['REJECTION_RECEIVED']

    @property
    def OTHER_RECEIVED(self):
        """Message constant 'OTHER_RECEIVED'."""
        return Metaclass_LaneChangeStatus.__constants['OTHER_RECEIVED']

    @property
    def PLANNING_SUCCESS(self):
        """Message constant 'PLANNING_SUCCESS'."""
        return Metaclass_LaneChangeStatus.__constants['PLANNING_SUCCESS']

    @property
    def TIMED_OUT(self):
        """Message constant 'TIMED_OUT'."""
        return Metaclass_LaneChangeStatus.__constants['TIMED_OUT']


class LaneChangeStatus(metaclass=Metaclass_LaneChangeStatus):
    """
    Message class 'LaneChangeStatus'.

    Constants:
      PLAN_SENT
      REQUEST_RECEIVED
      REQUEST_ACCEPTED
      REQUEST_REJECTED
      RESPONSE_SENT
      ACCEPTANCE_RECEIVED
      REJECTION_RECEIVED
      OTHER_RECEIVED
      PLANNING_SUCCESS
      TIMED_OUT
    """

    __slots__ = [
        '_status',
        '_description',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
        'description': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        self.description = kwargs.get('description', str())

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
        if self.status != other.status:
            return False
        if self.description != other.description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value
