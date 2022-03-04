// AUTOGENERATED. Run generator/main.py to regenerate
/*
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
*/

#ifndef __REM_ROBOT_COMMAND_H
#define __REM_ROBOT_COMMAND_H

#include <stdbool.h>
#include <stdint.h>
#include "REM_BaseTypes.h"

typedef struct _REM_RobotCommandPayload {
    uint8_t payload[PACKET_SIZE_REM_ROBOT_COMMAND];
} REM_RobotCommandPayload;

typedef struct _REM_RobotCommand {
    uint32_t   header              ; // integer [0, 255]             Header byte indicating the type of packet
    uint32_t   remVersion          ; // integer [0, 15]              Version of roboteam_embedded_messages
    uint32_t   id                  ; // integer [0, 15]              Id of the robot
    uint32_t   messageId           ; // integer [0, 15]              Id of the message
    bool       doKick              ; // integer [0, 1]               Do a kick if ballsensor
    bool       doChip              ; // integer [0, 1]               Do a chip if ballsensor
    bool       doForce             ; // integer [0, 1]               Do regardless of ballsensor
    bool       useCameraAngle      ; // integer [0, 1]               Use the info in 'cameraAngle'
    float      rho                 ; // float   [0.000, 8.000]       Magnitude of movement (m/s)
    float      theta               ; // float   [-3.142, 3.142]      Direction of movement (radians)
    float      angle               ; // float   [-3.142, 3.142]      Absolute angle (rad)
    float      angularVelocity     ; // float   [-12.566, 12.566]    Angular velocity (rad/s)
    float      cameraAngle         ; // float   [-3.142, 3.142]      Angle of the robot as seen by camera (rad)
    float      dribbler            ; // float   [0.000, 1.000]       Dribbler speed
    float      kickChipPower       ; // float   [0.000, 6.500]       Speed of the ball in m/s
    bool       angularControl      ; // integer [0, 1]               NOT IMPLEMENTED IN ROBOT YET. 0 = angular velocity, 1 = absolute angle
    bool       feedback            ; // integer [0, 1]               Ignore the packet. Just send feedback
} REM_RobotCommand;

// ================================ GETTERS ================================
static inline uint32_t REM_RobotCommand_get_header(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[0]));
}

static inline uint32_t REM_RobotCommand_get_remVersion(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[1] & 0b11110000) >> 4);
}

static inline uint32_t REM_RobotCommand_get_id(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[1] & 0b00001111));
}

static inline uint32_t REM_RobotCommand_get_messageId(REM_RobotCommandPayload *remrcp){
    return ((remrcp->payload[2] & 0b11110000) >> 4);
}

static inline bool REM_RobotCommand_get_doKick(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[2] & 0b00001000) > 0;
}

static inline bool REM_RobotCommand_get_doChip(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[2] & 0b00000100) > 0;
}

static inline bool REM_RobotCommand_get_doForce(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[2] & 0b00000010) > 0;
}

static inline bool REM_RobotCommand_get_useCameraAngle(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[2] & 0b00000001) > 0;
}

static inline float REM_RobotCommand_get_rho(REM_RobotCommandPayload *remrcp){
    uint32_t _rho = ((remrcp->payload[3]) << 8) | ((remrcp->payload[4]));
    return (_rho * 0.0001220721751736) + 0.0000000000000000;
}

static inline float REM_RobotCommand_get_theta(REM_RobotCommandPayload *remrcp){
    uint32_t _theta = ((remrcp->payload[5]) << 8) | ((remrcp->payload[6]));
    return (_theta * 0.0000958752621833) + -3.1415926535897931;
}

static inline float REM_RobotCommand_get_angle(REM_RobotCommandPayload *remrcp){
    uint32_t _angle = ((remrcp->payload[7]) << 8) | ((remrcp->payload[8]));
    return (_angle * 0.0000958752621833) + -3.1415926535897931;
}

static inline float REM_RobotCommand_get_angularVelocity(REM_RobotCommandPayload *remrcp){
    uint32_t _angularVelocity = ((remrcp->payload[9]) << 8) | ((remrcp->payload[10]));
    return (_angularVelocity * 0.0003835010487330) + -12.5663706143591725;
}

static inline float REM_RobotCommand_get_cameraAngle(REM_RobotCommandPayload *remrcp){
    uint32_t _cameraAngle = ((remrcp->payload[11]) << 8) | ((remrcp->payload[12]));
    return (_cameraAngle * 0.0000958752621833) + -3.1415926535897931;
}

static inline float REM_RobotCommand_get_dribbler(REM_RobotCommandPayload *remrcp){
    uint32_t _dribbler = ((remrcp->payload[13] & 0b11100000) >> 5);
    return (_dribbler * 0.1428571428571428) + 0.0000000000000000;
}

static inline float REM_RobotCommand_get_kickChipPower(REM_RobotCommandPayload *remrcp){
    uint32_t _kickChipPower = ((remrcp->payload[13] & 0b00011100) >> 2);
    return (_kickChipPower * 0.9285714285714286) + 0.0000000000000000;
}

static inline bool REM_RobotCommand_get_angularControl(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[13] & 0b00000010) > 0;
}

static inline bool REM_RobotCommand_get_feedback(REM_RobotCommandPayload *remrcp){
    return (remrcp->payload[13] & 0b00000001) > 0;
}

// ================================ SETTERS ================================
static inline void REM_RobotCommand_set_header(REM_RobotCommandPayload *remrcp, uint32_t header){
    remrcp->payload[0] = header;
}

static inline void REM_RobotCommand_set_remVersion(REM_RobotCommandPayload *remrcp, uint32_t remVersion){
    remrcp->payload[1] = ((remVersion << 4) & 0b11110000) | (remrcp->payload[1] & 0b00001111);
}

static inline void REM_RobotCommand_set_id(REM_RobotCommandPayload *remrcp, uint32_t id){
    remrcp->payload[1] = (id & 0b00001111) | (remrcp->payload[1] & 0b11110000);
}

static inline void REM_RobotCommand_set_messageId(REM_RobotCommandPayload *remrcp, uint32_t messageId){
    remrcp->payload[2] = ((messageId << 4) & 0b11110000) | (remrcp->payload[2] & 0b00001111);
}

static inline void REM_RobotCommand_set_doKick(REM_RobotCommandPayload *remrcp, bool doKick){
    remrcp->payload[2] = ((doKick << 3) & 0b00001000) | (remrcp->payload[2] & 0b11110111);
}

static inline void REM_RobotCommand_set_doChip(REM_RobotCommandPayload *remrcp, bool doChip){
    remrcp->payload[2] = ((doChip << 2) & 0b00000100) | (remrcp->payload[2] & 0b11111011);
}

static inline void REM_RobotCommand_set_doForce(REM_RobotCommandPayload *remrcp, bool doForce){
    remrcp->payload[2] = ((doForce << 1) & 0b00000010) | (remrcp->payload[2] & 0b11111101);
}

static inline void REM_RobotCommand_set_useCameraAngle(REM_RobotCommandPayload *remrcp, bool useCameraAngle){
    remrcp->payload[2] = (useCameraAngle & 0b00000001) | (remrcp->payload[2] & 0b11111110);
}

static inline void REM_RobotCommand_set_rho(REM_RobotCommandPayload *remrcp, float rho){
    uint32_t _rho = (uint32_t)(rho / 0.0001220721751736);
    remrcp->payload[3] = (_rho >> 8);
    remrcp->payload[4] = _rho;
}

static inline void REM_RobotCommand_set_theta(REM_RobotCommandPayload *remrcp, float theta){
    uint32_t _theta = (uint32_t)((theta +3.1415926535897931) / 0.0000958752621833);
    remrcp->payload[5] = (_theta >> 8);
    remrcp->payload[6] = _theta;
}

static inline void REM_RobotCommand_set_angle(REM_RobotCommandPayload *remrcp, float angle){
    uint32_t _angle = (uint32_t)((angle +3.1415926535897931) / 0.0000958752621833);
    remrcp->payload[7] = (_angle >> 8);
    remrcp->payload[8] = _angle;
}

static inline void REM_RobotCommand_set_angularVelocity(REM_RobotCommandPayload *remrcp, float angularVelocity){
    uint32_t _angularVelocity = (uint32_t)((angularVelocity +12.5663706143591725) / 0.0003835010487330);
    remrcp->payload[9] = (_angularVelocity >> 8);
    remrcp->payload[10] = _angularVelocity;
}

static inline void REM_RobotCommand_set_cameraAngle(REM_RobotCommandPayload *remrcp, float cameraAngle){
    uint32_t _cameraAngle = (uint32_t)((cameraAngle +3.1415926535897931) / 0.0000958752621833);
    remrcp->payload[11] = (_cameraAngle >> 8);
    remrcp->payload[12] = _cameraAngle;
}

static inline void REM_RobotCommand_set_dribbler(REM_RobotCommandPayload *remrcp, float dribbler){
    uint32_t _dribbler = (uint32_t)(dribbler / 0.1428571428571428);
    remrcp->payload[13] = ((_dribbler << 5) & 0b11100000) | (remrcp->payload[13] & 0b00011111);
}

static inline void REM_RobotCommand_set_kickChipPower(REM_RobotCommandPayload *remrcp, float kickChipPower){
    uint32_t _kickChipPower = (uint32_t)(kickChipPower / 0.9285714285714286);
    remrcp->payload[13] = ((_kickChipPower << 2) & 0b00011100) | (remrcp->payload[13] & 0b11100011);
}

static inline void REM_RobotCommand_set_angularControl(REM_RobotCommandPayload *remrcp, bool angularControl){
    remrcp->payload[13] = ((angularControl << 1) & 0b00000010) | (remrcp->payload[13] & 0b11111101);
}

static inline void REM_RobotCommand_set_feedback(REM_RobotCommandPayload *remrcp, bool feedback){
    remrcp->payload[13] = (feedback & 0b00000001) | (remrcp->payload[13] & 0b11111110);
}

// ================================ ENCODE ================================
static inline void encodeREM_RobotCommand(REM_RobotCommandPayload *remrcp, REM_RobotCommand *remrc){
    REM_RobotCommand_set_header              (remrcp, remrc->header);
    REM_RobotCommand_set_remVersion          (remrcp, remrc->remVersion);
    REM_RobotCommand_set_id                  (remrcp, remrc->id);
    REM_RobotCommand_set_messageId           (remrcp, remrc->messageId);
    REM_RobotCommand_set_doKick              (remrcp, remrc->doKick);
    REM_RobotCommand_set_doChip              (remrcp, remrc->doChip);
    REM_RobotCommand_set_doForce             (remrcp, remrc->doForce);
    REM_RobotCommand_set_useCameraAngle      (remrcp, remrc->useCameraAngle);
    REM_RobotCommand_set_rho                 (remrcp, remrc->rho);
    REM_RobotCommand_set_theta               (remrcp, remrc->theta);
    REM_RobotCommand_set_angle               (remrcp, remrc->angle);
    REM_RobotCommand_set_angularVelocity     (remrcp, remrc->angularVelocity);
    REM_RobotCommand_set_cameraAngle         (remrcp, remrc->cameraAngle);
    REM_RobotCommand_set_dribbler            (remrcp, remrc->dribbler);
    REM_RobotCommand_set_kickChipPower       (remrcp, remrc->kickChipPower);
    REM_RobotCommand_set_angularControl      (remrcp, remrc->angularControl);
    REM_RobotCommand_set_feedback            (remrcp, remrc->feedback);
}

// ================================ DECODE ================================
static inline void decodeREM_RobotCommand(REM_RobotCommand *remrc, REM_RobotCommandPayload *remrcp){
    remrc->header        = REM_RobotCommand_get_header(remrcp);
    remrc->remVersion    = REM_RobotCommand_get_remVersion(remrcp);
    remrc->id            = REM_RobotCommand_get_id(remrcp);
    remrc->messageId     = REM_RobotCommand_get_messageId(remrcp);
    remrc->doKick        = REM_RobotCommand_get_doKick(remrcp);
    remrc->doChip        = REM_RobotCommand_get_doChip(remrcp);
    remrc->doForce       = REM_RobotCommand_get_doForce(remrcp);
    remrc->useCameraAngle= REM_RobotCommand_get_useCameraAngle(remrcp);
    remrc->rho           = REM_RobotCommand_get_rho(remrcp);
    remrc->theta         = REM_RobotCommand_get_theta(remrcp);
    remrc->angle         = REM_RobotCommand_get_angle(remrcp);
    remrc->angularVelocity= REM_RobotCommand_get_angularVelocity(remrcp);
    remrc->cameraAngle   = REM_RobotCommand_get_cameraAngle(remrcp);
    remrc->dribbler      = REM_RobotCommand_get_dribbler(remrcp);
    remrc->kickChipPower = REM_RobotCommand_get_kickChipPower(remrcp);
    remrc->angularControl= REM_RobotCommand_get_angularControl(remrcp);
    remrc->feedback      = REM_RobotCommand_get_feedback(remrcp);
}

#endif /*__REM_ROBOT_COMMAND_H*/
