#include "main.h"

/**
 * print_last_digit - printing the last digits
 * @k: the parameter is k
 * Return: the return is t
 */

int print_last_digit(int k)
{
	int t;

	t = k % 10;
	if (k < 0)
		t = -t;
	_putchar(t + '0');
	return (t);
}
