#include "main.h"

/**
 * _strlen - lenght of string
 * @s: is the parameter used
 * Return: strings
 */

int _strlen(char *s)
{
	int k;
	int sum = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
		sum++;
	return (sum);
}
