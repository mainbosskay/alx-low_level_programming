#include "main.h"

/**
 * print_diagsums - sum of two diagonals of a square
 * @a: first parameter used
 * @size: second parameter used
 * Return: it is 0
 */

void print_diagsums(int *a, int size)
{
	int suma;
	int sumb;
	int k;

	suma = 0;
	sumb = 0;

	for (k = 0 ; k < size ; k++)
	{
		suma = suma + a[k * size + k];
	}
	for (k = size - 1 ; k >= 0 ; k--)
	{
		sumb += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", suma, sumb);
}
