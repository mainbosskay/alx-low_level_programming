#include "main.h"

/**
 * puts_half - Printing half of a string
 * @str: string is the parameter used
 * Return: it is void
 */

void puts_half(char *str)
{
	int k;
	int n;
	int sum = 0;

	for (k = 0 ; str[k] != '\0' ; k++)
		sum++;
	n = (sum - 1) / 2;
	for (k = n + 1 ; str[k] != '\0' ; k++)
		_putchar(str[k]);
	_putchar('\n');
}
