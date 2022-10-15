#include <stdio.h>
#include "main.h"
/**
	*more_numbers - print more numbers
	*Description: print more numbers 10 times
	*Return: 0
	*/
void more_numbers(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 14; num1++)
	{
		if ( num1 > 9)
		{
			putchar ((num1 / 10)+ '0');
			putchar ((num1 % 10)+ '0');
		}
		else
		{
			putchar (num1);
		}
	}
}
