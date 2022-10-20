#include "main.h"
 /**
	 * puts2 - puts2 print the text
	 * @str: Variable
	 * Description: puts2 print the especific text
	 */
void puts2(char *str)
{
	int tex, log;

	for (log = 0; str[log] != '\0'; log++)
	{}

	for (tex = 0; tex < log ; tex += 2)
	{
		_putchar(str[tex]);
	}
	_putchar('\n');
}
