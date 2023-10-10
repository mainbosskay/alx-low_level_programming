#include <stdio.h>

/**
 * main - first 50 fibonacci
 * Return: is void
 */

int main(void)
{
	unsigned long int fibok = 1;
	unsigned long int fibot = 2;
	unsigned long int fiboj;
	int d;

	printf("%lu, ", fibok);
	for (d = 1 ; d < 50 ; d++)
	{
		printf("%lu", fibot);
		fiboj = fibok + fibot;
		fibok = fibot;
		fibot = fiboj;
		if (d != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
