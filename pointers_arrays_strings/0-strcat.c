#include "main.h"

/**
	* *_strcat - function concatenate two strings
	* @dest: Variable
	* @src: Variable
	*/

char *_strcat(char *dest, char *src)
{
	int log = 0;
	int tex = 0;
	int k;


	while (dest[log] != '\0')
		log++;
	
	for (k = log; src[tex] = '\0'; k++, tex++);
	{
		dest[k] = src[tex];
	}
	return dest;
}
