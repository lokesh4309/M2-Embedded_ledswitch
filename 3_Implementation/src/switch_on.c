
#include "switch.h"

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>



void switch_on()
{
    PORTB |=(1<<PORTB2);
		PORTB &=~(1<<PORTB3);
		_delay_ms(2000);
		
		PORTB &=~(1<<PORTB2);
		_delay_ms(4000);
		PORTB |=(1<<PORTB3);
		_delay_ms(2000);

}
