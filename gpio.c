/**
  ******************************************************************************
  * @file		gpio.c
  * @author	www.hocdientu123.vn
  * @date		25/06/2019
  ******************************************************************************
  */
#include "main.h"	
#include "gpio.h"
void GPIO_Configuration(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;
  //Enable clock AFIO
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);	
/*==================================PORTB==========================================*/
	//Enable clock GPIOB
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
//_________________________________INTPUT__________________________________________	
//_________________________________OUTPUT__________________________________________
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;	//khai bao c?c ch?n LCD      		
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;			// ng? ra kieu day k?o
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;		// thiet lap toc do ngo ra cac chan
 GPIO_Init(GPIOB, &GPIO_InitStructure);
	/*==================================PORTA==========================================*/
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
//_________________________________INTPUT__________________________________________	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
	GPIO_Init(GPIOA, & GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	//_________________________________OUTPUT__________________________________________
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_Init(GPIOA, & GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_Init(GPIOA, & GPIO_InitStructure);
 }
/********************************* END OF FILE ********************************/
