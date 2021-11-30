
/*
 * GccApplication1.c
 *
 * Created: 30-11-2021 21:10:00
 * Author : Gulshan
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


void peripheral_init(void)
{
	DDRB |= (1 << DDB2)|(1<<DDB3);
	DDRB &= ~(1 << DDB0);
	//intialisation of ports
}

int main(void)
{
	
	peripheral_init();
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

