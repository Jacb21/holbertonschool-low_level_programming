#include <stdio.h>
#include "main.h"
 /**
	* swap_int - swaps tha values of two integers
	* @a: integer 1
	* @b: integer 2
	*/
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
