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

	for (log = 0; s[log] != '\0'; log++);
	return (log);
}

/**
	*rev_string - function reverse the string
	*@s: Variable
	*Description: function reverse the string
	*/
void rev_string(char *s)
{


