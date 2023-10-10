#include "main.h"

/**
 * jack_bauer - printing every minute of the day
 * Return: the return is void
 */

void jack_bauer(void)
{
	int k;
	int t;

	for (k = 0 ; k < 24 ; k++)
	{
		for (t = 0 ; t < 60 ; t++)
		{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(':');
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			_putchar('\n');
		}
	}
}
