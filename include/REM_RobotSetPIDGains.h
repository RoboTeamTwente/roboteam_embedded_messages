// AUTOGENERATED. Run generator/main.py to regenerate
/*
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ] [  12  ] [  13  ] [  14  ] [  15  ] [  16  ] [  17  ] [  18  ] [  19  ] [  20  ] [  21  ] [  22  ] [  23  ] [  24  ] [  25  ] [  26  ] [  27  ] [  28  ] [  29  ] [  30  ] [  31  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- id
-------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- PbodyX
-------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- IbodyX
-------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- DbodyX
-------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- PbodyY
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- IbodyY
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- DbodyY
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- PbodyW
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- IbodyW
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- DbodyW
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- PbodyYaw
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- -------- IbodyYaw
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- DbodyYaw
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- Pwheels
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- Iwheels
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 Dwheels
*/

#ifndef __REM_ROBOT_SET_PIDGAINS_H
#define __REM_ROBOT_SET_PIDGAINS_H

#include <stdbool.h>
#include <stdint.h>
#include "REM_BaseTypes.h"

typedef struct _REM_RobotSetPIDGainsPayload {
    uint8_t payload[PACKET_SIZE_REM_ROBOT_SET_PIDGAINS];
} REM_RobotSetPIDGainsPayload;

typedef struct _REM_RobotSetPIDGains {
    uint32_t   header              ; // integer [0, 255]             Header byte indicating the type of packet
    uint32_t   remVersion          ; // integer [0, 15]              Version of roboteam_embedded_messages
    uint32_t   id                  ; // integer [0, 15]              Id of the robot
    float      PbodyX              ; // float   [0.000, 40.000]      Commanded P gain of the PID for body_x (x-direction)
    float      IbodyX              ; // float   [0.000, 20.000]      Commanded I gain of the PID for body_x (x-direction)
    float      DbodyX              ; // float   [0.000, 10.000]      Commanded D gain of the PID for body_x (x-direction)
    float      PbodyY              ; // float   [0.000, 40.000]      Commanded P gain of the PID for body_y (y-direction)
    float      IbodyY              ; // float   [0.000, 20.000]      Commanded I gain of the PID for body_y (y-direction)
    float      DbodyY              ; // float   [0.000, 10.000]      Commanded D gain of the PID for body_y (y-direction)
    float      PbodyW              ; // float   [0.000, 40.000]      Commanded P gain of the PID for body_w (Angular velocity)
    float      IbodyW              ; // float   [0.000, 20.000]      Commanded I gain of the PID for body_w (Angular velocity)
    float      DbodyW              ; // float   [0.000, 10.000]      Commanded D gain of the PID for body_w (Angular velocity)
    float      PbodyYaw            ; // float   [0.000, 40.000]      Commanded P gain of the PID for body_yaw (Absolute angle)
    float      IbodyYaw            ; // float   [0.000, 20.000]      Commanded I gain of the PID for body_yaw (Absolute angle)
    float      DbodyYaw            ; // float   [0.000, 10.000]      Commanded D gain of the PID for body_yaw (Absolute angle)
    float      Pwheels             ; // float   [0.000, 40.000]      Commanded P gain of the PID for the wheels
    float      Iwheels             ; // float   [0.000, 20.000]      Commanded I gain of the PID for the wheels
    float      Dwheels             ; // float   [0.000, 10.000]      Commanded D gain of the PID for the wheels
} REM_RobotSetPIDGains;

// ================================ GETTERS ================================
static inline uint32_t REM_RobotSetPIDGains_get_header(REM_RobotSetPIDGainsPayload *remrspidgp){
    return ((remrspidgp->payload[0]));
}

static inline uint32_t REM_RobotSetPIDGains_get_remVersion(REM_RobotSetPIDGainsPayload *remrspidgp){
    return ((remrspidgp->payload[1] & 0b11110000) >> 4);
}

static inline uint32_t REM_RobotSetPIDGains_get_id(REM_RobotSetPIDGainsPayload *remrspidgp){
    return ((remrspidgp->payload[1] & 0b00001111));
}

static inline float REM_RobotSetPIDGains_get_PbodyX(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _PbodyX = ((remrspidgp->payload[2]) << 8) | ((remrspidgp->payload[3]));
    return (_PbodyX * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_IbodyX(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _IbodyX = ((remrspidgp->payload[4]) << 8) | ((remrspidgp->payload[5]));
    return (_IbodyX * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_DbodyX(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _DbodyX = ((remrspidgp->payload[6]) << 8) | ((remrspidgp->payload[7]));
    return (_DbodyX * 0.0001525902189670) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_PbodyY(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _PbodyY = ((remrspidgp->payload[8]) << 8) | ((remrspidgp->payload[9]));
    return (_PbodyY * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_IbodyY(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _IbodyY = ((remrspidgp->payload[10]) << 8) | ((remrspidgp->payload[11]));
    return (_IbodyY * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_DbodyY(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _DbodyY = ((remrspidgp->payload[12]) << 8) | ((remrspidgp->payload[13]));
    return (_DbodyY * 0.0001525902189670) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_PbodyW(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _PbodyW = ((remrspidgp->payload[14]) << 8) | ((remrspidgp->payload[15]));
    return (_PbodyW * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_IbodyW(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _IbodyW = ((remrspidgp->payload[16]) << 8) | ((remrspidgp->payload[17]));
    return (_IbodyW * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_DbodyW(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _DbodyW = ((remrspidgp->payload[18]) << 8) | ((remrspidgp->payload[19]));
    return (_DbodyW * 0.0001525902189670) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_PbodyYaw(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _PbodyYaw = ((remrspidgp->payload[20]) << 8) | ((remrspidgp->payload[21]));
    return (_PbodyYaw * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_IbodyYaw(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _IbodyYaw = ((remrspidgp->payload[22]) << 8) | ((remrspidgp->payload[23]));
    return (_IbodyYaw * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_DbodyYaw(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _DbodyYaw = ((remrspidgp->payload[24]) << 8) | ((remrspidgp->payload[25]));
    return (_DbodyYaw * 0.0001525902189670) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_Pwheels(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _Pwheels = ((remrspidgp->payload[26]) << 8) | ((remrspidgp->payload[27]));
    return (_Pwheels * 0.0006103608758679) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_Iwheels(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _Iwheels = ((remrspidgp->payload[28]) << 8) | ((remrspidgp->payload[29]));
    return (_Iwheels * 0.0003051804379339) + 0.0000000000000000;
}

static inline float REM_RobotSetPIDGains_get_Dwheels(REM_RobotSetPIDGainsPayload *remrspidgp){
    uint32_t _Dwheels = ((remrspidgp->payload[30]) << 8) | ((remrspidgp->payload[31]));
    return (_Dwheels * 0.0001525902189670) + 0.0000000000000000;
}

// ================================ SETTERS ================================
static inline void REM_RobotSetPIDGains_set_header(REM_RobotSetPIDGainsPayload *remrspidgp, uint32_t header){
    remrspidgp->payload[0] = header;
}

static inline void REM_RobotSetPIDGains_set_remVersion(REM_RobotSetPIDGainsPayload *remrspidgp, uint32_t remVersion){
    remrspidgp->payload[1] = ((remVersion << 4) & 0b11110000) | (remrspidgp->payload[1] & 0b00001111);
}

static inline void REM_RobotSetPIDGains_set_id(REM_RobotSetPIDGainsPayload *remrspidgp, uint32_t id){
    remrspidgp->payload[1] = (id & 0b00001111) | (remrspidgp->payload[1] & 0b11110000);
}

static inline void REM_RobotSetPIDGains_set_PbodyX(REM_RobotSetPIDGainsPayload *remrspidgp, float PbodyX){
    uint32_t _PbodyX = (uint32_t)(PbodyX / 0.0006103608758679);
    remrspidgp->payload[2] = (_PbodyX >> 8);
    remrspidgp->payload[3] = _PbodyX;
}

static inline void REM_RobotSetPIDGains_set_IbodyX(REM_RobotSetPIDGainsPayload *remrspidgp, float IbodyX){
    uint32_t _IbodyX = (uint32_t)(IbodyX / 0.0003051804379339);
    remrspidgp->payload[4] = (_IbodyX >> 8);
    remrspidgp->payload[5] = _IbodyX;
}

static inline void REM_RobotSetPIDGains_set_DbodyX(REM_RobotSetPIDGainsPayload *remrspidgp, float DbodyX){
    uint32_t _DbodyX = (uint32_t)(DbodyX / 0.0001525902189670);
    remrspidgp->payload[6] = (_DbodyX >> 8);
    remrspidgp->payload[7] = _DbodyX;
}

static inline void REM_RobotSetPIDGains_set_PbodyY(REM_RobotSetPIDGainsPayload *remrspidgp, float PbodyY){
    uint32_t _PbodyY = (uint32_t)(PbodyY / 0.0006103608758679);
    remrspidgp->payload[8] = (_PbodyY >> 8);
    remrspidgp->payload[9] = _PbodyY;
}

static inline void REM_RobotSetPIDGains_set_IbodyY(REM_RobotSetPIDGainsPayload *remrspidgp, float IbodyY){
    uint32_t _IbodyY = (uint32_t)(IbodyY / 0.0003051804379339);
    remrspidgp->payload[10] = (_IbodyY >> 8);
    remrspidgp->payload[11] = _IbodyY;
}

static inline void REM_RobotSetPIDGains_set_DbodyY(REM_RobotSetPIDGainsPayload *remrspidgp, float DbodyY){
    uint32_t _DbodyY = (uint32_t)(DbodyY / 0.0001525902189670);
    remrspidgp->payload[12] = (_DbodyY >> 8);
    remrspidgp->payload[13] = _DbodyY;
}

static inline void REM_RobotSetPIDGains_set_PbodyW(REM_RobotSetPIDGainsPayload *remrspidgp, float PbodyW){
    uint32_t _PbodyW = (uint32_t)(PbodyW / 0.0006103608758679);
    remrspidgp->payload[14] = (_PbodyW >> 8);
    remrspidgp->payload[15] = _PbodyW;
}

static inline void REM_RobotSetPIDGains_set_IbodyW(REM_RobotSetPIDGainsPayload *remrspidgp, float IbodyW){
    uint32_t _IbodyW = (uint32_t)(IbodyW / 0.0003051804379339);
    remrspidgp->payload[16] = (_IbodyW >> 8);
    remrspidgp->payload[17] = _IbodyW;
}

static inline void REM_RobotSetPIDGains_set_DbodyW(REM_RobotSetPIDGainsPayload *remrspidgp, float DbodyW){
    uint32_t _DbodyW = (uint32_t)(DbodyW / 0.0001525902189670);
    remrspidgp->payload[18] = (_DbodyW >> 8);
    remrspidgp->payload[19] = _DbodyW;
}

static inline void REM_RobotSetPIDGains_set_PbodyYaw(REM_RobotSetPIDGainsPayload *remrspidgp, float PbodyYaw){
    uint32_t _PbodyYaw = (uint32_t)(PbodyYaw / 0.0006103608758679);
    remrspidgp->payload[20] = (_PbodyYaw >> 8);
    remrspidgp->payload[21] = _PbodyYaw;
}

static inline void REM_RobotSetPIDGains_set_IbodyYaw(REM_RobotSetPIDGainsPayload *remrspidgp, float IbodyYaw){
    uint32_t _IbodyYaw = (uint32_t)(IbodyYaw / 0.0003051804379339);
    remrspidgp->payload[22] = (_IbodyYaw >> 8);
    remrspidgp->payload[23] = _IbodyYaw;
}

static inline void REM_RobotSetPIDGains_set_DbodyYaw(REM_RobotSetPIDGainsPayload *remrspidgp, float DbodyYaw){
    uint32_t _DbodyYaw = (uint32_t)(DbodyYaw / 0.0001525902189670);
    remrspidgp->payload[24] = (_DbodyYaw >> 8);
    remrspidgp->payload[25] = _DbodyYaw;
}

static inline void REM_RobotSetPIDGains_set_Pwheels(REM_RobotSetPIDGainsPayload *remrspidgp, float Pwheels){
    uint32_t _Pwheels = (uint32_t)(Pwheels / 0.0006103608758679);
    remrspidgp->payload[26] = (_Pwheels >> 8);
    remrspidgp->payload[27] = _Pwheels;
}

static inline void REM_RobotSetPIDGains_set_Iwheels(REM_RobotSetPIDGainsPayload *remrspidgp, float Iwheels){
    uint32_t _Iwheels = (uint32_t)(Iwheels / 0.0003051804379339);
    remrspidgp->payload[28] = (_Iwheels >> 8);
    remrspidgp->payload[29] = _Iwheels;
}

static inline void REM_RobotSetPIDGains_set_Dwheels(REM_RobotSetPIDGainsPayload *remrspidgp, float Dwheels){
    uint32_t _Dwheels = (uint32_t)(Dwheels / 0.0001525902189670);
    remrspidgp->payload[30] = (_Dwheels >> 8);
    remrspidgp->payload[31] = _Dwheels;
}

// ================================ ENCODE ================================
static inline void encodeREM_RobotSetPIDGains(REM_RobotSetPIDGainsPayload *remrspidgp, REM_RobotSetPIDGains *remrspidg){
    REM_RobotSetPIDGains_set_header              (remrspidgp, remrspidg->header);
    REM_RobotSetPIDGains_set_remVersion          (remrspidgp, remrspidg->remVersion);
    REM_RobotSetPIDGains_set_id                  (remrspidgp, remrspidg->id);
    REM_RobotSetPIDGains_set_PbodyX              (remrspidgp, remrspidg->PbodyX);
    REM_RobotSetPIDGains_set_IbodyX              (remrspidgp, remrspidg->IbodyX);
    REM_RobotSetPIDGains_set_DbodyX              (remrspidgp, remrspidg->DbodyX);
    REM_RobotSetPIDGains_set_PbodyY              (remrspidgp, remrspidg->PbodyY);
    REM_RobotSetPIDGains_set_IbodyY              (remrspidgp, remrspidg->IbodyY);
    REM_RobotSetPIDGains_set_DbodyY              (remrspidgp, remrspidg->DbodyY);
    REM_RobotSetPIDGains_set_PbodyW              (remrspidgp, remrspidg->PbodyW);
    REM_RobotSetPIDGains_set_IbodyW              (remrspidgp, remrspidg->IbodyW);
    REM_RobotSetPIDGains_set_DbodyW              (remrspidgp, remrspidg->DbodyW);
    REM_RobotSetPIDGains_set_PbodyYaw            (remrspidgp, remrspidg->PbodyYaw);
    REM_RobotSetPIDGains_set_IbodyYaw            (remrspidgp, remrspidg->IbodyYaw);
    REM_RobotSetPIDGains_set_DbodyYaw            (remrspidgp, remrspidg->DbodyYaw);
    REM_RobotSetPIDGains_set_Pwheels             (remrspidgp, remrspidg->Pwheels);
    REM_RobotSetPIDGains_set_Iwheels             (remrspidgp, remrspidg->Iwheels);
    REM_RobotSetPIDGains_set_Dwheels             (remrspidgp, remrspidg->Dwheels);
}

// ================================ DECODE ================================
static inline void decodeREM_RobotSetPIDGains(REM_RobotSetPIDGains *remrspidg, REM_RobotSetPIDGainsPayload *remrspidgp){
    remrspidg->header    = REM_RobotSetPIDGains_get_header(remrspidgp);
    remrspidg->remVersion= REM_RobotSetPIDGains_get_remVersion(remrspidgp);
    remrspidg->id        = REM_RobotSetPIDGains_get_id(remrspidgp);
    remrspidg->PbodyX    = REM_RobotSetPIDGains_get_PbodyX(remrspidgp);
    remrspidg->IbodyX    = REM_RobotSetPIDGains_get_IbodyX(remrspidgp);
    remrspidg->DbodyX    = REM_RobotSetPIDGains_get_DbodyX(remrspidgp);
    remrspidg->PbodyY    = REM_RobotSetPIDGains_get_PbodyY(remrspidgp);
    remrspidg->IbodyY    = REM_RobotSetPIDGains_get_IbodyY(remrspidgp);
    remrspidg->DbodyY    = REM_RobotSetPIDGains_get_DbodyY(remrspidgp);
    remrspidg->PbodyW    = REM_RobotSetPIDGains_get_PbodyW(remrspidgp);
    remrspidg->IbodyW    = REM_RobotSetPIDGains_get_IbodyW(remrspidgp);
    remrspidg->DbodyW    = REM_RobotSetPIDGains_get_DbodyW(remrspidgp);
    remrspidg->PbodyYaw  = REM_RobotSetPIDGains_get_PbodyYaw(remrspidgp);
    remrspidg->IbodyYaw  = REM_RobotSetPIDGains_get_IbodyYaw(remrspidgp);
    remrspidg->DbodyYaw  = REM_RobotSetPIDGains_get_DbodyYaw(remrspidgp);
    remrspidg->Pwheels   = REM_RobotSetPIDGains_get_Pwheels(remrspidgp);
    remrspidg->Iwheels   = REM_RobotSetPIDGains_get_Iwheels(remrspidgp);
    remrspidg->Dwheels   = REM_RobotSetPIDGains_get_Dwheels(remrspidgp);
}

#endif /*__REM_ROBOT_SET_PIDGAINS_H*/