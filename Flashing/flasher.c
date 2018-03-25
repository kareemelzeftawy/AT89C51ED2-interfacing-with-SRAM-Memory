#include <at89c51xd2.h>

sbit LED = P2^0;

void Delay_1_sec();


void main()
{
		//P1 = 0xFF;
		P2_0 == 0;
	
    /*while( P1_0 == 0)
		{
           LED = 0;          
           Delay_1_sec();                 
           LED = 1;           
           Delay_1_sec(); 
		}*/
}

void Delay_1_sec()
{
	unsigned char i, j, k;
		for( i = 14; i > 0; i--)
			for( j = 255; j > 0; j--)
				for( k = 255; k > 0; k--)
						;
}

/*
void Delay_1_sec()
{
	unsigned long i;
	for( i = 40000; i > 0; i--)		;
}
*/