#include "main.h"

/**
	*print_array - print elements of an array
	*@a: Variable
	*@n: Variable
	*Description: print elements of an array
	*/
void print_array(int *a, int n)
{
	int print
	
	for (print = 0; print < n; print++)
	{
		if (print < n - 1)
			printf("%d, ", a[print]);
		else
			printf("%d\n", a[print]);
	}
	if (n <= 4)
		printf("\n");
}
