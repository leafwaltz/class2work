// Header:API
// File Name:API
// Author:SongYan Tang from class 2
// Date:2017/2/13
#ifndef API_H
#define API_H

#include <reg51.h>

#define API

#define FOSC_12M
//#define FOSC_24M

#define uint          unsigned int 	
#define uchar         unsigned char	

#define GPIO_P0 			0
#define GPIO_P1 			1
#define GPIO_P2 			2
#define GPIO_P3 			3

#define GPIO_Pin_0 		0x01
#define GPIO_Pin_1 		0x02
#define GPIO_Pin_2 		0x04
#define GPIO_Pin_3 		0x08
#define GPIO_Pin_4 		0x10
#define GPIO_Pin_5 		0x20
#define GPIO_Pin_6 		0x40
#define GPIO_Pin_7 	 	0x80
#define GPIO_Pin_All	0xff

/***********************************************************
* �� �� ��         	: GPIO_Pin(int GPIO_Pin)
* ��������		   		: ���ض�Ӧ��ŵ�����
* ��    ��         	: 0~7
* ��    ��         	: ��Ӧ��ŵ�����
************************************************************/

int  API GPIO_Pin(int GPIO_Pin);

/***********************************************************
* �� �� ��         	: GPIO_SetBits(int GPIO,int GPIO_Pins)
* ��������		   		: ����Ӧ�����ø�,����ʹ��|���в���
* ��    ��         	: ���ŷ��飬���ű��
* ��    ��         	: ��
************************************************************/

void API GPIO_SetBits(int GPIO,int GPIO_Pins);

/***********************************************************
* �� �� ��         	: GPIO_ResetBits(int GPIO,int GPIO_Pins)
* ��������		   		: ����Ӧ�����õ�,����ʹ��|���в���
* ��    ��         	: ���ŷ��飬���ű��
* ��    ��         	: ��
************************************************************/

void API GPIO_ResetBits(int GPIO,int GPIO_Pins);

/***********************************************************
* �� �� ��         	: DelayXs_NM(uint t)
* ��������		   		: ��ʱһ����ʱ��,12M��24M�ֱ��Ӧ����Ƶ��
* ��    ��         	: ��ʱʱ��
* ��    ��         	: ��
************************************************************/

void API Delay10Us_24M(uint t);

void API DelayMs_24M(uint t);

void API DelayS_24M(uint t);

void API Delay10Us_12M(uint t);

void API DelayMs_12M(uint t);

void API DelayS_12M(uint t);

#endif