# AUTOGENERATED. Run generator/main.py to regenerate
"""
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ] [  12  ] [  13  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- id
-------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- doKick
-------- -------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- doChip
-------- -------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- doForce
-------- -------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- useCameraAngle
-------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- rho
-------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- theta
-------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- angle
-------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- angularVelocity
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- cameraAngle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 111----- dribbler
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ---111-- kickChipPower
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ------1- angularControl
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------1 feedback
"""

import numpy as np
from . import BaseTypes



class RobotCommand:
    header = 0                # integer [0, 255]             Header byte indicating the type of packet
    remVersion = 0            # integer [0, 15]              Version of roboteam_embedded_messages
    id = 0                    # integer [0, 15]              Id of the robot
    messageId = 0             # integer [0, 15]              Id of the message
    doKick = 0                # integer [0, 1]               Do a kick if ballsensor
    doChip = 0                # integer [0, 1]               Do a chip if ballsensor
    doForce = 0               # integer [0, 1]               Do regardless of ballsensor
    useCameraAngle = 0        # integer [0, 1]               Use the info in 'cameraAngle'
    rho = 0                   # float   [0.000, 8.000]       Magnitude of movement (m/s)
    theta = 0                 # float   [-3.142, 3.142]      Direction of movement (radians)
    angle = 0                 # float   [-3.142, 3.142]      Absolute angle (rad)
    angularVelocity = 0       # float   [-12.566, 12.566]    Angular velocity (rad/s)
    cameraAngle = 0           # float   [-3.142, 3.142]      Angle of the robot as seen by camera (rad)
    dribbler = 0              # float   [0.000, 1.000]       Dribbler speed
    kickChipPower = 0         # float   [0.000, 6.500]       Speed of the ball in m/s
    angularControl = 0        # integer [0, 1]               NOT IMPLEMENTED IN ROBOT YET. 0 = angular velocity, 1 = absolute angle
    feedback = 0              # integer [0, 1]               Ignore the packet. Just send feedback



# ================================ GETTERS ================================
    @staticmethod
    def get_header(payload):
        return ((payload[0]));

    @staticmethod
    def get_remVersion(payload):
        return ((payload[1] & 0b11110000) >> 4);

    @staticmethod
    def get_id(payload):
        return ((payload[1] & 0b00001111));

    @staticmethod
    def get_messageId(payload):
        return ((payload[2] & 0b11110000) >> 4);

    @staticmethod
    def get_doKick(payload):
        return (payload[2] & 0b00001000) > 0;

    @staticmethod
    def get_doChip(payload):
        return (payload[2] & 0b00000100) > 0;

    @staticmethod
    def get_doForce(payload):
        return (payload[2] & 0b00000010) > 0;

    @staticmethod
    def get_useCameraAngle(payload):
        return (payload[2] & 0b00000001) > 0;

    @staticmethod
    def get_rho(payload):
        _rho = ((payload[3]) << 8) | ((payload[4]));
        return (_rho * 0.0001220721751736) + 0.0000000000000000;

    @staticmethod
    def get_theta(payload):
        _theta = ((payload[5]) << 8) | ((payload[6]));
        return (_theta * 0.0000958752621833) + -3.1415926535897931;

    @staticmethod
    def get_angle(payload):
        _angle = ((payload[7]) << 8) | ((payload[8]));
        return (_angle * 0.0000958752621833) + -3.1415926535897931;

    @staticmethod
    def get_angularVelocity(payload):
        _angularVelocity = ((payload[9]) << 8) | ((payload[10]));
        return (_angularVelocity * 0.0003835010487330) + -12.5663706143591725;

    @staticmethod
    def get_cameraAngle(payload):
        _cameraAngle = ((payload[11]) << 8) | ((payload[12]));
        return (_cameraAngle * 0.0000958752621833) + -3.1415926535897931;

    @staticmethod
    def get_dribbler(payload):
        _dribbler = ((payload[13] & 0b11100000) >> 5);
        return (_dribbler * 0.1428571428571428) + 0.0000000000000000;

    @staticmethod
    def get_kickChipPower(payload):
        _kickChipPower = ((payload[13] & 0b00011100) >> 2);
        return (_kickChipPower * 0.9285714285714286) + 0.0000000000000000;

    @staticmethod
    def get_angularControl(payload):
        return (payload[13] & 0b00000010) > 0;

    @staticmethod
    def get_feedback(payload):
        return (payload[13] & 0b00000001) > 0;

# ================================ SETTERS ================================
    @staticmethod
    def set_header(payload, header):
        payload[0] = header;

    @staticmethod
    def set_remVersion(payload, remVersion):
        payload[1] = ((remVersion << 4) & 0b11110000) | (payload[1] & 0b00001111);

    @staticmethod
    def set_id(payload, id):
        payload[1] = (id & 0b00001111) | (payload[1] & 0b11110000);

    @staticmethod
    def set_messageId(payload, messageId):
        payload[2] = ((messageId << 4) & 0b11110000) | (payload[2] & 0b00001111);

    @staticmethod
    def set_doKick(payload, doKick):
        payload[2] = ((doKick << 3) & 0b00001000) | (payload[2] & 0b11110111);

    @staticmethod
    def set_doChip(payload, doChip):
        payload[2] = ((doChip << 2) & 0b00000100) | (payload[2] & 0b11111011);

    @staticmethod
    def set_doForce(payload, doForce):
        payload[2] = ((doForce << 1) & 0b00000010) | (payload[2] & 0b11111101);

    @staticmethod
    def set_useCameraAngle(payload, useCameraAngle):
        payload[2] = (useCameraAngle & 0b00000001) | (payload[2] & 0b11111110);

    @staticmethod
    def set_rho(payload, rho):
        _rho = int(rho / 0.0001220721751736);
        payload[3] = (_rho >> 8);
        payload[4] = _rho;

    @staticmethod
    def set_theta(payload, theta):
        _theta = int((theta +3.1415926535897931) / 0.0000958752621833);
        payload[5] = (_theta >> 8);
        payload[6] = _theta;

    @staticmethod
    def set_angle(payload, angle):
        _angle = int((angle +3.1415926535897931) / 0.0000958752621833);
        payload[7] = (_angle >> 8);
        payload[8] = _angle;

    @staticmethod
    def set_angularVelocity(payload, angularVelocity):
        _angularVelocity = int((angularVelocity +12.5663706143591725) / 0.0003835010487330);
        payload[9] = (_angularVelocity >> 8);
        payload[10] = _angularVelocity;

    @staticmethod
    def set_cameraAngle(payload, cameraAngle):
        _cameraAngle = int((cameraAngle +3.1415926535897931) / 0.0000958752621833);
        payload[11] = (_cameraAngle >> 8);
        payload[12] = _cameraAngle;

    @staticmethod
    def set_dribbler(payload, dribbler):
        _dribbler = int(dribbler / 0.1428571428571428);
        payload[13] = ((_dribbler << 5) & 0b11100000) | (payload[13] & 0b00011111);

    @staticmethod
    def set_kickChipPower(payload, kickChipPower):
        _kickChipPower = int(kickChipPower / 0.9285714285714286);
        payload[13] = ((_kickChipPower << 2) & 0b00011100) | (payload[13] & 0b11100011);

    @staticmethod
    def set_angularControl(payload, angularControl):
        payload[13] = ((angularControl << 1) & 0b00000010) | (payload[13] & 0b11111101);

    @staticmethod
    def set_feedback(payload, feedback):
        payload[13] = (feedback & 0b00000001) | (payload[13] & 0b11111110);

# ================================ ENCODE ================================
    def encode(self):
        payload = np.zeros(BaseTypes.PACKET_SIZE_ROBOT_COMMAND, dtype=np.uint8)
        RobotCommand.set_header              (payload, self.header)
        RobotCommand.set_remVersion          (payload, self.remVersion)
        RobotCommand.set_id                  (payload, self.id)
        RobotCommand.set_messageId           (payload, self.messageId)
        RobotCommand.set_doKick              (payload, self.doKick)
        RobotCommand.set_doChip              (payload, self.doChip)
        RobotCommand.set_doForce             (payload, self.doForce)
        RobotCommand.set_useCameraAngle      (payload, self.useCameraAngle)
        RobotCommand.set_rho                 (payload, self.rho)
        RobotCommand.set_theta               (payload, self.theta)
        RobotCommand.set_angle               (payload, self.angle)
        RobotCommand.set_angularVelocity     (payload, self.angularVelocity)
        RobotCommand.set_cameraAngle         (payload, self.cameraAngle)
        RobotCommand.set_dribbler            (payload, self.dribbler)
        RobotCommand.set_kickChipPower       (payload, self.kickChipPower)
        RobotCommand.set_angularControl      (payload, self.angularControl)
        RobotCommand.set_feedback            (payload, self.feedback)
        return payload


# ================================ DECODE ================================
    def decode(self, payload):
        self.header           = RobotCommand.get_header(payload)
        self.remVersion       = RobotCommand.get_remVersion(payload)
        self.id               = RobotCommand.get_id(payload)
        self.messageId        = RobotCommand.get_messageId(payload)
        self.doKick           = RobotCommand.get_doKick(payload)
        self.doChip           = RobotCommand.get_doChip(payload)
        self.doForce          = RobotCommand.get_doForce(payload)
        self.useCameraAngle   = RobotCommand.get_useCameraAngle(payload)
        self.rho              = RobotCommand.get_rho(payload)
        self.theta            = RobotCommand.get_theta(payload)
        self.angle            = RobotCommand.get_angle(payload)
        self.angularVelocity  = RobotCommand.get_angularVelocity(payload)
        self.cameraAngle      = RobotCommand.get_cameraAngle(payload)
        self.dribbler         = RobotCommand.get_dribbler(payload)
        self.kickChipPower    = RobotCommand.get_kickChipPower(payload)
        self.angularControl   = RobotCommand.get_angularControl(payload)
        self.feedback         = RobotCommand.get_feedback(payload)


    def print_bit_string(self):
        payload = self.encode()
        for i in range(len(payload)):
            print(format(payload[i], '08b'), end=" ")
        print()
