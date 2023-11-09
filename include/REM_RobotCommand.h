// AUTOGENERATED. Run generator/main.py to regenerate
/*
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ] [  12  ] [  13  ] [  14  ] [  15  ] [  16  ] [  17  ] [  18  ] [  19  ] [  20  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toRobotId
-------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toColor
-------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBC
-------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBS
-------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toPC
-------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromRobotId
-------- -------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromColor
-------- -------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- reserved
-------- -------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromBS
-------- -------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromPC
-------- -------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- -------- -------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- -------- -------- 11111111 11111111 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- timestamp
-------- -------- -------- -------- -------- -------- -------- -------- 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- payloadSize
-------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- rho
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- theta
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- angle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- angularVelocity
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- cameraAngle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 1------- -------- useCameraAngle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -1------ -------- useAbsoluteAngle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- --111--- -------- dribbler
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -----1-- -------- doKick
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ------1- -------- doChip
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------1 -------- kickAtAngle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 1111---- kickChipPower
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1--- doForce
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -----1-- feedback
*/

#ifndef __REM_ROBOT_COMMAND_H
#define __REM_ROBOT_COMMAND_H

#include <stdbool.h>
#include <stdint.h>
#include "REM_BaseTypes.h"

typedef struct _REM_RobotCommandPayload {
    uint8_t payload[REM_PACKET_SIZE_REM_ROBOT_COMMAND];
} REM_RobotCommandPayload;

typedef struct _REM_RobotCommand {
    uint32_t   header              ; // integer [0, 255]             Header byte indicating the type of packet
    uint32_t   toRobotId           ; // integer [0, 15]              Id of the receiving robot
    bool       toColor             ; // integer [0, 1]               Color of the receiving robot / basestation. Yellow = 0, Blue = 1
    bool       toBC                ; // integer [0, 1]               Bit indicating this packet has to be broadcasted to all robots
    bool       toBS                ; // integer [0, 1]               Bit indicating this packet is meant for the basestation
    bool       toPC                ; // integer [0, 1]               Bit indicating this packet is meant for the PC
    uint32_t   fromRobotId         ; // integer [0, 15]              Id of the transmitting robot
    bool       fromColor           ; // integer [0, 1]               Color of the transmitting robot / basestation. Yellow = 0, Blue = 1
    bool       reserved            ; // integer [0, 1]               reserved
    bool       fromBS              ; // integer [0, 1]               Bit indicating this packet is coming from the basestation
    bool       fromPC              ; // integer [0, 1]               Bit indicating this packet is coming from the PC
    uint32_t   remVersion          ; // integer [0, 15]              Version of roboteam_embedded_messages
    uint32_t   messageId           ; // integer [0, 15]              messageId. Can be used for aligning packets
    uint32_t   timestamp           ; // integer [0, 4294967295]      Unix Timestamp in milliseconds
    uint32_t   payloadSize         ; // integer [0, 255]             Size of the payload. At most 255 bytes including the generic_packet_header. Keep the 127 byte SX1280 limit in mind
    float      rho                 ; // float   [0.000, 8.000]       Magnitude of movement (m/s)
    float      theta               ; // float   [-3.142, 3.142]      Direction of movement (radians)
    float      angle               ; // float   [-3.142, 3.142]      Absolute angle (rad)
    float      angularVelocity     ; // float   [-12.566, 12.566]    Angular velocity (rad/s)
    float      cameraAngle         ; // float   [-3.142, 3.142]      Angle of the robot as seen by camera (rad)
    bool       useCameraAngle      ; // integer [0, 1]               Use the info in 'cameraAngle'
    bool       useAbsoluteAngle    ; // integer [0, 1]               0 = angular velocity, 1 = absolute angle
    float      dribbler            ; // float   [0.000, 1.000]       Dribbler speed
    bool       doKick              ; // integer [0, 1]               Do a kick if ballsensor
    bool       doChip              ; // integer [0, 1]               Do a chip if ballsensor
    bool       kickAtAngle         ; // integer [0, 1]               Do a kick once angle is reached
    float      kickChipPower       ; // float   [0.000, 6.500]       Speed of the ball in m/s
    bool       doForce             ; // integer [0, 1]               Do regardless of ballsensor
    bool       feedback            ; // integer [0, 1]               Ignore the packet. Just send feedback
} REM_RobotCommand;

// ================================ GETTERS ================================
static inline uint32_t REM_RobotCommand_get_header(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[0]));
}

static inline uint32_t REM_RobotCommand_get_toRobotId(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[1] & 0b11110000) >> 4);
}

static inline bool REM_RobotCommand_get_toColor(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[1] & 0b00001000) > 0;
}

static inline bool REM_RobotCommand_get_toBC(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[1] & 0b00000100) > 0;
}

static inline bool REM_RobotCommand_get_toBS(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[1] & 0b00000010) > 0;
}

static inline bool REM_RobotCommand_get_toPC(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[1] & 0b00000001) > 0;
}

static inline uint32_t REM_RobotCommand_get_fromRobotId(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[2] & 0b11110000) >> 4);
}

static inline bool REM_RobotCommand_get_fromColor(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[2] & 0b00001000) > 0;
}

static inline bool REM_RobotCommand_get_reserved(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[2] & 0b00000100) > 0;
}

static inline bool REM_RobotCommand_get_fromBS(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[2] & 0b00000010) > 0;
}

static inline bool REM_RobotCommand_get_fromPC(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[2] & 0b00000001) > 0;
}

static inline uint32_t REM_RobotCommand_get_remVersion(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[3] & 0b11110000) >> 4);
}

static inline uint32_t REM_RobotCommand_get_messageId(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[3] & 0b00001111));
}

static inline uint32_t REM_RobotCommand_get_timestamp(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[4]) << 24) | ((remrcp->payload[5]) << 16) | ((remrcp->payload[6]) << 8) | ((remrcp->payload[7]));
}

static inline uint32_t REM_RobotCommand_get_payloadSize(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[8]));
}

static inline float REM_RobotCommand_get_rho(REM_RobotCommandPayload *remrcp){
    uint32_t _rho = ((remrcp->payload[9]) << 8) | ((remrcp->payload[10]));
    return (_rho * 0.0001220721751736F);
}

static inline float REM_RobotCommand_get_theta(REM_RobotCommandPayload *remrcp){
    uint32_t _theta = ((remrcp->payload[11]) << 8) | ((remrcp->payload[12]));
    return (_theta * 0.0000958752621833F) + -3.1415926535897931F;
}

static inline float REM_RobotCommand_get_angle(REM_RobotCommandPayload *remrcp){
    uint32_t _angle = ((remrcp->payload[13]) << 8) | ((remrcp->payload[14]));
    return (_angle * 0.0000958752621833F) + -3.1415926535897931F;
}

static inline float REM_RobotCommand_get_angularVelocity(REM_RobotCommandPayload *remrcp){
    uint32_t _angularVelocity = ((remrcp->payload[15]) << 8) | ((remrcp->payload[16]));
    return (_angularVelocity * 0.0003835010487330F) + -12.5663706143591725F;
}

static inline float REM_RobotCommand_get_cameraAngle(REM_RobotCommandPayload *remrcp){
    uint32_t _cameraAngle = ((remrcp->payload[17]) << 8) | ((remrcp->payload[18]));
    return (_cameraAngle * 0.0000958752621833F) + -3.1415926535897931F;
}

static inline bool REM_RobotCommand_get_useCameraAngle(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[19] & 0b10000000) > 0;
}

static inline bool REM_RobotCommand_get_useAbsoluteAngle(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[19] & 0b01000000) > 0;
}

static inline float REM_RobotCommand_get_dribbler(REM_RobotCommandPayload *remrcp){
    uint32_t _dribbler = ((remrcp->payload[19] & 0b00111000) >> 3);
    return (_dribbler * 0.1428571428571428F);
}

static inline bool REM_RobotCommand_get_doKick(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[19] & 0b00000100) > 0;
}

static inline bool REM_RobotCommand_get_doChip(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[19] & 0b00000010) > 0;
}

static inline bool REM_RobotCommand_get_kickAtAngle(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[19] & 0b00000001) > 0;
}

static inline float REM_RobotCommand_get_kickChipPower(REM_RobotCommandPayload *remrcp){
    uint32_t _kickChipPower = ((remrcp->payload[20] & 0b11110000) >> 4);
    return (_kickChipPower * 0.4333333333333333F);
}

static inline bool REM_RobotCommand_get_doForce(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[20] & 0b00001000) > 0;
}

static inline bool REM_RobotCommand_get_feedback(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[20] & 0b00000100) > 0;
}

// ================================ SETTERS ================================
static inline void REM_RobotCommand_set_header(REM_RobotCommandPayload *remrcp, uint32_t header){
    remrcp->payload[0] = header;
}

static inline void REM_RobotCommand_set_toRobotId(REM_RobotCommandPayload *remrcp, uint32_t toRobotId){
    remrcp->payload[1] = ((toRobotId << 4) & 0b11110000) | (remrcp->payload[1] & 0b00001111);
}

static inline void REM_RobotCommand_set_toColor(REM_RobotCommandPayload *remrcp, bool toColor){
    remrcp->payload[1] = ((toColor << 3) & 0b00001000) | (remrcp->payload[1] & 0b11110111);
}

static inline void REM_RobotCommand_set_toBC(REM_RobotCommandPayload *remrcp, bool toBC){
    remrcp->payload[1] = ((toBC << 2) & 0b00000100) | (remrcp->payload[1] & 0b11111011);
}

static inline void REM_RobotCommand_set_toBS(REM_RobotCommandPayload *remrcp, bool toBS){
    remrcp->payload[1] = ((toBS << 1) & 0b00000010) | (remrcp->payload[1] & 0b11111101);
}

static inline void REM_RobotCommand_set_toPC(REM_RobotCommandPayload *remrcp, bool toPC){
    remrcp->payload[1] = (toPC & 0b00000001) | (remrcp->payload[1] & 0b11111110);
}

static inline void REM_RobotCommand_set_fromRobotId(REM_RobotCommandPayload *remrcp, uint32_t fromRobotId){
    remrcp->payload[2] = ((fromRobotId << 4) & 0b11110000) | (remrcp->payload[2] & 0b00001111);
}

static inline void REM_RobotCommand_set_fromColor(REM_RobotCommandPayload *remrcp, bool fromColor){
    remrcp->payload[2] = ((fromColor << 3) & 0b00001000) | (remrcp->payload[2] & 0b11110111);
}

static inline void REM_RobotCommand_set_reserved(REM_RobotCommandPayload *remrcp, bool reserved){
    remrcp->payload[2] = ((reserved << 2) & 0b00000100) | (remrcp->payload[2] & 0b11111011);
}

static inline void REM_RobotCommand_set_fromBS(REM_RobotCommandPayload *remrcp, bool fromBS){
    remrcp->payload[2] = ((fromBS << 1) & 0b00000010) | (remrcp->payload[2] & 0b11111101);
}

static inline void REM_RobotCommand_set_fromPC(REM_RobotCommandPayload *remrcp, bool fromPC){
    remrcp->payload[2] = (fromPC & 0b00000001) | (remrcp->payload[2] & 0b11111110);
}

static inline void REM_RobotCommand_set_remVersion(REM_RobotCommandPayload *remrcp, uint32_t remVersion){
    remrcp->payload[3] = ((remVersion << 4) & 0b11110000) | (remrcp->payload[3] & 0b00001111);
}

static inline void REM_RobotCommand_set_messageId(REM_RobotCommandPayload *remrcp, uint32_t messageId){
    remrcp->payload[3] = (messageId & 0b00001111) | (remrcp->payload[3] & 0b11110000);
}

static inline void REM_RobotCommand_set_timestamp(REM_RobotCommandPayload *remrcp, uint32_t timestamp){
    remrcp->payload[4] = (timestamp >> 24);
    remrcp->payload[5] = (timestamp >> 16);
    remrcp->payload[6] = (timestamp >> 8);
    remrcp->payload[7] = timestamp;
}

static inline void REM_RobotCommand_set_payloadSize(REM_RobotCommandPayload *remrcp, uint32_t payloadSize){
    remrcp->payload[8] = payloadSize;
}

static inline void REM_RobotCommand_set_rho(REM_RobotCommandPayload *remrcp, float rho){
    uint32_t _rho = (uint32_t)(rho / 0.0001220721751736F);
    remrcp->payload[9] = (_rho >> 8);
    remrcp->payload[10] = _rho;
}

static inline void REM_RobotCommand_set_theta(REM_RobotCommandPayload *remrcp, float theta){
    uint32_t _theta = (uint32_t)((theta +3.1415926535897931F) / 0.0000958752621833F);
    remrcp->payload[11] = (_theta >> 8);
    remrcp->payload[12] = _theta;
}

static inline void REM_RobotCommand_set_angle(REM_RobotCommandPayload *remrcp, float angle){
    uint32_t _angle = (uint32_t)((angle +3.1415926535897931F) / 0.0000958752621833F);
    remrcp->payload[13] = (_angle >> 8);
    remrcp->payload[14] = _angle;
}

static inline void REM_RobotCommand_set_angularVelocity(REM_RobotCommandPayload *remrcp, float angularVelocity){
    uint32_t _angularVelocity = (uint32_t)((angularVelocity +12.5663706143591725F) / 0.0003835010487330F);
    remrcp->payload[15] = (_angularVelocity >> 8);
    remrcp->payload[16] = _angularVelocity;
}

static inline void REM_RobotCommand_set_cameraAngle(REM_RobotCommandPayload *remrcp, float cameraAngle){
    uint32_t _cameraAngle = (uint32_t)((cameraAngle +3.1415926535897931F) / 0.0000958752621833F);
    remrcp->payload[17] = (_cameraAngle >> 8);
    remrcp->payload[18] = _cameraAngle;
}

static inline void REM_RobotCommand_set_useCameraAngle(REM_RobotCommandPayload *remrcp, bool useCameraAngle){
    remrcp->payload[19] = ((useCameraAngle << 7) & 0b10000000) | (remrcp->payload[19] & 0b01111111);
}

static inline void REM_RobotCommand_set_useAbsoluteAngle(REM_RobotCommandPayload *remrcp, bool useAbsoluteAngle){
    remrcp->payload[19] = ((useAbsoluteAngle << 6) & 0b01000000) | (remrcp->payload[19] & 0b10111111);
}

static inline void REM_RobotCommand_set_dribbler(REM_RobotCommandPayload *remrcp, float dribbler){
    uint32_t _dribbler = (uint32_t)(dribbler / 0.1428571428571428F);
    remrcp->payload[19] = ((_dribbler << 3) & 0b00111000) | (remrcp->payload[19] & 0b11000111);
}

static inline void REM_RobotCommand_set_doKick(REM_RobotCommandPayload *remrcp, bool doKick){
    remrcp->payload[19] = ((doKick << 2) & 0b00000100) | (remrcp->payload[19] & 0b11111011);
}

static inline void REM_RobotCommand_set_doChip(REM_RobotCommandPayload *remrcp, bool doChip){
    remrcp->payload[19] = ((doChip << 1) & 0b00000010) | (remrcp->payload[19] & 0b11111101);
}

static inline void REM_RobotCommand_set_kickAtAngle(REM_RobotCommandPayload *remrcp, bool kickAtAngle){
    remrcp->payload[19] = (kickAtAngle & 0b00000001) | (remrcp->payload[19] & 0b11111110);
}

static inline void REM_RobotCommand_set_kickChipPower(REM_RobotCommandPayload *remrcp, float kickChipPower){
    uint32_t _kickChipPower = (uint32_t)(kickChipPower / 0.4333333333333333F);
    remrcp->payload[20] = ((_kickChipPower << 4) & 0b11110000) | (remrcp->payload[20] & 0b00001111);
}

static inline void REM_RobotCommand_set_doForce(REM_RobotCommandPayload *remrcp, bool doForce){
    remrcp->payload[20] = ((doForce << 3) & 0b00001000) | (remrcp->payload[20] & 0b11110111);
}

static inline void REM_RobotCommand_set_feedback(REM_RobotCommandPayload *remrcp, bool feedback){
    remrcp->payload[20] = ((feedback << 2) & 0b00000100) | (remrcp->payload[20] & 0b11111011);
}

// ================================ ENCODE ================================
static inline void encodeREM_RobotCommand(REM_RobotCommandPayload *remrcp, REM_RobotCommand *remrc){
    REM_RobotCommand_set_header              (remrcp, remrc->header);
    REM_RobotCommand_set_toRobotId           (remrcp, remrc->toRobotId);
    REM_RobotCommand_set_toColor             (remrcp, remrc->toColor);
    REM_RobotCommand_set_toBC                (remrcp, remrc->toBC);
    REM_RobotCommand_set_toBS                (remrcp, remrc->toBS);
    REM_RobotCommand_set_toPC                (remrcp, remrc->toPC);
    REM_RobotCommand_set_fromRobotId         (remrcp, remrc->fromRobotId);
    REM_RobotCommand_set_fromColor           (remrcp, remrc->fromColor);
    REM_RobotCommand_set_reserved            (remrcp, remrc->reserved);
    REM_RobotCommand_set_fromBS              (remrcp, remrc->fromBS);
    REM_RobotCommand_set_fromPC              (remrcp, remrc->fromPC);
    REM_RobotCommand_set_remVersion          (remrcp, remrc->remVersion);
    REM_RobotCommand_set_messageId           (remrcp, remrc->messageId);
    REM_RobotCommand_set_timestamp           (remrcp, remrc->timestamp);
    REM_RobotCommand_set_payloadSize         (remrcp, remrc->payloadSize);
    REM_RobotCommand_set_rho                 (remrcp, remrc->rho);
    REM_RobotCommand_set_theta               (remrcp, remrc->theta);
    REM_RobotCommand_set_angle               (remrcp, remrc->angle);
    REM_RobotCommand_set_angularVelocity     (remrcp, remrc->angularVelocity);
    REM_RobotCommand_set_cameraAngle         (remrcp, remrc->cameraAngle);
    REM_RobotCommand_set_useCameraAngle      (remrcp, remrc->useCameraAngle);
    REM_RobotCommand_set_useAbsoluteAngle    (remrcp, remrc->useAbsoluteAngle);
    REM_RobotCommand_set_dribbler            (remrcp, remrc->dribbler);
    REM_RobotCommand_set_doKick              (remrcp, remrc->doKick);
    REM_RobotCommand_set_doChip              (remrcp, remrc->doChip);
    REM_RobotCommand_set_kickAtAngle         (remrcp, remrc->kickAtAngle);
    REM_RobotCommand_set_kickChipPower       (remrcp, remrc->kickChipPower);
    REM_RobotCommand_set_doForce             (remrcp, remrc->doForce);
    REM_RobotCommand_set_feedback            (remrcp, remrc->feedback);
}

// ================================ DECODE ================================
static inline void decodeREM_RobotCommand(REM_RobotCommand *remrc, REM_RobotCommandPayload *remrcp){
    remrc->header        = REM_RobotCommand_get_header(remrcp);
    remrc->toRobotId     = REM_RobotCommand_get_toRobotId(remrcp);
    remrc->toColor       = REM_RobotCommand_get_toColor(remrcp);
    remrc->toBC          = REM_RobotCommand_get_toBC(remrcp);
    remrc->toBS          = REM_RobotCommand_get_toBS(remrcp);
    remrc->toPC          = REM_RobotCommand_get_toPC(remrcp);
    remrc->fromRobotId   = REM_RobotCommand_get_fromRobotId(remrcp);
    remrc->fromColor     = REM_RobotCommand_get_fromColor(remrcp);
    remrc->reserved      = REM_RobotCommand_get_reserved(remrcp);
    remrc->fromBS        = REM_RobotCommand_get_fromBS(remrcp);
    remrc->fromPC        = REM_RobotCommand_get_fromPC(remrcp);
    remrc->remVersion    = REM_RobotCommand_get_remVersion(remrcp);
    remrc->messageId     = REM_RobotCommand_get_messageId(remrcp);
    remrc->timestamp     = REM_RobotCommand_get_timestamp(remrcp);
    remrc->payloadSize   = REM_RobotCommand_get_payloadSize(remrcp);
    remrc->rho           = REM_RobotCommand_get_rho(remrcp);
    remrc->theta         = REM_RobotCommand_get_theta(remrcp);
    remrc->angle         = REM_RobotCommand_get_angle(remrcp);
    remrc->angularVelocity= REM_RobotCommand_get_angularVelocity(remrcp);
    remrc->cameraAngle   = REM_RobotCommand_get_cameraAngle(remrcp);
    remrc->useCameraAngle= REM_RobotCommand_get_useCameraAngle(remrcp);
    remrc->useAbsoluteAngle= REM_RobotCommand_get_useAbsoluteAngle(remrcp);
    remrc->dribbler      = REM_RobotCommand_get_dribbler(remrcp);
    remrc->doKick        = REM_RobotCommand_get_doKick(remrcp);
    remrc->doChip        = REM_RobotCommand_get_doChip(remrcp);
    remrc->kickAtAngle   = REM_RobotCommand_get_kickAtAngle(remrcp);
    remrc->kickChipPower = REM_RobotCommand_get_kickChipPower(remrcp);
    remrc->doForce       = REM_RobotCommand_get_doForce(remrcp);
    remrc->feedback      = REM_RobotCommand_get_feedback(remrcp);
}

#endif /*__REM_ROBOT_COMMAND_H*/
