#include "function_pointers.h"

/**
 * print_name - Printing a name
 * @name: string
 * @f: pointer
 * Return: it is void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
