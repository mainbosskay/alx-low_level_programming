#include "main.h"

/**
 * print_number - Printing integers
 * @n: is the parameter
 * Return: it is null
 */

void print_number(int n)
{
	unsigned int k;
	unsigned int t;
	unsigned int sum;

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
	sum = 1;

	while (t > 9)
	{
		t /= 10;
		sum *= 10;
	}

	for (; sum >= 1 ; sum /= 10)
	{
		_putchar(((k / sum) % 10) + 48);
	}
}
