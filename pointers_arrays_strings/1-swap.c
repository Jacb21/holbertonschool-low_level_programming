#include <stdio.h>
#include "main.h"
 /**
	 * swap_int - swaps the values two integers
	 * @a: Variable
	 * @b: Variable
	 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
