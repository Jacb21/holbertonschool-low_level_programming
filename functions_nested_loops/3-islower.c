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
	putchar(x);
}
putchar('\n');
}
