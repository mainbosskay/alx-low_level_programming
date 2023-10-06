#include <stdio.h>

/**
 * main - combination of two two digits
 * Return: is currently void
 */

int main(void)
{
	int k;
	int t;

	for (k = 0 ; k <= 98 ; k++)
	{
		for (t = k + 1 ; t <= 99 ; t++)
		{
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			putchar(' ');
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');
			if (k == 98 && t == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
