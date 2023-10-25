#include "main.h"

/**
 * _strlen_recursion - Calculating lenght of string
 * @s: string being calculated
 * Return: strings length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Checking od a palindrome string
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int k;

	k = _strlen_recursion(s);
	if (k <= 1)
		return (1);
	return (helper_palindrome(s, k));
}

/**
 * helper_palindrome - Reversed string
 * @s: string
 * @k: strings length
 * Return: the reversed string
 */

int helper_palindrome(char *s, int k)
{
	if (k <= 1)
		return (1);
	else if (*s == *(s + k - 1))
	{
		return (helper_palindrome(s + 1, k - 2));
	}
	else
		return (0);
}
