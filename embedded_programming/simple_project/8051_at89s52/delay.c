/* delay.c */


#include "header.h"

/************* Delay 1Ms ***********/
void delay_ms(u16 ms)
{

u8                                                                                                  i;
	
	for(;ms>0;ms--)
	{
		for(i=250;i>0;i--);
		for(i=247;i>0;i--);	
	}			

}