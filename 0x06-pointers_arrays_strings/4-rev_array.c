#include "main.h"

/**
 * reverse_array - Reversing content of an array
 * @a: first parameter
 * @n: second parameter
 * Return: it is void
 */

void reverse_array(int *a, int n)
{
	int k;
	int t;

	for (k = 0 ; k < n / 2 ; k++)
	{
		t = a[k];
		a[k] = a[n - 1 - k];
		a[n - 1 - k] = t;
	}
}
