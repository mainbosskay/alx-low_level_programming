#include "main.h"

/**
 * print_chessboard - Printing a chessboard
 * @a: this is the array used
 * Return: it is void
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int t;

	for (k = 0 ; k < 8 ; k++)
	{
		for (t = 0 ; t < 8 ; t++)
			_putchar(a[k][t]);
		_putchar('\n');
	}
}
