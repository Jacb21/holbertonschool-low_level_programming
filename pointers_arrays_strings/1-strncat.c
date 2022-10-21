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
	int t = 0;
	int k;

	n--;

	for (log = 0; dest[log] != '\0'; log++)

	for (k = log; src[t] != '\0'; k++, t++)
	{
		if (n >= t)
			dest[k] = src[t];
	}
	return (dest);
}
