#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *print_sign - check sign the character
 *@c: variable
 *Description: check
 *Return: 1,0,-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar (43);
			return (1);
	}
	else if (n == 0)
	{
		putchar (45);
			return (0);
	}
	else
	{
		putchar (48);
		  return (-1);
	}
}
