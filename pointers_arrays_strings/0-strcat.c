#include "main.h"

/**
	* *_strcat - function concatenate two strings
	* @dest: Variable
	* @src: Variable
	* Return: dest
	*/

char *_strcat(char *dest, char *src)
{
	int log = 0;
	int t = 0;
	int k;


	while (dest[log] != '\0')
		log++;
	
	for (k = log; src[t] != '\0'; k++, t++)
	{
		dest[k] = src[t];
	}
	return (dest);
}
