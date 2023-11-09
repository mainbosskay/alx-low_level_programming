#include "variadic_functions.h"

/**
 * print_numbers - Printing numbers
 * @separator: string that will printed
 * @n: number of integers
 * @...: numbers to be printed
 * Return: it is void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list ag;

	va_start(ag, n);
	for (k = 0 ; k < n ; k++)
	{
		printf("%d", va_arg(ag, int));
		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ag);
}
