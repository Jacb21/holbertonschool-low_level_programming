#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *_abs - print absolute value
 *print_sign - print sign
 *@n: variable
 *Description: print absolut value
 *Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
