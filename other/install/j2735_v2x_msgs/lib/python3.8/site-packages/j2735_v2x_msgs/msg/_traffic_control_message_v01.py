# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficControlMessageV01(type):
    """Metaclass of message 'TrafficControlMessageV01'."""

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
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.TrafficControlMessageV01')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_control_message_v01
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_control_message_v01
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_control_message_v01
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_control_message_v01
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_control_message_v01

            from j2735_v2x_msgs.msg import Id128b
            if Id128b.__class__._TYPE_SUPPORT is None:
                Id128b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Id64b
            if Id64b.__class__._TYPE_SUPPORT is None:
                Id64b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrafficControlGeometry
            if TrafficControlGeometry.__class__._TYPE_SUPPORT is None:
                TrafficControlGeometry.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrafficControlPackage
            if TrafficControlPackage.__class__._TYPE_SUPPORT is None:
                TrafficControlPackage.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrafficControlParams
            if TrafficControlParams.__class__._TYPE_SUPPORT is None:
                TrafficControlParams.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficControlMessageV01(metaclass=Metaclass_TrafficControlMessageV01):
    """Message class 'TrafficControlMessageV01'."""

    __slots__ = [
        '_reqid',
        '_reqseq',
        '_msgtot',
        '_msgnum',
        '_id',
        '_updated',
        '_package',
        '_package_exists',
        '_params',
        '_params_exists',
        '_geometry',
        '_geometry_exists',
    ]

    _fields_and_field_types = {
        'reqid': 'j2735_v2x_msgs/Id64b',
        'reqseq': 'uint8',
        'msgtot': 'uint16',
        'msgnum': 'uint16',
        'id': 'j2735_v2x_msgs/Id128b',
        'updated': 'uint64',
        'package': 'j2735_v2x_msgs/TrafficControlPackage',
        'package_exists': 'boolean',
        'params': 'j2735_v2x_msgs/TrafficControlParams',
        'params_exists': 'boolean',
        'geometry': 'j2735_v2x_msgs/TrafficControlGeometry',
        'geometry_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Id64b'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Id128b'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrafficControlPackage'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrafficControlParams'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrafficControlGeometry'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import Id64b
        self.reqid = kwargs.get('reqid', Id64b())
        self.reqseq = kwargs.get('reqseq', int())
        self.msgtot = kwargs.get('msgtot', int())
        self.msgnum = kwargs.get('msgnum', int())
        from j2735_v2x_msgs.msg import Id128b
        self.id = kwargs.get('id', Id128b())
        self.updated = kwargs.get('updated', int())
        from j2735_v2x_msgs.msg import TrafficControlPackage
        self.package = kwargs.get('package', TrafficControlPackage())
        self.package_exists = kwargs.get('package_exists', bool())
        from j2735_v2x_msgs.msg import TrafficControlParams
        self.params = kwargs.get('params', TrafficControlParams())
        self.params_exists = kwargs.get('params_exists', bool())
        from j2735_v2x_msgs.msg import TrafficControlGeometry
        self.geometry = kwargs.get('geometry', TrafficControlGeometry())
        self.geometry_exists = kwargs.get('geometry_exists', bool())

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
        if self.reqid != other.reqid:
            return False
        if self.reqseq != other.reqseq:
            return False
        if self.msgtot != other.msgtot:
            return False
        if self.msgnum != other.msgnum:
            return False
        if self.id != other.id:
            return False
        if self.updated != other.updated:
            return False
        if self.package != other.package:
            return False
        if self.package_exists != other.package_exists:
            return False
        if self.params != other.params:
            return False
        if self.params_exists != other.params_exists:
            return False
        if self.geometry != other.geometry:
            return False
        if self.geometry_exists != other.geometry_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def reqid(self):
        """Message field 'reqid'."""
        return self._reqid

    @reqid.setter
    def reqid(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Id64b
            assert \
                isinstance(value, Id64b), \
                "The 'reqid' field must be a sub message of type 'Id64b'"
        self._reqid = value

    @property
    def reqseq(self):
        """Message field 'reqseq'."""
        return self._reqseq

    @reqseq.setter
    def reqseq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reqseq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reqseq' field must be an unsigned integer in [0, 255]"
        self._reqseq = value

    @property
    def msgtot(self):
        """Message field 'msgtot'."""
        return self._msgtot

    @msgtot.setter
    def msgtot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgtot' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'msgtot' field must be an unsigned integer in [0, 65535]"
        self._msgtot = value

    @property
    def msgnum(self):
        """Message field 'msgnum'."""
        return self._msgnum

    @msgnum.setter
    def msgnum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgnum' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'msgnum' field must be an unsigned integer in [0, 65535]"
        self._msgnum = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from j2735_v2x_msgs.msg import Id128b
            assert \
                isinstance(value, Id128b), \
                "The 'id' field must be a sub message of type 'Id128b'"
        self._id = value

    @property
    def updated(self):
        """Message field 'updated'."""
        return self._updated

    @updated.setter
    def updated(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'updated' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'updated' field must be an unsigned integer in [0, 18446744073709551615]"
        self._updated = value

    @property
    def package(self):
        """Message field 'package'."""
        return self._package

    @package.setter
    def package(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrafficControlPackage
            assert \
                isinstance(value, TrafficControlPackage), \
                "The 'package' field must be a sub message of type 'TrafficControlPackage'"
        self._package = value

    @property
    def package_exists(self):
        """Message field 'package_exists'."""
        return self._package_exists

    @package_exists.setter
    def package_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'package_exists' field must be of type 'bool'"
        self._package_exists = value

    @property
    def params(self):
        """Message field 'params'."""
        return self._params

    @params.setter
    def params(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrafficControlParams
            assert \
                isinstance(value, TrafficControlParams), \
                "The 'params' field must be a sub message of type 'TrafficControlParams'"
        self._params = value

    @property
    def params_exists(self):
        """Message field 'params_exists'."""
        return self._params_exists

    @params_exists.setter
    def params_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'params_exists' field must be of type 'bool'"
        self._params_exists = value

    @property
    def geometry(self):
        """Message field 'geometry'."""
        return self._geometry

    @geometry.setter
    def geometry(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrafficControlGeometry
            assert \
                isinstance(value, TrafficControlGeometry), \
                "The 'geometry' field must be a sub message of type 'TrafficControlGeometry'"
        self._geometry = value

    @property
    def geometry_exists(self):
        """Message field 'geometry_exists'."""
        return self._geometry_exists

    @geometry_exists.setter
    def geometry_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'geometry_exists' field must be of type 'bool'"
        self._geometry_exists = value
