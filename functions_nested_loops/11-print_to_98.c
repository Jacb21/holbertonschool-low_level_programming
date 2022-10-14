#include <stdio.h>
#include <stdlib.h>
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
		prinft("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	if (n == 98)
		printf("%d\n", n);
}
