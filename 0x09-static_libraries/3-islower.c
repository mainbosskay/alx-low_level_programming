#include "main.h"

/**
 * _islower - checking for lowercase c
 * @c: character being checked if it is lowercase
 * Return: It is either 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
