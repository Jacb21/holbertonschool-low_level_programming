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
	int a,b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

