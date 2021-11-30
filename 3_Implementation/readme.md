
/*
 * GccApplication1.c
 *
 * Created: 30-11-2021 21:10:00
 * Author : Gulshan
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= (1 << DDB2)|(1<<DDB3);
	DDRB &= ~(1 << DDB0);


	while (1)
	{
		
		if (!(PINB&(1<<PINB0)))
		{
			
			PORTB |=(1<<PORTB2);
			PORTB &=~(1<<PORTB3);
			_delay_ms(2000);
			
			PORTB &=~(1<<PORTB2);
			_delay_ms(4000);
			PORTB |=(1<<PORTB3);
			_delay_ms(2000);
		}
		else
		{
			PORTB &= (~(1<<PINB2))&(~(1<<PINB3));
		}

	}
}
