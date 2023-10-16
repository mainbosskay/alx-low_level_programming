#include "main.h"

/**
 * swap_int - swapping values
 * @a: first parameter
 * @b: second parameter
 * Return: it is void
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
