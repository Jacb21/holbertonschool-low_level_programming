#include <stdio.h>
#include "main.h"
/**
	*more_numbers - print more numbers 
	*Description: print more numbers 10 times
	*Return: 0
	*/
void more_numbers(void)
{
	int num, tim;
	tim = 0;
	while (tim < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			putchar (num + '0');
		}
		tim++;
		putchar('\n');
	}
}
