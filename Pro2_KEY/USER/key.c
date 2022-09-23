#include "includes.h"

void  KeyInit()
{
	GPIO_InitTypeDef g;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	g.GPIO_Pin = GPIO_Pin_0;
	g.GPIO_Mode = GPIO_Mode_IPD;
	GPIO_Init(GPIOB, &g);
}

Int08U KeyScan()
{
	return GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_0);
}
