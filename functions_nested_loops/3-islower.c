#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 *_islower -
 *@c: variable
 *Description:
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
