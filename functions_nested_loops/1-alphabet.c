#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
	*print_alphabet - print the alphabet
	*Description: us for print the alphabet
	*Return: 0
	*/
void print_alphabet(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
