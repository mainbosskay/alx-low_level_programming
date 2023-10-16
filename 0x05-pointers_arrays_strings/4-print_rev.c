#include "main.h"

/**
 * print_rev - Printing in reverse
 * @s: is the parameter used
 * Return: it is void
 */

void print_rev(char *s)
{
	int k;
	int sum = 0;

	for (k = 0 ; s[k] != 0 ; k++)
		sum++;
	for (k = sum - 1 ; k >= 0 ; k--)
		_putchar(s[k]);
	_putchar('\n');
}
