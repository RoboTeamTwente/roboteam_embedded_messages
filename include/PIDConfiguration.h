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

#ifndef __P_I_D_CONFIGURATION_H
#define __P_I_D_CONFIGURATION_H

#include <stdbool.h>
#include <stdint.h>
#include "BaseTypes.h"

typedef struct _PIDConfigurationPayload {
    uint8_t payload[PACKET_SIZE_P_I_D_CONFIGURATION];
} PIDConfigurationPayload;

typedef struct _PIDConfiguration {
    uint32_t   header              ; // integer [0, 255]             Header byte indicating the type of packet
    uint32_t   remVersion          ; // integer [0, 15]              Version of roboteam_embedded_messages
    uint32_t   id                  ; // integer [0, 15]              Id of the robot
    float      PbodyX              ; // float   [0.000, 40.000]      P gain of the PID for body_x (x-direction)
    float      IbodyX              ; // float   [0.000, 20.000]      I gain of the PID for body_x (x-direction)
    float      DbodyX              ; // float   [0.000, 10.000]      D gain of the PID for body_x (x-direction)
    float      PbodyY              ; // float   [0.000, 40.000]      P gain of the PID for body_y (y-direction)
    float      IbodyY              ; // float   [0.000, 20.000]      I gain of the PID for body_y (y-direction)
    float      DbodyY              ; // float   [0.000, 10.000]      D gain of the PID for body_y (y-direction)
    float      PbodyW              ; // float   [0.000, 40.000]      P gain of the PID for body_w (Angular velocity)
    float      IbodyW              ; // float   [0.000, 20.000]      I gain of the PID for body_w (Angular velocity)
    float      DbodyW              ; // float   [0.000, 10.000]      D gain of the PID for body_w (Angular velocity)
    float      PbodyYaw            ; // float   [0.000, 40.000]      P gain of the PID for body_yaw (Absolute angle)
    float      IbodyYaw            ; // float   [0.000, 20.000]      I gain of the PID for body_yaw (Absolute angle)
    float      DbodyYaw            ; // float   [0.000, 10.000]      D gain of the PID for body_yaw (Absolute angle)
    float      Pwheels             ; // float   [0.000, 40.000]      P gain of the PID for the wheels
    float      Iwheels             ; // float   [0.000, 20.000]      I gain of the PID for the wheels
    float      Dwheels             ; // float   [0.000, 10.000]      D gain of the PID for the wheels
} PIDConfiguration;

// ================================ GETTERS ================================
static inline uint32_t PIDConfiguration_get_header(PIDConfigurationPayload *pidcp){
    return ((pidcp->payload[0]));
}

static inline uint32_t PIDConfiguration_get_remVersion(PIDConfigurationPayload *pidcp){
    return ((pidcp->payload[1] & 0b11110000) >> 4);
}

static inline uint32_t PIDConfiguration_get_id(PIDConfigurationPayload *pidcp){
    return ((pidcp->payload[1] & 0b00001111));
}

static inline float PIDConfiguration_get_PbodyX(PIDConfigurationPayload *pidcp){
    uint32_t _PbodyX = ((pidcp->payload[2]) << 8) | ((pidcp->payload[3]));
    return (_PbodyX * 0.0006103608758679) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_IbodyX(PIDConfigurationPayload *pidcp){
    uint32_t _IbodyX = ((pidcp->payload[4]) << 8) | ((pidcp->payload[5]));
    return (_IbodyX * 0.0003051804379339) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_DbodyX(PIDConfigurationPayload *pidcp){
    uint32_t _DbodyX = ((pidcp->payload[6]) << 8) | ((pidcp->payload[7]));
    return (_DbodyX * 0.0001525902189670) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_PbodyY(PIDConfigurationPayload *pidcp){
    uint32_t _PbodyY = ((pidcp->payload[8]) << 8) | ((pidcp->payload[9]));
    return (_PbodyY * 0.0006103608758679) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_IbodyY(PIDConfigurationPayload *pidcp){
    uint32_t _IbodyY = ((pidcp->payload[10]) << 8) | ((pidcp->payload[11]));
    return (_IbodyY * 0.0003051804379339) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_DbodyY(PIDConfigurationPayload *pidcp){
    uint32_t _DbodyY = ((pidcp->payload[12]) << 8) | ((pidcp->payload[13]));
    return (_DbodyY * 0.0001525902189670) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_PbodyW(PIDConfigurationPayload *pidcp){
    uint32_t _PbodyW = ((pidcp->payload[14]) << 8) | ((pidcp->payload[15]));
    return (_PbodyW * 0.0006103608758679) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_IbodyW(PIDConfigurationPayload *pidcp){
    uint32_t _IbodyW = ((pidcp->payload[16]) << 8) | ((pidcp->payload[17]));
    return (_IbodyW * 0.0003051804379339) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_DbodyW(PIDConfigurationPayload *pidcp){
    uint32_t _DbodyW = ((pidcp->payload[18]) << 8) | ((pidcp->payload[19]));
    return (_DbodyW * 0.0001525902189670) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_PbodyYaw(PIDConfigurationPayload *pidcp){
    uint32_t _PbodyYaw = ((pidcp->payload[20]) << 8) | ((pidcp->payload[21]));
    return (_PbodyYaw * 0.0006103608758679) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_IbodyYaw(PIDConfigurationPayload *pidcp){
    uint32_t _IbodyYaw = ((pidcp->payload[22]) << 8) | ((pidcp->payload[23]));
    return (_IbodyYaw * 0.0003051804379339) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_DbodyYaw(PIDConfigurationPayload *pidcp){
    uint32_t _DbodyYaw = ((pidcp->payload[24]) << 8) | ((pidcp->payload[25]));
    return (_DbodyYaw * 0.0001525902189670) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_Pwheels(PIDConfigurationPayload *pidcp){
    uint32_t _Pwheels = ((pidcp->payload[26]) << 8) | ((pidcp->payload[27]));
    return (_Pwheels * 0.0006103608758679) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_Iwheels(PIDConfigurationPayload *pidcp){
    uint32_t _Iwheels = ((pidcp->payload[28]) << 8) | ((pidcp->payload[29]));
    return (_Iwheels * 0.0003051804379339) + 0.0000000000000000;
}

static inline float PIDConfiguration_get_Dwheels(PIDConfigurationPayload *pidcp){
    uint32_t _Dwheels = ((pidcp->payload[30]) << 8) | ((pidcp->payload[31]));
    return (_Dwheels * 0.0001525902189670) + 0.0000000000000000;
}

// ================================ SETTERS ================================
static inline void PIDConfiguration_set_header(PIDConfigurationPayload *pidcp, uint32_t header){
    pidcp->payload[0] = header;
}

static inline void PIDConfiguration_set_remVersion(PIDConfigurationPayload *pidcp, uint32_t remVersion){
    pidcp->payload[1] = ((remVersion << 4) & 0b11110000) | (pidcp->payload[1] & 0b00001111);
}

static inline void PIDConfiguration_set_id(PIDConfigurationPayload *pidcp, uint32_t id){
    pidcp->payload[1] = (id & 0b00001111) | (pidcp->payload[1] & 0b11110000);
}

static inline void PIDConfiguration_set_PbodyX(PIDConfigurationPayload *pidcp, float PbodyX){
    uint32_t _PbodyX = (uint32_t)(PbodyX / 0.0006103608758679);
    pidcp->payload[2] = (_PbodyX >> 8);
    pidcp->payload[3] = _PbodyX;
}

static inline void PIDConfiguration_set_IbodyX(PIDConfigurationPayload *pidcp, float IbodyX){
    uint32_t _IbodyX = (uint32_t)(IbodyX / 0.0003051804379339);
    pidcp->payload[4] = (_IbodyX >> 8);
    pidcp->payload[5] = _IbodyX;
}

static inline void PIDConfiguration_set_DbodyX(PIDConfigurationPayload *pidcp, float DbodyX){
    uint32_t _DbodyX = (uint32_t)(DbodyX / 0.0001525902189670);
    pidcp->payload[6] = (_DbodyX >> 8);
    pidcp->payload[7] = _DbodyX;
}

static inline void PIDConfiguration_set_PbodyY(PIDConfigurationPayload *pidcp, float PbodyY){
    uint32_t _PbodyY = (uint32_t)(PbodyY / 0.0006103608758679);
    pidcp->payload[8] = (_PbodyY >> 8);
    pidcp->payload[9] = _PbodyY;
}

static inline void PIDConfiguration_set_IbodyY(PIDConfigurationPayload *pidcp, float IbodyY){
    uint32_t _IbodyY = (uint32_t)(IbodyY / 0.0003051804379339);
    pidcp->payload[10] = (_IbodyY >> 8);
    pidcp->payload[11] = _IbodyY;
}

static inline void PIDConfiguration_set_DbodyY(PIDConfigurationPayload *pidcp, float DbodyY){
    uint32_t _DbodyY = (uint32_t)(DbodyY / 0.0001525902189670);
    pidcp->payload[12] = (_DbodyY >> 8);
    pidcp->payload[13] = _DbodyY;
}

static inline void PIDConfiguration_set_PbodyW(PIDConfigurationPayload *pidcp, float PbodyW){
    uint32_t _PbodyW = (uint32_t)(PbodyW / 0.0006103608758679);
    pidcp->payload[14] = (_PbodyW >> 8);
    pidcp->payload[15] = _PbodyW;
}

static inline void PIDConfiguration_set_IbodyW(PIDConfigurationPayload *pidcp, float IbodyW){
    uint32_t _IbodyW = (uint32_t)(IbodyW / 0.0003051804379339);
    pidcp->payload[16] = (_IbodyW >> 8);
    pidcp->payload[17] = _IbodyW;
}

static inline void PIDConfiguration_set_DbodyW(PIDConfigurationPayload *pidcp, float DbodyW){
    uint32_t _DbodyW = (uint32_t)(DbodyW / 0.0001525902189670);
    pidcp->payload[18] = (_DbodyW >> 8);
    pidcp->payload[19] = _DbodyW;
}

static inline void PIDConfiguration_set_PbodyYaw(PIDConfigurationPayload *pidcp, float PbodyYaw){
    uint32_t _PbodyYaw = (uint32_t)(PbodyYaw / 0.0006103608758679);
    pidcp->payload[20] = (_PbodyYaw >> 8);
    pidcp->payload[21] = _PbodyYaw;
}

static inline void PIDConfiguration_set_IbodyYaw(PIDConfigurationPayload *pidcp, float IbodyYaw){
    uint32_t _IbodyYaw = (uint32_t)(IbodyYaw / 0.0003051804379339);
    pidcp->payload[22] = (_IbodyYaw >> 8);
    pidcp->payload[23] = _IbodyYaw;
}

static inline void PIDConfiguration_set_DbodyYaw(PIDConfigurationPayload *pidcp, float DbodyYaw){
    uint32_t _DbodyYaw = (uint32_t)(DbodyYaw / 0.0001525902189670);
    pidcp->payload[24] = (_DbodyYaw >> 8);
    pidcp->payload[25] = _DbodyYaw;
}

static inline void PIDConfiguration_set_Pwheels(PIDConfigurationPayload *pidcp, float Pwheels){
    uint32_t _Pwheels = (uint32_t)(Pwheels / 0.0006103608758679);
    pidcp->payload[26] = (_Pwheels >> 8);
    pidcp->payload[27] = _Pwheels;
}

static inline void PIDConfiguration_set_Iwheels(PIDConfigurationPayload *pidcp, float Iwheels){
    uint32_t _Iwheels = (uint32_t)(Iwheels / 0.0003051804379339);
    pidcp->payload[28] = (_Iwheels >> 8);
    pidcp->payload[29] = _Iwheels;
}

static inline void PIDConfiguration_set_Dwheels(PIDConfigurationPayload *pidcp, float Dwheels){
    uint32_t _Dwheels = (uint32_t)(Dwheels / 0.0001525902189670);
    pidcp->payload[30] = (_Dwheels >> 8);
    pidcp->payload[31] = _Dwheels;
}

// ================================ ENCODE ================================
static inline void encodePIDConfiguration(PIDConfigurationPayload *pidcp, PIDConfiguration *pidc){
    PIDConfiguration_set_header              (pidcp, pidc->header);
    PIDConfiguration_set_remVersion          (pidcp, pidc->remVersion);
    PIDConfiguration_set_id                  (pidcp, pidc->id);
    PIDConfiguration_set_PbodyX              (pidcp, pidc->PbodyX);
    PIDConfiguration_set_IbodyX              (pidcp, pidc->IbodyX);
    PIDConfiguration_set_DbodyX              (pidcp, pidc->DbodyX);
    PIDConfiguration_set_PbodyY              (pidcp, pidc->PbodyY);
    PIDConfiguration_set_IbodyY              (pidcp, pidc->IbodyY);
    PIDConfiguration_set_DbodyY              (pidcp, pidc->DbodyY);
    PIDConfiguration_set_PbodyW              (pidcp, pidc->PbodyW);
    PIDConfiguration_set_IbodyW              (pidcp, pidc->IbodyW);
    PIDConfiguration_set_DbodyW              (pidcp, pidc->DbodyW);
    PIDConfiguration_set_PbodyYaw            (pidcp, pidc->PbodyYaw);
    PIDConfiguration_set_IbodyYaw            (pidcp, pidc->IbodyYaw);
    PIDConfiguration_set_DbodyYaw            (pidcp, pidc->DbodyYaw);
    PIDConfiguration_set_Pwheels             (pidcp, pidc->Pwheels);
    PIDConfiguration_set_Iwheels             (pidcp, pidc->Iwheels);
    PIDConfiguration_set_Dwheels             (pidcp, pidc->Dwheels);
}

// ================================ DECODE ================================
static inline void decodePIDConfiguration(PIDConfiguration *pidc, PIDConfigurationPayload *pidcp){
    pidc->header         = PIDConfiguration_get_header(pidcp);
    pidc->remVersion     = PIDConfiguration_get_remVersion(pidcp);
    pidc->id             = PIDConfiguration_get_id(pidcp);
    pidc->PbodyX         = PIDConfiguration_get_PbodyX(pidcp);
    pidc->IbodyX         = PIDConfiguration_get_IbodyX(pidcp);
    pidc->DbodyX         = PIDConfiguration_get_DbodyX(pidcp);
    pidc->PbodyY         = PIDConfiguration_get_PbodyY(pidcp);
    pidc->IbodyY         = PIDConfiguration_get_IbodyY(pidcp);
    pidc->DbodyY         = PIDConfiguration_get_DbodyY(pidcp);
    pidc->PbodyW         = PIDConfiguration_get_PbodyW(pidcp);
    pidc->IbodyW         = PIDConfiguration_get_IbodyW(pidcp);
    pidc->DbodyW         = PIDConfiguration_get_DbodyW(pidcp);
    pidc->PbodyYaw       = PIDConfiguration_get_PbodyYaw(pidcp);
    pidc->IbodyYaw       = PIDConfiguration_get_IbodyYaw(pidcp);
    pidc->DbodyYaw       = PIDConfiguration_get_DbodyYaw(pidcp);
    pidc->Pwheels        = PIDConfiguration_get_Pwheels(pidcp);
    pidc->Iwheels        = PIDConfiguration_get_Iwheels(pidcp);
    pidc->Dwheels        = PIDConfiguration_get_Dwheels(pidcp);
}

#endif /*__P_I_D_CONFIGURATION_H*/
