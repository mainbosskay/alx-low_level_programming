#include "main.h"

/**
 * print_line - Printing of straight line
 * @n: n is the parameter used
 * Return: it is void in this
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int k;

		for (k = 0 ; k < n ; k++)
			_putchar('_');
		_putchar('\n');
	}
}
