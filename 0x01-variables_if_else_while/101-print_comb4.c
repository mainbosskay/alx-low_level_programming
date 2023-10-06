#include <stdio.h>

/**
 * main - combination of three digits
 * Return: is currently 0
 */

int main(void)
{
	int k;
	int t;
	int j;

	for (k = '0' ; k < '9' ; k++)
	{
		for (t = k + 1 ; t <= '9' ; t++)
		{
			for (j = t + 1 ; j <= '9' ; j++)
			{
				if ((t != k) != j)
				{
					putchar(k);
					putchar(t);
					putchar(j);
					if (k == '7' && t == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
