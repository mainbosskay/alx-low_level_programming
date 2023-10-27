#include <stdio.h>

/**
 * main - Printing all argumrnts it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: it is void
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0 ; k < argc ; k++)
		printf("%s\n", argv[k]);
	return (0);
}
