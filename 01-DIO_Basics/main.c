/*
 * main.c
 *
 *  Created on: May 10, 2022
 *      Author: mazen
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA = 0x0f ;  //0b00001111 ; // PA0 -> Output

	while(1) // Super loop
	{
//		PORTA = 0b00000001 ; // PA0 -> HIGH (5v)
//		_delay_ms(1000);
//		PORTA = 0 ;  // PA0 -> LOW
//		_delay_ms(1000);
		PORTA = 0b00000001 ;
		for(int i=0; i<4; i++)
		{
			_delay_ms(250);
			PORTA <<= 1 ;
		}



	}

}
