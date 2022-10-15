#include <stdio.h>
#include "main.h"

/**
	*print_numbers - print the numbers
	*Description: print the number you need
	*Return 0
	*/
void print_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar (numbers + '0');
	}
	putchar ('\n');
}
