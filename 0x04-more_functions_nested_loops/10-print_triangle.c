#include "main.h"

/**
 * print_triangle - Printing a triangle
 * @size: is the parameter
 * Return: is void
 */

void print_triangle(int size)
{
	int k;
	int t;

	for (k = 0 ; k < size ; k++)
	{
		for (t = 1 ; t < (size - k) ; t++)
			_putchar(' ');
		for (t-- ; t < size ; t++)
			_putchar(35);
		if (k < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
