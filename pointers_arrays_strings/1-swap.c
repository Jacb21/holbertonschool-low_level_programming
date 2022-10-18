#include <stdio.h>
#include "main.h"
 /**
	 *swap_int - the function change the num
	 *@a: Variable
	 *@b: Variable
	 *Description: the function change the num
	 *swap_int
	 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
