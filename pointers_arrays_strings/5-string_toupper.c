#include "main.h"

/**
	* *string_toupper - function change the letters to uppercase
	* @
	*/
char *string_toupper(char *m)
{
	int t = 0;

	while (m[t] != '\0')
	{
		if (m[t] >= 'a' && m[t] <= 'z')
		{
			m[t] -= 32;
		}
		t++;
	}
	return (m);
}
