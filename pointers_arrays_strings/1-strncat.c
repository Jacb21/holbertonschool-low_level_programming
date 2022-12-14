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
	int t = 0;
	int k;

	n--;

	while (dest[log] != '\0')
		log++;

	for (k = log; src[t] != '\0'; k++, t++)
	{
		if (n >= t)
			dest[k] = src[t];
	}
	return (dest);
}
