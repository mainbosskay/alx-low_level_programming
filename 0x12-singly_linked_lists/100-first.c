#include <stdio.h>

/**
 * before_main - Function executed before main function
 * Return: it is void
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
