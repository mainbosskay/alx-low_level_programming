#include "main.h"

/**
 * allocate_memory - Allocating 1024 bytes for a buffer
 * @filename: pointer
 * Return: pointer to the allocated buffer
 */

char *allocate_memory(char *filename)
{
	char *contain;

	contain = malloc(sizeof(char) * 1024);
	if (!contain)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (contain);
}

/**
 * close_fd - Closing a file descriptor
 * @fd: file descriptor to be closed
 * Return: it is void
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Coping the content ofa file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: it is 0
 */

int main(int argc, char *argv[])
{
	int source_fd;
	int destination_fd;
	int t;
	int d;
	char *contain;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	contain = allocate_memory(argv[2]);
	source_fd = open(argv[1], O_RDONLY);
	t = read(source_fd, contain, 1024);
	destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_fd == -1 || t == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(contain);
			exit(98);
		}
		d = write(destination_fd, contain, t);
		if (destination_fd == -1 || d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(contain);
			exit(99);
		}
		t = read(source_fd, contain, 1024);
		destination_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (t > 0);
	free(contain);
	close_fd(source_fd);
	close_fd(destination_fd);
	return (0);
}
