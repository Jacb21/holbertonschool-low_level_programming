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
		putchar(str[tex]);
		tex++;
	}
	putchar('\n');
}
