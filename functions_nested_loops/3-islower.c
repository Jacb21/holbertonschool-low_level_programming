#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *_islower - 
 *Description:
 *Return: 0
 */
int _islower(int c)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
	if (c == x)
		return (1);
	else
		return (0);
}
putchar('\n');
return (x);
}
