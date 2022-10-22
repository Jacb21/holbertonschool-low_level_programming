#include "main.h"

/**
	* _strspn - function gets the length of a prefix substring
	* @s: string1
	* @accept: string2
	* Return: 0
	*/

unsigned int _strspn(char *s, char *accept)
{
	int t;
	unsigned int n;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[t])
			{
				break;
			}
		}
		if (accept[n] == '\0')
		{
			break;
		}
	}
	return (t);
}
