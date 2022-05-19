/*
 * LCD_prg.c
 *
 *  Created on: May 19, 2022
 *      Author: mazen
 */


#include "../../LIB/STD_TYPES.h"

#include "../../MCAL/DIO/DIO_int.h"
#include <util/delay.h>
#include "LCD_int.h"


void HLCD_vSendCommand(u8 A_u8Command)
{
	MDIO_vSetPinVal(LCD_CTRL_PORT, LCD_RS_PIN, DIO_LOW); // RS->LOW
	MDIO_vSetPinVal(LCD_CTRL_PORT, LCD_RW_PIN, DIO_LOW); // RW-> LOW
	DIO_vSetPortVal(LCD_DATA_PORT, A_u8Command);

	MDIO_vSetPinVal(LCD_CTRL_PORT, LCD_EN_PIN, DIO_HIGH); // EN pulse sequence
	_delay_ms(1);
	MDIO_vSetPinVal(LCD_CTRL_PORT, LCD_EN_PIN, DIO_LOW); // EN pulse sequence
	_delay_ms(1);
}

void HLCD_vSendChar(u8 A_u8Char)
{
	MDIO_vSetPinVal(LCD_CTRL_PORT, LCD_RS_PIN, DIO_HIGH); // RS->LOW
	MDIO_vSetPinVal(LCD_CTRL_PORT, LCD_RW_PIN, DIO_LOW); // RW-> LOW
	DIO_vSetPortVal(LCD_DATA_PORT, A_u8Char);

	MDIO_vSetPinVal(LCD_CTRL_PORT, LCD_EN_PIN, DIO_HIGH); // EN pulse sequence
	_delay_ms(1);
	MDIO_vSetPinVal(LCD_CTRL_PORT, LCD_EN_PIN, DIO_LOW); // EN pulse sequence
	_delay_ms(1);
}

void HLCD_vInit(void)
{
	/* set your pin directions */
	DIO_vSetPortDir(LCD_DATA_PORT, 0xff);
	DIO_vSetPinDir(LCD_CTRL_PORT, LCD_RS_PIN, DIO_OUTPUT);
	DIO_vSetPinDir(LCD_CTRL_PORT, LCD_RW_PIN, DIO_OUTPUT);
	DIO_vSetPinDir(LCD_CTRL_PORT, LCD_EN_PIN, DIO_OUTPUT);
	/* start init sequence  */
	_delay_ms(50);
	HLCD_vSendCommand(0b00111000);
	_delay_ms(1);
	HLCD_vSendCommand(0b00001100);
	_delay_ms(1);
	HLCD_vSendCommand(0b00000001);
	_delay_ms(3);
	HLCD_vSendCommand(0b00000110);
	_delay_ms(1);
}

void HLCD_vPrintString(u8 A_u8String[] )
{
	for(u8 L_u8i =0; A_u8String[L_u8i] != '\0' ; L_u8i++)
	{
		HLCD_vSendChar(A_u8String[L_u8i]);
	}
}
void HLCD_vPrintNumber(s32 A_s32Number)
{

}
void HLCD_vSetCursorPosition(u8 A_u8LinePos, u8 A_u8LineNo)
{

}
void HLCD_vSaveCustomChar(/* TODO: input arguments to be provided */)
{

}
void HLCD_vDisplayCustomChar(/*TODO: to be done */)
{

}
