// AUTOGENERATED. Run generator/main.py to regenerate
// Generated on July 04 2021, 22:30:45

/*
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- id
-------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- 1------- -------- -------- -------- -------- -------- -------- -------- -------- -------- doKick
-------- -------- -1------ -------- -------- -------- -------- -------- -------- -------- -------- -------- doChip
-------- -------- --1----- -------- -------- -------- -------- -------- -------- -------- -------- -------- doForce
-------- -------- ---1---- -------- -------- -------- -------- -------- -------- -------- -------- -------- useCameraAngle
-------- -------- ----1111 11111111 1111---- -------- -------- -------- -------- -------- -------- -------- rho
-------- -------- -------- -------- ----1111 11111111 1111---- -------- -------- -------- -------- -------- theta
-------- -------- -------- -------- -------- -------- ----1111 11111111 1111---- -------- -------- -------- angle
-------- -------- -------- -------- -------- -------- -------- -------- ----1111 11111111 1111---- -------- cameraAngle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----111- -------- dribbler
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------1 11------ kickChipPower
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- --1----- angularControl
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ---1---- feedback
*/

#ifndef __ROBOT_COMMAND_H
#define __ROBOT_COMMAND_H

#include <stdbool.h>
#include <stdint.h>
#include "BaseTypes.h"

typedef struct _RobotCommandPayload {
    uint8_t payload[PACKET_SIZE_ROBOT_COMMAND];
} RobotCommandPayload;

typedef struct _RobotCommand {
    uint32_t   header              ; // Header byte indicating the type of packet
    uint32_t   id                  ; // Id of the robot
    uint32_t   messageId           ; // Id of the message
    bool       doKick              ; // Do a kick if ballsensor
    bool       doChip              ; // Do a chip if ballsensor
    bool       doForce             ; // Do regardless of ballsensor
    bool       useCameraAngle      ; // Use the info in 'cameraAngle'
    float      rho                 ; // Magnitude of movement (m/s)
    float      theta               ; // Direction of movement (radians)
    float      angle               ; // Absolute angle (rad) / angular velocity (rad/s)
    float      cameraAngle         ; // Angle of the robot as seen by camera (rad)
    uint32_t   dribbler            ; // Dribbler speed
    uint32_t   kickChipPower       ; // Power of the kick or chip
    bool       angularControl      ; // 0 = angular velocity, 1 = absolute angle
    bool       feedback            ; // Ignore the packet. Just send feedback
} RobotCommand;

// ================================ GETTERS ================================
static inline uint32_t RobotCommand_get_header(RobotCommandPayload *rcp){
    return ((rcp->payload[0]));
}

static inline uint32_t RobotCommand_get_id(RobotCommandPayload *rcp){
    return ((rcp->payload[1] & 0b11110000) >> 4);
}

static inline uint32_t RobotCommand_get_messageId(RobotCommandPayload *rcp){
    return ((rcp->payload[1] & 0b00001111));
}

// ================================ SETTERS ================================
static inline void RobotCommand_set_header(RobotCommandPayload *rcp, uint32_t header){
    rcp->payload[0] = header;
}

static inline void RobotCommand_set_id(RobotCommandPayload *rcp, uint32_t id){
    rcp->payload[1] = ((id << 4) & 0b11110000) | (payload[1] & 0b00001111);
}

static inline void RobotCommand_set_messageId(RobotCommandPayload *rcp, uint32_t messageId){
    rcp->payload[1] = (messageId & 0b00001111) | (payload[1] & 0b11110000);
}

// ================================ ENCODE ================================
static inline void encodeRobotCommand(RobotCommandPayload *rcp, RobotCommand *rc){
    RobotCommand_set_header              (rcp, rc->header);
    RobotCommand_set_id                  (rcp, rc->id);
    RobotCommand_set_messageId           (rcp, rc->messageId);
    RobotCommand_set_doKick              (rcp, rc->doKick);
    RobotCommand_set_doChip              (rcp, rc->doChip);
    RobotCommand_set_doForce             (rcp, rc->doForce);
    RobotCommand_set_useCameraAngle      (rcp, rc->useCameraAngle);
    RobotCommand_set_rho                 (rcp, rc->rho);
    RobotCommand_set_theta               (rcp, rc->theta);
    RobotCommand_set_angle               (rcp, rc->angle);
    RobotCommand_set_cameraAngle         (rcp, rc->cameraAngle);
    RobotCommand_set_dribbler            (rcp, rc->dribbler);
    RobotCommand_set_kickChipPower       (rcp, rc->kickChipPower);
    RobotCommand_set_angularControl      (rcp, rc->angularControl);
    RobotCommand_set_feedback            (rcp, rc->feedback);
}

// ================================ DECODE ================================
static inline void decodeRobotCommand(RobotCommand *rc, RobotCommandPayload *rcp){
    rc->header           = RobotCommand_get_header(rcp);
    rc->id               = RobotCommand_get_id(rcp);
    rc->messageId        = RobotCommand_get_messageId(rcp);
    rc->doKick           = RobotCommand_get_doKick(rcp);
    rc->doChip           = RobotCommand_get_doChip(rcp);
    rc->doForce          = RobotCommand_get_doForce(rcp);
    rc->useCameraAngle   = RobotCommand_get_useCameraAngle(rcp);
    rc->rho              = RobotCommand_get_rho(rcp);
    rc->theta            = RobotCommand_get_theta(rcp);
    rc->angle            = RobotCommand_get_angle(rcp);
    rc->cameraAngle      = RobotCommand_get_cameraAngle(rcp);
    rc->dribbler         = RobotCommand_get_dribbler(rcp);
    rc->kickChipPower    = RobotCommand_get_kickChipPower(rcp);
    rc->angularControl   = RobotCommand_get_angularControl(rcp);
    rc->feedback         = RobotCommand_get_feedback(rcp);
}

#endif /*__ROBOT_COMMAND_H*/
