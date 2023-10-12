#include "main.h"

/**
 * more_numbers - Printing 1 to 14 ten times
 * Return: it is void
 */

void more_numbers(void)
{
	int k;
	int t;

	for (k = 0 ; k < 10 ; k++)
	{
		for (t = 0 ; t < 15 ; t++)
		{
			if (t > 9)
				_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
		}
		_putchar('\n');
	}
}
