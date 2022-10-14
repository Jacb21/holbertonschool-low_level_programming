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
	if (n < 0)
	{
		n = n * -1; 
	}
	n = n % 10;
	return (n);
}
