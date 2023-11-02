#include "main.h"

/**
 * _realloc - Relocating a memory block
 * @ptr: memory of previously allocated
 * @old_size: old allocated space for ptr
 * @new_size: new memory block
 * Return: ptr or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
