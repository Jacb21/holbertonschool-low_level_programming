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
	int t;

	while (src[log] != '\0')
	{
		log++;
	}

	for (t = 0; t <= log; t++)
	{
		dest[t] = src[t];
	}
	return (dest);
}
