#include "variadic_functions.h"

/**
 * print_strings - Printing strings
 * @separator: string to be printed
 * @n: number of strings
 * @...: number of strings to be printed
 * Return: it is void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list ag;

	int *array = malloc(sizeof(int) * n);

	va_start(ag, n);
	for (k = 0 ; k < n ; k++)
	{
		if (va_arg(ag, char *) == NULL)
			array[k] = 1;
		else
			array[k] = 0;
	}
	va_end(ag);
	va_start(ag, n);
	for (k = 0 ; k < n ; k++)
	{
		if (array[k] == 1)
			printf("(nil)");
		else
			printf("%s", va_arg(ag, char *));
		if (k < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ag);
	putchar('\n');
}
