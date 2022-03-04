# AUTOGENERATED. Run generator/main.py to regenerate
"""
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- id
-------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- batteryLevel
-------- -------- -------- 1------- -------- -------- -------- -------- -------- -------- -------- -------- XsensCalibrated
-------- -------- -------- -1------ -------- -------- -------- -------- -------- -------- -------- -------- ballSensorWorking
-------- -------- -------- --1----- -------- -------- -------- -------- -------- -------- -------- -------- hasBall
-------- -------- -------- ---1---- -------- -------- -------- -------- -------- -------- -------- -------- capacitorCharged
-------- -------- -------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- ballPos
-------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- rho
-------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- theta
-------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- angle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 1111---- -------- wheelLocked
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 -------- wheelBraking
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 1111---- rssi
"""

import numpy as np
from . import REM_BaseTypes



class REM_RobotFeedback:
    header = 0                # integer [0, 255]             Header byte indicating the type of packet
    remVersion = 0            # integer [0, 15]              Version of roboteam_embedded_messages
    id = 0                    # integer [0, 15]              Id of the robot 
    messageId = 0             # integer [0, 15]              Id of the message
    batteryLevel = 0          # integer [0, 15]              The voltage level of the battery
    XsensCalibrated = 0       # integer [0, 1]               Indicates if the XSens IMU is calibrated
    ballSensorWorking = 0     # integer [0, 1]               Indicates if the ballsensor is working
    hasBall = 0               # integer [0, 1]               Indicates if the ball is somewhere in front of the ballsensor
    capacitorCharged = 0      # integer [0, 1]               Indicates if the capacitor for kicking and chipping is charged
    ballPos = 0               # float   [-0.500, 0.500]      Indicates where in front of the ballsensor the ball is
    rho = 0                   # float   [0.000, 8.000]       The estimated magnitude of movement (m/s)
    theta = 0                 # float   [-3.142, 3.142]      The estimated direction of movement (rad)
    angle = 0                 # float   [-3.142, 3.142]      The estimated angle (rad)
    wheelLocked = 0           # integer [0, 15]              Indicates if a wheel is locked. One bit per wheel
    wheelBraking = 0          # integer [0, 15]              Indicates if a wheel is slipping. One bit per wheel
    rssi = 0                  # integer [0, 15]              Signal strength of the last packet received by the robot



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
    def get_batteryLevel(payload):
        return ((payload[2] & 0b00001111));

    @staticmethod
    def get_XsensCalibrated(payload):
        return (payload[3] & 0b10000000) > 0;

    @staticmethod
    def get_ballSensorWorking(payload):
        return (payload[3] & 0b01000000) > 0;

    @staticmethod
    def get_hasBall(payload):
        return (payload[3] & 0b00100000) > 0;

    @staticmethod
    def get_capacitorCharged(payload):
        return (payload[3] & 0b00010000) > 0;

    @staticmethod
    def get_ballPos(payload):
        _ballPos = ((payload[3] & 0b00001111));
        return (_ballPos * 0.0666666666666667) + -0.5000000000000000;

    @staticmethod
    def get_rho(payload):
        _rho = ((payload[4]) << 8) | ((payload[5]));
        return (_rho * 0.0001220721751736) + 0.0000000000000000;

    @staticmethod
    def get_theta(payload):
        _theta = ((payload[6]) << 8) | ((payload[7]));
        return (_theta * 0.0000958752621833) + -3.1415926535897931;

    @staticmethod
    def get_angle(payload):
        _angle = ((payload[8]) << 8) | ((payload[9]));
        return (_angle * 0.0000958752621833) + -3.1415926535897931;

    @staticmethod
    def get_wheelLocked(payload):
        return ((payload[10] & 0b11110000) >> 4);

    @staticmethod
    def get_wheelBraking(payload):
        return ((payload[10] & 0b00001111));

    @staticmethod
    def get_rssi(payload):
        return ((payload[11] & 0b11110000) >> 4);

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
    def set_batteryLevel(payload, batteryLevel):
        payload[2] = (batteryLevel & 0b00001111) | (payload[2] & 0b11110000);

    @staticmethod
    def set_XsensCalibrated(payload, XsensCalibrated):
        payload[3] = ((XsensCalibrated << 7) & 0b10000000) | (payload[3] & 0b01111111);

    @staticmethod
    def set_ballSensorWorking(payload, ballSensorWorking):
        payload[3] = ((ballSensorWorking << 6) & 0b01000000) | (payload[3] & 0b10111111);

    @staticmethod
    def set_hasBall(payload, hasBall):
        payload[3] = ((hasBall << 5) & 0b00100000) | (payload[3] & 0b11011111);

    @staticmethod
    def set_capacitorCharged(payload, capacitorCharged):
        payload[3] = ((capacitorCharged << 4) & 0b00010000) | (payload[3] & 0b11101111);

    @staticmethod
    def set_ballPos(payload, ballPos):
        _ballPos = int((ballPos +0.5000000000000000) / 0.0666666666666667);
        payload[3] = (_ballPos & 0b00001111) | (payload[3] & 0b11110000);

    @staticmethod
    def set_rho(payload, rho):
        _rho = int(rho / 0.0001220721751736);
        payload[4] = (_rho >> 8);
        payload[5] = _rho;

    @staticmethod
    def set_theta(payload, theta):
        _theta = int((theta +3.1415926535897931) / 0.0000958752621833);
        payload[6] = (_theta >> 8);
        payload[7] = _theta;

    @staticmethod
    def set_angle(payload, angle):
        _angle = int((angle +3.1415926535897931) / 0.0000958752621833);
        payload[8] = (_angle >> 8);
        payload[9] = _angle;

    @staticmethod
    def set_wheelLocked(payload, wheelLocked):
        payload[10] = ((wheelLocked << 4) & 0b11110000) | (payload[10] & 0b00001111);

    @staticmethod
    def set_wheelBraking(payload, wheelBraking):
        payload[10] = (wheelBraking & 0b00001111) | (payload[10] & 0b11110000);

    @staticmethod
    def set_rssi(payload, rssi):
        payload[11] = ((rssi << 4) & 0b11110000) | (payload[11] & 0b00001111);

# ================================ ENCODE ================================
    def encode(self):
        payload = np.zeros(REM_BaseTypes.PACKET_SIZE_REM_ROBOT_FEEDBACK, dtype=np.uint8)
        REM_RobotFeedback.set_header              (payload, self.header)
        REM_RobotFeedback.set_remVersion          (payload, self.remVersion)
        REM_RobotFeedback.set_id                  (payload, self.id)
        REM_RobotFeedback.set_messageId           (payload, self.messageId)
        REM_RobotFeedback.set_batteryLevel        (payload, self.batteryLevel)
        REM_RobotFeedback.set_XsensCalibrated     (payload, self.XsensCalibrated)
        REM_RobotFeedback.set_ballSensorWorking   (payload, self.ballSensorWorking)
        REM_RobotFeedback.set_hasBall             (payload, self.hasBall)
        REM_RobotFeedback.set_capacitorCharged    (payload, self.capacitorCharged)
        REM_RobotFeedback.set_ballPos             (payload, self.ballPos)
        REM_RobotFeedback.set_rho                 (payload, self.rho)
        REM_RobotFeedback.set_theta               (payload, self.theta)
        REM_RobotFeedback.set_angle               (payload, self.angle)
        REM_RobotFeedback.set_wheelLocked         (payload, self.wheelLocked)
        REM_RobotFeedback.set_wheelBraking        (payload, self.wheelBraking)
        REM_RobotFeedback.set_rssi                (payload, self.rssi)
        return payload


# ================================ DECODE ================================
    def decode(self, payload):
        self.header           = REM_RobotFeedback.get_header(payload)
        self.remVersion       = REM_RobotFeedback.get_remVersion(payload)
        self.id               = REM_RobotFeedback.get_id(payload)
        self.messageId        = REM_RobotFeedback.get_messageId(payload)
        self.batteryLevel     = REM_RobotFeedback.get_batteryLevel(payload)
        self.XsensCalibrated  = REM_RobotFeedback.get_XsensCalibrated(payload)
        self.ballSensorWorking= REM_RobotFeedback.get_ballSensorWorking(payload)
        self.hasBall          = REM_RobotFeedback.get_hasBall(payload)
        self.capacitorCharged = REM_RobotFeedback.get_capacitorCharged(payload)
        self.ballPos          = REM_RobotFeedback.get_ballPos(payload)
        self.rho              = REM_RobotFeedback.get_rho(payload)
        self.theta            = REM_RobotFeedback.get_theta(payload)
        self.angle            = REM_RobotFeedback.get_angle(payload)
        self.wheelLocked      = REM_RobotFeedback.get_wheelLocked(payload)
        self.wheelBraking     = REM_RobotFeedback.get_wheelBraking(payload)
        self.rssi             = REM_RobotFeedback.get_rssi(payload)


    def print_bit_string(self):
        payload = self.encode()
        for i in range(len(payload)):
            print(format(payload[i], '08b'), end=" ")
        print()