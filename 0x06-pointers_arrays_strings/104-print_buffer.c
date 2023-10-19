#include "main.h"

/**
 * print_buffer - printing buffer
 * @b: first parameter
 * @size: second parameter
 * Return: it is void
 */

void print_buffer(char *b, int size)
{
	int k;
	int t;
	int d;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		t = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (d = 0; d < 10; d++)
		{
			if (d < t)
				printf("%02x", *(b + k + d));
			else
				printf("  ");
			if (d % 2)
			{
				printf(" ");
			}
		}
		for (d = 0 ; d < t ; d++)
		{
			int j = *(b + k + d);

			if (j < 32 || j > 132)
			{
				j = '.';
			}
			printf("%c", j);
		}
		printf("\n");
		k += 10;
	}
}
