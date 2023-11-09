# AUTOGENERATED. Run generator/main.py to regenerate
"""
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ] [  12  ] [  13  ] [  14  ] [  15  ] [  16  ] [  17  ] [  18  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toRobotId
-------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toColor
-------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBC
-------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBS
-------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toPC
-------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromRobotId
-------- -------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromColor
-------- -------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- reserved
-------- -------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromBS
-------- -------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromPC
-------- -------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- -------- -------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- -------- -------- 11111111 11111111 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- timestamp
-------- -------- -------- -------- -------- -------- -------- -------- 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- payloadSize
-------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- rho
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- theta
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- angle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 1111---- -------- -------- -------- batteryLevel
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1--- -------- -------- -------- XsensCalibrated
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -----1-- -------- -------- -------- capacitorCharged
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ------1- -------- -------- -------- ballSensorWorking
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------1 -------- -------- -------- ballSensorSeesBall
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 1111---- -------- -------- ballPos
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1--- -------- -------- dribblerSeesBall
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -----111 -------- -------- reserved1
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 1111---- -------- wheelLocked
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 -------- wheelBraking
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 rssi
"""

import numpy as np
from . import REM_BaseTypes



class REM_RobotFeedback:
    header = 0                # integer [0, 255]             Header byte indicating the type of packet
    toRobotId = 0             # integer [0, 15]              Id of the receiving robot
    toColor = 0               # integer [0, 1]               Color of the receiving robot / basestation. Yellow = 0, Blue = 1
    toBC = 0                  # integer [0, 1]               Bit indicating this packet has to be broadcasted to all robots
    toBS = 0                  # integer [0, 1]               Bit indicating this packet is meant for the basestation
    toPC = 0                  # integer [0, 1]               Bit indicating this packet is meant for the PC
    fromRobotId = 0           # integer [0, 15]              Id of the transmitting robot
    fromColor = 0             # integer [0, 1]               Color of the transmitting robot / basestation. Yellow = 0, Blue = 1
    reserved = 0              # integer [0, 1]               reserved
    fromBS = 0                # integer [0, 1]               Bit indicating this packet is coming from the basestation
    fromPC = 0                # integer [0, 1]               Bit indicating this packet is coming from the PC
    remVersion = 0            # integer [0, 15]              Version of roboteam_embedded_messages
    messageId = 0             # integer [0, 15]              messageId. Can be used for aligning packets
    timestamp = 0             # integer [0, 4294967295]      Unix Timestamp in milliseconds
    payloadSize = 0           # integer [0, 255]             Size of the payload. At most 255 bytes including the generic_packet_header. Keep the 127 byte SX1280 limit in mind
    rho = 0                   # float   [0.000, 8.000]       The estimated magnitude of movement (m/s)
    theta = 0                 # float   [-3.142, 3.142]      The estimated direction of movement (rad)
    angle = 0                 # float   [-3.142, 3.142]      The estimated angle (rad)
    batteryLevel = 0          # integer [0, 15]              The voltage level of the battery
    XsensCalibrated = 0       # integer [0, 1]               Indicates if the XSens IMU is calibrated
    capacitorCharged = 0      # integer [0, 1]               Indicates if the capacitor for kicking and chipping is charged
    ballSensorWorking = 0     # integer [0, 1]               Indicates if the ballsensor is working
    ballSensorSeesBall = 0    # integer [0, 1]               Indicates if the ballsensor sees the ball
    ballPos = 0               # float   [-0.500, 0.500]      Indicates where in front of the ballsensor the ball is
    dribblerSeesBall = 0      # integer [0, 1]               Indicates if the dribbler sees the ball
    reserved1 = 0             # integer [0, 7]               reserved1
    wheelLocked = 0           # integer [0, 15]              Indicates if a wheel is locked. One bit per wheel
    wheelBraking = 0          # integer [0, 15]              Indicates if a wheel is slipping. One bit per wheel
    rssi = 0                  # integer [0, 255]             Signal strength of the last packet received by the robot



# ================================ GETTERS ================================
    @staticmethod
    def get_header(payload):
        return ((payload[0]));

    @staticmethod
    def get_toRobotId(payload):
        return ((payload[1] & 0b11110000) >> 4);

    @staticmethod
    def get_toColor(payload):
        return (payload[1] & 0b00001000) > 0;

    @staticmethod
    def get_toBC(payload):
        return (payload[1] & 0b00000100) > 0;

    @staticmethod
    def get_toBS(payload):
        return (payload[1] & 0b00000010) > 0;

    @staticmethod
    def get_toPC(payload):
        return (payload[1] & 0b00000001) > 0;

    @staticmethod
    def get_fromRobotId(payload):
        return ((payload[2] & 0b11110000) >> 4);

    @staticmethod
    def get_fromColor(payload):
        return (payload[2] & 0b00001000) > 0;

    @staticmethod
    def get_reserved(payload):
        return (payload[2] & 0b00000100) > 0;

    @staticmethod
    def get_fromBS(payload):
        return (payload[2] & 0b00000010) > 0;

    @staticmethod
    def get_fromPC(payload):
        return (payload[2] & 0b00000001) > 0;

    @staticmethod
    def get_remVersion(payload):
        return ((payload[3] & 0b11110000) >> 4);

    @staticmethod
    def get_messageId(payload):
        return ((payload[3] & 0b00001111));

    @staticmethod
    def get_timestamp(payload):
        return ((payload[4]) << 24) | ((payload[5]) << 16) | ((payload[6]) << 8) | ((payload[7]));

    @staticmethod
    def get_payloadSize(payload):
        return ((payload[8]));

    @staticmethod
    def get_rho(payload):
        _rho = ((payload[9]) << 8) | ((payload[10]));
        return (_rho * 0.0001220721751736);

    @staticmethod
    def get_theta(payload):
        _theta = ((payload[11]) << 8) | ((payload[12]));
        return (_theta * 0.0000958752621833) + -3.1415926535897931;

    @staticmethod
    def get_angle(payload):
        _angle = ((payload[13]) << 8) | ((payload[14]));
        return (_angle * 0.0000958752621833) + -3.1415926535897931;

    @staticmethod
    def get_batteryLevel(payload):
        return ((payload[15] & 0b11110000) >> 4);

    @staticmethod
    def get_XsensCalibrated(payload):
        return (payload[15] & 0b00001000) > 0;

    @staticmethod
    def get_capacitorCharged(payload):
        return (payload[15] & 0b00000100) > 0;

    @staticmethod
    def get_ballSensorWorking(payload):
        return (payload[15] & 0b00000010) > 0;

    @staticmethod
    def get_ballSensorSeesBall(payload):
        return (payload[15] & 0b00000001) > 0;

    @staticmethod
    def get_ballPos(payload):
        _ballPos = ((payload[16] & 0b11110000) >> 4);
        return (_ballPos * 0.0666666666666667) + -0.5000000000000000;

    @staticmethod
    def get_dribblerSeesBall(payload):
        return (payload[16] & 0b00001000) > 0;

    @staticmethod
    def get_reserved1(payload):
        return ((payload[16] & 0b00000111));

    @staticmethod
    def get_wheelLocked(payload):
        return ((payload[17] & 0b11110000) >> 4);

    @staticmethod
    def get_wheelBraking(payload):
        return ((payload[17] & 0b00001111));

    @staticmethod
    def get_rssi(payload):
        return ((payload[18]));

# ================================ SETTERS ================================
    @staticmethod
    def set_header(payload, header):
        payload[0] = header;

    @staticmethod
    def set_toRobotId(payload, toRobotId):
        payload[1] = ((toRobotId << 4) & 0b11110000) | (payload[1] & 0b00001111);

    @staticmethod
    def set_toColor(payload, toColor):
        payload[1] = ((toColor << 3) & 0b00001000) | (payload[1] & 0b11110111);

    @staticmethod
    def set_toBC(payload, toBC):
        payload[1] = ((toBC << 2) & 0b00000100) | (payload[1] & 0b11111011);

    @staticmethod
    def set_toBS(payload, toBS):
        payload[1] = ((toBS << 1) & 0b00000010) | (payload[1] & 0b11111101);

    @staticmethod
    def set_toPC(payload, toPC):
        payload[1] = (toPC & 0b00000001) | (payload[1] & 0b11111110);

    @staticmethod
    def set_fromRobotId(payload, fromRobotId):
        payload[2] = ((fromRobotId << 4) & 0b11110000) | (payload[2] & 0b00001111);

    @staticmethod
    def set_fromColor(payload, fromColor):
        payload[2] = ((fromColor << 3) & 0b00001000) | (payload[2] & 0b11110111);

    @staticmethod
    def set_reserved(payload, reserved):
        payload[2] = ((reserved << 2) & 0b00000100) | (payload[2] & 0b11111011);

    @staticmethod
    def set_fromBS(payload, fromBS):
        payload[2] = ((fromBS << 1) & 0b00000010) | (payload[2] & 0b11111101);

    @staticmethod
    def set_fromPC(payload, fromPC):
        payload[2] = (fromPC & 0b00000001) | (payload[2] & 0b11111110);

    @staticmethod
    def set_remVersion(payload, remVersion):
        payload[3] = ((remVersion << 4) & 0b11110000) | (payload[3] & 0b00001111);

    @staticmethod
    def set_messageId(payload, messageId):
        payload[3] = (messageId & 0b00001111) | (payload[3] & 0b11110000);

    @staticmethod
    def set_timestamp(payload, timestamp):
        payload[4] = (timestamp >> 24);
        payload[5] = (timestamp >> 16);
        payload[6] = (timestamp >> 8);
        payload[7] = timestamp;

    @staticmethod
    def set_payloadSize(payload, payloadSize):
        payload[8] = payloadSize;

    @staticmethod
    def set_rho(payload, rho):
        _rho = int(rho / 0.0001220721751736);
        payload[9] = (_rho >> 8);
        payload[10] = _rho;

    @staticmethod
    def set_theta(payload, theta):
        _theta = int((theta +3.1415926535897931) / 0.0000958752621833);
        payload[11] = (_theta >> 8);
        payload[12] = _theta;

    @staticmethod
    def set_angle(payload, angle):
        _angle = int((angle +3.1415926535897931) / 0.0000958752621833);
        payload[13] = (_angle >> 8);
        payload[14] = _angle;

    @staticmethod
    def set_batteryLevel(payload, batteryLevel):
        payload[15] = ((batteryLevel << 4) & 0b11110000) | (payload[15] & 0b00001111);

    @staticmethod
    def set_XsensCalibrated(payload, XsensCalibrated):
        payload[15] = ((XsensCalibrated << 3) & 0b00001000) | (payload[15] & 0b11110111);

    @staticmethod
    def set_capacitorCharged(payload, capacitorCharged):
        payload[15] = ((capacitorCharged << 2) & 0b00000100) | (payload[15] & 0b11111011);

    @staticmethod
    def set_ballSensorWorking(payload, ballSensorWorking):
        payload[15] = ((ballSensorWorking << 1) & 0b00000010) | (payload[15] & 0b11111101);

    @staticmethod
    def set_ballSensorSeesBall(payload, ballSensorSeesBall):
        payload[15] = (ballSensorSeesBall & 0b00000001) | (payload[15] & 0b11111110);

    @staticmethod
    def set_ballPos(payload, ballPos):
        _ballPos = int((ballPos +0.5000000000000000) / 0.0666666666666667);
        payload[16] = ((_ballPos << 4) & 0b11110000) | (payload[16] & 0b00001111);

    @staticmethod
    def set_dribblerSeesBall(payload, dribblerSeesBall):
        payload[16] = ((dribblerSeesBall << 3) & 0b00001000) | (payload[16] & 0b11110111);

    @staticmethod
    def set_reserved1(payload, reserved1):
        payload[16] = (reserved1 & 0b00000111) | (payload[16] & 0b11111000);

    @staticmethod
    def set_wheelLocked(payload, wheelLocked):
        payload[17] = ((wheelLocked << 4) & 0b11110000) | (payload[17] & 0b00001111);

    @staticmethod
    def set_wheelBraking(payload, wheelBraking):
        payload[17] = (wheelBraking & 0b00001111) | (payload[17] & 0b11110000);

    @staticmethod
    def set_rssi(payload, rssi):
        payload[18] = rssi;

# ================================ ENCODE ================================
    def encode(self):
        payload = np.zeros(REM_BaseTypes.REM_PACKET_SIZE_REM_ROBOT_FEEDBACK, dtype=np.uint8)
        REM_RobotFeedback.set_header              (payload, self.header)
        REM_RobotFeedback.set_toRobotId           (payload, self.toRobotId)
        REM_RobotFeedback.set_toColor             (payload, self.toColor)
        REM_RobotFeedback.set_toBC                (payload, self.toBC)
        REM_RobotFeedback.set_toBS                (payload, self.toBS)
        REM_RobotFeedback.set_toPC                (payload, self.toPC)
        REM_RobotFeedback.set_fromRobotId         (payload, self.fromRobotId)
        REM_RobotFeedback.set_fromColor           (payload, self.fromColor)
        REM_RobotFeedback.set_reserved            (payload, self.reserved)
        REM_RobotFeedback.set_fromBS              (payload, self.fromBS)
        REM_RobotFeedback.set_fromPC              (payload, self.fromPC)
        REM_RobotFeedback.set_remVersion          (payload, self.remVersion)
        REM_RobotFeedback.set_messageId           (payload, self.messageId)
        REM_RobotFeedback.set_timestamp           (payload, self.timestamp)
        REM_RobotFeedback.set_payloadSize         (payload, self.payloadSize)
        REM_RobotFeedback.set_rho                 (payload, self.rho)
        REM_RobotFeedback.set_theta               (payload, self.theta)
        REM_RobotFeedback.set_angle               (payload, self.angle)
        REM_RobotFeedback.set_batteryLevel        (payload, self.batteryLevel)
        REM_RobotFeedback.set_XsensCalibrated     (payload, self.XsensCalibrated)
        REM_RobotFeedback.set_capacitorCharged    (payload, self.capacitorCharged)
        REM_RobotFeedback.set_ballSensorWorking   (payload, self.ballSensorWorking)
        REM_RobotFeedback.set_ballSensorSeesBall  (payload, self.ballSensorSeesBall)
        REM_RobotFeedback.set_ballPos             (payload, self.ballPos)
        REM_RobotFeedback.set_dribblerSeesBall    (payload, self.dribblerSeesBall)
        REM_RobotFeedback.set_reserved1           (payload, self.reserved1)
        REM_RobotFeedback.set_wheelLocked         (payload, self.wheelLocked)
        REM_RobotFeedback.set_wheelBraking        (payload, self.wheelBraking)
        REM_RobotFeedback.set_rssi                (payload, self.rssi)
        return payload


# ================================ DECODE ================================
    def decode(self, payload):
        self.header           = REM_RobotFeedback.get_header(payload)
        self.toRobotId        = REM_RobotFeedback.get_toRobotId(payload)
        self.toColor          = REM_RobotFeedback.get_toColor(payload)
        self.toBC             = REM_RobotFeedback.get_toBC(payload)
        self.toBS             = REM_RobotFeedback.get_toBS(payload)
        self.toPC             = REM_RobotFeedback.get_toPC(payload)
        self.fromRobotId      = REM_RobotFeedback.get_fromRobotId(payload)
        self.fromColor        = REM_RobotFeedback.get_fromColor(payload)
        self.reserved         = REM_RobotFeedback.get_reserved(payload)
        self.fromBS           = REM_RobotFeedback.get_fromBS(payload)
        self.fromPC           = REM_RobotFeedback.get_fromPC(payload)
        self.remVersion       = REM_RobotFeedback.get_remVersion(payload)
        self.messageId        = REM_RobotFeedback.get_messageId(payload)
        self.timestamp        = REM_RobotFeedback.get_timestamp(payload)
        self.payloadSize      = REM_RobotFeedback.get_payloadSize(payload)
        self.rho              = REM_RobotFeedback.get_rho(payload)
        self.theta            = REM_RobotFeedback.get_theta(payload)
        self.angle            = REM_RobotFeedback.get_angle(payload)
        self.batteryLevel     = REM_RobotFeedback.get_batteryLevel(payload)
        self.XsensCalibrated  = REM_RobotFeedback.get_XsensCalibrated(payload)
        self.capacitorCharged = REM_RobotFeedback.get_capacitorCharged(payload)
        self.ballSensorWorking= REM_RobotFeedback.get_ballSensorWorking(payload)
        self.ballSensorSeesBall= REM_RobotFeedback.get_ballSensorSeesBall(payload)
        self.ballPos          = REM_RobotFeedback.get_ballPos(payload)
        self.dribblerSeesBall = REM_RobotFeedback.get_dribblerSeesBall(payload)
        self.reserved1        = REM_RobotFeedback.get_reserved1(payload)
        self.wheelLocked      = REM_RobotFeedback.get_wheelLocked(payload)
        self.wheelBraking     = REM_RobotFeedback.get_wheelBraking(payload)
        self.rssi             = REM_RobotFeedback.get_rssi(payload)


    def print_bit_string(self):
        payload = self.encode()
        for i in range(len(payload)):
            print(format(payload[i], '08b'), end=" ")
        print()
