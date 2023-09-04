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
	int i, j;
	int **array;

	i = j = 0;
	if (height < 1)
		return (NULL);
	array = (int **)malloc(height * sizeof(array));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
