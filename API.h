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

#define uint					unsigned int 	
#define uchar					unsigned char	

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
* 函 数 名				: GPIO_Pin(int GPIO_Pin)
* 函数功能				: 返回对应编号的引脚
* 输    入				: 0~7
* 输    出				: 对应编号的引脚
************************************************************/

int  API GPIO_Pin(int GPIO_Pin);

/***********************************************************
* 函 数 名				: GPIO_SetBits(int GPIO,int GPIO_Pins)
* 函数功能				: 将对应引脚置高,可以使用|进行并列
* 输    入				: 引脚分组，引脚编号
* 输    出				: 无
************************************************************/

void API GPIO_SetBits(int GPIO,int GPIO_Pins);

/***********************************************************
* 函 数 名				: GPIO_ResetBits(int GPIO,int GPIO_Pins)
* 函数功能				: 将对应引脚置低,可以使用|进行并列
* 输    入				: 引脚分组，引脚编号
* 输    出				: 无
************************************************************/

void API GPIO_ResetBits(int GPIO,int GPIO_Pins);

/***********************************************************
* 函 数 名				: DelayXs_NM(uint t)
* 函数功能				: 延时一定的时间,12M和24M分别对应晶振频率
* 输    入				: 延时时间
* 输    出				: 无
************************************************************/

void API Delay10Us_24M(uint t);

void API DelayMs_24M(uint t);

void API DelayS_24M(uint t);

void API Delay10Us_12M(uint t);

void API DelayMs_12M(uint t);

void API DelayS_12M(uint t);

#endif