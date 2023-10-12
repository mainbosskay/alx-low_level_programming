#include <stdio.h>

/**
 * main - Printing 1 to 100 using fizzbuzz
 * Return: is void
 */

int main(void)
{
	int k;

	for (k = 1 ; k <= 100 ; k++)
	{
		if ((k % 3 == 0) && (k % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (k % 3 == 0)
			printf("%s", "Fizz");
		else if (k % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", k);
		if (k != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
