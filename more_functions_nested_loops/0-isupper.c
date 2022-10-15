#include <stdio.h>
#include "main.h"

/**
	* _isupper - check the mayus
	*@c: variable
	*
	*Description: isupper check the mayus
	*Return: 1, 0
	*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

