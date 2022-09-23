#include "includes.h"

void LEDInit(void)
{
	GPIO_InitTypeDef g;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	g.GPIO_Pin = GPIO_Pin_1;
	g.GPIO_Mode = GPIO_Mode_Out_PP;
	g.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_Init(GPIOA, &g);
}

void LED(Int08U state)
{
	if(state==0)
	{
		GPIO_SetBits(GPIOA, GPIO_Pin_1);
	}else
	{
		GPIO_ResetBits(GPIOA, GPIO_Pin_1);
	}
}
