/*
 * KPD_int.h
 *
 *  Created on: May 17, 2022
 *      Author: mazen
 */

#ifndef HAL_KPD_KPD_INT_H_
#define HAL_KPD_KPD_INT_H_


#define KPD_PORT   DIO_PORTB


void KPD_vInit(void);
u8   KPD_u8GetPressedKey(void);

#endif /* HAL_KPD_KPD_INT_H_ */
