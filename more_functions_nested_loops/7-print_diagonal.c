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

	for (line = 0; line < n; line++)
	{
		for (space = 0; space < n; e++)
		{
			if (line >= 1)
				_putchar(' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
	if (line =< 0)
		_putchar ('\n');
}
