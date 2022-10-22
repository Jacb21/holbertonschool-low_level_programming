#include <stdio.h>
#include "main.h"

/**
	**_strcpy - copy the string
	*@dest: Variable
	*@src: Variable
	*Return: dest
	*/
char *_strcpy(char *dest, char *src)
{
	int log = 0;
	int tex;

	while (src[log] != '\0')
	{
		log++;
	}
	for (tex = 0; tex <= log; tex++)
	{
		dest[tex] = src[tex];
	}
	return (dest);
}
