#include "API.h"
#include "UnitTest.h"

void GPIO_UnitTest()
{
	int pins = 7;
	
	#ifdef FOSC_24M
	
		GPIO_SetBits(GPIO_P0,GPIO_Pin_0);
		DelayMs_24M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_1);
		DelayMs_24M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_2);
		DelayMs_24M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_3);
		DelayMs_24M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_4);
		DelayMs_24M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_5);
		DelayMs_24M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_6);
		DelayMs_24M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_7);
		DelayMs_24M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_All);
		DelayMs_24M(100);
		
		for(;pins>=0;pins--)
		{
			GPIO_ResetBits(GPIO_P0,GPIO_Pin(pins));
			DelayMs_24M(100);
		}
		
	#else
		
		GPIO_SetBits(GPIO_P0,GPIO_Pin_0);
		DelayMs_12M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_1);
		DelayMs_12M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_2);
		DelayMs_12M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_3);
		DelayMs_12M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_4);
		DelayMs_12M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_5);
		DelayMs_12M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_6);
		DelayMs_12M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_7);
		DelayMs_12M(100);
		GPIO_SetBits(GPIO_P0,GPIO_Pin_All);
		DelayMs_12M(100);
		
		for(;pins>=0;pins--)
		{
			GPIO_ResetBits(GPIO_P0,GPIO_Pin(pins));
			DelayMs_12M(100);
		}
	#endif
}