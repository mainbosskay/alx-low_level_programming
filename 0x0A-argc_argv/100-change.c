#include <stdio.h>
#include <stdlib.h>

/**
 * main - Minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: it will be 0
 */

int main(int argc, char *argv[])
{
	int money;
	int cowries = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);

	while (money > 0)
	{
		if (money >= 25)
			money -= 25;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else if (money >= 2)
			money -= 2;
		else if (money >= 1)
			money -= 1;
		cowries += 1;
	}
	printf("%d\n", cowries);
	return (0);
}
