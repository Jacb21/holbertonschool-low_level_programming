#include "main.h"
 /**
	 *puts2 - print the text
	 *@str: Variable
	 *Description: print the text
	 */
void puts2(char *str)
{
	int tex, log;

	for (log = 0; str[log] != '\0'; log ++)
	{}

	for (tex = 0; str[tex] != '\0'; tex += 2)
	{
		_putchar(str[tex]);
	}
	_putchar('\n');
}
