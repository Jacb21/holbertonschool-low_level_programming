#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - print the text
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
		int n;

		for (n = 0 % 16; n <= 15 % 16; n++)
		{
			putchar(n);
		}
		putchar('\n');
		return (0);
}
