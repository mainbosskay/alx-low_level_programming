#include "main.h"

/**
 * _puts - Printing of a string
 * @str: is the parameter used
 * Return: the return is void
 */

void _puts(char *str)
{
	int k;

	for (k = 0 ; str[k] != '\0' ; k++)
		_putchar(str[k]);
	_putchar('\n');
}
