#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *print_alphabet - print the alphabet
 *Description: us for print the alphabet
 *Return: 0
 */
int _islower(int c)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
	if (c == x)
		return (1);
	else
		return (0);
}
putchar('\n');
}
