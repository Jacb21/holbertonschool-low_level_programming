#include "main.h"
 /**
	 *puts2 - print the text
	 *@str: Variable
	 *Description: print the text
	 */
void puts2(char *str)
{
	int tex;

	for (tex = 0; str[tex] != '\0'; tex++)
	{
		_putchar(str[tex]);
		_putchar('\n');
	}
}
