#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *times_table - print table
 *Description: print time table
 *Return: 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			_putchar (n + '0');
			_putchar (',');
			_putchar (' ');
			n--;
		}
		else if (n < 98)
		{
			_putchar (n + '0');
			_putchar (',');
			_putchar (' ');
			n++;
		}
	}
}
