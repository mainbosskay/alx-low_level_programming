#include <stdio.h>

/**
 * main - Printing the largest prime factor
 * Return: is 0
 */

int main(void)
{
	long int k;
	long int t;

	k = 612852475143;
	for (t = 2 ; t <= k ; t++)
	{
		if (k % t == 0)
		{
			k /= t;
			t--;
		}
	}
	printf("%ld\n", t);
	return (0);
}
