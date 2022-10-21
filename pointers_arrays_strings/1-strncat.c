#include "main.h"

/**
	* *_strncat - function 
	* @dest: Variable
	* @src: Variable
	* @n: Variable
	* Return: dest
	*/

char *_strncat(char *dest, char *src, int n)
{
	int log = 0;
	int k;

	while (dest[log] != '\0')
		log++;

	for (k = log; src[n] != '\0'; k++, n++)
	{
		dest[k] = src[n];
	}
	return (dest);
}
