#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
	*jack_bauer - 
	*@n: variable
	*Description: print sign
	*Return: 0
	*/
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour = 23; hour++)  
	{
		for (minute = 0; minute = 59; minute++)
		{
			_putchar (hour + '0');
			_putchar (':');
			_putchar (minute + '0');
		}
	}
}
