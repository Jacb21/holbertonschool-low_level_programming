#include "main.h"

/**
	*_puts - print the string
	*@str: Variable
	*Description: print the string
	*/
void _puts(char *str)
{
	int tex;

	for (tex = 0; str[tex] != '\0'; tex++)
	{
		_putchar(str[tex]);
	}
	_putchar('\n');
}
