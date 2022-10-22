#include "main.h"

/**
	**_strcpy - copy the string
	*@dest: Variable
	*@src: Variable
	*Return: dest
	*/

char *_strcpy(char *dest, char *src)
{
	int log;
	int t;

	for (log = 0; src[log] != '\0'; log++)

	for (t = 0; t <= log; t++)
	{
		dest[t] = src [t];
	}
	return (dest);
}
