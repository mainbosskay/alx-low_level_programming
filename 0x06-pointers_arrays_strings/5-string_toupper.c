#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @l: is the parameter used
 * Return: will be l
 */

char *string_toupper(char *l)
{
	int k;

	for (k = 0 ; l[k] != '\0' ; k++)
	{
		if (l[k] >= 'a' && l[k] <= 'z')
			l[k] = l[k] - 32;
	}
	return (l);
}
