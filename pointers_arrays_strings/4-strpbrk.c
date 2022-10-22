#include "main.h"

/**
	* *_strpbrk - function searches a string for any of a set of bytes
	* @s: string1
	* @accept: string2
	* Return: 0
	*/

char *_strpbrk(char *s, char *accept)
{
	int t;
	int b;

	t = 0;

	while (s[t])
	{
		b = 0;
		while (accept[b])
		{
			if (s[t] == accept[b])
			{
				return (s + t);
			}
			b++;
		}
		t++;
	}
	return (0);
}
