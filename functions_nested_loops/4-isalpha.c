#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *_isalpha - check the alpha character
 *@c: variable
 *Description: check
 *Return: 1,0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
