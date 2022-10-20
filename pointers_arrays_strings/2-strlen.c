#include <stdio.h>
#include "main.h"
 /**
	 * _strlen - length of a string
	 *@s: Variable
	 *Return: 0
	 */
int _strlen(char *s)
{
	int log;

	for (log = 0; s[log] != '\0'; log++)
	{}
	return (log);
}
