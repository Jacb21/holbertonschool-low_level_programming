#include "main.h"

/**
	*_isupper - check the mayus
	*@c: variable
	*
	*Description: check the mayus
	*return _isupper: 1, 0
	*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

