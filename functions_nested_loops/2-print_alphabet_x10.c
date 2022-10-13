#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *print_alphabet_x10 - print the alphabet x10
 *Description: us for print the alphabet 10 times
 *Return: 0
 */
void print_alphabet_x10(void)
{
int x, t;
t = 0;
while (t < 10)
{
	for (x = 'a'; x <= 'z'; x++)
{
	putchar(x);
}
t++;
putchar('\n');
}
}
