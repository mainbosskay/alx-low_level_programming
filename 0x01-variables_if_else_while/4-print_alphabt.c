#include <stdio.h>

/**
 * main - printing characters apart from q and e
 * Return: for this it is 0
 */
int main(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
		if (k != 'q' && k != 'e')
			putchar(k);
	putchar('\n');
	return (0);
}
