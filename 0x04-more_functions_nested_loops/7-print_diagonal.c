#include "main.h"

/**
 * print_diagonal - Printing diagonal line
 * @n: n is the parameter used
 * Return:it is void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int k;
		int t;

		for (k = 0 ; k < n ; k++)
		{
			for (t = 0 ; t <= k ; t++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
