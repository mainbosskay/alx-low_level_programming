#include <stdio.h>

/**
 * main - compute multiples of 3 and 5
 * Return:it is 0
 */

int main(void)
{
	int k = 0;
	int t;

	for (t = 0 ; t < 1024 ; t++)
	{
		if (t % 3 == 0 || t % 5 == 0)
			k = k + 1;
	}
	printf("%d\n", k);
	return (0);
}
