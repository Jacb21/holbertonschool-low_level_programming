#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *_islower - 
 *Description:
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
