/*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: Dyno
 */
#include<stdio.h>
#define RCC_BASE 0x40021000
#define GPIO_PORT 0x40010800


#define  APB2ENR_REGISTER  *(volatile signed int*) (RCC_BASE+0x18)
#define  GPIO_ODR_REGISTER  *(volatile signed int*) (GPIO_PORT+0x0C)
#define  CRH_REGISTER  *(volatile signed int*) (GPIO_PORT+0x04)
typedef union
{
	 volatile unsigned int ALL_FIELDS;
	struct
	{
		 volatile unsigned int reserved:13;

		 volatile unsigned int p_13:1;


	}pin;

}ORD_t;
volatile ORD_t* R_ODR=(volatile ORD_t*)(GPIO_PORT+0X0C);
int main()
{
	APB2ENR_REGISTER|=(1<<2);
	CRH_REGISTER&=0xff0fffff;
	CRH_REGISTER |=0x00200000;
	while(1)
	{
		R_ODR->pin.p_13=0;
		GPIO_ODR_REGISTER|=1<<13;
		for(int i =0;i<5000;i++);
		GPIO_ODR_REGISTER&=~(1<<13);
		R_ODR->pin.p_13=0;
		for(int i =0;i<5000;i++);

	}
	return 0;
}

