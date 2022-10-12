#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++);
	{

		x = tolower(x);
		putchar (x);
	}
	return (0);
}
