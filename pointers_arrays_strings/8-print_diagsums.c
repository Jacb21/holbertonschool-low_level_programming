#include <stdio.h>
#include "main.h"

/**
	* print_diagsums - function prints the sum of the diagonals
	* @a: pointer
	* @size: tamaño
	*/

void print_diagsums(int *a, int size)
{
	int b, c;
	int s1 = 0;
	int s2 = 0;

	for (b = 0; b < size; b++)
		s1 += a[b * (size + 1)];

	for (c = 0; c < size; c++)
	{
		s2 += a[(c * size) + (size - 1 - c)];
	}
	printf("%d, %i\n", s1, s2);
}
