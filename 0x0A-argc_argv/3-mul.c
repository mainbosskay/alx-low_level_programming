#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplying two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: it is void
 */

int main(int argc, char *argv[])
{
	int k = 0;
	int t = 0;

	if (argc == 3)
	{
		k = atoi(argv[1]);
		t = atoi(argv[2]);
		printf("%d\n", k * t);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
