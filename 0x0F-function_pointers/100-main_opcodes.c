#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing the opcodes of its own
 * @argc: argument count
 * @argv: argument vector
 * Return: it is 0
 */

int main(int argc, char *argv[])
{
	char *array;
	int k;
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (k = 0 ; k < size ; k++)
	{
		if (k == size - 1)
		{
			printf("%02hhx\n", array[k]);
			break;
		}
		printf("%02hhx", array[k]);
	}
	return (0);
}
