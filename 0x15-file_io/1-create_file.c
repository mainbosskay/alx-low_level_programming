#include "main.h"

/**
 * create_file - Creating a file
 * @filename: filename to be created
 * @text_content: NULL terminated string to write to the file
 * Return: either 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int k;
	int d;
	int length = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length];)
			length++;
	}
	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	d = write(k, text_content, length);
	if (k == -1 || d == -1)
		return (-1);
	close(k);
	return (1);
}
