#include <stdio.h>
#include "main.h"
/**
	*print_line - print the line
	*Description: print the line
	*Return: 0
	*/
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}

