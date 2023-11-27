#include "main.h"

/**
 * read_textfile - Reanding text file and printing to the POSIX stdout
 * @filename: pointer
 * @letters: letters to be printed
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t k;
	ssize_t t;
	ssize_t d;
	char *contain;

	if (!filename)
		return (0);
	contain = malloc(sizeof(char) * letters);
	if (!contain)
		return (0);
	k = open(filename, O_RDONLY);
	t = read(k, contain, letters);
	d = write(STDOUT_FILENO, contain, t);

	if (k == -1 || t == -1 || d == -1 || d != t)
	{
		free(contain);
		return (0);
	}
	free(contain);
	close(k);
	return (d);
}
