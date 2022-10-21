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

	while (dest[log] != '\0')
		log++;

	for (log = 0; src[n] != '\0'; n++, log++)
	{
		dest[log] = src[n];
	}
	return (dest);
}
