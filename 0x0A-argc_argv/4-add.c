#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Adding postive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: it is void
 */

int main(int argc, char *argv[])
{
	int k;
	unsigned int t;
	unsigned int sum = 0;
	char *j;

	if (argc > 1)
	{
		for (k = 1 ; k < argc ; k++)
		{
			j = argv[k];
			for (t = 0 ; t < strlen(j) ; t++)
			{
				if (j[t] < 48 || j[t] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(j);
			j++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
