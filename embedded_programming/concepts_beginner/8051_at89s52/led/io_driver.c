#include<reg51.h>
#include "header.h"

/********* delay generation function *******/
void delay_ms(u16 ms)
{
u8 i;
		
	for(;ms>0;ms--)
	{
		for(i=250;i>0;i--);
		for(i=147;i>0;i--);
	}
}
/********************************************/

void io_write(u8 port,u8 pin,u8 val)
{
		 switch(port)
		 	{
				#ifdef PORT0
				 case PORT0: 
							if(val==1)
							{
								P0|=(1<<pin);
							}
							else
							{
								P0&=~(1<<pin);
							}
					 break;
				 #endif

				 #ifdef PORT1
				 case PORT1: 
							if(val==1)
							{
								P1|=(1<<pin);
							}
							else
							{
								P1&=~(1<<pin);
							}
					 break;
				 #endif

				 #ifdef PORT2
			   case PORT2: 
							if(val==1)
							{
								P2|=(1<<pin);
							}
							else
							{
								P2&=~(1<<pin);
							}
					 break;
				 #endif

				 #ifdef PORT3
				case PORT3: 
							if(val==1)
							{
								P3|=(1<<pin);
							}
							else
							{
								P3&=~(1<<pin);
							}
					 break;
				 #endif
			}
				
}
