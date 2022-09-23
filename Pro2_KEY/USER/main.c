#include "includes.h"
#include "led.h"
#include "key.h"

int main(void)
{
	LEDInit();
	KeyInit();
	LED(0);
  while (1)
  {
		if(KeyScan())
		{
			LED(1);
		}
		else
		{
			LED(0);
		}
  }
}
