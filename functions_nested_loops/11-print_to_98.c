#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_to_98 - secuence
 *@n: variable
 *Description: print secunce
 *Return: 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
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
