#include <stdio.h>
#include "main.h"

/**
	*_puts - print the string
	*@str: Variable
	*Description: print the string
	*/
void _puts(char *str)
{
	int tex;

	while (str[tex] != '\0')
	{
		_putchar(str[tex]);
		tex++;
	}
	_putchar('\n');
	return (0);
}
