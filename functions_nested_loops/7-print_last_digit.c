#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *print_last_digit - print last digit
 *@n: variable
 *Description: print sign
 *Return: 0
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
		_putchar (n + '0');
		return (n);
	}
	else
	{
		_putchar (n + '0');
		return (n);
	}
}
