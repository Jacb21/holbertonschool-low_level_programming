#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *print_sign - print sign
 *@n: variable
 *Description: print sign
 *Return: 1,0,-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
