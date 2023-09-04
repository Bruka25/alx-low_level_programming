#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Returns 2 dimensional array of int
 *
 *@width: Width of 2d array
 *@height: Height of 2d array
 *
 *Return: Pointer to a 2d array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int y, z;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		array[y] = malloc(width * sizeof(**array));
		if (array[y] == NULL)
		{
			for (y--; y >= 0; y--)
				free(array[y]);
			free(array);
			return (NULL);
		}
		for (z = 0; z < width; z++)
			array[z][y] = 0;
	}

	return (array);
}
