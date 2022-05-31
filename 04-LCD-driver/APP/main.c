/*
 * main.c
 *
 *  Created on: May 19, 2022
 *      Author: mazen
 */

#include "../LIB/STD_TYPES.h"
#include "../HAL/LCD/LCD_int.h"

int main(void)
{
	HLCD_vInit();
//	HLCD_vSendChar('M');
//	HLCD_vSendChar('A');
//	HLCD_vSendChar('Z');
//	HLCD_vSendChar('E');
//	HLCD_vSendChar('N');
//	HLCD_vSendCommand(LCD_CLEAR);
	u8 heart[]={
			0x00,0x0A,0x1F,0x1F,0x0E,0x04,0x00,0x00
	};

	u8 myShape[] = {
			0x04,0x0A,0x15,0x15,0x0A,0x04,0x00,0x00
	};
	HLCD_vSaveCustomChar(1,heart);
	HLCD_vSetCursorPosition(3,1);
	HLCD_vDisplayCustomChar(1);


	while(1)
	{

	}
}
