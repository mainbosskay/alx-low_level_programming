#include "main.h"

/**
 * free_grid - Frees 2 dimensional grid
 * @grid: Pointer
 * @height: Rows
 * Return: it is void
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0 ; k < height ; k++)
		free(grid[k]);
	free(grid);
}
