#include "variadic_functions.h"

/**
 * sum_them_all - Sum of all its parameters
 * @n: numbers of parameters
 * @...: numbers to calculate
 * Return: either 0 or the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k;
	int sum = 0;
	va_list ag;

	if  (n == 0)
		return (0);
	va_start(ag, n);
	for (k = 0 ; k < n ; k++)
		sum += va_arg(ag, int);
	va_end(ag);
	return (sum);
}
