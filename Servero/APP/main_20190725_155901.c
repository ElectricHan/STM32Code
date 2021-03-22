/**
* @par Copyright (C): 2010-2019, Shenzhen Yahboom Tech
* @file         main.c	
* @author       liusen
* @version      V1.0
* @date         2017.07.17
* @brief        主函数
* @details      
* @par History  
*                 
* version:		liusen_20170717
*/
#include "stm32f10x.h"
#include "app_motor.h"
#include "bsp.h"



int main(void)
{	
	//int i = 0;
	bsp_init();

	while (1)
	{
		/* 模拟控制舵机
		Servo_J1(90);
		Servo_J2(50);
		Servo_J3(50);
		Servo_J4(50);
		Servo_J5(50);
		Servo_J6(50);*/

		/*定时器1控制舵机*/
		Angle_J1 = 0;
		Angle_J2 = 0;
		Angle_J3 = 0;
		Angle_J4 = 0;
		Angle_J5 = 0;
		Angle_J6 = 0;
		delay_ms(1000);
		delay_ms(1000);
		
		Angle_J1 = 90;
		Angle_J2 = 90;
		Angle_J3 = 90;
		Angle_J4 = 90;
		Angle_J5 = 90;
		Angle_J6 = 90;

		delay_ms(1000);
		delay_ms(1000);

		Angle_J1 = 180;
		Angle_J2 = 180;
		Angle_J3 = 180;
		Angle_J4 = 180;
		Angle_J5 = 180;
		Angle_J6 = 180;
		delay_ms(1000);
		delay_ms(1000);
		
	}
 								    
}
