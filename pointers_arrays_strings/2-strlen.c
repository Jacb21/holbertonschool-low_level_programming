#include <stdio.h>
#include "main.h"
 /**
	 *_strlen - function a string
	 *@s: Variable
	 *Return: variable
	 */
int _strlen(char *s)
{
	int log;

	for (log = 0; s[log] != '\0'; log++)
	{}
	return (log);
}
