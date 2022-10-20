#include <stdio.h>
#include "main.h"
 /**
	 * swap_int - swap change the num
	 * @a: Variable
	 * @b: Variable
	 * Description: swap value the two integers
	 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
