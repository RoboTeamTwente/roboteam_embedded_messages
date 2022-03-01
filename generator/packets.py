import math

packets = {
    "RobotCommand" : [
        ["header",             8,  None, "Header byte indicating the type of packet"],
        ["remVersion",         4,  None, "Version of roboteam_embedded_messages"],
        ["id",                 4,  None, "Id of the robot"],
        ["messageId",          4,  None, "Id of the message"],
        ["doKick",             1,  None, "Do a kick if ballsensor"],
        ["doChip",             1,  None, "Do a chip if ballsensor"],
        ["doForce",            1,  None, "Do regardless of ballsensor"],
        ["useCameraAngle",     1,  None, "Use the info in 'cameraAngle'"],
        ["rho",                16, [0, 8], "Magnitude of movement (m/s)"],
        ["theta",              16, [-math.pi, math.pi], "Direction of movement (radians)"],
        ["angle",              16, [-math.pi, math.pi], "Absolute angle (rad)"],
        ["angularVelocity",    16, [-4*math.pi, 4*math.pi], "Angular velocity (rad/s)"],
        ["cameraAngle",        16, [-math.pi, math.pi], "Angle of the robot as seen by camera (rad)"],
        ["dribbler",           3,  [0, 1], "Dribbler speed"],
        ["kickChipPower",      3,  [0, 6.5], "Speed of the ball in m/s"],
        ["angularControl",     1,  None, "NOT IMPLEMENTED IN ROBOT YET. 0 = angular velocity, 1 = absolute angle"],
        ["feedback",           1,  None, "Ignore the packet. Just send feedback"]
    ],
    "RobotFeedback" : [
        ["header",             8,  None, "Header byte indicating the type of packet"],
        ["remVersion",         4,  None, "Version of roboteam_embedded_messages"],
        ["id",                 4,  None, "Id of the robot "],
        ["messageId",          4,  None, "Id of the message"],
        ["batteryLevel",       4,  None, "The voltage level of the battery"],
        ["XsensCalibrated",    1,  None, "Indicates if the XSens IMU is calibrated"],
        ["ballSensorWorking",  1,  None, "Indicates if the ballsensor is working"],
        ["hasBall",            1,  None, "Indicates if the ball is somewhere in front of the ballsensor"],
        ["capacitorCharged",   1,  None, "Indicates if the capacitor for kicking and chipping is charged"],
        ["ballPos",            4,  [-0.5, 0.5],  "Indicates where in front of the ballsensor the ball is"],
        ["rho",                16, [0, 8],                 "The estimated magnitude of movement (m/s)"],
        ["theta",              16, [-math.pi, math.pi],    "The estimated direction of movement (rad)"],
        ["angle",              16, [-math.pi, math.pi],    "The estimated angle (rad)"],
        ["wheelLocked",        4,  None, "Indicates if a wheel is locked. One bit per wheel"],
        ["wheelBraking",       4,  None, "Indicates if a wheel is slipping. One bit per wheel"],
        ["rssi",               4,  None, "Signal strength of the last packet received by the robot"]
    ],
    "RobotStateInfo" : [
        ["header",             8,  None, "Header byte indicating the type of packet"],
        ["remVersion",         4,  None, "Version of roboteam_embedded_messages"],
        ["id",                 4,  None, "Id of the robot "],
        ["messageId",          4,  None, "Id of the message"],
        ["xsensAcc1",         32, [-50000., 50000.], "xsensAcc1"],
        ["xsensAcc2",         32, [-50000., 50000.], "xsensAcc2"],
        ["xsensYaw",          32, [-50000., 50000.], "xsensYaw"],
        ["rateOfTurn",        32, [-50000., 50000.], "rateOfTurn"],
        ["wheelSpeed1",       32, [-50000., 50000.], "wheelSpeed1"],
        ["wheelSpeed2",       32, [-50000., 50000.], "wheelSpeed2"],
        ["wheelSpeed3",       32, [-50000., 50000.], "wheelSpeed3"],
        ["wheelSpeed4",       32, [-50000., 50000.], "wheelSpeed4"],
        ["bodyXIntegral",     32, [-50000.0, 50000.0], "Integral value from the PID for body_x"],
        ["bodyYIntegral",     32, [-50000.0, 50000.0], "Integral value from the PID for body_y"],
        ["bodyWIntegral",     32, [-50000.0, 50000.0], "Integral value from the PID for body_w"],
        ["bodyYawIntegral",   32, [-50000.0, 50000.0], "Integral value from the PID for body_Yaw"],
        ["wheel1Integral",    32, [-50000.0, 50000.0], "Integral value from the PID for Wheel_1"],
        ["wheel2Integral",    32, [-50000.0, 50000.0], "Integral value from the PID for Wheel_2"],
        ["wheel3Integral",    32, [-50000.0, 50000.0], "Integral value from the PID for Wheel_3"],
        ["wheel4Integral",    32, [-50000.0, 50000.0], "Integral value from the PID for Wheel_4"]
    ],
    "RobotBuzzer" : [
	["header",             8,  None, "Header byte indicating the type of packet"],
	["remVersion",         4,  None, "Version of roboteam_embedded_messages"],
	["id",                 4,  None, "Id of the robot"],
	["messageId",          4,  None, "Id of the message"],
	["period",             12, None, "Sound that the buzzer makes."],
	["duration",           16, [0., 5.], "Duration of the sound"]
    ],
    "PIDConfiguration" : [
	["header",             8,  None, "Header byte indicating the type of packet"],
	["remVersion",         4,  None, "Version of roboteam_embedded_messages"],
	["id",                 4,  None, "Id of the robot"],
    	["PbodyX",             16,  [0.,40.],  "P gain of the PID for body_x (x-direction)"],
	["IbodyX",             16,  [0.,20.],  "I gain of the PID for body_x (x-direction)"],
	["DbodyX",             16,  [0.,10.],  "D gain of the PID for body_x (x-direction)"],
	["PbodyY",             16,  [0.,40.],  "P gain of the PID for body_y (y-direction)"],
	["IbodyY",             16,  [0.,20.],  "I gain of the PID for body_y (y-direction)"],
	["DbodyY",             16,  [0.,10.],  "D gain of the PID for body_y (y-direction)"],
	["PbodyW",             16, [0.,40.], "P gain of the PID for body_w (Angular velocity)"],
	["IbodyW",             16, [0.,20.], "I gain of the PID for body_w (Angular velocity)"],
	["DbodyW",             16, [0.,10.], "D gain of the PID for body_w (Angular velocity)"],
	["PbodyYaw",           16, [0.,40.], "P gain of the PID for body_yaw (Absolute angle)"],
	["IbodyYaw",           16, [0.,20.], "I gain of the PID for body_yaw (Absolute angle)"],
	["DbodyYaw",           16, [0.,10.], "D gain of the PID for body_yaw (Absolute angle)"],
	["Pwheels",            16, [0.,40.], "P gain of the PID for the wheels"],
	["Iwheels",            16,  [0.,20.], "I gain of the PID for the wheels"],
	["Dwheels",            16,  [0.,10.], "D gain of the PID for the wheels"]
    ],

    "BasestationStatistics" : [
        ["header",     8, None, "Header byte indicating the type of packet"],
        ["remVersion", 4,  None, "Version of roboteam_embedded_messages"],
        ["bot0_sent",  8, None, "Packets sent to robot with ID 0"],
        ["bot0_rcvd",  8, None, "Packets received from robot with ID 0"],
        ["bot1_sent",  8, None, "Packets sent to robot with ID 1"],
        ["bot1_rcvd",  8, None, "Packets received from robot with ID 1"],
        ["bot2_sent",  8, None, "Packets sent to robot with ID 2"],
        ["bot2_rcvd",  8, None, "Packets received from robot with ID 2"],
        ["bot3_sent",  8, None, "Packets sent to robot with ID 3"],
        ["bot3_rcvd",  8, None, "Packets received from robot with ID 3"],
        ["bot4_sent",  8, None, "Packets sent to robot with ID 4"],
        ["bot4_rcvd",  8, None, "Packets received from robot with ID 4"],
        ["bot5_sent",  8, None, "Packets sent to robot with ID 5"],
        ["bot5_rcvd",  8, None, "Packets received from robot with ID 5"],
        ["bot6_sent",  8, None, "Packets sent to robot with ID 6"],
        ["bot6_rcvd",  8, None, "Packets received from robot with ID 6"],
        ["bot7_sent",  8, None, "Packets sent to robot with ID 7"],
        ["bot7_rcvd",  8, None, "Packets received from robot with ID 7"],
        ["bot8_sent",  8, None, "Packets sent to robot with ID 8"],
        ["bot8_rcvd",  8, None, "Packets received from robot with ID 8"],
        ["bot9_sent",  8, None, "Packets sent to robot with ID 9"],
        ["bot9_rcvd",  8, None, "Packets received from robot with ID 9"],
        ["bot10_sent", 8, None, "Packets sent to robot with ID 10"],
        ["bot10_rcvd", 8, None, "Packets received from robot with ID 10"],
        ["bot11_sent", 8, None, "Packets sent to robot with ID 11"],
        ["bot11_rcvd", 8, None, "Packets received from robot with ID 11"],
        ["bot12_sent", 8, None, "Packets sent to robot with ID 12"],
        ["bot12_rcvd", 8, None, "Packets received from robot with ID 12"],
        ["bot13_sent", 8, None, "Packets sent to robot with ID 13"],
        ["bot13_rcvd", 8, None, "Packets received from robot with ID 13"],
        ["bot14_sent", 8, None, "Packets sent to robot with ID 14"],
        ["bot14_rcvd", 8, None, "Packets received from robot with ID 14"],
        ["bot15_sent", 8, None, "Packets sent to robot with ID 15"],
        ["bot15_rcvd", 8, None, "Packets received from robot with ID 15"]
    ],
    "BasestationGetStatistics" : [
        ["header",     8, None, "Header byte indicating the type of packet"]
    ],
    "BasestationLog" : [
        ["header",     8, None, "Header byte indicating the type of packet"]
    ],
    "RobotLog" : [
        ["header",     8, None, "Header byte indicating the type of packet"],
        ["remVersion", 4, None, "Version of roboteam_embedded_messages"],
        ["id",         4, None, "Id of the robot"],
        ["message_length", 8, None, "Length of the following message"]
    ],
    "BasestationGetConfiguration" : [
        ["header",     8, None, "Header byte indicating the type of packet"]
    ],
    "BasestationConfiguration" : [
        ["header",     8, None, "Header byte indicating the type of packet"],
        ["remVersion", 4, None, "Version of roboteam_embedded_messages"],
        ["channel",    1, None, "Channel on which the basestation and robots communicate"]
    ],
    "BasestationSetConfiguration" : [
        ["header",     8, None, "Header byte indicating the type of packet"],
        ["remVersion", 4, None, "Version of roboteam_embedded_messages"],
        ["channel",    1, None, "Channel on which the basestation and robots communicate"]
    ]
}
