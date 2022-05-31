/*
 * ROBOT_prg.c
 *
 *  Created on: May 31, 2022
 *      Author: mazen
 */


#include "../../LIB/STD_TYPES.h"


#include "../../MCAL/DIO/DIO_int.h"
#include "../../HAL/DCM/DCM_int.h"

#include "ROBOT_int.h"
#include "ROBOT_cfg.h"

DCM_t xFrontRightMotor;
DCM_t xFrontLeftMotor;
DCM_t xRearRightMotor;
DCM_t xRearLeftMotor;


void ROBOT_vInit(void)
{
	xFrontRightMotor = HDCM_xInit(FRONT_RIGHT_MOTOR_PORT, FRONT_RIGHT_MOTOR_PIN1 , FRONT_RIGHT_MOTOR_PIN2);
}


void ROBOT_vMoveForward(void)
{
	HDCM_vRotateCW(&xFrontLeftMotor);
	HDCM_vRotateCW(&xRearLeftMotor);
	HDCM_vRotateCCW(&xFrontRightMotor);
	HDCM_vRotateCCW(&xRearRightMotor);
}

void ROBOT_vMoveBackward(void)
{

}

void ROBOT_vHalt(void)
{

}

void ROBOT_vSteer(u8 A_u8Angle, u8 A_u8Dir)
{

}
