#include "main.h"

/**
	* *_strstr -function locates a substring
	* @haystack: string
	* @needle: substring
	* Return: 0
	*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *string = haystack;
		char *string2 = needle;

		while (*haystack && *string2 && *haystack == *string2)
		{
			haystack++;
			string2++;
		}
		if (!*string2)
		{
			return (string);
		}
		haystack = string + 1;
	}
	return (0);
}
