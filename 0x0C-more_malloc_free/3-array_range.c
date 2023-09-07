#include "main.h"
#include <stdlib.h>

/**
 *array_range - Creates array of integers
 *
 *@min: Minimum num of integers
 *@max: Maximum num of integers
 *
 *Return: Pointer to the array
 */

int *array_range(int min, int max)
{
	int *array, i = 0;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}

	return (array);
}
