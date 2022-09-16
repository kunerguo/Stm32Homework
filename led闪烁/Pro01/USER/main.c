
#include "includes.h"
void delay()
{
	unsigned int i,k;
	for(i=0;i<200;i++)
	{
		for(k=0;k<200;k++);
	}
}

int main(void)
{
		GPIO_InitTypeDef g;
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
		
		g.GPIO_Pin = GPIO_Pin_1;
		g.GPIO_Mode = GPIO_Mode_Out_PP;
		g.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_Init(GPIOA, &g);
		g.GPIO_Pin = GPIO_Pin_2;
		GPIO_Init(GPIOA, &g);


  while (1)
  {
		GPIO_ResetBits(GPIOA, GPIO_Pin_1);
		GPIO_ResetBits(GPIOA, GPIO_Pin_2);
		delay();
		GPIO_SetBits(GPIOA, GPIO_Pin_1);
		GPIO_SetBits(GPIOA, GPIO_Pin_2);
		delay();
  }
}
