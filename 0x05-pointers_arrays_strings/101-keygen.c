#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates password
 * Return: it is 0
 */

int main(void)
{
	int pass[100];
	int k;
	int t;
	int d;

	t = 0;
	srand(time(NULL));

	for (k = 0 ; k < 100 ; k++)
	{
		pass[k] = rand() % 78;
		t += (pass[k] + '0');
		putchar(pass[k] + '0');
		if ((2772 - t) - '0' < 78)
		{
			d = 2772 - t - '0';
			t += d;
			putchar(d + '0');
			break;
		}
	}
	return (0);
}
