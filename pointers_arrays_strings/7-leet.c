#include "main.h"

/**
	* *leet - function encodes a string into 1337
	* @e: Variable
	* Return: 0
	*/

char *leet(char *e)
{
	int t = 0, w = 0;
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	while (e[t] != '\0')
	{
		while (l[w] != '\0')
		{
			if (e[t] == l[w])
			{
				e[t] = n[w];
			}
			w++;
		}
		t++;
	}
	return (e);
}
