#include "main.h"

/**
	* *string_toupper - function change the letters to uppercase
	* @
	*/
char *string_toupper(char *m)
{
	int t = 0;

	for (m = 0; m[t] != '\0'; m++)

	{
		if (m[t] >= 'a' && m[t] <= 'z')
		{
			m[t] -= 32;
		}
		t++;
	}
	return (m);
}
