#include "main.h"

/**
	* *_memcpy - function copies memory area
	* @dest: pointer
	* @src: pointer2
	* @n : tamaño
	* Return: 0
	*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
