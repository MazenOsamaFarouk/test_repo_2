/*
 * ROBOT_int.h
 *
 *  Created on: May 31, 2022
 *      Author: mazen
 */

#ifndef APP_ROBOT_ROBOT_INT_H_
#define APP_ROBOT_ROBOT_INT_H_

void ROBOT_vInit(void);
void ROBOT_vMoveForward(void);
void ROBOT_vMoveBackward(void);
void ROBOT_vHalt(void);
void ROBOT_vSteer(u8 A_u8Angle, u8 A_u8Dir);




#endif /* APP_ROBOT_ROBOT_INT_H_ */
