#include "main.h"
 /**
	 * *_strncpy - function copy the string
	 * @dest: Variable
	 * @src: Variable
	 * @n: Variable
	 * Return: dest
	 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
