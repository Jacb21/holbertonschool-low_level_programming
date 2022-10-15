#include <stdio.h>
#include "main.h"

/**
	*print_line - print the line
	*@n: variable
	*Description: print the line
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

