#include <stdio.h>

/**
 * main - Sum of even term
 * Return: it is 0
 */

int main(void)
{
	int num = 4000000;
	int fibok = 1;
	int fibot = 2;
	int fiboj;
	int d = 2;

	while (fiboj <= num)
	{
		fiboj = fibok + fibot;
		if (fiboj % 2 == 0)
			d = d + fiboj;
		fibok = fibot;
		fibot = fiboj;
	}
	printf("%d\n", d);
	return (0);
}
