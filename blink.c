#define F_CPU 2000000UL

#include <avr/io.h>
#include <util/delay.h>

int main ()
{
	DDRB |= (1 << PB0);
	DDRB |= (0 << PB4);
	PORTB |= (1 << PB0);
	PORTB |= (1 << PB4);
	

	while(1) 
	{
		
		//_delay_ms(1000);
		//_delay_ms(1000);
		//_delay_ms(1000);
		//_delay_ms(1000);
		//_delay_ms(1000);
		//_delay_ms(1000);
		_delay_ms(1000);
		
		int a = read_bit_from_B(PB4);
		set_bit_by_B(PB0, a);
	}	
	
}

int read_bit_from_B(int leg)
{
	 
	 int a;
	 a = PINB >> leg;
	 return a & 1;
 }
 

 
int set_bit_by_B(int leg, int bit){
	 int b = 1<<leg;
	 
	 if(bit==1){
		  PORTB = PORTB | b ;
	  }
	  else {
		  PORTB = PORTB	& (255-b);
	  }
	 
}	 
