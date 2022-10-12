#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
	* main - print the text
	* Return: 0
	*/
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
