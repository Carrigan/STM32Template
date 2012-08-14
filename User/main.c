#include "stm32f10x.h"
#include "stm32f10x_conf.h"

int main()
{
	// Test
	GPIO_InitTypeDef myGPIOA;
	myGPIOA.GPIO_Mode = GPIO_Mode_Out_OD;
	myGPIOA.GPIO_Pin = GPIO_Pin_0;
	myGPIOA.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init(GPIOA , &myGPIOA);
}
