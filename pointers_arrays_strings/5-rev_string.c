#include "main.h"

/**
	*_strlen - length of a string
	*@s: Variable
	*Description: print length of a string
	*Return: o
	*/
int _strlen(char *s)
{
	int log;

	for (log = 0; s[log] != '\0'; log++)
	{}
	return (log);
}

/**
	*rev_string - function reverse the string
	*@s: Variable
	*Description: function reverse the string
	*/
void rev_string(char *s)
{
	int ini;
	int log = _strlen(s);
	int fin = log - 1;
	char aux;

	for (ini = 0; ini < log / 2; ini++)
	{
		aux = s[ini];
		s[ini] = s[fin];
		s[fin] = aux;
		fin--;
	}
}
