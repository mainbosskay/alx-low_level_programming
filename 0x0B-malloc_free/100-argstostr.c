#include "main.h"

/**
 * argstostr - concatenating all the argument of a program
 * @ac: argument count
 * @av: argument array
 * Return: NULL or pointer of new string
 */

char *argstostr(int ac, char **av)
{
	int k = 0;
	int t = 0;
	int d = 0;
	int j = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (t < ac)
	{
		while (av[t][d])
		{
			k++;
			d++;
		}
		d = 0;
		t++;
	}
	result = malloc((sizeof(char) * k) + ac + 1);
	t = 0;
	while (av[t])
	{
		while (av[t][d])
		{
			result[j] = av[t][d];
			j++;
			d++;
		}
		result[j] = '\n';
		d = 0;
		j++;
		t++;
	}
	j++;
	result[j] = '\0';
	return (result);
}
