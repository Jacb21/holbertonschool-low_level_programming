#include <stdio.h>
#include "main.h"
 /**
	 *swap_int - the function change the num
	 *Description: the function change num
	 *@a: Variable
	 *@b: Variable
	 *Description: the function change the num
	 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
