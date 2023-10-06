#include <stdio.h>

/**
 * main - printing all combinations of single digits
 * Return: is void
 */

int main(void)
{
	int k;

	for (k = 0 ; k < 10 ; k++)
	{
		putchar(k + '0');
		if (k != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
