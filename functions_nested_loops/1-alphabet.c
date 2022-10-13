#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
	*main - print the text
	*Return: 0
	*/
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		void print_alphabet(void);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
