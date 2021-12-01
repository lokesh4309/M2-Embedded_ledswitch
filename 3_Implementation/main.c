
/*
 * main.c
 * Created: 30-11-2021 21:10:00
 * Author : Gulshan J Dharmaraj
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


#include "switch.h"


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
			
			switch_on();
		}
		else
		{
			switch_off();
		}

	}
}

