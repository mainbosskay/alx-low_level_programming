#include <stdio.h>

/**
 * main - Printing the number of arguments
 * @argc: counting argument
 * @argv: argument vector
 * Return: is it 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
