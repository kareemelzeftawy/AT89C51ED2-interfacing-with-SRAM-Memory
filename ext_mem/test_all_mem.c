#include <at89c51xd2.h>
#include <intrins.h>


int xdata loc _at_ 0x0000;
sbit Error = P1^0;
sbit End = P1^7;

sbit LED = P1^1;

int  xdata *ptr;
char xdata *char_ptr;

// generate a 0.5 sec delay
void Delay()
	
{
	unsigned char i = 0;
	unsigned char j = 0;
	unsigned char k = 0;
	
	for(i = 5; i>0; i--)
		for(j = 200; j>0; j--)
			for(k = 100; k>0; k--)
				_nop_();
}

void main()
{
	int pattern = 0xAA55;
	int i = 0;
	char j = 0;
	
	AUXR = 0x00;
	
	ptr = &loc;
	
	Error = 1;
	End = 1;
	
	for(i = 0x3FFE; i>=0; i--)
	{
		*ptr = pattern;
		 ptr++;
	}
	
	ptr = &loc;
	for(i = 0x3FFE; i>=0; i--)
	{
		if(*ptr != pattern)
			Error = 0;
		ptr++;
	}
		
	End = 0;
	
	char_ptr = 0x2000;
	while(1)
	{
		LED = (*char_ptr & 0x01);
		Delay();
	  char_ptr++;		
		if(char_ptr == 0x5000)
			char_ptr = 0x2000;
	}
	
}