#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees 2d grid
 *
 *@grid: Grid of the array
 *@height: Height of the array
 *
 *Return: Void
 */

void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
		free(grid[f]);
	free(grid);
}
