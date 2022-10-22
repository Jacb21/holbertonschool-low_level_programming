#include "main.h"

/**
	* *_strchr - function locates a character in a string
	* @s: pointer
	* @c: character
	* Return: 0
	*/

char *_strchr(char *s, char c)
{
	int f;

	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] == c)
		{
			return (s + f);
		}
	}
	if (s[f] == c)
	{
		return (s + f);
	}
	return (0);
}
