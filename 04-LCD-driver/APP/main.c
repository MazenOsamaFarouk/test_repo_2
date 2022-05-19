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
	HLCD_vSendChar('M');
	HLCD_vSendChar('A');
	HLCD_vSendChar('Z');
	HLCD_vSendChar('E');
	HLCD_vSendChar('N');
	HLCD_vSendCommand(LCD_CLEAR);

	while(1)
	{

	}
}
