#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Allocates memory for an array
 *
 *@nmemb: Members of an array
 *@size: Size of an array
 *
 *Return: Pointer to the allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	array = malloc(j);

	if (array == NULL)
		return (NULL);

	while (i < j)
	{
		array[i] = 0;
		i++;
	}

	return (array);
}


