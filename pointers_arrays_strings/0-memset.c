#include "main.h"
 
/**
	 * *_memset - function fills memory with a constant byte
	 * @s: Puntero
	 * @b: Variable
	 * @n: Tamaño
	 * Return: 0
	 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(s + c) = b;
	}
	return (s);
}
