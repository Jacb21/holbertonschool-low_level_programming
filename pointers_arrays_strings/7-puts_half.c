#include "main.h"

/**
	*puts_half - print the medium text
	*@str: Variable
	*Description: print the medium text
	*/
void puts_half(char *str)
{
	int log;
	int	tex;
  	int n;

	for (log = 0; str[log] != 0; log++)

		if (log % 2 == 0)
			n = log / 2;
		else
			n = ((log - 1) / 2) + 1;

	for (tex = n; tex < log; tex++)
	{
		_putchar(str[tex]);
	}
	_putchar('\n');
}
