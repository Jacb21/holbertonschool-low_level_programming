#include <stdio.h>
#include "main.h"
/**
	*more_numbers - print more numbers 
	*Description: print more numbers 10 times
	*Return: 0
	*/
void more_numbers(void)
{
	int num1, num2, tim;
	tim = 0;
	while (tim < 10)
	{
		for (num1 = 0; num <= 9; num++)
		{
			for (num2 = 10; num2 <=14)
			{
				if (num2 > 9)
				putchar ((num2 / 10) + '0');
				putchar ((num2 % 10) + '0');
			}
		}		
		tim++;
		putchar('\n');
	}
}
