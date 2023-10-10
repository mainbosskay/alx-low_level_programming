#include <stdio.h>

/**
 * main - first 98 fibonacci
 * Return: it is 0
 */

int main(void)
{
	int k, boo1, boo2;
	long int t1, t2, j1, j2, d1, d2;

	t1 = 1;
	t2 = 2;
	boo1 = boo2 = 1;
	printf("%ld, %ld", t1, t2);
	for (k = 0 ; k < 96 ; k++)
	{
		if (boo1)
		{
			j1 = t1 + t2;
			printf(",%ld", j1);
			t1 = t2;
			t2 = j1;
		}
		else
		{
			if (boo2)
			{
				d1 = t1 % 1000000000;
				d2 = t2 % 1000000000;
				t1 = t1 / 1000000000;
				t2 = t2 / 1000000000;
				boo2 = 0;
			}
			j2 = (d1 + d2);
			j1 = t1 + t2 + (j2 / 1000000000);
			printf(",%ld", j1);
			printf(",%ld", j2 % 1000000000);
			t1 = t2;
			d1 = d2;
			t2 = j1;
			d2 = (j2 % 1000000000);
		}
		if (((t1 + t2) < 0) && boo1 == 1)
			boo1 = 0;
	}
	printf("\n");
	return (0);
}
