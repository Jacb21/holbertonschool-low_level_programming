#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *jack_bauer - hours and minute
 *Description: print sign
 *Return: 0
 */
void times_table(void)
{
	int fila_x9;
	int columna_x9;
	int result_x9;

	for (fila_x9 = 0; fila_x9 <= 9; fila_x9++)
	{
		for (columna_x9 = 0; columna_x9 <= 9; columna_x9++)
		{
			result_x9 = fila_x9 * columna_x9;
			if (columna_x9 == 0)
			{
				_putchar (columna_x9 + '0');
			}
			_putchar (',');
			_putchar (' ');
			if (result_x9 >= 10)
			{
				_putchar ((result_x9 / 10) + '0');
				_putchar ((result_x9 % 10) + '0');
				
			}
			else if (result_x9 <= 9)
			{
				_putchar (result_x9 + '0');
			}
		}
		_putchar ('\n');
	}
}
