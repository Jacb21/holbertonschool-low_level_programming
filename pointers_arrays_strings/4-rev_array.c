#include "main.h"

/**
	* reverse_array - function that reverses the content
	* @a: Variable
	* @n: Variable
	*/

void reverse_array(int *a, int n)
{
	int c, t;
	int aux;
		c = n - 1;

	for (t = 0; t <= c; t++, c--)
	{
		aux = a[t];
		a[t] = a[c];
		a[c] = aux;
	}
}
