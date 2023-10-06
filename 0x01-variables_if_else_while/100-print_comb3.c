#include <stdio.h>

/**
 * main - printing combination of two digits
 * Return: is void
 */

int main(void)
{
	int k;
	int t;

	for (k = '0' ; k < '9' ; k++)
	{
		for (t = k + 1 ; t <= '9' ; t++)
		{
			if (t != k)
			{
				putchar(k);
				putchar(t);
				if (k == '8' && t == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
