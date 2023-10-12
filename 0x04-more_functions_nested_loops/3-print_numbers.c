#include "main.h"

/**
 * print_numbers - Printing numbers from 0 to 9
 * Return: it is void for this
 */

void print_numbers(void)
{
	int k;

	for (k = 0 ; k < 10 ; k++)
		_putchar(k + '0');
	_putchar('\n');
}
