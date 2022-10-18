#include <stdio.h>
#include "main.h"
 /**
	 *swap_int - the function swap_int num
	 *@a: Variable
	 *@b: Variable
	 *Description: the function swap_int num
	 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
