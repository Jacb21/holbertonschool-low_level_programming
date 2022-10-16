#include <stdio.h>
#include "main.h"

/**
	*print_square - 
	*Description:
	*@size: variable
	*/
void print_square(int size)
{
	int character;
	int square;
	
	for (square = 0; square <= size; square++)
	{
		for (character = 0; character <= size; character++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
	if (size <= 0)
		_putchar ('\n');
}

