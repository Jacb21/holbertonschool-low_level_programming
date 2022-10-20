#include <stdio.h>
#include "main.h"

/**
	**_strcpy - copy the string
	*@dest: Variable
	*@src: Variable
	*Return:
	*/
char *_strcpy( *dest, char *src)
{
	int log;
	int tex;

	for (log = 0; src[log] != '\0'; log++)
	{}
	for (tex = 0; tex <= log; tex++)
	{
		dest[tex] = src[tex];
	}
	return (dest);
}
