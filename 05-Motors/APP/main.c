/*
 * main.c
 *
 *  Created on: May 26, 2022
 *      Author: mazen
 */
#include "../LIB/STD_TYPES.h"
#include "../MCAL/DIO/DIO_int.h"

#include "../HAL/DCM/DCM_int.h"
#include <util/delay.h>


int main(void)
{
	DCM_t motor1 = { DIO_PORTA, DIO_PIN0, DIO_PIN1 };
	DCM_t motor2 = HDCM_xInit(DIO_PORTA, DIO_PIN0, DIO_PIN1) ;
	DCM_t motor3 = HDCM_xInit(DIO_PORTB, DIO_PIN2, DIO_PIN7) ;

	HDCM_vRotateCW(&motor2);
	HDCM_vRotateCCW(&motor3);

	while(1)
	{

	}
//	MDIO_vSetPinDir(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
//
//
//	while(1)
//	{
//		MDIO_vSetPinVal(DIO_PORTA, DIO_PIN0, DIO_HIGH);
//		_delay_ms(1000);
//		MDIO_vSetPinVal(DIO_PORTA, DIO_PIN0, DIO_LOW);
//		_delay_ms(1000);
//	}
//	u8 steps[]={
//			9,1,3,2,6,4,12,8
//	};
//
//	MDIO_vSetPortDir(DIO_PORTA, 0x0f);
//
//	while(1)
//	{
//		for(u8 j=0; j<16; j++)
//		{
//			for(u8 i=0; i<8; i++)
//			{
//				MDIO_vSetPortVal(DIO_PORTA, steps[i]);
//				_delay_ms(500);
//			}
//		}
//	}

}
