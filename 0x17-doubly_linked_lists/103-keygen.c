#include "lists.h"

/**
 * main - Generating key for the program crackme5
 * @argc: arguments counts
 * @argv: pointer to the arguments
 * Return: 0 on code success
 */

int main(int argc, char *argv[])
{
	unsigned int k;
	unsigned int t;
	size_t length;
	size_t sum;
	char *s = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char keygen[7] = "      ";

	if (argc != 2)
	{
		printf("Right usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	keygen[0] = s[(length ^ 59) & 63];
	for (k = 0, sum = 0 ; k < length ; k++)
		sum = sum + argv[1][k];
	keygen[1] = s[(sum ^ 79) & 63];
	for (k = 0, t = 1 ; k < length ; k++)
		t *= argv[1][k];
	keygen[2] = s[(t ^ 85) & 63];
	for (t = argv[1][0], k = 0 ; k < length ; k++)
		if ((char)t <= argv[1][k])
			t = argv[1][k];
	srand(t ^ 14);
	keygen[3] = s[rand() & 63];
	for (t = 0, k = 0 ; k < length ; k++)
		t = t + argv[1][k] * argv[1][k];
	keygen[4] = s[(t ^ 239) & 63];
	for (t = 0, k = 0 ; (char)k < argv[1][0] ; k++)
		t = rand();
	keygen[5] = s[(t ^ 229) & 63];
	printf("%s\n", keygen);
	return (0);
}
