// AUTOGENERATED. Run generator/main.py to regenerate
/*
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ] [  12  ] [  13  ] [  14  ] [  15  ] [  16  ] [  17  ] [  18  ] [  19  ] [  20  ] [  21  ] [  22  ] [  23  ] [  24  ] [  25  ] [  26  ] [  27  ] [  28  ] [  29  ] [  30  ] [  31  ] [  32  ] [  33  ] [  34  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toRobotId
-------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toColor
-------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBC
-------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBS
-------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toPC
-------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromRobotId
-------- -------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromColor
-------- -------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- reserved
-------- -------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromBS
-------- -------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromPC
-------- -------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- -------- -------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- -------- -------- 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- payloadSize
-------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- PbodyX
-------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- IbodyX
-------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- DbodyX
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- PbodyY
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- IbodyY
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- DbodyY
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- PbodyW
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- IbodyW
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- DbodyW
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- PbodyYaw
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- IbodyYaw
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- DbodyYaw
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- Pwheels
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- Iwheels
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 Dwheels
*/

#ifndef __REM_ROBOT_PIDGAINS_H
#define __REM_ROBOT_PIDGAINS_H

#include <stdbool.h>
#include <stdint.h>
#include "REM_BaseTypes.h"

typedef struct _REM_RobotPIDGainsPayload {
    uint8_t payload[PACKET_SIZE_REM_ROBOT_PIDGAINS];
} REM_RobotPIDGainsPayload;

typedef struct _REM_RobotPIDGains {
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
    uint32_t   payloadSize         ; // integer [0, 255]             Size of the payload. At most 255 bytes including the generic_packet_header. Keep the 127 byte SX1280 limit in mind
    float      PbodyX              ; // float   [0.000, 40.000]      Received P gain of the PID for body_x (x-direction)
    float      IbodyX              ; // float   [0.000, 20.000]      Received I gain of the PID for body_x (x-direction)
    float      DbodyX              ; // float   [0.000, 10.000]      Received D gain of the PID for body_x (x-direction)
    float      PbodyY              ; // float   [0.000, 40.000]      Received P gain of the PID for body_y (y-direction)
    float      IbodyY              ; // float   [0.000, 20.000]      Received I gain of the PID for body_y (y-direction)
    float      DbodyY              ; // float   [0.000, 10.000]      Received D gain of the PID for body_y (y-direction)
    float      PbodyW              ; // float   [0.000, 40.000]      Received P gain of the PID for body_w (Angular velocity)
    float      IbodyW              ; // float   [0.000, 20.000]      Received I gain of the PID for body_w (Angular velocity)
    float      DbodyW              ; // float   [0.000, 10.000]      Received D gain of the PID for body_w (Angular velocity)
    float      PbodyYaw            ; // float   [0.000, 40.000]      Received P gain of the PID for body_yaw (Absolute angle)
    float      IbodyYaw            ; // float   [0.000, 20.000]      Received I gain of the PID for body_yaw (Absolute angle)
    float      DbodyYaw            ; // float   [0.000, 10.000]      Received D gain of the PID for body_yaw (Absolute angle)
    float      Pwheels             ; // float   [0.000, 40.000]      Received P gain of the PID for the wheels
    float      Iwheels             ; // float   [0.000, 20.000]      Received I gain of the PID for the wheels
    float      Dwheels             ; // float   [0.000, 10.000]      Received D gain of the PID for the wheels
} REM_RobotPIDGains;

// ================================ GETTERS ================================
static inline uint32_t REM_RobotPIDGains_get_header(REM_RobotPIDGainsPayload *remrpidgp){
    return ((remrpidgp->payload[0]));
}

static inline uint32_t REM_RobotPIDGains_get_toRobotId(REM_RobotPIDGainsPayload *remrpidgp){
    return ((remrpidgp->payload[1] & 0b11110000) >> 4);
}

static inline bool REM_RobotPIDGains_get_toColor(REM_RobotPIDGainsPayload *remrpidgp){
    return (remrpidgp->payload[1] & 0b00001000) > 0;
}

static inline bool REM_RobotPIDGains_get_toBC(REM_RobotPIDGainsPayload *remrpidgp){
    return (remrpidgp->payload[1] & 0b00000100) > 0;
}

static inline bool REM_RobotPIDGains_get_toBS(REM_RobotPIDGainsPayload *remrpidgp){
    return (remrpidgp->payload[1] & 0b00000010) > 0;
}

static inline bool REM_RobotPIDGains_get_toPC(REM_RobotPIDGainsPayload *remrpidgp){
    return (remrpidgp->payload[1] & 0b00000001) > 0;
}

static inline uint32_t REM_RobotPIDGains_get_fromRobotId(REM_RobotPIDGainsPayload *remrpidgp){
    return ((remrpidgp->payload[2] & 0b11110000) >> 4);
}

static inline bool REM_RobotPIDGains_get_fromColor(REM_RobotPIDGainsPayload *remrpidgp){
    return (remrpidgp->payload[2] & 0b00001000) > 0;
}

static inline bool REM_RobotPIDGains_get_reserved(REM_RobotPIDGainsPayload *remrpidgp){
    return (remrpidgp->payload[2] & 0b00000100) > 0;
}

static inline bool REM_RobotPIDGains_get_fromBS(REM_RobotPIDGainsPayload *remrpidgp){
    return (remrpidgp->payload[2] & 0b00000010) > 0;
}

static inline bool REM_RobotPIDGains_get_fromPC(REM_RobotPIDGainsPayload *remrpidgp){
    return (remrpidgp->payload[2] & 0b00000001) > 0;
}

static inline uint32_t REM_RobotPIDGains_get_remVersion(REM_RobotPIDGainsPayload *remrpidgp){
    return ((remrpidgp->payload[3] & 0b11110000) >> 4);
}

static inline uint32_t REM_RobotPIDGains_get_messageId(REM_RobotPIDGainsPayload *remrpidgp){
    return ((remrpidgp->payload[3] & 0b00001111));
}

static inline uint32_t REM_RobotPIDGains_get_payloadSize(REM_RobotPIDGainsPayload *remrpidgp){
    return ((remrpidgp->payload[4]));
}

static inline float REM_RobotPIDGains_get_PbodyX(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _PbodyX = ((remrpidgp->payload[5]) << 8) | ((remrpidgp->payload[6]));
    return (_PbodyX * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_IbodyX(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _IbodyX = ((remrpidgp->payload[7]) << 8) | ((remrpidgp->payload[8]));
    return (_IbodyX * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_DbodyX(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _DbodyX = ((remrpidgp->payload[9]) << 8) | ((remrpidgp->payload[10]));
    return (_DbodyX * 0.0001525902189670) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_PbodyY(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _PbodyY = ((remrpidgp->payload[11]) << 8) | ((remrpidgp->payload[12]));
    return (_PbodyY * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_IbodyY(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _IbodyY = ((remrpidgp->payload[13]) << 8) | ((remrpidgp->payload[14]));
    return (_IbodyY * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_DbodyY(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _DbodyY = ((remrpidgp->payload[15]) << 8) | ((remrpidgp->payload[16]));
    return (_DbodyY * 0.0001525902189670) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_PbodyW(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _PbodyW = ((remrpidgp->payload[17]) << 8) | ((remrpidgp->payload[18]));
    return (_PbodyW * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_IbodyW(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _IbodyW = ((remrpidgp->payload[19]) << 8) | ((remrpidgp->payload[20]));
    return (_IbodyW * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_DbodyW(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _DbodyW = ((remrpidgp->payload[21]) << 8) | ((remrpidgp->payload[22]));
    return (_DbodyW * 0.0001525902189670) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_PbodyYaw(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _PbodyYaw = ((remrpidgp->payload[23]) << 8) | ((remrpidgp->payload[24]));
    return (_PbodyYaw * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_IbodyYaw(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _IbodyYaw = ((remrpidgp->payload[25]) << 8) | ((remrpidgp->payload[26]));
    return (_IbodyYaw * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_DbodyYaw(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _DbodyYaw = ((remrpidgp->payload[27]) << 8) | ((remrpidgp->payload[28]));
    return (_DbodyYaw * 0.0001525902189670) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_Pwheels(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _Pwheels = ((remrpidgp->payload[29]) << 8) | ((remrpidgp->payload[30]));
    return (_Pwheels * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_Iwheels(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _Iwheels = ((remrpidgp->payload[31]) << 8) | ((remrpidgp->payload[32]));
    return (_Iwheels * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotPIDGains_get_Dwheels(REM_RobotPIDGainsPayload *remrpidgp){
    uint32_t _Dwheels = ((remrpidgp->payload[33]) << 8) | ((remrpidgp->payload[34]));
    return (_Dwheels * 0.0001525902189670) + 0.0000000000000000;
}

// ================================ SETTERS ================================
static inline void REM_RobotPIDGains_set_header(REM_RobotPIDGainsPayload *remrpidgp, uint32_t header){
    remrpidgp->payload[0] = header;
}

static inline void REM_RobotPIDGains_set_toRobotId(REM_RobotPIDGainsPayload *remrpidgp, uint32_t toRobotId){
    remrpidgp->payload[1] = ((toRobotId << 4) & 0b11110000) | (remrpidgp->payload[1] & 0b00001111);
}

static inline void REM_RobotPIDGains_set_toColor(REM_RobotPIDGainsPayload *remrpidgp, bool toColor){
    remrpidgp->payload[1] = ((toColor << 3) & 0b00001000) | (remrpidgp->payload[1] & 0b11110111);
}

static inline void REM_RobotPIDGains_set_toBC(REM_RobotPIDGainsPayload *remrpidgp, bool toBC){
    remrpidgp->payload[1] = ((toBC << 2) & 0b00000100) | (remrpidgp->payload[1] & 0b11111011);
}

static inline void REM_RobotPIDGains_set_toBS(REM_RobotPIDGainsPayload *remrpidgp, bool toBS){
    remrpidgp->payload[1] = ((toBS << 1) & 0b00000010) | (remrpidgp->payload[1] & 0b11111101);
}

static inline void REM_RobotPIDGains_set_toPC(REM_RobotPIDGainsPayload *remrpidgp, bool toPC){
    remrpidgp->payload[1] = (toPC & 0b00000001) | (remrpidgp->payload[1] & 0b11111110);
}

static inline void REM_RobotPIDGains_set_fromRobotId(REM_RobotPIDGainsPayload *remrpidgp, uint32_t fromRobotId){
    remrpidgp->payload[2] = ((fromRobotId << 4) & 0b11110000) | (remrpidgp->payload[2] & 0b00001111);
}

static inline void REM_RobotPIDGains_set_fromColor(REM_RobotPIDGainsPayload *remrpidgp, bool fromColor){
    remrpidgp->payload[2] = ((fromColor << 3) & 0b00001000) | (remrpidgp->payload[2] & 0b11110111);
}

static inline void REM_RobotPIDGains_set_reserved(REM_RobotPIDGainsPayload *remrpidgp, bool reserved){
    remrpidgp->payload[2] = ((reserved << 2) & 0b00000100) | (remrpidgp->payload[2] & 0b11111011);
}

static inline void REM_RobotPIDGains_set_fromBS(REM_RobotPIDGainsPayload *remrpidgp, bool fromBS){
    remrpidgp->payload[2] = ((fromBS << 1) & 0b00000010) | (remrpidgp->payload[2] & 0b11111101);
}

static inline void REM_RobotPIDGains_set_fromPC(REM_RobotPIDGainsPayload *remrpidgp, bool fromPC){
    remrpidgp->payload[2] = (fromPC & 0b00000001) | (remrpidgp->payload[2] & 0b11111110);
}

static inline void REM_RobotPIDGains_set_remVersion(REM_RobotPIDGainsPayload *remrpidgp, uint32_t remVersion){
    remrpidgp->payload[3] = ((remVersion << 4) & 0b11110000) | (remrpidgp->payload[3] & 0b00001111);
}

static inline void REM_RobotPIDGains_set_messageId(REM_RobotPIDGainsPayload *remrpidgp, uint32_t messageId){
    remrpidgp->payload[3] = (messageId & 0b00001111) | (remrpidgp->payload[3] & 0b11110000);
}

static inline void REM_RobotPIDGains_set_payloadSize(REM_RobotPIDGainsPayload *remrpidgp, uint32_t payloadSize){
    remrpidgp->payload[4] = payloadSize;
}

static inline void REM_RobotPIDGains_set_PbodyX(REM_RobotPIDGainsPayload *remrpidgp, float PbodyX){
    uint32_t _PbodyX = (uint32_t)(PbodyX / 0.0006103608758679);
    remrpidgp->payload[5] = (_PbodyX >> 8);
    remrpidgp->payload[6] = _PbodyX;
}

static inline void REM_RobotPIDGains_set_IbodyX(REM_RobotPIDGainsPayload *remrpidgp, float IbodyX){
    uint32_t _IbodyX = (uint32_t)(IbodyX / 0.0003051804379339);
    remrpidgp->payload[7] = (_IbodyX >> 8);
    remrpidgp->payload[8] = _IbodyX;
}

static inline void REM_RobotPIDGains_set_DbodyX(REM_RobotPIDGainsPayload *remrpidgp, float DbodyX){
    uint32_t _DbodyX = (uint32_t)(DbodyX / 0.0001525902189670);
    remrpidgp->payload[9] = (_DbodyX >> 8);
    remrpidgp->payload[10] = _DbodyX;
}

static inline void REM_RobotPIDGains_set_PbodyY(REM_RobotPIDGainsPayload *remrpidgp, float PbodyY){
    uint32_t _PbodyY = (uint32_t)(PbodyY / 0.0006103608758679);
    remrpidgp->payload[11] = (_PbodyY >> 8);
    remrpidgp->payload[12] = _PbodyY;
}

static inline void REM_RobotPIDGains_set_IbodyY(REM_RobotPIDGainsPayload *remrpidgp, float IbodyY){
    uint32_t _IbodyY = (uint32_t)(IbodyY / 0.0003051804379339);
    remrpidgp->payload[13] = (_IbodyY >> 8);
    remrpidgp->payload[14] = _IbodyY;
}

static inline void REM_RobotPIDGains_set_DbodyY(REM_RobotPIDGainsPayload *remrpidgp, float DbodyY){
    uint32_t _DbodyY = (uint32_t)(DbodyY / 0.0001525902189670);
    remrpidgp->payload[15] = (_DbodyY >> 8);
    remrpidgp->payload[16] = _DbodyY;
}

static inline void REM_RobotPIDGains_set_PbodyW(REM_RobotPIDGainsPayload *remrpidgp, float PbodyW){
    uint32_t _PbodyW = (uint32_t)(PbodyW / 0.0006103608758679);
    remrpidgp->payload[17] = (_PbodyW >> 8);
    remrpidgp->payload[18] = _PbodyW;
}

static inline void REM_RobotPIDGains_set_IbodyW(REM_RobotPIDGainsPayload *remrpidgp, float IbodyW){
    uint32_t _IbodyW = (uint32_t)(IbodyW / 0.0003051804379339);
    remrpidgp->payload[19] = (_IbodyW >> 8);
    remrpidgp->payload[20] = _IbodyW;
}

static inline void REM_RobotPIDGains_set_DbodyW(REM_RobotPIDGainsPayload *remrpidgp, float DbodyW){
    uint32_t _DbodyW = (uint32_t)(DbodyW / 0.0001525902189670);
    remrpidgp->payload[21] = (_DbodyW >> 8);
    remrpidgp->payload[22] = _DbodyW;
}

static inline void REM_RobotPIDGains_set_PbodyYaw(REM_RobotPIDGainsPayload *remrpidgp, float PbodyYaw){
    uint32_t _PbodyYaw = (uint32_t)(PbodyYaw / 0.0006103608758679);
    remrpidgp->payload[23] = (_PbodyYaw >> 8);
    remrpidgp->payload[24] = _PbodyYaw;
}

static inline void REM_RobotPIDGains_set_IbodyYaw(REM_RobotPIDGainsPayload *remrpidgp, float IbodyYaw){
    uint32_t _IbodyYaw = (uint32_t)(IbodyYaw / 0.0003051804379339);
    remrpidgp->payload[25] = (_IbodyYaw >> 8);
    remrpidgp->payload[26] = _IbodyYaw;
}

static inline void REM_RobotPIDGains_set_DbodyYaw(REM_RobotPIDGainsPayload *remrpidgp, float DbodyYaw){
    uint32_t _DbodyYaw = (uint32_t)(DbodyYaw / 0.0001525902189670);
    remrpidgp->payload[27] = (_DbodyYaw >> 8);
    remrpidgp->payload[28] = _DbodyYaw;
}

static inline void REM_RobotPIDGains_set_Pwheels(REM_RobotPIDGainsPayload *remrpidgp, float Pwheels){
    uint32_t _Pwheels = (uint32_t)(Pwheels / 0.0006103608758679);
    remrpidgp->payload[29] = (_Pwheels >> 8);
    remrpidgp->payload[30] = _Pwheels;
}

static inline void REM_RobotPIDGains_set_Iwheels(REM_RobotPIDGainsPayload *remrpidgp, float Iwheels){
    uint32_t _Iwheels = (uint32_t)(Iwheels / 0.0003051804379339);
    remrpidgp->payload[31] = (_Iwheels >> 8);
    remrpidgp->payload[32] = _Iwheels;
}

static inline void REM_RobotPIDGains_set_Dwheels(REM_RobotPIDGainsPayload *remrpidgp, float Dwheels){
    uint32_t _Dwheels = (uint32_t)(Dwheels / 0.0001525902189670);
    remrpidgp->payload[33] = (_Dwheels >> 8);
    remrpidgp->payload[34] = _Dwheels;
}

// ================================ ENCODE ================================
static inline void encodeREM_RobotPIDGains(REM_RobotPIDGainsPayload *remrpidgp, REM_RobotPIDGains *remrpidg){
    REM_RobotPIDGains_set_header              (remrpidgp, remrpidg->header);
    REM_RobotPIDGains_set_toRobotId           (remrpidgp, remrpidg->toRobotId);
    REM_RobotPIDGains_set_toColor             (remrpidgp, remrpidg->toColor);
    REM_RobotPIDGains_set_toBC                (remrpidgp, remrpidg->toBC);
    REM_RobotPIDGains_set_toBS                (remrpidgp, remrpidg->toBS);
    REM_RobotPIDGains_set_toPC                (remrpidgp, remrpidg->toPC);
    REM_RobotPIDGains_set_fromRobotId         (remrpidgp, remrpidg->fromRobotId);
    REM_RobotPIDGains_set_fromColor           (remrpidgp, remrpidg->fromColor);
    REM_RobotPIDGains_set_reserved            (remrpidgp, remrpidg->reserved);
    REM_RobotPIDGains_set_fromBS              (remrpidgp, remrpidg->fromBS);
    REM_RobotPIDGains_set_fromPC              (remrpidgp, remrpidg->fromPC);
    REM_RobotPIDGains_set_remVersion          (remrpidgp, remrpidg->remVersion);
    REM_RobotPIDGains_set_messageId           (remrpidgp, remrpidg->messageId);
    REM_RobotPIDGains_set_payloadSize         (remrpidgp, remrpidg->payloadSize);
    REM_RobotPIDGains_set_PbodyX              (remrpidgp, remrpidg->PbodyX);
    REM_RobotPIDGains_set_IbodyX              (remrpidgp, remrpidg->IbodyX);
    REM_RobotPIDGains_set_DbodyX              (remrpidgp, remrpidg->DbodyX);
    REM_RobotPIDGains_set_PbodyY              (remrpidgp, remrpidg->PbodyY);
    REM_RobotPIDGains_set_IbodyY              (remrpidgp, remrpidg->IbodyY);
    REM_RobotPIDGains_set_DbodyY              (remrpidgp, remrpidg->DbodyY);
    REM_RobotPIDGains_set_PbodyW              (remrpidgp, remrpidg->PbodyW);
    REM_RobotPIDGains_set_IbodyW              (remrpidgp, remrpidg->IbodyW);
    REM_RobotPIDGains_set_DbodyW              (remrpidgp, remrpidg->DbodyW);
    REM_RobotPIDGains_set_PbodyYaw            (remrpidgp, remrpidg->PbodyYaw);
    REM_RobotPIDGains_set_IbodyYaw            (remrpidgp, remrpidg->IbodyYaw);
    REM_RobotPIDGains_set_DbodyYaw            (remrpidgp, remrpidg->DbodyYaw);
    REM_RobotPIDGains_set_Pwheels             (remrpidgp, remrpidg->Pwheels);
    REM_RobotPIDGains_set_Iwheels             (remrpidgp, remrpidg->Iwheels);
    REM_RobotPIDGains_set_Dwheels             (remrpidgp, remrpidg->Dwheels);
}

// ================================ DECODE ================================
static inline void decodeREM_RobotPIDGains(REM_RobotPIDGains *remrpidg, REM_RobotPIDGainsPayload *remrpidgp){
    remrpidg->header     = REM_RobotPIDGains_get_header(remrpidgp);
    remrpidg->toRobotId  = REM_RobotPIDGains_get_toRobotId(remrpidgp);
    remrpidg->toColor    = REM_RobotPIDGains_get_toColor(remrpidgp);
    remrpidg->toBC       = REM_RobotPIDGains_get_toBC(remrpidgp);
    remrpidg->toBS       = REM_RobotPIDGains_get_toBS(remrpidgp);
    remrpidg->toPC       = REM_RobotPIDGains_get_toPC(remrpidgp);
    remrpidg->fromRobotId= REM_RobotPIDGains_get_fromRobotId(remrpidgp);
    remrpidg->fromColor  = REM_RobotPIDGains_get_fromColor(remrpidgp);
    remrpidg->reserved   = REM_RobotPIDGains_get_reserved(remrpidgp);
    remrpidg->fromBS     = REM_RobotPIDGains_get_fromBS(remrpidgp);
    remrpidg->fromPC     = REM_RobotPIDGains_get_fromPC(remrpidgp);
    remrpidg->remVersion = REM_RobotPIDGains_get_remVersion(remrpidgp);
    remrpidg->messageId  = REM_RobotPIDGains_get_messageId(remrpidgp);
    remrpidg->payloadSize= REM_RobotPIDGains_get_payloadSize(remrpidgp);
    remrpidg->PbodyX     = REM_RobotPIDGains_get_PbodyX(remrpidgp);
    remrpidg->IbodyX     = REM_RobotPIDGains_get_IbodyX(remrpidgp);
    remrpidg->DbodyX     = REM_RobotPIDGains_get_DbodyX(remrpidgp);
    remrpidg->PbodyY     = REM_RobotPIDGains_get_PbodyY(remrpidgp);
    remrpidg->IbodyY     = REM_RobotPIDGains_get_IbodyY(remrpidgp);
    remrpidg->DbodyY     = REM_RobotPIDGains_get_DbodyY(remrpidgp);
    remrpidg->PbodyW     = REM_RobotPIDGains_get_PbodyW(remrpidgp);
    remrpidg->IbodyW     = REM_RobotPIDGains_get_IbodyW(remrpidgp);
    remrpidg->DbodyW     = REM_RobotPIDGains_get_DbodyW(remrpidgp);
    remrpidg->PbodyYaw   = REM_RobotPIDGains_get_PbodyYaw(remrpidgp);
    remrpidg->IbodyYaw   = REM_RobotPIDGains_get_IbodyYaw(remrpidgp);
    remrpidg->DbodyYaw   = REM_RobotPIDGains_get_DbodyYaw(remrpidgp);
    remrpidg->Pwheels    = REM_RobotPIDGains_get_Pwheels(remrpidgp);
    remrpidg->Iwheels    = REM_RobotPIDGains_get_Iwheels(remrpidgp);
    remrpidg->Dwheels    = REM_RobotPIDGains_get_Dwheels(remrpidgp);
}

#endif /*__REM_ROBOT_PIDGAINS_H*/
