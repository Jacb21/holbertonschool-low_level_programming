#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int o = n % 10;

	if (n > 5)
	       printf ("Last digit of %d is %d and is greater than 5", n, o);
	else if (n == 0)
 	       printf ("Last digit of %d is %d and is greater than 5", n, o);
	else 
	       printf ("Last digit of %d is %d and is greater than 5", n, o);
	return (0);
}
