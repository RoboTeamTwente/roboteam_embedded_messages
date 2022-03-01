# AUTOGENERATED. Run generator/main.py to regenerate
"""
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ] [  12  ] [  13  ] [  14  ] [  15  ] [  16  ] [  17  ] [  18  ] [  19  ] [  20  ] [  21  ] [  22  ] [  23  ] [  24  ] [  25  ] [  26  ] [  27  ] [  28  ] [  29  ] [  30  ] [  31  ] [  32  ] [  33  ] [  34  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- id
-------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- ----1111 11111111 11111111 11111111 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- xsensAcc1
-------- -------- -------- -------- -------- -------- ----1111 11111111 11111111 11111111 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- xsensAcc2
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 11111111 11111111 11111111 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- xsensYaw
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 11111111 11111111 11111111 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- rateOfTurn
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 11111111 11111111 11111111 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- wheelSpeed1
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 11111111 11111111 11111111 1111---- -------- -------- -------- -------- -------- -------- -------- -------- wheelSpeed2
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 11111111 11111111 11111111 1111---- -------- -------- -------- -------- wheelSpeed3
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 11111111 11111111 11111111 1111---- wheelSpeed4
"""

import numpy as np
from . import REM_BaseTypes



class REM_RobotStateInfo:
    header = 0                # integer [0, 255]             Header byte indicating the type of packet
    remVersion = 0            # integer [0, 15]              Version of roboteam_embedded_messages
    id = 0                    # integer [0, 15]              Id of the robot 
    messageId = 0             # integer [0, 15]              Id of the message
    xsensAcc1 = 0             # float   [-50000.000, 50000.000] xsensAcc1
    xsensAcc2 = 0             # float   [-50000.000, 50000.000] xsensAcc2
    xsensYaw = 0              # float   [-50000.000, 50000.000] xsensYaw
    rateOfTurn = 0            # float   [-50000.000, 50000.000] rateOfTurn
    wheelSpeed1 = 0           # float   [-50000.000, 50000.000] wheelSpeed1
    wheelSpeed2 = 0           # float   [-50000.000, 50000.000] wheelSpeed2
    wheelSpeed3 = 0           # float   [-50000.000, 50000.000] wheelSpeed3
    wheelSpeed4 = 0           # float   [-50000.000, 50000.000] wheelSpeed4



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
    def get_xsensAcc1(payload):
        _xsensAcc1 = ((payload[2] & 0b00001111) << 28) | ((payload[3]) << 20) | ((payload[4]) << 12) | ((payload[5]) << 4) | ((payload[6] & 0b11110000) >> 4);
        return (_xsensAcc1 * 0.0000232830643708) + -50000.0000000000000000;

    @staticmethod
    def get_xsensAcc2(payload):
        _xsensAcc2 = ((payload[6] & 0b00001111) << 28) | ((payload[7]) << 20) | ((payload[8]) << 12) | ((payload[9]) << 4) | ((payload[10] & 0b11110000) >> 4);
        return (_xsensAcc2 * 0.0000232830643708) + -50000.0000000000000000;

    @staticmethod
    def get_xsensYaw(payload):
        _xsensYaw = ((payload[10] & 0b00001111) << 28) | ((payload[11]) << 20) | ((payload[12]) << 12) | ((payload[13]) << 4) | ((payload[14] & 0b11110000) >> 4);
        return (_xsensYaw * 0.0000232830643708) + -50000.0000000000000000;

    @staticmethod
    def get_rateOfTurn(payload):
        _rateOfTurn = ((payload[14] & 0b00001111) << 28) | ((payload[15]) << 20) | ((payload[16]) << 12) | ((payload[17]) << 4) | ((payload[18] & 0b11110000) >> 4);
        return (_rateOfTurn * 0.0000232830643708) + -50000.0000000000000000;

    @staticmethod
    def get_wheelSpeed1(payload):
        _wheelSpeed1 = ((payload[18] & 0b00001111) << 28) | ((payload[19]) << 20) | ((payload[20]) << 12) | ((payload[21]) << 4) | ((payload[22] & 0b11110000) >> 4);
        return (_wheelSpeed1 * 0.0000232830643708) + -50000.0000000000000000;

    @staticmethod
    def get_wheelSpeed2(payload):
        _wheelSpeed2 = ((payload[22] & 0b00001111) << 28) | ((payload[23]) << 20) | ((payload[24]) << 12) | ((payload[25]) << 4) | ((payload[26] & 0b11110000) >> 4);
        return (_wheelSpeed2 * 0.0000232830643708) + -50000.0000000000000000;

    @staticmethod
    def get_wheelSpeed3(payload):
        _wheelSpeed3 = ((payload[26] & 0b00001111) << 28) | ((payload[27]) << 20) | ((payload[28]) << 12) | ((payload[29]) << 4) | ((payload[30] & 0b11110000) >> 4);
        return (_wheelSpeed3 * 0.0000232830643708) + -50000.0000000000000000;

    @staticmethod
    def get_wheelSpeed4(payload):
        _wheelSpeed4 = ((payload[30] & 0b00001111) << 28) | ((payload[31]) << 20) | ((payload[32]) << 12) | ((payload[33]) << 4) | ((payload[34] & 0b11110000) >> 4);
        return (_wheelSpeed4 * 0.0000232830643708) + -50000.0000000000000000;

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
    def set_xsensAcc1(payload, xsensAcc1):
        _xsensAcc1 = int((xsensAcc1 +50000.0000000000000000) / 0.0000232830643708);
        payload[2] = ((_xsensAcc1 >> 28) & 0b00001111) | (payload[2] & 0b11110000);
        payload[3] = (_xsensAcc1 >> 20);
        payload[4] = (_xsensAcc1 >> 12);
        payload[5] = (_xsensAcc1 >> 4);
        payload[6] = ((_xsensAcc1 << 4) & 0b11110000) | (payload[6] & 0b00001111);

    @staticmethod
    def set_xsensAcc2(payload, xsensAcc2):
        _xsensAcc2 = int((xsensAcc2 +50000.0000000000000000) / 0.0000232830643708);
        payload[6] = ((_xsensAcc2 >> 28) & 0b00001111) | (payload[6] & 0b11110000);
        payload[7] = (_xsensAcc2 >> 20);
        payload[8] = (_xsensAcc2 >> 12);
        payload[9] = (_xsensAcc2 >> 4);
        payload[10] = ((_xsensAcc2 << 4) & 0b11110000) | (payload[10] & 0b00001111);

    @staticmethod
    def set_xsensYaw(payload, xsensYaw):
        _xsensYaw = int((xsensYaw +50000.0000000000000000) / 0.0000232830643708);
        payload[10] = ((_xsensYaw >> 28) & 0b00001111) | (payload[10] & 0b11110000);
        payload[11] = (_xsensYaw >> 20);
        payload[12] = (_xsensYaw >> 12);
        payload[13] = (_xsensYaw >> 4);
        payload[14] = ((_xsensYaw << 4) & 0b11110000) | (payload[14] & 0b00001111);

    @staticmethod
    def set_rateOfTurn(payload, rateOfTurn):
        _rateOfTurn = int((rateOfTurn +50000.0000000000000000) / 0.0000232830643708);
        payload[14] = ((_rateOfTurn >> 28) & 0b00001111) | (payload[14] & 0b11110000);
        payload[15] = (_rateOfTurn >> 20);
        payload[16] = (_rateOfTurn >> 12);
        payload[17] = (_rateOfTurn >> 4);
        payload[18] = ((_rateOfTurn << 4) & 0b11110000) | (payload[18] & 0b00001111);

    @staticmethod
    def set_wheelSpeed1(payload, wheelSpeed1):
        _wheelSpeed1 = int((wheelSpeed1 +50000.0000000000000000) / 0.0000232830643708);
        payload[18] = ((_wheelSpeed1 >> 28) & 0b00001111) | (payload[18] & 0b11110000);
        payload[19] = (_wheelSpeed1 >> 20);
        payload[20] = (_wheelSpeed1 >> 12);
        payload[21] = (_wheelSpeed1 >> 4);
        payload[22] = ((_wheelSpeed1 << 4) & 0b11110000) | (payload[22] & 0b00001111);

    @staticmethod
    def set_wheelSpeed2(payload, wheelSpeed2):
        _wheelSpeed2 = int((wheelSpeed2 +50000.0000000000000000) / 0.0000232830643708);
        payload[22] = ((_wheelSpeed2 >> 28) & 0b00001111) | (payload[22] & 0b11110000);
        payload[23] = (_wheelSpeed2 >> 20);
        payload[24] = (_wheelSpeed2 >> 12);
        payload[25] = (_wheelSpeed2 >> 4);
        payload[26] = ((_wheelSpeed2 << 4) & 0b11110000) | (payload[26] & 0b00001111);

    @staticmethod
    def set_wheelSpeed3(payload, wheelSpeed3):
        _wheelSpeed3 = int((wheelSpeed3 +50000.0000000000000000) / 0.0000232830643708);
        payload[26] = ((_wheelSpeed3 >> 28) & 0b00001111) | (payload[26] & 0b11110000);
        payload[27] = (_wheelSpeed3 >> 20);
        payload[28] = (_wheelSpeed3 >> 12);
        payload[29] = (_wheelSpeed3 >> 4);
        payload[30] = ((_wheelSpeed3 << 4) & 0b11110000) | (payload[30] & 0b00001111);

    @staticmethod
    def set_wheelSpeed4(payload, wheelSpeed4):
        _wheelSpeed4 = int((wheelSpeed4 +50000.0000000000000000) / 0.0000232830643708);
        payload[30] = ((_wheelSpeed4 >> 28) & 0b00001111) | (payload[30] & 0b11110000);
        payload[31] = (_wheelSpeed4 >> 20);
        payload[32] = (_wheelSpeed4 >> 12);
        payload[33] = (_wheelSpeed4 >> 4);
        payload[34] = ((_wheelSpeed4 << 4) & 0b11110000) | (payload[34] & 0b00001111);

# ================================ ENCODE ================================
    def encode(self):
        payload = np.zeros(REM_BaseTypes.PACKET_SIZE_R_E_M__ROBOT_STATE_INFO, dtype=np.uint8)
        REM_RobotStateInfo.set_header              (payload, self.header)
        REM_RobotStateInfo.set_remVersion          (payload, self.remVersion)
        REM_RobotStateInfo.set_id                  (payload, self.id)
        REM_RobotStateInfo.set_messageId           (payload, self.messageId)
        REM_RobotStateInfo.set_xsensAcc1           (payload, self.xsensAcc1)
        REM_RobotStateInfo.set_xsensAcc2           (payload, self.xsensAcc2)
        REM_RobotStateInfo.set_xsensYaw            (payload, self.xsensYaw)
        REM_RobotStateInfo.set_rateOfTurn          (payload, self.rateOfTurn)
        REM_RobotStateInfo.set_wheelSpeed1         (payload, self.wheelSpeed1)
        REM_RobotStateInfo.set_wheelSpeed2         (payload, self.wheelSpeed2)
        REM_RobotStateInfo.set_wheelSpeed3         (payload, self.wheelSpeed3)
        REM_RobotStateInfo.set_wheelSpeed4         (payload, self.wheelSpeed4)
        return payload


# ================================ DECODE ================================
    def decode(self, payload):
        self.header           = REM_RobotStateInfo.get_header(payload)
        self.remVersion       = REM_RobotStateInfo.get_remVersion(payload)
        self.id               = REM_RobotStateInfo.get_id(payload)
        self.messageId        = REM_RobotStateInfo.get_messageId(payload)
        self.xsensAcc1        = REM_RobotStateInfo.get_xsensAcc1(payload)
        self.xsensAcc2        = REM_RobotStateInfo.get_xsensAcc2(payload)
        self.xsensYaw         = REM_RobotStateInfo.get_xsensYaw(payload)
        self.rateOfTurn       = REM_RobotStateInfo.get_rateOfTurn(payload)
        self.wheelSpeed1      = REM_RobotStateInfo.get_wheelSpeed1(payload)
        self.wheelSpeed2      = REM_RobotStateInfo.get_wheelSpeed2(payload)
        self.wheelSpeed3      = REM_RobotStateInfo.get_wheelSpeed3(payload)
        self.wheelSpeed4      = REM_RobotStateInfo.get_wheelSpeed4(payload)


    def print_bit_string(self):
        payload = self.encode()
        for i in range(len(payload)):
            print(format(payload[i], '08b'), end=" ")
        print()
