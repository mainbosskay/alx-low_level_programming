#include "main.h"

/**
 * print_array - Printing n element of an array
 * @a: first parameter used
 * @n: second parameter used
 * Return: it is void
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0 ; k < n ; k++)
	{
		printf("%d", a[k]);
		if (k < n - 1)
			printf(", ");
	}
	printf("\n");
}
