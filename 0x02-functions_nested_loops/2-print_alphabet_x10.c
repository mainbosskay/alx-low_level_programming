#include "main.h"

/**
 * print_alphabet_x10 - printing lowercase alphabets 10x
 * Return: is void
 */

void print_alphabet_x10(void)
{
	int k;
	char t;

	for (k = 1 ; k <= 10 ; k++)
	{
		for (t = 'a' ; t <= 'z' ; t++)
			_putchar(t);
	}
	_putchar('\n');
}
