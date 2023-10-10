#include "main.h"

/**
 * print_times_table - printing n times table
 * @n: n is the parameter for the function
 * Return: is void
 */

void print_times_table(int n)
{
	int k;
	int t;
	int d;

	if (n >= 0 && n <= 15)
	{
		for (k = 0 ; k <= n ; k++)
		{
			_putchar(48);
			for (t = 1 ; t <= n ; t++)
			{
				d = k * t;
				_putchar(44);
				_putchar(32);
				if (d <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(d + 48);
				}
				else if (d <= 99)
				{
					_putchar(32);
					_putchar((d / 10) + 48);
					_putchar((d % 10) + 48);
				}
				else
				{
					_putchar(((d / 100) % 10) + 48);
					_putchar(((d / 10) % 10) + 48);
					_putchar((d % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
