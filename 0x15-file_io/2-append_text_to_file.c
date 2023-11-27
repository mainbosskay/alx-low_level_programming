#include "main.h"

/**
 * append_text_to_file - Appending text to the end of a file
 * @filename: pointer
 * @text_content: NULL terminated string to add at the end of the file
 * Return: either 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int k;
	int d;
	int length = 0;

	if (!filename)
		return (-1);
	k = open(filename, O_WRONLY | O_APPEND);
	if (k == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length] ; length++)
			;
		d = write(k, text_content, length);
		if (d == -1)
			return (-1);
	}
	close(k);
	return (1);
}
