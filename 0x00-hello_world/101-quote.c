#include <stdio.h>
#include <unistd.h>

/**
 * main - print a string
 * Return: will be 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
