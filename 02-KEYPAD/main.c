/*
 * main.c
 *
 *  Created on: May 12, 2022
 *      Author: mazen
 */
#include "STD_TYPES.h"

#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"

void KEYPAD_Init(void)
{
	/* PORTB -> inputs/outputs*/
	DDRB = 0x0f ;
	/* PULL UP resistors activation on inputs */
	PORTB = 0xff  ;
}

u8 GetPressedKey(void)
{
	u8 pressed_key = 0;
	for(u8 col=0; col<4; col++)
	{
		/* activate current column */
		CLR_BIT(PORTB, col);
		for(u8 row=0; row<4; row++)
		{
			if(GET_BIT(PINB,row+4) == 0) // a button in pressed
			{
				pressed_key = row + (col*4) +1  ;
			}
			while(GET_BIT(PINB,row+4) == 0){}
			_delay_ms(10);
		}
		/* deactivate current column */
		SET_BIT(PORTB, col);
	}
	return pressed_key;
}



int main(void)
{
	KEYPAD_Init();
	u8 key = 0;
	while(1)
	{

		key = GetPressedKey();
		if(key != 0)
		{
			/* seven segment display code here */
		}


	}
}
