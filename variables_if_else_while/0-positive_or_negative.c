#include <stdio.h>
#include <time.h>
/* more header goes there */

/* betty style doc for fuction main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if(n < 0) [positive];
	{
	printf("is positive\n");
	}
	else(n >0, negative);
	{
	printf("is negative\n");
        }
	return (0);
}

