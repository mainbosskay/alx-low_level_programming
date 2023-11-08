#include "3-calc.h"

/**
 * get_op_func - Selecting the correct function to perform
 * @s: the operation to perform
 * Return: a pointer or NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k = 0;

	while (k < 5)
	{
		if (strcmp(s, ops[k].op) == 0)
			return (ops[k].f);
		k++;
	}
	return (0);
}
