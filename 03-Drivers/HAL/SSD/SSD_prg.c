/*
 * SSD_prg.c
 *
 *  Created on: May 17, 2022
 *      Author: mazen
 */


#include "../../LIB/STD_TYPES.h"

#include "../../MCAL/DIO/DIO_int.h"
#include "SSD_int.h"


static const u8 CGS_u8SSD_Nums[] = {
			0b11100111,
			0b11100001,

	};

void SSD_vInit(void)
{
	DIO_vSetPortDir(SSD_PORT, 0xff);
}

void SSD_vDisplayNum(u8 SSDId, u8 A_u8Num)
{
	/* input validation */
	if(A_u8Num < 10)
	{
#if SSD_TYPE==COM_CATHODE
		DIO_vSetPortVal(SSD_PORT, CGS_u8SSD_Nums[A_u8Num]);
#elif SSD_TYPE==COM_ANODE
		DIO_vSetPortVal(SSD_PORT, ~CGS_u8SSD_Nums[A_u8Num]);
#endif
	}
}

void SSD_vTurnOff(void)
{
#if SSD_TYPE==COM_CATHODE
	DIO_vSetPortVal(SSD_PORT, 0);
#elif
	DIO_vSetPortVal(SSD_PORT, 0xff);
#endif
}
