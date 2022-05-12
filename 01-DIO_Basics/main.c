/*
 * main.c
 *
 *  Created on: May 10, 2022
 *      Author: mazen
 */
#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"

int main(void)
{
	//DDRA = 0b00000001 ;  //0b00001111 ; // PA0 -> Output
	SET_BIT(DDRA, 0); // PA0 -> output
	CLR_BIT(DDRA, 1); // PA1 -> input
	SET_BIT(PORTA, 1); // Enable Pull up on PA1
	while(1) // Super loop
	{
//		PORTA = 0b00000001 ; // PA0 -> HIGH (5v)
//		_delay_ms(1000);
//		PORTA = 0 ;  // PA0 -> LOW
//		_delay_ms(1000);
//		PORTB = 0b00000001 ;
//		for(int i=0; i<4; i++)
//		{
//			_delay_ms(250);
//			PORTB <<= 1 ;
//		}
//		if(GET_BIT(PINA, 1) == 0 ) // if button is pressed
//		{
//			_delay_ms(10);
//			if(GET_BIT(PINA, 1) == 0 ) // if button is still pressed
//			{
//				TOG_BIT(PORTA,0);
//			}
//
//			// SET_BIT(PORTA, 0);
//		}
//		else
//		{
//			CLR_BIT(PORTA, 0);
//		}
	}

	if(GET_BIT(PINA, 1) == 0 ) // if button is pressed
	{
		TOG_BIT(PORTA,0);
		while(GET_BIT(PINA, 1) == 0 ){} // if button is still pressed
		_delay_ms(10);

	}

}
