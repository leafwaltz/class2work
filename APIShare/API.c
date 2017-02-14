#include "API.h"

int GPIO_Pin(int GPIO_Pin)
{
	switch(GPIO_Pin)
	{
		case 0:
			return GPIO_Pin_0;
		break;
		case 1:
			return GPIO_Pin_1;
		break;
		case 2:
			return GPIO_Pin_2;
		break;
		case 3:
			return GPIO_Pin_3;
		break;
		case 4:
			return GPIO_Pin_4;
		break;
		case 5:
			return GPIO_Pin_5;
		break;
		case 6:
			return GPIO_Pin_6;
		break;
		case 7:
			return GPIO_Pin_7;
		break;		
		default:
			return -1;
		break; 
	}
}
void GPIO_SetBits(int GPIO,int GPIO_Pins)
{
	switch(GPIO)
	{
		case GPIO_P0:
			P0 = GPIO_Pins;
		break;
		case GPIO_P1:
			P1 = GPIO_Pins;
		break;
		case GPIO_P2:
			P2 = GPIO_Pins;
		break;
		case GPIO_P3:
			P3 = GPIO_Pins;
		break;
		default:
		break;
	}
}

void GPIO_ResetBits(int GPIO,int GPIO_Pins)
{
	switch(GPIO)
	{
		case GPIO_P0:
			P0 = 0xff^GPIO_Pins;
		break;
		case GPIO_P1:
			P1 = 0xff^GPIO_Pins;
		break;
		case GPIO_P2:
			P2 = 0xff^GPIO_Pins;
		break;
		case GPIO_P3:
			P3 = 0xff^GPIO_Pins;
		break;
		default:
		break;
	}
}

void Delay10Us_24M(uint t)
{
	uint i = 0;
	uint j = 0;
	
	for(i=0;i<t;i++)
		for(j=0;j<2;j++);
}

void DelayMs_24M(uint t)
{
	uint i = 0;
	uint j = 0;
	
	for(i=0;i<t;i++)
		for(j=0;j<357;j++);
}

void DelayS_24M(uint t)
{
	uint i = 0;
	uint j = 0;
	
	for(i=0;i<t;i++)
		for(j=0;j<54053;j++);
}

void Delay10Us_12M(uint t)
{
	while(t--);
}

void DelayMs_12M(uint t)
{
	uint i = 0;
	uint j = 0;
	
	for(i=0;i<t;i++)
		for(j=0;j<123;j++);
}

void DelayS_12M(uint t)
{
	uint i = 0;
	uint j = 0;
	
	for(i=0;i<t;i++)
		for(j=0;j<21738;j++);
}
