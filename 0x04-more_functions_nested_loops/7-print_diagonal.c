#include "main.h"

/**
 * print_diagonal - Printing diagonal line
 * @n: n is the parameter used
 * Return:it is void
 */

void print_diagonal(int n)
{
	int k;
	int t;

	for (k = 0 ; k < n ; k++)
	{
		for (t = 0 ; t < k ; t++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (k < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
