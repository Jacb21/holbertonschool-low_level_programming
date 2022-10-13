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

			for (n = 0; n <= 9; n++)
			{
				putchar(n + '0');
				if (n < 9)
				putchar(',');
				putchar(' ');
			}
			putchar('\n');
			return (0);
}
