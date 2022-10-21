#include "main.h"

/**
	* *cap_string - function capitalizes words of a string
	* @m: Variable
	* Return: m
	*/

char *cap_string(char *m)
{
	int w = 0;
	int a;
char arr[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', ')', ')', '{', '}'};

	if (m[0] >= 'a' && m[0] <= 'z')
	{
		m[0] -= 32;
	}
	while (m[w] != '\0')
	{
		if (m[w + 1] >= 97 && m[w] <= 122)
		{
			for (a = 0; arr[a] != '\0'; a++)
			{
				if (arr[a] == m[w])
				{
					m[w + 1] -= 32;
					break;
				}
			}
		}
		w++;
	}
	return (m);
}
