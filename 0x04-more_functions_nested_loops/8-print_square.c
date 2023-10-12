#include "main.h"

/**
 * print_square - Printing a square
 * @size: is the parameter used
 * Return is void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int k;
		int t;

		for (k = 1 ; k <= size ; k++)
		{
			for (t = 1 ; t <= size ; t++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
