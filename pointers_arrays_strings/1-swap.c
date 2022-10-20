#include <stdio.h>
#include "main.h"
 /**
	 * swap_int - the function is change the
	 * two numbers
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
