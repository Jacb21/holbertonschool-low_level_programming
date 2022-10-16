#include <stdio.h>
#include "main.h"

/**
	*print_diagonal - print the line
	*Description: print the line diagonal
	*@n: variable
	*/
void print_diagonal(int n)
{
	int line;
	int space;

	for (line = 1; line <= n; line++)
	{
		for (space = 1; space < line; space++)
		{
			if (line >= 2)
				_putchar(' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
	if (n <= 0)
		_putchar ('\n');
}
