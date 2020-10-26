// AUTOGENERATED. Run generator/main.py to regenerate
// Generated on October 26 2020, 14:36:52

#ifndef __ROBOT_COMMAND_H
#define __ROBOT_COMMAND_H

#include <stdbool.h>
#include <stdint.h>
#include "BaseTypes.h"

typedef struct _RobotCommandPayload {
	uint8_t payload[PACKET_SIZE_ROBOT_COMMAND];
} RobotCommandPayload;

#define CONVERT_RHO             0.004f
#define CONVERT_THETA           0.00307f
#define CONVERT_YAW_REF         0.00614f
#define CONVERT_SHOOTING_POWER  0.39f
#define CONVERT_DRIBBLE_SPEED   3.125f
#define CONVERT_VISION_YAW      0.00307f



/** ================================ PACKET ================================ 
[---0--] [---1--] [---2--] [---3--] [---4--] [---5--] [---6--] [---7--] [---8--] [---9--] [--10--]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- id
-------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- doKick
-------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- doChip
-------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- doForce
-------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- useCameraAngle
-------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- -------- rho
-------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- theta
-------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- angle
-------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- cameraAngle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 111----- dribbler
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ---111-- kickChipPower
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ------1- angularControl
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------1 feedback
*/



/** ================================ STRUCT ================================ */
typedef struct _RobotCommand {
	uint8_t header:8;            // Header indicating packet type
	uint8_t id:4;                // Id of the robot
	bool doKick:1;               // Do a kick if ballsensor
	bool doChip:1;               // Do a chip if ballsensor
	bool doForce:1;              // Do regardless of ballsensor
	bool useCameraAngle:1;       // Use the info in 'cameraAngle'
	uint16_t rho:16;             // Direction of movement
	uint16_t theta:16;           // Magnitude of movement (speed)
	uint16_t angle:16;           // Absolute angle / angular velocity
	uint16_t cameraAngle:16;     // Angle of the robot as seen by camera
	uint8_t dribbler:3;          // Dribbler speed
	uint8_t kickChipPower:3;     // Power of the kick or chip
	bool angularControl:1;       // 0 = angular velocity, 1 = absolute angle
	bool feedback:1;             // Ignore the packet. Just send feedback
} RobotCommand;



/** ================================ GETTERS ================================ */
static inline uint8_t RobotCommand_get_header(RobotCommandPayload *rcp){
	return ((rcp->payload[0]));
}
static inline uint8_t RobotCommand_get_id(RobotCommandPayload *rcp){
	return ((rcp->payload[1] & 0b11110000) >> 4);
}
static inline bool RobotCommand_get_doKick(RobotCommandPayload *rcp){
	return ((rcp->payload[1] & 0b00001000) > 0);
}
static inline bool RobotCommand_get_doChip(RobotCommandPayload *rcp){
	return ((rcp->payload[1] & 0b00000100) > 0);
}
static inline bool RobotCommand_get_doForce(RobotCommandPayload *rcp){
	return ((rcp->payload[1] & 0b00000010) > 0);
}
static inline bool RobotCommand_get_useCameraAngle(RobotCommandPayload *rcp){
	return ((rcp->payload[1] & 0b00000001) > 0);
}
static inline uint16_t RobotCommand_get_rho(RobotCommandPayload *rcp){
	return ((rcp->payload[2]) << 8) | ((rcp->payload[3]));
}
static inline uint16_t RobotCommand_get_theta(RobotCommandPayload *rcp){
	return ((rcp->payload[4]) << 8) | ((rcp->payload[5]));
}
static inline uint16_t RobotCommand_get_angle(RobotCommandPayload *rcp){
	return ((rcp->payload[6]) << 8) | ((rcp->payload[7]));
}
static inline uint16_t RobotCommand_get_cameraAngle(RobotCommandPayload *rcp){
	return ((rcp->payload[8]) << 8) | ((rcp->payload[9]));
}
static inline uint8_t RobotCommand_get_dribbler(RobotCommandPayload *rcp){
	return ((rcp->payload[10] & 0b11100000) >> 5);
}
static inline uint8_t RobotCommand_get_kickChipPower(RobotCommandPayload *rcp){
	return ((rcp->payload[10] & 0b00011100) >> 2);
}
static inline bool RobotCommand_get_angularControl(RobotCommandPayload *rcp){
	return ((rcp->payload[10] & 0b00000010) > 0);
}
static inline bool RobotCommand_get_feedback(RobotCommandPayload *rcp){
	return ((rcp->payload[10] & 0b00000001) > 0);
}



/** ================================ SETTERS ================================ */
static inline void RobotCommand_set_header(RobotCommandPayload *rcp, uint8_t header){
	rcp->payload[0] = header;
}
static inline void RobotCommand_set_id(RobotCommandPayload *rcp, uint8_t id){
	rcp->payload[1] = ((id << 4) & 0b11110000) | (rcp->payload[1] & 0b00001111);
}
static inline void RobotCommand_set_doKick(RobotCommandPayload *rcp, bool doKick){
	rcp->payload[1] = ((doKick << 3) & 0b00001000) | (rcp->payload[1] & 0b11110111);
}
static inline void RobotCommand_set_doChip(RobotCommandPayload *rcp, bool doChip){
	rcp->payload[1] = ((doChip << 2) & 0b00000100) | (rcp->payload[1] & 0b11111011);
}
static inline void RobotCommand_set_doForce(RobotCommandPayload *rcp, bool doForce){
	rcp->payload[1] = ((doForce << 1) & 0b00000010) | (rcp->payload[1] & 0b11111101);
}
static inline void RobotCommand_set_useCameraAngle(RobotCommandPayload *rcp, bool useCameraAngle){
	rcp->payload[1] = (useCameraAngle & 0b00000001) | (rcp->payload[1] & 0b11111110);
}
static inline void RobotCommand_set_rho(RobotCommandPayload *rcp, uint16_t rho){
	rcp->payload[2] = (rho >> 8);
	rcp->payload[3] = rho;
}
static inline void RobotCommand_set_theta(RobotCommandPayload *rcp, uint16_t theta){
	rcp->payload[4] = (theta >> 8);
	rcp->payload[5] = theta;
}
static inline void RobotCommand_set_angle(RobotCommandPayload *rcp, uint16_t angle){
	rcp->payload[6] = (angle >> 8);
	rcp->payload[7] = angle;
}
static inline void RobotCommand_set_cameraAngle(RobotCommandPayload *rcp, uint16_t cameraAngle){
	rcp->payload[8] = (cameraAngle >> 8);
	rcp->payload[9] = cameraAngle;
}
static inline void RobotCommand_set_dribbler(RobotCommandPayload *rcp, uint8_t dribbler){
	rcp->payload[10] = ((dribbler << 5) & 0b11100000) | (rcp->payload[10] & 0b00011111);
}
static inline void RobotCommand_set_kickChipPower(RobotCommandPayload *rcp, uint8_t kickChipPower){
	rcp->payload[10] = ((kickChipPower << 2) & 0b00011100) | (rcp->payload[10] & 0b11100011);
}
static inline void RobotCommand_set_angularControl(RobotCommandPayload *rcp, bool angularControl){
	rcp->payload[10] = ((angularControl << 1) & 0b00000010) | (rcp->payload[10] & 0b11111101);
}
static inline void RobotCommand_set_feedback(RobotCommandPayload *rcp, bool feedback){
	rcp->payload[10] = (feedback & 0b00000001) | (rcp->payload[10] & 0b11111110);
}



/** ================================ DECODE ================================ */
static inline void decodeRobotCommand(RobotCommand *rc, RobotCommandPayload *rcp){
	rc->header              = RobotCommand_get_header(rcp);
	rc->id                  = RobotCommand_get_id(rcp);
	rc->doKick              = RobotCommand_get_doKick(rcp);
	rc->doChip              = RobotCommand_get_doChip(rcp);
	rc->doForce             = RobotCommand_get_doForce(rcp);
	rc->useCameraAngle      = RobotCommand_get_useCameraAngle(rcp);
	rc->rho                 = RobotCommand_get_rho(rcp);
	rc->theta               = RobotCommand_get_theta(rcp);
	rc->angle               = RobotCommand_get_angle(rcp);
	rc->cameraAngle         = RobotCommand_get_cameraAngle(rcp);
	rc->dribbler            = RobotCommand_get_dribbler(rcp);
	rc->kickChipPower       = RobotCommand_get_kickChipPower(rcp);
	rc->angularControl      = RobotCommand_get_angularControl(rcp);
	rc->feedback            = RobotCommand_get_feedback(rcp);
}



/** ================================ ENCODE ================================ */
static inline void encodeRobotCommand(RobotCommandPayload *rcp, RobotCommand *rc){
	RobotCommand_set_header(rcp, rc->header);
	RobotCommand_set_id(rcp, rc->id);
	RobotCommand_set_doKick(rcp, rc->doKick);
	RobotCommand_set_doChip(rcp, rc->doChip);
	RobotCommand_set_doForce(rcp, rc->doForce);
	RobotCommand_set_useCameraAngle(rcp, rc->useCameraAngle);
	RobotCommand_set_rho(rcp, rc->rho);
	RobotCommand_set_theta(rcp, rc->theta);
	RobotCommand_set_angle(rcp, rc->angle);
	RobotCommand_set_cameraAngle(rcp, rc->cameraAngle);
	RobotCommand_set_dribbler(rcp, rc->dribbler);
	RobotCommand_set_kickChipPower(rcp, rc->kickChipPower);
	RobotCommand_set_angularControl(rcp, rc->angularControl);
	RobotCommand_set_feedback(rcp, rc->feedback);
}

#endif /*__ROBOT_COMMAND_H*/
