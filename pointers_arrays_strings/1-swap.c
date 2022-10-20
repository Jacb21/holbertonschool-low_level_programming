#include <stdio.h>
#include "main.h"
 /**
	 * swap_int - swaps change the num
	 * Description: change numbers
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
