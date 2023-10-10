#include "main.h"

/**
 * times_table - printing 9 times table
 * Result: it is void
 */

void times_table(void)
{
	int k;
	int t;
	int d;

	for (k = 0 ; k <= 9 ; k++)
	{
		_putchar('0');

		for (t = 1 ; t <= 9 ; t++)
		{
			_putchar(',');
			_putchar(' ');

			d = k * t;

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
