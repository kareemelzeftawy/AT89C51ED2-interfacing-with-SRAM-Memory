#include <at89c51xd2.h>


char xdata x _at_ 0x0000;
char xdata y _at_ 0x0001;
char xdata z _at_ 0x0002;

void main()
{
		 
	   AUXR = 0x00;
	   P1 = 0xFF;
	   x = 0x02;
		 y = 0x04;
	   z = x + y;
		 P1 = z;

}