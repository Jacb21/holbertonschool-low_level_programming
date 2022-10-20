#include "main.h"

/**
	*_strlen - print length of string
	*@s: Variable
	*Description: print length of string
	*Return: 0
	*/
int _strlen(char *s)
{
	int log;

	for (log = 0; s[log] != '\0'; log++);

	return (log);
}

/**
	*print_rev - print the text in reverse
	*@s: Variable
	*Description: print the text in reverse
	*/
void print_rev(char *s)
{
	int rev;

	for (rev = _strlen(s) - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
