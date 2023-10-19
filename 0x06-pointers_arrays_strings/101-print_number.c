#include "main.h"

/**
 * print_number - printing integers
 * @n: parameter used
 * Return: is void
 */

void print_number(int n)
{
	unsigned int k;
	unsigned int t;
	unsigned int d;

	if (n < 0)
	{
		_putchar(45);
		k = n * -1;
	}
	else
	{
		k = n;
	}
	t = k;
	d = 1;

	while (t > 9)
	{
		t /= 10;
		d *= 10;
	}

	for (; d >= 1 ; d /= 10)
	{
		_putchar(((k / d) % 10) + 48);
	}
}
