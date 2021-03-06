/*
 * SSD_int.h
 *
 *  Created on: May 17, 2022
 *      Author: mazen
 */

#ifndef HAL_SSD_SSD_INT_H_
#define HAL_SSD_SSD_INT_H_


#define COM_CATHODE    1
#define COM_ANODE      0


#define SSD_TYPE    COM_CATHODE
#define SSD1_PORT	DIO_PORTA
#define SSD2_PORT	DIO_PORTB

#define SSD_1		1
#define SSD_2		2

typedef struct
{
	u8 SSD_PORT;
	u8 SSD_Id;
}SSD_t;




void SSD_vInit(void);
void SSD_vDisplayNum(u8 SSDId, u8 A_u8Num);
void SSD_vTurnOff(void);




#endif /* HAL_SSD_SSD_INT_H_ */
